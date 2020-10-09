import yfinance as yf
import streamlit as st
import pandas as pd
## written in markdown language
st.write("""
# simple stock pricing app

a simple app to show **stock** pricing and ***volume*** of google
""")
tickerSymbol = 'AAPL'
tickerData=yf.Ticker(tickerSymbol)
tickerDf=tickerData.history(period='1d',start='2010-05-31',end='2020-05-31')
st.write("""
## Closing price
""")
st.line_chart(tickerDf.Close)
st.write("""
## Volume price
""")
st.line_chart(tickerDf.Volume)

