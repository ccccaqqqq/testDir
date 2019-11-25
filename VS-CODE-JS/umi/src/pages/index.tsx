import React, { useState, useEffect } from 'react';
import styles from './index.css';
import { Hello } from './components/hello';

export default function () {

  const [count, setCount] = useState(0);

  function changeCount(count: number){
    setCount(count)
  }

  useEffect(() => {
    document.title = `You clicked ${count} times`;
  })

  return (
    <div className={styles.normal}>
      <div className={styles.welcome} />
      <ul className={styles.list}>
        <li>To get started, edit <code>src/pages/index.js</code> and save to reload.</li>
        <li>
          <a href="https://umijs.org/guide/getting-started.html">
            Getting Started
          </a>
        </li>
      </ul>
      <button onClick={changeCount.bind(null, count+1)}>Click Me!</button>
      <h2>{count}</h2>
      <Hello compiler="TypeScript" />
    </div>
  );
}
