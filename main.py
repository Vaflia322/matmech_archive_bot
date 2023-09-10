import telebot
from telebot import types
import sqlite3

bot = telebot.TeleBot('6521916249:AAEk8-QOlMZyvSe-4Vd3-3RbiJ44lQGz_uo')

@bot.message_handler(commands=['start'])
def start(message):
    markup = types.ReplyKeyboardMarkup()
    btn1 = types.KeyboardButton('1 курс')
    btn2 = types.KeyboardButton('2 курс')
    btn3 = types.KeyboardButton('3 курс')
    btn4 = types.KeyboardButton('4 курс')
    markup.row(btn1, btn2)
    markup.row(btn3, btn4)
    bot.send_message(message.chat.id, f'''Привет!
Этот бот поможет быстро и удобно посмотреть необходимую тебе лекцию)''', reply_markup=markup)

@bot.message_handler(content_types=['text'])
def greetings(message):
    if message.text.lower() == 'привет':
        bot.send_message(message.chat.id, f'''Привет!
Выбирай нужный тебе предмет и тему''')



bot.polling(none_stop=True)