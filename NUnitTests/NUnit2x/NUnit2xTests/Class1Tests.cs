﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using NUnit.Framework;
using NUnit2x;

namespace NUnit2xTests
{
    public class Class1Tests
    {
        [TestCase]
        public void TestMethod1()
        {
            bool res = new Class1().isEven(4);
            Assert.IsTrue(res);
        }


        [TestCase]
        [Category("BVT")]
        public void TestMethod2()
        {
            bool res = new Class1().isEven(5);
            Assert.IsFalse(res);
        }


        [TestCase(100, true)]
        [TestCase(101, false)]
        public void TestMethod3(int val, bool res)
        {
            bool b = new Class1().isEven(val);
            Assert.AreEqual(res, b);
        }
    }
}
