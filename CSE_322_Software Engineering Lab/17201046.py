from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select
import unittest
import numpy as np

class FinalTest(unittest.TestCase):


    def testTitle(self):
        self.driver = webdriver.Chrome(executable_path='chromedriver.exe')
        url = 'https://www.demoqa.com/elements'
        self.driver.get(url)
        title = self.driver.title
        self.assertNotEqual(title,'ToolsQA','Title Matches')
        self.driver.close()

    def testContract_Expand_MainMenu(self):
        self.driver = webdriver.Chrome(executable_path='chromedriver.exe')
        url = 'https://www.demoqa.com/elements'
        self.driver.get(url)
        flag = 0
        try:
            #Collapse Main Menu
            self.driver.find_element_by_xpath('//*[@id="app"]/div/div/div[2]/div[1]/div/div/div[1]/span/div/div[2]').click()
            flag = 1
        except:
            pass
        try:
            # Expand Main Menu
            self.driver.find_element_by_xpath('//*[@id="app"]/div/div/div[2]/div[1]/div/div/div[1]/span/div/div[2]').click()
            flag = 2
        except:
            pass

        self.assertNotEqual(flag, 2, 'Main menu list collapses and expands successfully')
        self.driver.close()

    def testForms(self): #Fill a text field. Retrieve the data and match if the send text and retrieve text are same or not. Error in this test means that the text matches and the module is ok.
        self.driver = webdriver.Chrome(executable_path='chromedriver.exe')
        url = 'https://www.demoqa.com/elements'
        self.driver.get(url)

        self.driver.find_element_by_xpath('//*[@id="item-0"]/span').click()

        self.driver.find_element_by_xpath('//*[@id="userName"]').send_keys('Mariam')

        self.driver.find_element_by_xpath('//*[@id="submit"]').click()
        retrieved_text = self.driver.find_element_by_xpath('//*[@id="name"]').text
        self.assertNotEqual(retrieved_text, 'Name:Mariam', 'Text Matches')
        self.driver.close()

    def testCheckBox(self): #Click a check box and see if its checked or not. Pass means the module works fine.
        self.driver = webdriver.Chrome(executable_path='chromedriver.exe')
        url = 'https://www.demoqa.com/elements'
        self.driver.get(url)


        self.driver.find_element_by_xpath('//*[@id="item-1"]/span').click()
        self.driver.find_element_by_xpath('//*[@id="tree-node"]/ol/li/span/label/span[1]').click()
        var = self.driver.find_element_by_xpath('//*[@id="tree-node-home"]')


        self.assertEqual(var.get_attribute("checked"), 'true', 'Check Box isn\'t selected')
        self.driver.close()

    def testTableRow(self):
        self.driver = webdriver.Chrome(executable_path='chromedriver.exe')
        url = 'https://www.demoqa.com/elements'
        self.driver.get(url)
        self.driver.find_element_by_xpath('//*[@id="item-3"]/span').click()
        rows = self.driver.find_elements(By.CLASS_NAME, 'rt-tr-group')
        self.assertEqual(len(rows), 10, 'Row number doesn\'t match')
        self.driver.close()

    def testTableCol(self):
        self.driver = webdriver.Chrome(executable_path='chromedriver.exe')
        url = 'https://www.demoqa.com/elements'
        self.driver.get(url)
        self.driver.find_element_by_xpath('//*[@id="item-3"]/span').click()
        cols = self.driver.find_elements(By.CLASS_NAME, 'rt-td')
        self.assertEqual(len(cols), 70, 'Column number doesn\'t match')
        self.driver.close()



    def testRadio(self):
        self.driver = webdriver.Chrome(executable_path='chromedriver.exe')
        url = 'https://www.demoqa.com/elements'
        self.driver.get(url)
        self.driver.find_element_by_xpath('//*[@id="item-2"]/span').click()
        button = self.driver.find_element_by_xpath('//*[@id="app"]/div/div/div[2]/div[2]/div[1]/div[3]')
        button.click()
        self.assertNotEqual(button.is_selected(), True, 'Data doesn\'t match')
        self.driver.close()

    def testFirstRowFirstCol_Data(self):
        self.driver = webdriver.Chrome(executable_path='chromedriver.exe')
        url = 'https://www.demoqa.com/elements'
        self.driver.get(url)
        self.driver.find_element_by_xpath('//*[@id="item-3"]/span').click()
        rows = self.driver.find_elements(By.CLASS_NAME, 'rt-tr-group')
        cols = self.driver.find_elements(By.CLASS_NAME, 'rt-td')

        data = np.array(cols).reshape(len(rows), int(len(cols) / len(rows)))


        self.assertNotEqual(data[0][0].text, 'Cierra', 'Data does match')
        self.driver.close()


if __name__ == '__main__':
    unittest.main()