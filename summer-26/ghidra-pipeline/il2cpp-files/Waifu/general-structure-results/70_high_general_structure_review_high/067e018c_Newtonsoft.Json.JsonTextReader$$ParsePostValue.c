/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 067e018c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader__ParsePostValue(uint *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  bool in_ZR;
  bool in_CY;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int in_w9;
  uint *puVar8;
  undefined8 in_x10;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long in_x15;
  long in_x17;
  undefined8 uVar12;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  if (in_CY && !in_ZR) {
    *(undefined8 *)(param_2 + 0xf00) = in_x10;
    *(undefined8 *)(param_2 + 0xf08) = in_stack_00000008;
    if (in_w9 != 0) {
      puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xf00U >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (param_2 + 0xf00U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar9 = DAT_08454400;
    in_stack_00000008 = 0x6fb2;
    if (in_w9 != 0) {
      puVar1 = (ulong *)(unaff_x21 + ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (0xef < *param_1) {
      *(undefined8 *)(param_2 + 0xf10) = uVar9;
      *(undefined8 *)(param_2 + 0xf18) = 0x6fb2;
      if (in_w9 != 0) {
        puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xf10U >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (param_2 + 0xf10U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar9 = DAT_08454408;
      in_stack_00000008 = 0x6fb3;
      if (in_w9 != 0) {
        puVar1 = (ulong *)(unaff_x21 + ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (0xf0 < *param_1) {
        *(undefined8 *)(param_2 + 0xf20) = uVar9;
        *(undefined8 *)(param_2 + 0xf28) = 0x6fb3;
        if (in_w9 != 0) {
          puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xf20U >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << (param_2 + 0xf20U >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar9 = DAT_08454410;
        in_stack_00000008 = 0x6fb4;
        if (in_w9 != 0) {
          puVar1 = (ulong *)(unaff_x21 + ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (0xf1 < *param_1) {
          *(undefined8 *)(param_2 + 0xf30) = uVar9;
          *(undefined8 *)(param_2 + 0xf38) = 0x6fb4;
          if (in_w9 != 0) {
            puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xf30U >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << (param_2 + 0xf30U >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uVar9 = DAT_08454418;
          in_stack_00000008 = 0x6fb5;
          if (in_w9 != 0) {
            puVar1 = (ulong *)(unaff_x21 + ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 + 0x464e0)
            ;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (0xf2 < *param_1) {
            *(undefined8 *)(param_2 + 0xf40) = uVar9;
            *(undefined8 *)(param_2 + 0xf48) = 0x6fb5;
            if (in_w9 != 0) {
              puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xf40U >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << (param_2 + 0xf40U >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uVar9 = DAT_08454420;
            in_stack_00000008 = 0x6fb6;
            if (in_w9 != 0) {
              puVar1 = (ulong *)(unaff_x21 + ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 +
                                0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (0xf3 < *param_1) {
              *(undefined8 *)(param_2 + 0xf50) = uVar9;
              *(undefined8 *)(param_2 + 0xf58) = 0x6fb6;
              if (in_w9 != 0) {
                puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xf50U >> 0x12 & 0x7fff) * 8 + 0x464e0);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << (param_2 + 0xf50U >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              uVar9 = DAT_0843cec8;
              in_stack_00000008 = 0x6fb6;
              if (in_w9 != 0) {
                puVar1 = (ulong *)(unaff_x21 + ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 +
                                  0x464e0);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              if (0xf4 < *param_1) {
                *(undefined8 *)(param_2 + 0xf60) = uVar9;
                *(undefined8 *)(param_2 + 0xf68) = 0x6fb6;
                if (in_w9 != 0) {
                  puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xf60U >> 0x12 & 0x7fff) * 8 + 0x464e0);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                      *puVar1 = *puVar1 | 1L << (param_2 + 0xf60U >> 0xc & 0x3f);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                uVar9 = DAT_08454428;
                in_stack_00000008 = 0x96c6;
                if (in_w9 != 0) {
                  puVar1 = (ulong *)(unaff_x21 + ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 +
                                    0x464e0);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                      *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                if (0xf5 < *param_1) {
                  *(undefined8 *)(param_2 + 0xf70) = uVar9;
                  *(undefined8 *)(param_2 + 0xf78) = 0x96c6;
                  if (in_w9 != 0) {
                    puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xf70U >> 0x12 & 0x7fff) * 8 + 0x464e0
                                      );
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << (param_2 + 0xf70U >> 0xc & 0x3f);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  uVar9 = DAT_08454430;
                  in_stack_00000008 = 0x6fb7;
                  if (in_w9 != 0) {
                    puVar1 = (ulong *)(unaff_x21 + ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 +
                                      0x464e0);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  if (0xf6 < *param_1) {
                    *(undefined8 *)(param_2 + 0xf80) = uVar9;
                    *(undefined8 *)(param_2 + 0xf88) = 0x6fb7;
                    if (in_w9 != 0) {
                      puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xf80U >> 0x12 & 0x7fff) * 8 +
                                        0x464e0);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                          *puVar1 = *puVar1 | 1L << (param_2 + 0xf80U >> 0xc & 0x3f);
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    uVar9 = DAT_08454438;
                    in_stack_00000008 = 0x6faf;
                    if (in_w9 != 0) {
                      puVar1 = (ulong *)(unaff_x21 + ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8
                                        + 0x464e0);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                          *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    if (0xf7 < *param_1) {
                      *(undefined8 *)(param_2 + 0xf90) = uVar9;
                      *(undefined8 *)(param_2 + 0xf98) = 0x6faf;
                      if (in_w9 != 0) {
                        puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xf90U >> 0x12 & 0x7fff) * 8 +
                                          0x464e0);
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar3) {
                            *puVar1 = *puVar1 | 1L << (param_2 + 0xf90U >> 0xc & 0x3f);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      uVar9 = DAT_08454440;
                      in_stack_00000008 = 0x6fb0;
                      if (in_w9 != 0) {
                        puVar1 = (ulong *)(unaff_x21 +
                                           ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 + 0x464e0)
                        ;
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar3) {
                            *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      if (0xf8 < *param_1) {
                        *(undefined8 *)(param_2 + 4000) = uVar9;
                        *(undefined8 *)(param_2 + 0xfa8) = 0x6fb0;
                        if (in_w9 != 0) {
                          puVar1 = (ulong *)(unaff_x21 + (param_2 + 4000U >> 0x12 & 0x7fff) * 8 +
                                            0x464e0);
                          do {
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar3) {
                              *puVar1 = *puVar1 | 1L << (param_2 + 4000U >> 0xc & 0x3f);
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                        }
                        uVar9 = DAT_08454448;
                        in_stack_00000008 = 0x6fb1;
                        if (in_w9 != 0) {
                          puVar1 = (ulong *)(unaff_x21 +
                                             ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 +
                                            0x464e0);
                          do {
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar3) {
                              *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                        }
                        if (0xf9 < *param_1) {
                          *(undefined8 *)(param_2 + 0xfb0) = uVar9;
                          *(undefined8 *)(param_2 + 0xfb8) = 0x6fb1;
                          if (in_w9 != 0) {
                            puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xfb0U >> 0x12 & 0x7fff) * 8 +
                                              0x464e0);
                            do {
                              cVar2 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar3) {
                                *puVar1 = *puVar1 | 1L << (param_2 + 0xfb0U >> 0xc & 0x3f);
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar2 != '\0');
                          }
                          uVar9 = DAT_08454450;
                          in_stack_00000008 = 0x6fb2;
                          if (in_w9 != 0) {
                            puVar1 = (ulong *)(unaff_x21 +
                                               ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 +
                                              0x464e0);
                            do {
                              cVar2 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar3) {
                                *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar2 != '\0');
                          }
                          if (0xfa < *param_1) {
                            *(undefined8 *)(param_2 + 0xfc0) = uVar9;
                            *(undefined8 *)(param_2 + 0xfc8) = 0x6fb2;
                            if (in_w9 != 0) {
                              puVar1 = (ulong *)(unaff_x21 + (param_2 + 0xfc0U >> 0x12 & 0x7fff) * 8
                                                + 0x464e0);
                              do {
                                cVar2 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar3) {
                                  *puVar1 = *puVar1 | 1L << (param_2 + 0xfc0U >> 0xc & 0x3f);
                                  cVar2 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar2 != '\0');
                            }
                            uVar9 = DAT_08454458;
                            in_stack_00000008 = 0x6fb5;
                            if (in_w9 != 0) {
                              puVar1 = (ulong *)(unaff_x21 +
                                                 ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 +
                                                0x464e0);
                              do {
                                cVar2 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar3) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f);
                                  cVar2 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar2 != '\0');
                            }
                            if (0xfb < *param_1) {
                              *(undefined8 *)(param_2 + 0xfd0) = uVar9;
                              *(undefined8 *)(param_2 + 0xfd8) = 0x6fb5;
                              if (in_w9 != 0) {
                                puVar1 = (ulong *)(unaff_x21 +
                                                   (param_2 + 0xfd0U >> 0x12 & 0x7fff) * 8 + 0x464e0
                                                  );
                                do {
                                  cVar2 = '\x01';
                                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                  if (bVar3) {
                                    *puVar1 = *puVar1 | 1L << (param_2 + 0xfd0U >> 0xc & 0x3f);
                                    cVar2 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar2 != '\0');
                              }
                              uVar9 = DAT_08454460;
                              in_stack_00000008 = 0x6fb4;
                              if (in_w9 != 0) {
                                puVar1 = (ulong *)(unaff_x21 +
                                                   ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8 +
                                                  0x464e0);
                                do {
                                  cVar2 = '\x01';
                                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                  if (bVar3) {
                                    *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc & 0x3f
                                                              );
                                    cVar2 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar2 != '\0');
                              }
                              if (0xfc < *param_1) {
                                *(undefined8 *)(param_2 + 0xfe0) = uVar9;
                                *(undefined8 *)(param_2 + 0xfe8) = 0x6fb4;
                                if (in_w9 != 0) {
                                  puVar1 = (ulong *)(unaff_x21 +
                                                     (param_2 + 0xfe0U >> 0x12 & 0x7fff) * 8 +
                                                    0x464e0);
                                  do {
                                    cVar2 = '\x01';
                                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar3) {
                                      *puVar1 = *puVar1 | 1L << (param_2 + 0xfe0U >> 0xc & 0x3f);
                                      cVar2 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar2 != '\0');
                                }
                                uVar9 = DAT_08454468;
                                in_stack_00000008 = 0x6fb6;
                                if (in_w9 != 0) {
                                  puVar1 = (ulong *)(unaff_x21 +
                                                     ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) * 8
                                                    + 0x464e0);
                                  do {
                                    cVar2 = '\x01';
                                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar3) {
                                      *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc &
                                                                0x3f);
                                      cVar2 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar2 != '\0');
                                }
                                if (0xfd < *param_1) {
                                  *(undefined8 *)(param_2 + 0xff0) = uVar9;
                                  *(undefined8 *)(param_2 + 0xff8) = 0x6fb6;
                                  if (in_w9 != 0) {
                                    puVar1 = (ulong *)(unaff_x21 +
                                                       (param_2 + 0xff0U >> 0x12 & 0x7fff) * 8 +
                                                      0x464e0);
                                    do {
                                      cVar2 = '\x01';
                                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                      if (bVar3) {
                                        *puVar1 = *puVar1 | 1L << (param_2 + 0xff0U >> 0xc & 0x3f);
                                        cVar2 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar2 != '\0');
                                  }
                                  uVar9 = DAT_08454470;
                                  in_stack_00000008 = 0x6fb3;
                                  if (in_w9 != 0) {
                                    puVar1 = (ulong *)(unaff_x21 +
                                                       ((ulong)&stack0x00000000 >> 0x12 & 0x7fff) *
                                                       8 + 0x464e0);
                                    do {
                                      cVar2 = '\x01';
                                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                      if (bVar3) {
                                        *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc &
                                                                  0x3f);
                                        cVar2 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar2 != '\0');
                                  }
                                  if (0xfe < *param_1) {
                                    *(undefined8 *)(param_2 + 0x1000) = uVar9;
                                    *(undefined8 *)(param_2 + 0x1008) = 0x6fb3;
                                    if (in_w9 != 0) {
                                      puVar1 = (ulong *)(unaff_x21 +
                                                         (param_2 + 0x1000U >> 0x12 & 0x7fff) * 8 +
                                                        0x464e0);
                                      do {
                                        cVar2 = '\x01';
                                        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                        if (bVar3) {
                                          *puVar1 = *puVar1 | 1L << (param_2 + 0x1000U >> 0xc & 0x3f
                                                                    );
                                          cVar2 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar2 != '\0');
                                    }
                                    uVar9 = DAT_08454478;
                                    in_stack_00000008 = 0x6fb7;
                                    if (in_w9 != 0) {
                                      puVar1 = (ulong *)(unaff_x21 +
                                                         ((ulong)&stack0x00000000 >> 0x12 & 0x7fff)
                                                         * 8 + 0x464e0);
                                      do {
                                        cVar2 = '\x01';
                                        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                        if (bVar3) {
                                          *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >> 0xc
                                                                    & 0x3f);
                                          cVar2 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar2 != '\0');
                                    }
                                    if (0xff < *param_1) {
                                      *(undefined8 *)(param_2 + 0x1010) = uVar9;
                                      *(undefined8 *)(param_2 + 0x1018) = 0x6fb7;
                                      if (in_w9 != 0) {
                                        puVar1 = (ulong *)(unaff_x21 +
                                                           (param_2 + 0x1010U >> 0x12 & 0x7fff) * 8
                                                          + 0x464e0);
                                        do {
                                          cVar2 = '\x01';
                                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                          if (bVar3) {
                                            *puVar1 = *puVar1 | 1L << (param_2 + 0x1010U >> 0xc &
                                                                      0x3f);
                                            cVar2 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar2 != '\0');
                                      }
                                      uVar9 = DAT_08454480;
                                      in_stack_00000008 = 0x3b5;
                                      if (in_w9 != 0) {
                                        puVar1 = (ulong *)(unaff_x21 +
                                                           ((ulong)&stack0x00000000 >> 0x12 & 0x7fff
                                                           ) * 8 + 0x464e0);
                                        do {
                                          cVar2 = '\x01';
                                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                          if (bVar3) {
                                            *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >>
                                                                       0xc & 0x3f);
                                            cVar2 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar2 != '\0');
                                      }
                                      if (0x100 < *param_1) {
                                        *(undefined8 *)(param_2 + 0x1020) = uVar9;
                                        *(undefined8 *)(param_2 + 0x1028) = 0x3b5;
                                        if (in_w9 != 0) {
                                          puVar1 = (ulong *)(unaff_x21 +
                                                             (param_2 + 0x1020U >> 0x12 & 0x7fff) *
                                                             8 + 0x464e0);
                                          do {
                                            cVar2 = '\x01';
                                            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                            if (bVar3) {
                                              *puVar1 = *puVar1 | 1L << (param_2 + 0x1020U >> 0xc &
                                                                        0x3f);
                                              cVar2 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar2 != '\0');
                                        }
                                        uVar9 = DAT_08454488;
                                        in_stack_00000008 = 0x3a8;
                                        if (in_w9 != 0) {
                                          puVar1 = (ulong *)(unaff_x21 +
                                                             ((ulong)&stack0x00000000 >> 0x12 &
                                                             0x7fff) * 8 + 0x464e0);
                                          do {
                                            cVar2 = '\x01';
                                            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                            if (bVar3) {
                                              *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000 >>
                                                                         0xc & 0x3f);
                                              cVar2 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar2 != '\0');
                                        }
                                        if (0x101 < *param_1) {
                                          *(undefined8 *)(param_2 + 0x1030) = uVar9;
                                          *(undefined8 *)(param_2 + 0x1038) = 0x3a8;
                                          if (in_w9 != 0) {
                                            puVar1 = (ulong *)(unaff_x21 +
                                                               (param_2 + 0x1030U >> 0x12 & 0x7fff)
                                                               * 8 + 0x464e0);
                                            do {
                                              cVar2 = '\x01';
                                              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                              if (bVar3) {
                                                *puVar1 = *puVar1 | 1L << (param_2 + 0x1030U >> 0xc
                                                                          & 0x3f);
                                                cVar2 = ExclusiveMonitorsStatus();
                                              }
                                            } while (cVar2 != '\0');
                                          }
                                          uVar9 = DAT_08454490;
                                          in_stack_00000008 = 0x4e9f;
                                          if (in_w9 != 0) {
                                            puVar1 = (ulong *)(unaff_x21 +
                                                               ((ulong)&stack0x00000000 >> 0x12 &
                                                               0x7fff) * 8 + 0x464e0);
                                            do {
                                              cVar2 = '\x01';
                                              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                              if (bVar3) {
                                                *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000
                                                                           >> 0xc & 0x3f);
                                                cVar2 = ExclusiveMonitorsStatus();
                                              }
                                            } while (cVar2 != '\0');
                                          }
                                          if (0x102 < *param_1) {
                                            *(undefined8 *)(param_2 + 0x1040) = uVar9;
                                            *(undefined8 *)(param_2 + 0x1048) = 0x4e9f;
                                            if (in_w9 != 0) {
                                              puVar1 = (ulong *)(unaff_x21 +
                                                                 (param_2 + 0x1040U >> 0x12 & 0x7fff
                                                                 ) * 8 + 0x464e0);
                                              do {
                                                cVar2 = '\x01';
                                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar3) {
                                                  *puVar1 = *puVar1 | 1L << (param_2 + 0x1040U >>
                                                                             0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar2 != '\0');
                                            }
                                            uVar9 = DAT_0843ced0;
                                            in_stack_00000008 = 0x4e9f;
                                            if (in_w9 != 0) {
                                              puVar1 = (ulong *)(unaff_x21 +
                                                                 ((ulong)&stack0x00000000 >> 0x12 &
                                                                 0x7fff) * 8 + 0x464e0);
                                              do {
                                                cVar2 = '\x01';
                                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar3) {
                                                  *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000000
                                                                             >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar2 != '\0');
                                            }
                                            if (0x103 < *param_1) {
                                              *(undefined8 *)(param_2 + 0x1050) = uVar9;
                                              *(undefined8 *)(param_2 + 0x1058) = 0x4e9f;
                                              if (in_w9 != 0) {
                                                puVar1 = (ulong *)(unaff_x21 +
                                                                   (param_2 + 0x1050U >> 0x12 &
                                                                   0x7fff) * 8 + 0x464e0);
                                                do {
                                                  cVar2 = '\x01';
                                                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar3) {
                                                    *puVar1 = *puVar1 | 1L << (param_2 + 0x1050U >>
                                                                               0xc & 0x3f);
                                                    cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar2 != '\0');
                                              }
                                              uVar9 = DAT_08454498;
                                              in_stack_00000008 = 0x6faf;
                                              if (in_w9 != 0) {
                                                puVar1 = (ulong *)(unaff_x21 +
                                                                   ((ulong)&stack0x00000000 >> 0x12
                                                                   & 0x7fff) * 8 + 0x464e0);
                                                do {
                                                  cVar2 = '\x01';
                                                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar3) {
                                                    *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar2 != '\0');
                                              }
                                              if (0x104 < *param_1) {
                                                *(undefined8 *)(param_2 + 0x1060) = uVar9;
                                                *(undefined8 *)(param_2 + 0x1068) = 0x6faf;
                                                if (in_w9 != 0) {
                                                  puVar1 = (ulong *)(unaff_x21 +
                                                                     (param_2 + 0x1060U >> 0x12 &
                                                                     0x7fff) * 8 + 0x464e0);
                                                  do {
                                                    cVar2 = '\x01';
                                                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                    if (bVar3) {
                                                      *puVar1 = *puVar1 | 1L << (param_2 + 0x1060U
                                                                                 >> 0xc & 0x3f);
                                                      cVar2 = ExclusiveMonitorsStatus();
                                                    }
                                                  } while (cVar2 != '\0');
                                                }
                                                uVar9 = DAT_084544a0;
                                                in_stack_00000008 = 0x6fb0;
                                                if (in_w9 != 0) {
                                                  puVar1 = (ulong *)(unaff_x21 +
                                                                     ((ulong)&stack0x00000000 >>
                                                                      0x12 & 0x7fff) * 8 + 0x464e0);
                                                  do {
                                                    cVar2 = '\x01';
                                                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                    if (bVar3) {
                                                      *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                }
                                                if (0x105 < *param_1) {
                                                  *(undefined8 *)(param_2 + 0x1070) = uVar9;
                                                  *(undefined8 *)(param_2 + 0x1078) = 0x6fb0;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       (param_2 + 0x1070U >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << (param_2 + 0x1070U
                                                                                   >> 0xc & 0x3f);
                                                        cVar2 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843ced8;
                                                  in_stack_00000008 = 0x4e9f;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x106 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1080) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1088) = 0x4e9f;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1080U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1080U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084544a8;
                                                  in_stack_00000008 = 0x6faf;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x107 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1090) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1098) = 0x6faf;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1090U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1090U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cee0;
                                                  in_stack_00000008 = 0x6fbd;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x108 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x10a0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x10a8) = 0x6fbd;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x10a0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x10a0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084544b0;
                                                  in_stack_00000008 = 0x6faf;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x109 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x10b0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x10b8) = 0x6faf;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x10b0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x10b0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084544b8;
                                                  in_stack_00000008 = 0x6fb0;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x10a < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x10c0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x10c8) = 0x6fb0;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x10c0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x10c0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084544c0;
                                                  in_stack_00000008 = 0x6fb0;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x10b < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x10d0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x10d8) = 0x6fb0;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x10d0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x10d0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cee8;
                                                  in_stack_00000008 = 0x6fb1;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x10c < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x10e0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x10e8) = 0x6fb1;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x10e0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x10e0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cef0;
                                                  in_stack_00000008 = 0x6fb1;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x10d < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x10f0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x10f8) = 0x6fb1;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x10f0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x10f0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cef8;
                                                  in_stack_00000008 = 0x6fb2;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x10e < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1100) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1108) = 0x6fb2;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1100U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1100U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cf00;
                                                  in_stack_00000008 = 0x6fb2;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x10f < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1110) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1118) = 0x6fb2;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1110U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1110U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cf08;
                                                  in_stack_00000008 = 0x6fb3;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x110 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1120) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1128) = 0x6fb3;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1120U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1120U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cf10;
                                                  in_stack_00000008 = 0x6fb3;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x111 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1130) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1138) = 0x6fb3;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1130U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1130U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cf18;
                                                  in_stack_00000008 = 0x6fb4;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x112 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1140) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1148) = 0x6fb4;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1140U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1140U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cf20;
                                                  in_stack_00000008 = 0x6fb4;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x113 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1150) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1158) = 0x6fb4;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1150U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1150U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cf28;
                                                  in_stack_00000008 = 0x6fb5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x114 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1160) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1168) = 0x6fb5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1160U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1160U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cf30;
                                                  in_stack_00000008 = 0x6fb5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x115 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1170) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1178) = 0x6fb5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1170U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1170U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cf38;
                                                  in_stack_00000008 = 0x6fb6;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x116 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1180) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1188) = 0x6fb6;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1180U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1180U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cf40;
                                                  in_stack_00000008 = 0x6fb6;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x117 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1190) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1198) = 0x6fb6;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1190U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1190U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cf48;
                                                  in_stack_00000008 = 0x6fb7;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x118 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x11a0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x11a8) = 0x6fb7;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x11a0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x11a0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843cf50;
                                                  in_stack_00000008 = 0x6fb7;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x119 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x11b0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x11b8) = 0x6fb7;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x11b0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x11b0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843ec68;
                                                  in_stack_00000008 = 0x551;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x11a < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x11c0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x11c8) = 0x551;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x11c0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x11c0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454868;
                                                  in_stack_00000008 = 0x5182;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x11b < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x11d0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x11d8) = 0x5182;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x11d0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x11d0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454870;
                                                  in_stack_00000008 = 0x5182;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x11c < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x11e0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x11e8) = 0x5182;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x11e0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x11e0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454878;
                                                  in_stack_00000008 = 0x5182;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x11d < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x11f0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x11f8) = 0x5182;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x11f0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x11f0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454880;
                                                  in_stack_00000008 = 0x556a;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x11e < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1200) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1208) = 0x556a;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1200U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1200U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454888;
                                                  in_stack_00000008 = 0x556a;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x11f < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1210) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1218) = 0x556a;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1210U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1210U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454890;
                                                  in_stack_00000008 = 0x5182;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x120 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1220) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1228) = 0x5182;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1220U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1220U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084548a8;
                                                  in_stack_00000008 = 0x3b5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x121 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1230) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1238) = 0x3b5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1230U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1230U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084548b0;
                                                  in_stack_00000008 = 0x3b5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x122 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1240) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1248) = 0x3b5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1240U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1240U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084548b8;
                                                  in_stack_00000008 = 0x3b5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x123 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1250) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1258) = 0x3b5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1250U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1250U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843ee10;
                                                  in_stack_00000008 = 0x3b5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x124 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1260) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1268) = 0x3b5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1260U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1260U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0843ee18;
                                                  in_stack_00000008 = 0x3b5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x125 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1270) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1278) = 0x3b5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1270U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1270U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084548c0;
                                                  in_stack_00000008 = 0x3b5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x126 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1280) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1288) = 0x3b5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1280U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1280U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084548c8;
                                                  in_stack_00000008 = 0x3b5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x127 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1290) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1298) = 0x3b5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1290U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1290U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084548d0;
                                                  in_stack_00000008 = 0x3b5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x128 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x12a0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x12a8) = 0x3b5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x12a0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x12a0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084548d8;
                                                  in_stack_00000008 = 0x3b5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x129 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x12b0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x12b8) = 0x3b5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x12b0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x12b0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084548f8;
                                                  in_stack_00000008 = 0x6faf;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x12a < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x12c0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x12c8) = 0x6faf;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x12c0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x12c0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454900;
                                                  in_stack_00000008 = 0x6fb0;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (299 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x12d0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x12d8) = 0x6fb0;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x12d0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x12d0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454908;
                                                  in_stack_00000008 = 0x6fb1;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (300 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x12e0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x12e8) = 0x6fb1;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x12e0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x12e0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454910;
                                                  in_stack_00000008 = 0x6fb2;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x12d < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x12f0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x12f8) = 0x6fb2;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x12f0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x12f0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454918;
                                                  in_stack_00000008 = 0x6fb7;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x12e < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1300) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1308) = 0x6fb7;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1300U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1300U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454920;
                                                  in_stack_00000008 = 0x6fbd;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x12f < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1310) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1318) = 0x6fbd;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1310U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1310U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454958;
                                                  in_stack_00000008 = 0x6faf;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x130 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1320) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1328) = 0x6faf;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1320U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1320U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454960;
                                                  in_stack_00000008 = 0x6fb0;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x131 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1330) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1338) = 0x6fb0;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1330U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1330U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454968;
                                                  in_stack_00000008 = 0x6fb1;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x132 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1340) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1348) = 0x6fb1;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1340U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1340U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454970;
                                                  in_stack_00000008 = 0x6fb2;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x133 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1350) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1358) = 0x6fb2;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1350U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1350U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454978;
                                                  in_stack_00000008 = 0x6fb7;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x134 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1360) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1368) = 0x6fb7;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1360U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1360U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454980;
                                                  in_stack_00000008 = 0x6fbd;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x135 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1370) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1378) = 0x6fbd;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1370U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1370U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08454fb8;
                                                  in_stack_00000008 = 0x6fb6;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x136 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1380) = uVar9;
                                                    *(undefined8 *)(param_2 + 5000) = 0x6fb6;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1380U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1380U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08455350;
                                                  in_stack_00000008 = 10000;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x137 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1390) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1398) = 10000;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1390U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1390U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08455cd0;
                                                  in_stack_00000008 = 0x3a4;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x138 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x13a0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x13a8) = 0x3a4;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x13a0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x13a0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08441da8;
                                                  in_stack_00000008 = 0x4e8c;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x139 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x13b0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x13b8) = 0x4e8c;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x13b0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x13b0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084410c8;
                                                  in_stack_00000008 = 0x4e8c;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x13a < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x13c0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x13c8) = 0x4e8c;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x13c0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x13c0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08442f70;
                                                  in_stack_00000008 = 0x35a;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x13b < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x13d0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x13d8) = 0x35a;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x13d0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x13d0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08445598;
                                                  in_stack_00000008 = 0x4e8b;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x13c < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x13e0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x13e8) = 0x4e8b;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x13e0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x13e0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08458270;
                                                  in_stack_00000008 = 0x3a4;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x13d < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x13f0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x13f8) = 0x3a4;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x13f0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x13f0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08458278;
                                                  in_stack_00000008 = 0x3a4;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x13e < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1400) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1408) = 0x3a4;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1400U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1400U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08458410;
                                                  in_stack_00000008 = 0x3a4;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x13f < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1410) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1418) = 0x3a4;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1410U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1410U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08446d98;
                                                  in_stack_00000008 = 0x4e8b;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x140 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1420) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1428) = 0x4e8b;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1420U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1420U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08447268;
                                                  in_stack_00000008 = 0x36a;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x141 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1430) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1438) = 0x36a;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1430U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1430U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08459770;
                                                  in_stack_00000008 = 0x4b0;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x142 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1440) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1448) = 0x4b0;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1440U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1440U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084598b8;
                                                  in_stack_00000008 = 0x4b0;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x143 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1450) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1458) = 0x4b0;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1450U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1450U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084598c0;
                                                  in_stack_00000008 = 65000;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x144 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1460) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1468) = 65000;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1460U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1460U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084598c8;
                                                  in_stack_00000008 = 0xfde9;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x145 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1470) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1478) = 0xfde9;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1470U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1470U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084598d0;
                                                  in_stack_00000008 = 65000;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x146 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1480) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1488) = 65000;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1480U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1480U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084598d8;
                                                  in_stack_00000008 = 0xfde9;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x147 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1490) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1498) = 0xfde9;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1490U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1490U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_084598e0;
                                                  in_stack_00000008 = 0x4b1;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x148 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x14a0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x14a8) = 0x4b1;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x14a0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x14a0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08459ee0;
                                                  in_stack_00000008 = 0x4e9f;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x149 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x14b0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x14b8) = 0x4e9f;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x14b0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x14b0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_08459ee8;
                                                  in_stack_00000008 = 0x4e9f;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x14a < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x14c0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x14c8) = 0x4e9f;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x14c0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x14c0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a030;
                                                  in_stack_00000008 = 0x4b0;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x14b < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x14d0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x14d8) = 0x4b0;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x14d0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x14d0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0844aac8;
                                                  in_stack_00000008 = 0x4b1;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x14c < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x14e0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x14e8) = 0x4b1;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x14e0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x14e0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0844aad0;
                                                  in_stack_00000008 = 0x4b0;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x14d < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x14f0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x14f8) = 0x4b0;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x14f0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x14f0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a040;
                                                  in_stack_00000008 = 12000;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x14e < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1500) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1508) = 12000;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1500U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1500U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0844aad8;
                                                  in_stack_00000008 = 0x2ee1;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x14f < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1510) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1518) = 0x2ee1;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1510U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1510U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0844aae0;
                                                  in_stack_00000008 = 12000;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x150 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1520) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1528) = 12000;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1520U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1520U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a050;
                                                  in_stack_00000008 = 65000;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x151 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1530) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1538) = 65000;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1530U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1530U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a058;
                                                  in_stack_00000008 = 0xfde9;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x152 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1540) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1548) = 0xfde9;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1540U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1540U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a388;
                                                  in_stack_00000008 = 0x6fb6;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x153 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1550) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1558) = 0x6fb6;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1550U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1550U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a5b8;
                                                  in_stack_00000008 = 0x4e2;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x154 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1560) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1568) = 0x4e2;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1560U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1560U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a5c0;
                                                  in_stack_00000008 = 0x4e3;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x155 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1570) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1578) = 0x4e3;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1570U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1570U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a5c8;
                                                  in_stack_00000008 = 0x4e4;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x156 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1580) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1588) = 0x4e4;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1580U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1580U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a5d0;
                                                  in_stack_00000008 = 0x4e5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x157 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1590) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1598) = 0x4e5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1590U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1590U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0844c830;
                                                  in_stack_00000008 = 0x4e6;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x158 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x15a0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x15a8) = 0x4e6;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x15a0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x15a0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a5d8;
                                                  in_stack_00000008 = 0x4e7;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x159 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x15b0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x15b8) = 0x4e7;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x15b0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x15b0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a5e0;
                                                  in_stack_00000008 = 0x4e8;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x15a < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x15c0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x15c8) = 0x4e8;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x15c0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x15c0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a5e8;
                                                  in_stack_00000008 = 0x4e9;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x15b < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x15d0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x15d8) = 0x4e9;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x15d0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x15d0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a5f0;
                                                  in_stack_00000008 = 0x4ea;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x15c < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x15e0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x15e8) = 0x4ea;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x15e0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x15e0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a5f8;
                                                  in_stack_00000008 = 0x36a;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x15d < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x15f0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x15f8) = 0x36a;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x15f0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x15f0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a7b0;
                                                  in_stack_00000008 = 0x4e4;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x15e < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1600) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1608) = 0x4e4;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1600U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1600U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a778;
                                                  in_stack_00000008 = 20000;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x15f < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1610) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1618) = 20000;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1610U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1610U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a780;
                                                  in_stack_00000008 = 0x4e22;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x160 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1620) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1628) = 0x4e22;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1620U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1620U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a7c0;
                                                  in_stack_00000008 = 0x4e2;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x161 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1630) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1638) = 0x4e2;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1630U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1630U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a7c8;
                                                  in_stack_00000008 = 0x4e3;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x162 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1640) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1648) = 0x4e3;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1640U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1640U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a7d0;
                                                  in_stack_00000008 = 0x4e21;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x163 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1650) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1658) = 0x4e21;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1650U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1650U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a7d8;
                                                  in_stack_00000008 = 0x4e23;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x164 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1660) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1668) = 0x4e23;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1660U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1660U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a7e0;
                                                  in_stack_00000008 = 0x4e24;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x165 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1670) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1678) = 0x4e24;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1670U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1670U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a7e8;
                                                  in_stack_00000008 = 0x4e25;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x166 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1680) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1688) = 0x4e25;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1680U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1680U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a7f0;
                                                  in_stack_00000008 = 0x4f25;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x167 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1690) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1698) = 0x4f25;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1690U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1690U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a7f8;
                                                  in_stack_00000008 = 0x4f2d;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x168 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x16a0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x16a8) = 0x4f2d;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x16a0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x16a0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a800;
                                                  in_stack_00000008 = 0x51c8;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x169 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x16b0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x16b8) = 0x51c8;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x16b0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x16b0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a808;
                                                  in_stack_00000008 = 0x51d5;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x16a < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x16c0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x16c8) = 0x51d5;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x16c0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x16c0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a810;
                                                  in_stack_00000008 = 0xc433;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x16b < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x16d0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x16d8) = 0xc433;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x16d0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x16d0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0844c9d8;
                                                  in_stack_00000008 = 0x5161;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x16c < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x16e0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x16e8) = 0x5161;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x16e0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x16e0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a818;
                                                  in_stack_00000008 = 0xcadc;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x16d < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x16f0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x16f8) = 0xcadc;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x16f0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x16f0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a820;
                                                  in_stack_00000008 = 0xcae0;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x16e < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1700) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1708) = 0xcae0;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1700U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1700U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a828;
                                                  in_stack_00000008 = 0xcadc;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x16f < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1710) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1718) = 0xcadc;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1710U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1710U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a788;
                                                  in_stack_00000008 = 0x7149;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x170 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1720) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1728) = 0x7149;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1720U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1720U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a790;
                                                  in_stack_00000008 = 0x4e89;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x171 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1730) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1738) = 0x4e89;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1730U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1730U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a798;
                                                  in_stack_00000008 = 0x4e8a;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x172 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1740) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1748) = 0x4e8a;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1740U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1740U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a7a0;
                                                  in_stack_00000008 = 0x4e8c;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x173 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1750) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1758) = 0x4e8c;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1750U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1750U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a7a8;
                                                  in_stack_00000008 = 0x4e8b;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x174 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1760) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1768) = 0x4e8b;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1760U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1760U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a830;
                                                  in_stack_00000008 = 0xdeae;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x175 < *param_1) {
                                                    *(undefined8 *)(param_2 + 6000) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1778) = 0xdeae;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 6000U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 6000U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a838;
                                                    in_stack_00000008 = 0xdeab;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000000 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x176 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1780) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1788) = 0xdeab;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1780U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1780U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a840;
                                                  in_stack_00000008 = 0xdeaa;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x177 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1790) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1798) = 0xdeaa;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1790U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1790U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a848;
                                                  in_stack_00000008 = 0xdeb2;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x178 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x17a0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x17a8) = 0xdeb2;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x17a0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x17a0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a850;
                                                  in_stack_00000008 = 0xdeb0;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x179 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x17b0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x17b8) = 0xdeb0;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x17b0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x17b0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a858;
                                                  in_stack_00000008 = 0xdeb1;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x17a < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x17c0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x17c8) = 0xdeb1;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x17c0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x17c0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a860;
                                                  in_stack_00000008 = 0xdeaf;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x17b < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x17d0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x17d8) = 0xdeaf;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x17d0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x17d0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a868;
                                                  in_stack_00000008 = 0xdeb3;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x17c < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x17e0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x17e8) = 0xdeb3;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x17e0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x17e0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a870;
                                                  in_stack_00000008 = 0xdeac;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x17d < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x17f0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x17f8) = 0xdeac;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x17f0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x17f0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a878;
                                                  in_stack_00000008 = 0xdead;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x17e < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1800) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1808) = 0xdead;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1800U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1800U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a880;
                                                  in_stack_00000008 = 0x2714;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x17f < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1810) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1818) = 0x2714;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1810U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1810U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a888;
                                                  in_stack_00000008 = 0x272d;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x180 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1820) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1828) = 0x272d;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1820U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1820U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a890;
                                                  in_stack_00000008 = 0x2718;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x181 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1830) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1838) = 0x2718;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1830U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1830U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a898;
                                                  in_stack_00000008 = 0x2712;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x182 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1840) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1848) = 0x2712;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1840U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1840U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a8a0;
                                                  in_stack_00000008 = 0x2762;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x183 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1850) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1858) = 0x2762;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1850U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1850U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a8a8;
                                                  in_stack_00000008 = 0x2717;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x184 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1860) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1868) = 0x2717;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1860U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1860U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a8b0;
                                                  in_stack_00000008 = 0x2716;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x185 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1870) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1878) = 0x2716;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1870U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1870U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a8b8;
                                                  in_stack_00000008 = 0x2715;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x186 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1880) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1888) = 0x2715;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1880U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1880U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a8c0;
                                                  in_stack_00000008 = 0x275f;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x187 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1890) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1898) = 0x275f;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1890U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1890U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a8c8;
                                                  in_stack_00000008 = 0x2711;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x188 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x18a0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x18a8) = 0x2711;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x18a0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x18a0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a8d0;
                                                  in_stack_00000008 = 0x2713;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x189 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x18b0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x18b8) = 0x2713;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x18b0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x18b0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a8d8;
                                                  in_stack_00000008 = 0x271a;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x18a < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x18c0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x18c8) = 0x271a;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x18c0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x18c0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a8e0;
                                                  in_stack_00000008 = 0x2725;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x18b < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x18d0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x18d8) = 0x2725;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x18d0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x18d0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a8e8;
                                                  in_stack_00000008 = 0x2761;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x18c < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x18e0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x18e8) = 0x2761;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x18e0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x18e0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a8f0;
                                                  in_stack_00000008 = 0x2721;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x18d < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x18f0) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x18f8) = 0x2721;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x18f0U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x18f0U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a908;
                                                  in_stack_00000008 = 0x3a4;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x18e < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1900) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1908) = 0x3a4;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1900U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1900U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a930;
                                                  in_stack_00000008 = 0x3a4;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (399 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1910) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1918) = 0x3a4;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1910U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1910U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a938;
                                                  in_stack_00000008 = 65000;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (400 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1920) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1928) = 65000;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1920U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1920U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a940;
                                                  in_stack_00000008 = 0xfde9;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x191 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1930) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1938) = 0xfde9;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1930U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1930U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a948;
                                                  in_stack_00000008 = 65000;
                                                  if (in_w9 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x192 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1940) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1948) = 65000;
                                                    if (in_w9 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1940U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1940U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a950;
                                                  iVar4 = *(int *)(in_x15 + 0xcd0);
                                                  in_stack_00000008 = 0xfde9;
                                                  if (iVar4 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x193 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1950) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1958) = 0xfde9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1950U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1950U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a958;
                                                  in_stack_00000008 = 0x3b6;
                                                  if (iVar4 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000000 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000000 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x194 < *param_1) {
                                                    *(undefined8 *)(param_2 + 0x1960) = uVar9;
                                                    *(undefined8 *)(param_2 + 0x1968) = 0x3b6;
                                                    if (iVar4 == 0) {
                                                      **(long **)(DAT_083cb270 + 0xb8) = param_2;
                                                    }
                                                    else {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (param_2 + 0x1960U >> 0x12
                                                                         & 0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (param_2 + 
                                                  0x1960U >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  **(long **)(DAT_083cb270 + 0xb8) = param_2;
                                                  uVar6 = *(ulong *)(DAT_083cb270 + 0xb8);
                                                  puVar1 = (ulong *)(unaff_x21 +
                                                                     (uVar6 >> 0x12 & 0x7fff) * 8 +
                                                                    0x464e0);
                                                  do {
                                                    cVar2 = '\x01';
                                                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                    if (bVar3) {
                                                      *puVar1 = *puVar1 | 1L << (uVar6 >> 0xc & 0x3f
                                                                                );
                                                      cVar2 = ExclusiveMonitorsStatus();
                                                    }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  lVar5 = FUN_03398188(DAT_083c7868,0x62);
                                                  iVar4 = DAT_08908cd0;
                                                  uVar9 = *(undefined8 *)(unaff_x25 + 0xab8);
                                                  in_stack_00000000 = 0x4e40025;
                                                  if (DAT_08908cd0 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)&stack0x00000008 >>
                                                                        0x12 & 0x7fff) * 8 + 0x464e0
                                                                      );
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_033d1d3c();
                                                  }
                                                  puVar8 = (uint *)(lVar5 + 0x18);
                                                  if (*puVar8 != 0) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0x28);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x20) = 0x4e40025;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = *(undefined8 *)(unaff_x23 + 0xb28);
                                                    in_stack_00000000 = 0x4e401b5;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (1 < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0x38);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x30) = 0x4e401b5;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = *(undefined8 *)(unaff_x22 + 0xb30);
                                                    in_stack_00000000 = 0x4e401f4;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (2 < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0x48);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x40) = 0x4e401f4;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = *(undefined8 *)(in_x17 + 0xf68);
                                                    in_stack_00000000 = 0x20204e802c4;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (3 < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0x58);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x50) = 0x20204e802c4;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = *(undefined8 *)(unaff_x29 + 0xbf0);
                                                    in_stack_00000000 = 0x4e502e1;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (4 < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0x68);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x60) = 0x4e502e1;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = *(undefined8 *)(unaff_x26 + 0xbf8);
                                                    in_stack_00000000 = 0x4e90307;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (5 < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0x78);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x70) = 0x4e90307;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08453c08;
                                                    in_stack_00000000 = 0x4e40352;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (6 < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0x88);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x80) = 0x4e40352;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08453c10;
                                                    in_stack_00000000 = 0x20204e20354;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (7 < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0x98);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x90) = 0x20204e20354;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = *(undefined8 *)(unaff_x27 + 0xb48);
                                                    in_stack_00000000 = 0x4e40357;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (8 < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0xa8);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0xa0) = 0x4e40357;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08453c18;
                                                    in_stack_00000000 = 0x4e60359;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (9 < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0xb8);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0xb0) = 0x4e60359;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = *(undefined8 *)(unaff_x20 + 0xa50);
                                                    in_stack_00000000 = 0x4e4035a;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (10 < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 200);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0xc0) = 0x4e4035a;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cb58;
                                                    in_stack_00000000 = 0x4e4035c;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0xb < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0xd8);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0xd0) = 0x4e4035c;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08453c20;
                                                    in_stack_00000000 = 0x4e4035d;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0xc < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0xe8);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0xe0) = 0x4e4035d;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08438428;
                                                    in_stack_00000000 = 0x20204e7035e;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0xd < *puVar8) {
                                                    puVar11 = (undefined8 *)(lVar5 + 0xf8);
                                                    *puVar11 = uVar9;
                                                    *(undefined8 *)(lVar5 + 0xf0) = 0x20204e7035e;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cb70;
                                                    in_stack_00000000 = 0x4e4035f;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0xe < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x100) = 0x4e4035f;
                                                    *(undefined8 *)(lVar5 + 0x108) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x108U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x108U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cb78;
                                                    in_stack_00000000 = 0x4e80360;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0xf < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x110) = 0x4e80360;
                                                    *(undefined8 *)(lVar5 + 0x118) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x118U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x118U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cb80;
                                                    in_stack_00000000 = 0x4e40361;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x10 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x120) = 0x4e40361;
                                                    *(undefined8 *)(lVar5 + 0x128) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x128U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x128U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08451410;
                                                    in_stack_00000000 = 0x20204e30362;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x11 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x130) = 0x20204e30362;
                                                    *(undefined8 *)(lVar5 + 0x138) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x138U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x138U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08453c28;
                                                    in_stack_00000000 = 0x4e50365;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x12 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x140) = 0x4e50365;
                                                    *(undefined8 *)(lVar5 + 0x148) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x148U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x148U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cb98;
                                                    in_stack_00000000 = 0x4e20366;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x13 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x150) = 0x4e20366;
                                                    *(undefined8 *)(lVar5 + 0x158) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x158U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x158U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a5f8;
                                                    in_stack_00000000 = 0x303036a036a;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x14 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x160) = 0x303036a036a;
                                                    *(undefined8 *)(lVar5 + 0x168) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x168U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x168U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08451420;
                                                    in_stack_00000000 = 0x4e5036b;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x15 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x170) = 0x4e5036b;
                                                    *(undefined8 *)(lVar5 + 0x178) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x178U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x178U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845b8e0;
                                                    in_stack_00000000 = 0x30303a403a4;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x16 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x180) = 0x30303a403a4;
                                                    *(undefined8 *)(lVar5 + 0x188) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x188U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x188U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08452f10;
                                                    in_stack_00000000 = 0x30303a803a8;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x17 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 400) = 0x30303a803a8;
                                                    *(undefined8 *)(lVar5 + 0x198) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x198U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x198U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_084548c8;
                                                    in_stack_00000000 = 0x30303b503b5;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x18 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x1a0) = 0x30303b503b5;
                                                    *(undefined8 *)(lVar5 + 0x1a8) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x1a8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x1a8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08450248;
                                                    in_stack_00000000 = 0x30303b603b6;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x19 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x1b0) = 0x30303b603b6;
                                                    *(undefined8 *)(lVar5 + 0x1b8) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x1b8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x1b8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cac0;
                                                    in_stack_00000000 = 0x4e60402;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x1a < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x1c0) = 0x4e60402;
                                                    *(undefined8 *)(lVar5 + 0x1c8) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x1c8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x1c8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843ca60;
                                                    in_stack_00000000 = 0x4e40417;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x1b < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x1d0) = 0x4e40417;
                                                    *(undefined8 *)(lVar5 + 0x1d8) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x1d8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x1d8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843ca68;
                                                    in_stack_00000000 = 0x4e40474;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x1c < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x1e0) = 0x4e40474;
                                                    *(undefined8 *)(lVar5 + 0x1e8) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x1e8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x1e8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843ca70;
                                                    in_stack_00000000 = 0x4e40475;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x1d < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x1f0) = 0x4e40475;
                                                    *(undefined8 *)(lVar5 + 0x1f8) = uVar9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x1f8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x1f8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843ca78;
                                                    in_stack_00000000 = 0x4e40476;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x1e < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x208) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x200) = 0x4e40476;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x208U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x208U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843ca80;
                                                    in_stack_00000000 = 0x4e40477;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x1f < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x218) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x210) = 0x4e40477;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x218U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x218U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843ca88;
                                                    in_stack_00000000 = 0x4e40478;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x20 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x228) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x220) = 0x4e40478;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x228U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x228U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843ca90;
                                                    in_stack_00000000 = 0x4e40479;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x21 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x238) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x230) = 0x4e40479;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x238U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x238U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843ca98;
                                                    in_stack_00000000 = 0x4e4047a;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x22 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x248) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x240) = 0x4e4047a;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x248U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x248U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843caa0;
                                                    in_stack_00000000 = 0x4e4047b;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x23 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 600) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x250) = 0x4e4047b;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 600U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 600U >>
                                                                                     0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843caa8;
                                                    in_stack_00000000 = 0x4e4047c;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x24 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x268) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x260) = 0x4e4047c;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x268U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x268U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cab0;
                                                    in_stack_00000000 = 0x4e4047d;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x25 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x278) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x270) = 0x4e4047d;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x278U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x278U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a030;
                                                    in_stack_00000000 = 0x20004b004b0;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x26 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x288) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x280) = 0x20004b004b0;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x288U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x288U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a038;
                                                    in_stack_00000000 = 0x4b004b1;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x27 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x298) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x290) = 0x4b004b1;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x298U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x298U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845b8e8;
                                                    in_stack_00000000 = 0x30304e204e2;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x28 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x2a8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x2a0) = 0x30304e204e2;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x2a8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x2a8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845b8f0;
                                                    in_stack_00000000 = 0x30304e304e3;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x29 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x2b8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x2b0) = 0x30304e304e3;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x2b8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x2b8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845b8c8;
                                                    in_stack_00000000 = 0x30304e404e4;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x2a < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x2c8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x2c0) = 0x30304e404e4;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x2c8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x2c8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845b8f8;
                                                    in_stack_00000000 = 0x30304e504e5;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x2b < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x2d8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x2d0) = 0x30304e504e5;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x2d8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x2d8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845b900;
                                                    in_stack_00000000 = 0x30304e604e6;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x2c < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x2e8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x2e0) = 0x30304e604e6;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x2e8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x2e8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a5d8;
                                                    in_stack_00000000 = 0x30304e704e7;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x2d < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x2f8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x2f0) = 0x30304e704e7;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x2f8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x2f8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a5e0;
                                                    in_stack_00000000 = 0x30304e804e8;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x2e < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x308) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x300) = 0x30304e804e8;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x308U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x308U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a5e8;
                                                    in_stack_00000000 = 0x30304e904e9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x2f < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x318) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x310) = 0x30304e904e9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x318U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x318U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a5f0;
                                                    in_stack_00000000 = 0x30304ea04ea;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x30 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x328) = uVar9;
                                                    *(undefined8 *)(lVar5 + 800) = 0x30304ea04ea;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x328U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x328U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08455350;
                                                    in_stack_00000000 = 0x4e42710;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x31 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x338) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x330) = 0x4e42710;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x338U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x338U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a8c0;
                                                    in_stack_00000000 = 0x4e4275f;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x32 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x348) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x340) = 0x4e4275f;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x348U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x348U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a040;
                                                    in_stack_00000000 = 0x4b02ee0;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x33 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x358) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x350) = 0x4b02ee0;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x358U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x358U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a048;
                                                    in_stack_00000000 = 0x4b02ee1;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x34 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x368) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x360) = 0x4b02ee1;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x368U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x368U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08459ee8;
                                                    in_stack_00000000 = 0x10104e44e9f;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x35 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x378) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x370) = 0x10104e44e9f;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x378U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x378U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cac8;
                                                    in_stack_00000000 = 0x4e44f31;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x36 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x388) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x380) = 0x4e44f31;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x388U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x388U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cad0;
                                                    in_stack_00000000 = 0x4e44f35;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x37 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x398) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x390) = 0x4e44f35;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x398U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x398U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cad8;
                                                    in_stack_00000000 = 0x4e44f36;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x38 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x3a8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x3a0) = 0x4e44f36;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x3a8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x3a8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cae0;
                                                    in_stack_00000000 = 0x4e44f38;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x39 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x3b8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x3b0) = 0x4e44f38;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x3b8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x3b8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cae8;
                                                    in_stack_00000000 = 0x4e44f3c;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x3a < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x3c8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x3c0) = 0x4e44f3c;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x3c8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x3c8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843caf0;
                                                    in_stack_00000000 = 0x4e44f3d;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x3b < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x3d8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x3d0) = 0x4e44f3d;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x3d8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x3d8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843caf8;
                                                    in_stack_00000000 = 0x3a44f42;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x3c < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 1000) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x3e0) = 0x3a44f42;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 1000U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 1000U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cb00;
                                                    in_stack_00000000 = 0x4e44f49;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x3d < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x3f8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x3f0) = 0x4e44f49;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x3f8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x3f8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cb10;
                                                    in_stack_00000000 = 0x4e84fc4;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x3e < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x408) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x400) = 0x4e84fc4;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x408U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x408U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cb20;
                                                    in_stack_00000000 = 0x4e74fc8;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x3f < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x418) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x410) = 0x4e74fc8;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x418U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x418U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08454878;
                                                    in_stack_00000000 = 0x30304e35182;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x40 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x428) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x420) = 0x30304e35182;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x428U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x428U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843cba0;
                                                    in_stack_00000000 = 0x4e45187;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x41 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x438) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x430) = 0x4e45187;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x438U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x438U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08451360;
                                                    in_stack_00000000 = 0x4e35221;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x42 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x448) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x440) = 0x4e35221;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x448U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x448U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08454888;
                                                    in_stack_00000000 = 0x30304e3556a;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x43 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x458) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x450) = 0x30304e3556a;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x458U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x458U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_084543d0;
                                                    in_stack_00000000 = 0x30304e46faf;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x44 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x468) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x460) = 0x30304e46faf;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x468U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x468U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_084543f0;
                                                    in_stack_00000000 = 0x30304e26fb0;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x45 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x478) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x470) = 0x30304e26fb0;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x478U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x478U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_084543f8;
                                                    in_stack_00000000 = 0x10104e66fb1;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x46 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x488) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x480) = 0x10104e66fb1;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x488U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x488U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08454400;
                                                    in_stack_00000000 = 0x30304e96fb2;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x47 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x498) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x490) = 0x30304e96fb2;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x498U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x498U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08454408;
                                                    in_stack_00000000 = 0x30304e36fb3;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x48 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x4a8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x4a0) = 0x30304e36fb3;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x4a8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x4a8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08454410;
                                                    in_stack_00000000 = 0x30304e86fb4;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x49 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x4b8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x4b0) = 0x30304e86fb4;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x4b8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x4b8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08454418;
                                                    in_stack_00000000 = 0x30304e56fb5;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x4a < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x4c8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x4c0) = 0x30304e56fb5;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x4c8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x4c8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08454420;
                                                    in_stack_00000000 = 0x20204e76fb6;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x4b < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x4d8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x4d0) = 0x20204e76fb6;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x4d8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x4d8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08454430;
                                                    in_stack_00000000 = 0x30304e66fb7;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x4c < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x4e8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x4e0) = 0x30304e66fb7;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x4e8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x4e8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_084543e8;
                                                    in_stack_00000000 = 0x30104e46fbd;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x4d < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x4f8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x4f0) = 0x30104e46fbd;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x4f8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x4f8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08454428;
                                                    in_stack_00000000 = 0x30304e796c6;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x4e < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x508) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x500) = 0x30304e796c6;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x508U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x508U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08454398;
                                                    in_stack_00000000 = 0x10103a4c42c;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x4f < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x518) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x510) = 0x10103a4c42c;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x518U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x518U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845b8d8;
                                                    in_stack_00000000 = 0x30103a4c42d;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x50 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x528) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x520) = 0x30103a4c42d;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x528U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x528U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08454398;
                                                    in_stack_00000000 = 0x3a4c42e;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x51 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x538) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x530) = 0x3a4c42e;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x538U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x538U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08452550;
                                                    in_stack_00000000 = 0x30303a4cadc;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x52 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x548) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x540) = 0x30303a4cadc;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x548U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x548U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_08452558;
                                                    in_stack_00000000 = 0x10103b5caed;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x53 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x558) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x550) = 0x10103b5caed;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x558U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x558U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0843b800;
                                                    in_stack_00000000 = 0x30303a8d698;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x54 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x568) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x560) = 0x30303a8d698;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x568U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x568U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a840;
                                                    in_stack_00000000 = 0xdeaadeaa;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x55 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x578) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x570) = 0xdeaadeaa;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x578U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x578U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a838;
                                                    in_stack_00000000 = 0xdeabdeab;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x56 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x588) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x580) = 0xdeabdeab;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x588U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x588U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a870;
                                                    in_stack_00000000 = 0xdeacdeac;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x57 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x598) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x590) = 0xdeacdeac;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x598U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x598U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a878;
                                                    in_stack_00000000 = 0xdeaddead;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x58 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x5a8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x5a0) = 0xdeaddead;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x5a8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x5a8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a830;
                                                    in_stack_00000000 = 0xdeaedeae;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x59 < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x5b8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x5b0) = 0xdeaedeae;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x5b8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x5b8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a860;
                                                    in_stack_00000000 = 0xdeafdeaf;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x5a < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x5c8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x5c0) = 0xdeafdeaf;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x5c8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x5c8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a850;
                                                    in_stack_00000000 = 0xdeb0deb0;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x5b < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x5d8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x5d0) = 0xdeb0deb0;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x5d8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x5d8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a858;
                                                    in_stack_00000000 = 0xdeb1deb1;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x5c < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x5e8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x5e0) = 0xdeb1deb1;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x5e8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x5e8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a848;
                                                    in_stack_00000000 = 0xdeb2deb2;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x5d < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x5f8) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x5f0) = 0xdeb2deb2;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x5f8U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x5f8U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a868;
                                                    in_stack_00000000 = 0xdeb3deb3;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x5e < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x608) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x600) = 0xdeb3deb3;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x608U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x608U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a050;
                                                    in_stack_00000000 = 0x10104b0fde8;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  if (0x5f < *puVar8) {
                                                    *(undefined8 *)(lVar5 + 0x618) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x610) = 0x10104b0fde8;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x618U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x618U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = DAT_0845a058;
                                                    in_stack_00000000 = 0x30304b0fde9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  }
                                                  uVar10 = *puVar8;
                                                  if (0x60 < uVar10) {
                                                    *(undefined8 *)(lVar5 + 0x628) = uVar9;
                                                    *(undefined8 *)(lVar5 + 0x620) = 0x30304b0fde9;
                                                    if (iVar4 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x628U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x628U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)&stack0x00000008 >>
                                                                          0x12 & 0x7fff) * 8 +
                                                                        0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)&
                                                  stack0x00000008 >> 0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                  } while (cVar2 != '\0');
                                                  uVar10 = *puVar8;
                                                  }
                                                  in_stack_00000008 = 0;
                                                  in_stack_00000000 = 0;
                                                  if (0x61 < uVar10) {
                                                    *(undefined8 *)(lVar5 + 0x630) = 0;
                                                    *(undefined8 *)(lVar5 + 0x638) = 0;
                                                    if (iVar4 == 0) {
                                                      *(long *)(*(long *)(DAT_083cb270 + 0xb8) + 8)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         (lVar5 + 0x638U >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << (lVar5 + 0x638U
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                      plVar7 = (long *)(*(long *)(DAT_083cb270 +
                                                                                 0xb8) + 8);
                                                      *plVar7 = lVar5;
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)plVar7 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)plVar7
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    iVar4 = FUN_067d5128();
                                                    *(int *)(*(long *)(DAT_083cb270 + 0xb8) + 0x10)
                                                         = iVar4 + -1;
                                                    if (*(int *)(DAT_083d1708 + 0xe0) == 0) {
                                                      FUN_033b9870();
                                                    }
                                                    if (DAT_086dd18f == '\0') {
                                                      FUN_0335b6c8(&DAT_083d1708,1);
                                                      DataMemoryBarrier(2,3);
                                                      DAT_086dd18f = '\x01';
                                                    }
                                                    if (*(int *)(DAT_083d1708 + 0xe0) == 0) {
                                                      FUN_033b9870();
                                                    }
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(DAT_083d1708 + 0xb8) + 0x18
                                                              );
                                                    uVar9 = FUN_03398a84(DAT_083bfba8);
                                                    FUN_05da0b68(uVar9,0,uVar12,
                                                                 **(undefined8 **)
                                                                   (*(long *)(DAT_083e34a8 + 0x20) +
                                                                   0xc0));
                                                    puVar11 = (undefined8 *)
                                                              (*(long *)(DAT_083cb270 + 0xb8) + 0x18
                                                              );
                                                    *puVar11 = uVar9;
                                                    if (DAT_08908cd0 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    uVar9 = FUN_03398a84(DAT_083bf600);
                                                    FUN_05cb5088(uVar9,0,0,
                                                                 **(undefined8 **)
                                                                   (*(long *)(DAT_083e18b0 + 0x20) +
                                                                   0xc0));
                                                    puVar11 = (undefined8 *)
                                                              (*(long *)(DAT_083cb270 + 0xb8) + 0x20
                                                              );
                                                    *puVar11 = uVar9;
                                                    if (DAT_08908cd0 != 0) {
                                                      puVar1 = (ulong *)(unaff_x21 +
                                                                         ((ulong)puVar11 >> 0x12 &
                                                                         0x7fff) * 8 + 0x464e0);
                                                      do {
                                                        cVar2 = '\x01';
                                                        bVar3 = (bool)ExclusiveMonitorPass
                                                                                (puVar1,0x10);
                                                        if (bVar3) {
                                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar11
                                                                                     >> 0xc & 0x3f);
                                                          cVar2 = ExclusiveMonitorsStatus();
                                                        }
                                                      } while (cVar2 != '\0');
                                                    }
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


