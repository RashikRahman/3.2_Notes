from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select
import unittest


class FinalTest(unittest.TestCase):


    def testTitle(self): #Match The title, If error then it means title matches and the module is ok.
        options = webdriver.ChromeOptions()
        self.driver = webdriver.Chrome(executable_path='E:\\3.2_Notes\\CSE_322_Software Engineering Lab\\chromedriver.exe', options=options)
        self.driver.set_window_size(1120, 1000)
        url = 'https://www.seleniumeasy.com/test/basic-checkbox-demo.html'
        self.driver.get(url)
        title = self.driver.title
        self.assertNotEqual(title,'Selenium Easy - Checkbox demo for automation using selenium','Title Matches') #If error occurs that means title matches
        self.driver.close()

    def testContract_Expand_MainMenu(self):
        options = webdriver.ChromeOptions()
        self.driver = webdriver.Chrome(executable_path='E:\\3.2_Notes\\CSE_322_Software Engineering Lab\\chromedriver.exe', options=options)
        self.driver.set_window_size(1120, 1000)
        url = 'https://www.seleniumeasy.com/test/basic-checkbox-demo.html'
        self.driver.get(url)
        cnt = 0
        try:
            #Collapse Main Menu
            self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/a').click()
            cnt = 1
        except:
            pass
        try:
            # Expand Main Menu
            self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/a').click()
            cnt = 2
        except:
            pass

        self.assertEqual(cnt, 2, 'Main menu list doesn\'t collapses and expands successfully')# No error means main menu was collapesed and expanded successfully.
        self.driver.close()

    def testDropDown(self): # Goto drop down and select a value. Retrieve the selected value's text and match it with the selected text from drop down .
        # Error in this test means that the text matches and the module is ok.
        options = webdriver.ChromeOptions()
        self.driver = webdriver.Chrome(executable_path='E:\\3.2_Notes\\CSE_322_Software Engineering Lab\\chromedriver.exe', options=options)
        self.driver.set_window_size(1120, 1000)
        url = 'https://www.seleniumeasy.com/test/basic-checkbox-demo.html'
        self.driver.get(url)

        #Navigate to "Select Dropdown List" section.
        input_forms = self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[1]/a')
        input_forms.click()
        self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[1]/ul/li[4]/a').click()

        #Select a dropdown option
        drop_element = self.driver.find_element_by_xpath('//*[@id="select-demo"]')
        drp = Select(drop_element)
        drp.select_by_visible_text('Monday')

        #Rrtrieve the selected dropdown text
        retrived_text = self.driver.find_element_by_xpath('//*[@id="easycont"]/div/div[2]/div[1]/div[2]/p[2]').text
        self.assertNotEqual(retrived_text, 'Day selected :- Monday', 'Text Matches') #If error occurs that means the selcted dropdown option and retrieved option matches.
        self.driver.close()

    def testForms(self): #Fill a text field. Retrieve the data and match if the send text and retrieve text are same or not. Error in this test means that the text matches and the module is ok.
        options = webdriver.ChromeOptions()
        self.driver = webdriver.Chrome(executable_path='E:\\3.2_Notes\\CSE_322_Software Engineering Lab\\chromedriver.exe', options=options)
        self.driver.set_window_size(1120, 1000)
        url = 'https://www.seleniumeasy.com/test/basic-checkbox-demo.html'
        self.driver.get(url)

        #Navigate to "Simple form Demo" section
        input_forms = self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[1]/a')
        input_forms.click()
        self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[1]/ul/li[1]/a').click()

        #Fill the form & submit
        text_field = self.driver.find_element_by_xpath('//*[@id="user-message"]')
        text = 'Hi'
        text_field.send_keys(text)
        self.driver.find_element_by_xpath('//*[@id="get-input"]/button').click()

        #Retrieve the submitted text
        retrieved_text = self.driver.find_element_by_xpath('//*[@id="display"]').text
        self.assertNotEqual(retrieved_text, text, 'Text Matches') # If error that means the passed and retrieved text matches.
        self.driver.close()

    def testCheckBox(self): #Click a check box and see if its checked or not. Pass means the module works fine.
        options = webdriver.ChromeOptions()
        self.driver = webdriver.Chrome(executable_path='E:\\3.2_Notes\\CSE_322_Software Engineering Lab\\chromedriver.exe', options=options)
        self.driver.set_window_size(1120, 1000)
        url = 'https://www.seleniumeasy.com/test/basic-checkbox-demo.html'
        self.driver.get(url)

        #Navigate to "CheckBox Demo" section

        input_forms = self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[1]/a')
        input_forms.click()
        self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[1]/ul/li[2]/a').click()
        self.driver.find_element_by_xpath('//*[@id="easycont"]/div/div[2]/div[2]/div[2]/div[2]/label/input').click() # Click the check box

        #Check if it is checked
        var = self.driver.find_element_by_xpath('//*[@id="easycont"]/div/div[2]/div[2]/div[2]/div[2]/label/input')
        self.assertEqual(var.get_attribute("checked"), 'true', 'Check Box isn\'t selected') # Passed means the checkbox is checked
        self.driver.close()

    def testTableRow(self):
        options = webdriver.ChromeOptions()
        self.driver = webdriver.Chrome(executable_path='E:\\3.2_Notes\\CSE_322_Software Engineering Lab\\chromedriver.exe', options=options)
        self.driver.set_window_size(1120, 1000)
        url = 'https://www.seleniumeasy.com/test/basic-checkbox-demo.html'
        self.driver.get(url)

        # Navigate to "Table Pagination" section
        table = self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[3]/a')
        table.click()
        self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[3]/ul/li[1]/a').click()
        self.driver.find_element_by_xpath('//*[@id="myPager"]/li[4]/a').click()

        # Count rows and match it with the last row number displayed in the table
        rows = self.driver.find_elements(By.TAG_NAME, 'tr')
        row =  str(len(rows)-1)
        actual_row = self.driver.find_element_by_xpath('//*[@id="myTable"]/tr[13]/td[1]').text

        self.assertEqual(row, actual_row, 'Row number doesn\'t match') # Pass means retrieved row number and actual rows matches.
        self.driver.close()

    def testTableCol(self):
        options = webdriver.ChromeOptions()
        self.driver = webdriver.Chrome(executable_path='E:\\3.2_Notes\\CSE_322_Software Engineering Lab\\chromedriver.exe', options=options)
        self.driver.set_window_size(1120, 1000)
        url = 'https://www.seleniumeasy.com/test/basic-checkbox-demo.html'
        self.driver.get(url)

        # Navigate to "Table Pagination" section
        table = self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[3]/a')
        table.click()
        self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[3]/ul/li[1]/a').click()
        self.driver.find_element_by_xpath('//*[@id="myPager"]/li[4]/a').click()

        # Count columns and match it with the last row number displayed in the table
        cols = self.driver.find_elements(By.TAG_NAME, 'th')
        col = str(len(cols) - 1)
        actual_col = self.driver.find_element_by_xpath('/html/body/div[2]/div/div[2]/section/div/table/thead/tr/th[7]').text.split()[2]

        self.assertEqual(col, actual_col, 'Col number doesn\'t match')
        self.driver.close()

    def testLastRowLastCol_Data(self):
        options = webdriver.ChromeOptions()
        self.driver = webdriver.Chrome(executable_path='E:\\3.2_Notes\\CSE_322_Software Engineering Lab\\chromedriver.exe', options=options)
        self.driver.set_window_size(1120, 1000)
        url = 'https://www.seleniumeasy.com/test/basic-checkbox-demo.html'
        self.driver.get(url)

        # Navigate to "Table Pagination" section
        table = self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[3]/a')
        table.click()
        self.driver.find_element_by_xpath('//*[@id="treemenu"]/li/ul/li[3]/ul/li[1]/a').click()
        self.driver.find_element_by_xpath('//*[@id="myPager"]/li[4]/a').click()

        #Get tha last data of the last row and last column of the table
        data = self.driver.find_element_by_xpath('//*[@id="myTable"]/tr[13]/td[7]').text
        self.assertEqual(data, 'Table cell', 'Data doesn\'t match') # Pass means data matched.
        self.driver.close()

if __name__ == '__main__':
    unittest.main()