/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$get_LinePosition
ENTRY_POINT: 067e5740
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonTextReader__get_LinePosition(uint *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int in_w9;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 in_x11;
  undefined8 *puVar11;
  long in_x15;
  long in_x17;
  undefined8 uVar12;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 uStack0000000000000008;
  
  *(undefined8 *)(param_2 + 0x17d8) = in_x11;
  if (in_w9 != 0) {
                    /* try { // try from 067e5748 to 068e5757 has its CatchHandler @ 067e5a24 */
    puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x17d0U >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_2 + 0x17d0U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar9 = DAT_0845a868;
  uStack0000000000000008 = 0xdeb3;
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
  if (0x17c < *param_1) {
    *(undefined8 *)(param_2 + 0x17e0) = uVar9;
    *(undefined8 *)(param_2 + 0x17e8) = 0xdeb3;
    if (in_w9 != 0) {
      puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x17e0U >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (param_2 + 0x17e0U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar9 = DAT_0845a870;
    uStack0000000000000008 = 0xdeac;
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
    if (0x17d < *param_1) {
      *(undefined8 *)(param_2 + 0x17f0) = uVar9;
      *(undefined8 *)(param_2 + 0x17f8) = 0xdeac;
      if (in_w9 != 0) {
        puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x17f0U >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (param_2 + 0x17f0U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar9 = DAT_0845a878;
      uStack0000000000000008 = 0xdead;
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
      if (0x17e < *param_1) {
        *(undefined8 *)(param_2 + 0x1800) = uVar9;
        *(undefined8 *)(param_2 + 0x1808) = 0xdead;
        if (in_w9 != 0) {
          puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x1800U >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << (param_2 + 0x1800U >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar9 = DAT_0845a880;
        uStack0000000000000008 = 0x2714;
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
        if (0x17f < *param_1) {
          *(undefined8 *)(param_2 + 0x1810) = uVar9;
          *(undefined8 *)(param_2 + 0x1818) = 0x2714;
          if (in_w9 != 0) {
            puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x1810U >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << (param_2 + 0x1810U >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uVar9 = DAT_0845a888;
          uStack0000000000000008 = 0x272d;
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
          if (0x180 < *param_1) {
            *(undefined8 *)(param_2 + 0x1820) = uVar9;
            *(undefined8 *)(param_2 + 0x1828) = 0x272d;
            if (in_w9 != 0) {
              puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x1820U >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << (param_2 + 0x1820U >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            uVar9 = DAT_0845a890;
            uStack0000000000000008 = 0x2718;
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
            if (0x181 < *param_1) {
              *(undefined8 *)(param_2 + 0x1830) = uVar9;
              *(undefined8 *)(param_2 + 0x1838) = 0x2718;
              if (in_w9 != 0) {
                puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x1830U >> 0x12 & 0x7fff) * 8 + 0x464e0);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << (param_2 + 0x1830U >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              uVar9 = DAT_0845a898;
              uStack0000000000000008 = 0x2712;
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
              if (0x182 < *param_1) {
                *(undefined8 *)(param_2 + 0x1840) = uVar9;
                *(undefined8 *)(param_2 + 0x1848) = 0x2712;
                if (in_w9 != 0) {
                  puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x1840U >> 0x12 & 0x7fff) * 8 + 0x464e0)
                  ;
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                      *puVar1 = *puVar1 | 1L << (param_2 + 0x1840U >> 0xc & 0x3f);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
                uVar9 = DAT_0845a8a0;
                uStack0000000000000008 = 0x2762;
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
                if (0x183 < *param_1) {
                  *(undefined8 *)(param_2 + 0x1850) = uVar9;
                  *(undefined8 *)(param_2 + 0x1858) = 0x2762;
                  if (in_w9 != 0) {
                    puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x1850U >> 0x12 & 0x7fff) * 8 +
                                      0x464e0);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << (param_2 + 0x1850U >> 0xc & 0x3f);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  uVar9 = DAT_0845a8a8;
                  uStack0000000000000008 = 0x2717;
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
                  if (0x184 < *param_1) {
                    *(undefined8 *)(param_2 + 0x1860) = uVar9;
                    *(undefined8 *)(param_2 + 0x1868) = 0x2717;
                    if (in_w9 != 0) {
                      puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x1860U >> 0x12 & 0x7fff) * 8 +
                                        0x464e0);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                          *puVar1 = *puVar1 | 1L << (param_2 + 0x1860U >> 0xc & 0x3f);
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    uVar9 = DAT_0845a8b0;
                    uStack0000000000000008 = 0x2716;
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
                    if (0x185 < *param_1) {
                      *(undefined8 *)(param_2 + 0x1870) = uVar9;
                      *(undefined8 *)(param_2 + 0x1878) = 0x2716;
                      if (in_w9 != 0) {
                        puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x1870U >> 0x12 & 0x7fff) * 8 +
                                          0x464e0);
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar3) {
                            *puVar1 = *puVar1 | 1L << (param_2 + 0x1870U >> 0xc & 0x3f);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      uVar9 = DAT_0845a8b8;
                      uStack0000000000000008 = 0x2715;
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
                      if (0x186 < *param_1) {
                        *(undefined8 *)(param_2 + 0x1880) = uVar9;
                        *(undefined8 *)(param_2 + 0x1888) = 0x2715;
                        if (in_w9 != 0) {
                          puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x1880U >> 0x12 & 0x7fff) * 8 +
                                            0x464e0);
                          do {
                            cVar2 = '\x01';
                            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar3) {
                              *puVar1 = *puVar1 | 1L << (param_2 + 0x1880U >> 0xc & 0x3f);
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar2 != '\0');
                        }
                        uVar9 = DAT_0845a8c0;
                        uStack0000000000000008 = 0x275f;
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
                        if (0x187 < *param_1) {
                          *(undefined8 *)(param_2 + 0x1890) = uVar9;
                          *(undefined8 *)(param_2 + 0x1898) = 0x275f;
                          if (in_w9 != 0) {
                            puVar1 = (ulong *)(unaff_x21 + (param_2 + 0x1890U >> 0x12 & 0x7fff) * 8
                                              + 0x464e0);
                            do {
                              cVar2 = '\x01';
                              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar3) {
                                *puVar1 = *puVar1 | 1L << (param_2 + 0x1890U >> 0xc & 0x3f);
                                cVar2 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar2 != '\0');
                          }
                          uVar9 = DAT_0845a8c8;
                          uStack0000000000000008 = 0x2711;
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
                          if (0x188 < *param_1) {
                            *(undefined8 *)(param_2 + 0x18a0) = uVar9;
                            *(undefined8 *)(param_2 + 0x18a8) = 0x2711;
                            if (in_w9 != 0) {
                              puVar1 = (ulong *)(unaff_x21 +
                                                 (param_2 + 0x18a0U >> 0x12 & 0x7fff) * 8 + 0x464e0)
                              ;
                              do {
                                cVar2 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar3) {
                                  *puVar1 = *puVar1 | 1L << (param_2 + 0x18a0U >> 0xc & 0x3f);
                                  cVar2 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar2 != '\0');
                            }
                            uVar9 = DAT_0845a8d0;
                            uStack0000000000000008 = 0x2713;
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
                            if (0x189 < *param_1) {
                              *(undefined8 *)(param_2 + 0x18b0) = uVar9;
                              *(undefined8 *)(param_2 + 0x18b8) = 0x2713;
                              if (in_w9 != 0) {
                                puVar1 = (ulong *)(unaff_x21 +
                                                   (param_2 + 0x18b0U >> 0x12 & 0x7fff) * 8 +
                                                  0x464e0);
                                do {
                                  cVar2 = '\x01';
                                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                  if (bVar3) {
                                    *puVar1 = *puVar1 | 1L << (param_2 + 0x18b0U >> 0xc & 0x3f);
                                    cVar2 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar2 != '\0');
                              }
                              uVar9 = DAT_0845a8d8;
                              uStack0000000000000008 = 0x271a;
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
                              if (0x18a < *param_1) {
                                *(undefined8 *)(param_2 + 0x18c0) = uVar9;
                                *(undefined8 *)(param_2 + 0x18c8) = 0x271a;
                                if (in_w9 != 0) {
                                  puVar1 = (ulong *)(unaff_x21 +
                                                     (param_2 + 0x18c0U >> 0x12 & 0x7fff) * 8 +
                                                    0x464e0);
                                  do {
                                    cVar2 = '\x01';
                                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar3) {
                                      *puVar1 = *puVar1 | 1L << (param_2 + 0x18c0U >> 0xc & 0x3f);
                                      cVar2 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar2 != '\0');
                                }
                                uVar9 = DAT_0845a8e0;
                                uStack0000000000000008 = 0x2725;
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
                                if (0x18b < *param_1) {
                                  *(undefined8 *)(param_2 + 0x18d0) = uVar9;
                                  *(undefined8 *)(param_2 + 0x18d8) = 0x2725;
                                  if (in_w9 != 0) {
                                    puVar1 = (ulong *)(unaff_x21 +
                                                       (param_2 + 0x18d0U >> 0x12 & 0x7fff) * 8 +
                                                      0x464e0);
                                    do {
                                      cVar2 = '\x01';
                                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                      if (bVar3) {
                                        *puVar1 = *puVar1 | 1L << (param_2 + 0x18d0U >> 0xc & 0x3f);
                                        cVar2 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar2 != '\0');
                                  }
                                  uVar9 = DAT_0845a8e8;
                                  uStack0000000000000008 = 0x2761;
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
                                  if (0x18c < *param_1) {
                                    *(undefined8 *)(param_2 + 0x18e0) = uVar9;
                                    *(undefined8 *)(param_2 + 0x18e8) = 0x2761;
                                    if (in_w9 != 0) {
                                      puVar1 = (ulong *)(unaff_x21 +
                                                         (param_2 + 0x18e0U >> 0x12 & 0x7fff) * 8 +
                                                        0x464e0);
                                      do {
                                        cVar2 = '\x01';
                                        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                        if (bVar3) {
                                          *puVar1 = *puVar1 | 1L << (param_2 + 0x18e0U >> 0xc & 0x3f
                                                                    );
                                          cVar2 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar2 != '\0');
                                    }
                                    uVar9 = DAT_0845a8f0;
                                    uStack0000000000000008 = 0x2721;
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
                                    if (0x18d < *param_1) {
                                      *(undefined8 *)(param_2 + 0x18f0) = uVar9;
                                      *(undefined8 *)(param_2 + 0x18f8) = 0x2721;
                                      if (in_w9 != 0) {
                                        puVar1 = (ulong *)(unaff_x21 +
                                                           (param_2 + 0x18f0U >> 0x12 & 0x7fff) * 8
                                                          + 0x464e0);
                                        do {
                                          cVar2 = '\x01';
                                          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                          if (bVar3) {
                                            *puVar1 = *puVar1 | 1L << (param_2 + 0x18f0U >> 0xc &
                                                                      0x3f);
                                            cVar2 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar2 != '\0');
                                      }
                                      uVar9 = DAT_0845a908;
                                      uStack0000000000000008 = 0x3a4;
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
                                      if (0x18e < *param_1) {
                                        *(undefined8 *)(param_2 + 0x1900) = uVar9;
                                        *(undefined8 *)(param_2 + 0x1908) = 0x3a4;
                                        if (in_w9 != 0) {
                                          puVar1 = (ulong *)(unaff_x21 +
                                                             (param_2 + 0x1900U >> 0x12 & 0x7fff) *
                                                             8 + 0x464e0);
                                          do {
                                            cVar2 = '\x01';
                                            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                            if (bVar3) {
                                              *puVar1 = *puVar1 | 1L << (param_2 + 0x1900U >> 0xc &
                                                                        0x3f);
                                              cVar2 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar2 != '\0');
                                        }
                                        uVar9 = DAT_0845a930;
                                        uStack0000000000000008 = 0x3a4;
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
                                        if (399 < *param_1) {
                                          *(undefined8 *)(param_2 + 0x1910) = uVar9;
                                          *(undefined8 *)(param_2 + 0x1918) = 0x3a4;
                                          if (in_w9 != 0) {
                                            puVar1 = (ulong *)(unaff_x21 +
                                                               (param_2 + 0x1910U >> 0x12 & 0x7fff)
                                                               * 8 + 0x464e0);
                                            do {
                                              cVar2 = '\x01';
                                              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                              if (bVar3) {
                                                *puVar1 = *puVar1 | 1L << (param_2 + 0x1910U >> 0xc
                                                                          & 0x3f);
                                                cVar2 = ExclusiveMonitorsStatus();
                                              }
                                            } while (cVar2 != '\0');
                                          }
                                          uVar9 = DAT_0845a938;
                                          uStack0000000000000008 = 65000;
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
                                          if (400 < *param_1) {
                                            *(undefined8 *)(param_2 + 0x1920) = uVar9;
                                            *(undefined8 *)(param_2 + 0x1928) = 65000;
                                            if (in_w9 != 0) {
                                              puVar1 = (ulong *)(unaff_x21 +
                                                                 (param_2 + 0x1920U >> 0x12 & 0x7fff
                                                                 ) * 8 + 0x464e0);
                                              do {
                                                cVar2 = '\x01';
                                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar3) {
                                                  *puVar1 = *puVar1 | 1L << (param_2 + 0x1920U >>
                                                                             0xc & 0x3f);
                                                  cVar2 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar2 != '\0');
                                            }
                                            uVar9 = DAT_0845a940;
                                            uStack0000000000000008 = 0xfde9;
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
                                            if (0x191 < *param_1) {
                                              *(undefined8 *)(param_2 + 0x1930) = uVar9;
                                              *(undefined8 *)(param_2 + 0x1938) = 0xfde9;
                                              if (in_w9 != 0) {
                                                puVar1 = (ulong *)(unaff_x21 +
                                                                   (param_2 + 0x1930U >> 0x12 &
                                                                   0x7fff) * 8 + 0x464e0);
                                                do {
                                                  cVar2 = '\x01';
                                                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar3) {
                                                    *puVar1 = *puVar1 | 1L << (param_2 + 0x1930U >>
                                                                               0xc & 0x3f);
                                                    cVar2 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar2 != '\0');
                                              }
                                              uVar9 = DAT_0845a948;
                                              uStack0000000000000008 = 65000;
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
                                              if (0x192 < *param_1) {
                                                *(undefined8 *)(param_2 + 0x1940) = uVar9;
                                                *(undefined8 *)(param_2 + 0x1948) = 65000;
                                                if (in_w9 != 0) {
                                                  puVar1 = (ulong *)(unaff_x21 +
                                                                     (param_2 + 0x1940U >> 0x12 &
                                                                     0x7fff) * 8 + 0x464e0);
                                                  do {
                                                    cVar2 = '\x01';
                                                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                    if (bVar3) {
                                                      *puVar1 = *puVar1 | 1L << (param_2 + 0x1940U
                                                                                 >> 0xc & 0x3f);
                                                      cVar2 = ExclusiveMonitorsStatus();
                                                    }
                                                  } while (cVar2 != '\0');
                                                }
                                                uVar9 = DAT_0845a950;
                                                iVar4 = *(int *)(in_x15 + 0xcd0);
                                                uStack0000000000000008 = 0xfde9;
                                                if (iVar4 != 0) {
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
                                                if (0x193 < *param_1) {
                                                  *(undefined8 *)(param_2 + 0x1950) = uVar9;
                                                  *(undefined8 *)(param_2 + 0x1958) = 0xfde9;
                                                  if (iVar4 != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       (param_2 + 0x1950U >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << (param_2 + 0x1950U
                                                                                   >> 0xc & 0x3f);
                                                        cVar2 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar2 != '\0');
                                                  }
                                                  uVar9 = DAT_0845a958;
                                                  uStack0000000000000008 = 0x3b6;
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
                                                    uVar9 = *(undefined8 *)(unaff_x24 + 0x5f8);
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
                                                  uStack0000000000000008 = 0;
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
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


