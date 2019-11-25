import React from 'react';
import styles from './hello.css';

export interface HelloProps { compiler?: string; framework?: string }

export const Hello = (props: HelloProps) => <h1 className={styles.color}>Hello World, and, Hello {props.compiler}</h1>;
