/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 06ac4e48
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong in_x9;
  long lVar11;
  uint in_w10;
  uint uVar12;
  undefined8 unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  uint *puVar13;
  int *piVar14;
  
  puVar1 = (ulong *)(unaff_x22 + param_1 * 8 + (ulong)(in_w10 & 0xffff | 0x40000));
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 1L << (in_x9 & 0x3f);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  **(undefined8 **)(*(long *)(unaff_x24 + 0xfd0) + 0xb8) = unaff_x19;
  uVar8 = *(ulong *)(*(long *)(unaff_x24 + 0xfd0) + 0xb8);
  puVar1 = (ulong *)(unaff_x22 + (uVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 1L << (uVar8 >> 0xc & 0x3f);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar5 = FUN_03398188(DAT_083c76b0,0x18);
  FUN_06736060(uVar5,DAT_0842c410,0);
  puVar9 = (undefined8 *)(*(long *)(*(long *)(unaff_x24 + 0xfd0) + 0xb8) + 8);
  *puVar9 = uVar5;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0x18);
  FUN_06736060(uVar5,DAT_0842c3b8,0);
  puVar9 = (undefined8 *)(*(long *)(*(long *)(unaff_x24 + 0xfd0) + 0xb8) + 0x10);
  *puVar9 = uVar5;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = FUN_03398188(DAT_083c7288,0x18);
  uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),6);
  FUN_06736060(uVar5,DAT_0842c360,0);
  if (lVar6 == 0) goto LAB_06ac6154;
  puVar13 = (uint *)(lVar6 + 0x18);
  if (*puVar13 != 0) {
    puVar9 = (undefined8 *)(lVar6 + 0x20);
    *puVar9 = uVar5;
    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
      puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0);
    if (1 < *puVar13) {
      puVar9 = (undefined8 *)(lVar6 + 0x28);
      *puVar9 = uVar5;
      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
      if (lVar7 == 0) {
LAB_06ac6154:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 3, 2 < *puVar13)) {
        plVar10 = (long *)(lVar6 + 0x30);
        *plVar10 = lVar7;
        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
          puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
        if (lVar7 == 0) goto LAB_06ac6154;
        if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 4, 3 < *puVar13)) {
          plVar10 = (long *)(lVar6 + 0x38);
          *plVar10 = lVar7;
          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
            puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
          if (lVar7 == 0) goto LAB_06ac6154;
          if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 5, 4 < *puVar13)) {
            plVar10 = (long *)(lVar6 + 0x40);
            *plVar10 = lVar7;
            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
              puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
            if (lVar7 == 0) goto LAB_06ac6154;
            if ((*(int *)(lVar7 + 0x18) != 0) &&
               (*(undefined4 *)(lVar7 + 0x20) = 0x13, 5 < *puVar13)) {
              plVar10 = (long *)(lVar6 + 0x48);
              *plVar10 = lVar7;
              if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar4) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
              if (lVar7 == 0) goto LAB_06ac6154;
              if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 7, 6 < *puVar13)
                 ) {
                plVar10 = (long *)(lVar6 + 0x50);
                *plVar10 = lVar7;
                if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                  puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                if (lVar7 == 0) goto LAB_06ac6154;
                if ((*(int *)(lVar7 + 0x18) != 0) &&
                   (*(undefined4 *)(lVar7 + 0x20) = 8, 7 < *puVar13)) {
                  plVar10 = (long *)(lVar6 + 0x58);
                  *plVar10 = lVar7;
                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                    puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar4) {
                        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                  if (lVar7 == 0) goto LAB_06ac6154;
                  if ((*(int *)(lVar7 + 0x18) != 0) &&
                     (*(undefined4 *)(lVar7 + 0x20) = 0x14, 8 < *puVar13)) {
                    plVar10 = (long *)(lVar6 + 0x60);
                    *plVar10 = lVar7;
                    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                      puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0
                                        );
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                    if (lVar7 == 0) goto LAB_06ac6154;
                    if ((*(int *)(lVar7 + 0x18) != 0) &&
                       (*(undefined4 *)(lVar7 + 0x20) = 10, 9 < *puVar13)) {
                      plVar10 = (long *)(lVar6 + 0x68);
                      *plVar10 = lVar7;
                      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                        puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 +
                                          0x464e0);
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar4) {
                            *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                      if (lVar7 == 0) goto LAB_06ac6154;
                      if ((*(int *)(lVar7 + 0x18) != 0) &&
                         (*(undefined4 *)(lVar7 + 0x20) = 0xb, 10 < *puVar13)) {
                        plVar10 = (long *)(lVar6 + 0x70);
                        *plVar10 = lVar7;
                        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                          puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 +
                                            0x464e0);
                          do {
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar4) {
                              *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                        }
                        lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                        if (lVar7 == 0) goto LAB_06ac6154;
                        if ((*(int *)(lVar7 + 0x18) != 0) &&
                           (*(undefined4 *)(lVar7 + 0x20) = 0x15, 0xb < *puVar13)) {
                          plVar10 = (long *)(lVar6 + 0x78);
                          *plVar10 = lVar7;
                          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                            puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 +
                                              0x464e0);
                            do {
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar4) {
                                *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                          }
                          lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                          if (lVar7 == 0) goto LAB_06ac6154;
                          if ((*(int *)(lVar7 + 0x18) != 0) &&
                             (*(undefined4 *)(lVar7 + 0x20) = 0xd, 0xc < *puVar13)) {
                            plVar10 = (long *)(lVar6 + 0x80);
                            *plVar10 = lVar7;
                            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                              puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 +
                                                0x464e0);
                              do {
                                cVar3 = '\x01';
                                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar4) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                                  cVar3 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar3 != '\0');
                            }
                            lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                            if (lVar7 == 0) goto LAB_06ac6154;
                            if ((*(int *)(lVar7 + 0x18) != 0) &&
                               (*(undefined4 *)(lVar7 + 0x20) = 0xe, 0xd < *puVar13)) {
                              plVar10 = (long *)(lVar6 + 0x88);
                              *plVar10 = lVar7;
                              if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8
                                                  + 0x464e0);
                                do {
                                  cVar3 = '\x01';
                                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                  if (bVar4) {
                                    *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                                    cVar3 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar3 != '\0');
                              }
                              lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                              if (lVar7 == 0) goto LAB_06ac6154;
                              if ((*(int *)(lVar7 + 0x18) != 0) &&
                                 (*(undefined4 *)(lVar7 + 0x20) = 0x16, 0xe < *puVar13)) {
                                plVar10 = (long *)(lVar6 + 0x90);
                                *plVar10 = lVar7;
                                if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                  puVar1 = (ulong *)(unaff_x22 +
                                                     ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0
                                                    );
                                  do {
                                    cVar3 = '\x01';
                                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar4) {
                                      *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                                      cVar3 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar3 != '\0');
                                }
                                lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                if (lVar7 == 0) goto LAB_06ac6154;
                                if ((*(int *)(lVar7 + 0x18) != 0) &&
                                   (*(undefined4 *)(lVar7 + 0x20) = 0x10, 0xf < *puVar13)) {
                                  plVar10 = (long *)(lVar6 + 0x98);
                                  *plVar10 = lVar7;
                                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                    puVar1 = (ulong *)(unaff_x22 +
                                                       ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 +
                                                      0x464e0);
                                    do {
                                      cVar3 = '\x01';
                                      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                      if (bVar4) {
                                        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                                        cVar3 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar3 != '\0');
                                  }
                                  lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                  if (lVar7 == 0) goto LAB_06ac6154;
                                  if ((*(int *)(lVar7 + 0x18) != 0) &&
                                     (*(undefined4 *)(lVar7 + 0x20) = 0x11, 0x10 < *puVar13)) {
                                    plVar10 = (long *)(lVar6 + 0xa0);
                                    *plVar10 = lVar7;
                                    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                      puVar1 = (ulong *)(unaff_x22 +
                                                         ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 +
                                                        0x464e0);
                                      do {
                                        cVar3 = '\x01';
                                        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                        if (bVar4) {
                                          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                    if (lVar7 == 0) goto LAB_06ac6154;
                                    if ((*(int *)(lVar7 + 0x18) != 0) &&
                                       (*(undefined4 *)(lVar7 + 0x20) = 0x12, 0x11 < *puVar13)) {
                                      plVar10 = (long *)(lVar6 + 0xa8);
                                      *plVar10 = lVar7;
                                      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                        puVar1 = (ulong *)(unaff_x22 +
                                                           ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 +
                                                          0x464e0);
                                        do {
                                          cVar3 = '\x01';
                                          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                          if (bVar4) {
                                            *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f)
                                            ;
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                      }
                                      lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                      if (lVar7 == 0) goto LAB_06ac6154;
                                      if ((*(int *)(lVar7 + 0x18) != 0) &&
                                         (*(undefined4 *)(lVar7 + 0x20) = 0x17, 0x12 < *puVar13)) {
                                        plVar10 = (long *)(lVar6 + 0xb0);
                                        *plVar10 = lVar7;
                                        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                          puVar1 = (ulong *)(unaff_x22 +
                                                             ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 +
                                                            0x464e0);
                                          do {
                                            cVar3 = '\x01';
                                            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                            if (bVar4) {
                                              *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc &
                                                                        0x3f);
                                              cVar3 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar3 != '\0');
                                        }
                                        uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0);
                                        if (0x13 < *puVar13) {
                                          puVar9 = (undefined8 *)(lVar6 + 0xb8);
                                          *puVar9 = uVar5;
                                          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                            puVar1 = (ulong *)(unaff_x22 +
                                                               ((ulong)puVar9 >> 0x12 & 0x7fff) * 8
                                                              + 0x464e0);
                                            do {
                                              cVar3 = '\x01';
                                              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                              if (bVar4) {
                                                *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc &
                                                                          0x3f);
                                                cVar3 = ExclusiveMonitorsStatus();
                                              }
                                            } while (cVar3 != '\0');
                                          }
                                          uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0)
                                          ;
                                          if (0x14 < *puVar13) {
                                            puVar9 = (undefined8 *)(lVar6 + 0xc0);
                                            *puVar9 = uVar5;
                                            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                              puVar1 = (ulong *)(unaff_x22 +
                                                                 ((ulong)puVar9 >> 0x12 & 0x7fff) *
                                                                 8 + 0x464e0);
                                              do {
                                                cVar3 = '\x01';
                                                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar4) {
                                                  *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc &
                                                                            0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar3 != '\0');
                                            }
                                            uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),
                                                                 0);
                                            if (0x15 < *puVar13) {
                                              puVar9 = (undefined8 *)(lVar6 + 200);
                                              *puVar9 = uVar5;
                                              if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                puVar1 = (ulong *)(unaff_x22 +
                                                                   ((ulong)puVar9 >> 0x12 & 0x7fff)
                                                                   * 8 + 0x464e0);
                                                do {
                                                  cVar3 = '\x01';
                                                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar4) {
                                                    *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc
                                                                              & 0x3f);
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                              }
                                              uVar5 = FUN_03398188(*(undefined8 *)
                                                                    (unaff_x21 + 0x6b8),0);
                                              if (0x16 < *puVar13) {
                                                puVar9 = (undefined8 *)(lVar6 + 0xd0);
                                                *puVar9 = uVar5;
                                                if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                  puVar1 = (ulong *)(unaff_x22 +
                                                                     ((ulong)puVar9 >> 0x12 & 0x7fff
                                                                     ) * 8 + 0x464e0);
                                                  do {
                                                    cVar3 = '\x01';
                                                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                    if (bVar4) {
                                                      *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >>
                                                                                 0xc & 0x3f);
                                                      cVar3 = ExclusiveMonitorsStatus();
                                                    }
                                                  } while (cVar3 != '\0');
                                                }
                                                uVar5 = FUN_03398188(*(undefined8 *)
                                                                      (unaff_x21 + 0x6b8),0);
                                                if (0x17 < *puVar13) {
                                                  puVar9 = (undefined8 *)(lVar6 + 0xd8);
                                                  *puVar9 = uVar5;
                                                  if (*(int *)(unaff_x23 + 0xcd0) == 0) {
                                                    *(long *)(*(long *)(*(long *)(unaff_x24 + 0xfd0)
                                                                       + 0xb8) + 0x18) = lVar6;
                                                  }
                                                  else {
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)puVar9 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                    plVar10 = (long *)(*(long *)(*(long *)(unaff_x24
                                                                                          + 0xfd0) +
                                                                                0xb8) + 0x18);
                                                    *plVar10 = lVar6;
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)plVar10 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar7 = FUN_03398a84(DAT_083c4710);
                                                  FUN_04a04720(lVar7,DAT_083f1290);
                                                  lVar6 = DAT_083f12a0;
                                                  if (lVar7 != 0) {
                                                    piVar14 = (int *)(lVar7 + 0x1c);
                                                    *piVar14 = *piVar14 + 1;
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    puVar13 = (uint *)(lVar7 + 0x18);
                                                    uVar2 = *puVar13;
                                                    if (lVar11 != 0) {
                                                      uVar12 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar2 < uVar12) {
                                                        *puVar13 = uVar2 + 1;
                                                        *(undefined4 *)
                                                         (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 6;
                                                        *piVar14 = *piVar14 + 1;
                                                      }
                                                      else {
                                                        FUN_04a05144(lVar7,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar6 + 0x20) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_06ac6154;
                                                  uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 7;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_06ac6154;
                                                  uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 8;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_06ac6154;
                                                  uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 9;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_06ac6154;
                                                  uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 10;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar6 + 0x20) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_06ac6154;
                                                  uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 0xb;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_06ac6154;
                                                    uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 0xc;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_06ac6154;
                                                    uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 0xd;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_06ac6154;
                                                    uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 0xe;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_06ac6154;
                                                    uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 0xf;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_06ac6154;
                                                    uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 0x10;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_06ac6154;
                                                    uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 0x11;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_06ac6154;
                                                    uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 0x12;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_06ac6154;
                                                    uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 2;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_06ac6154;
                                                  uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 3;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_06ac6154;
                                                  uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 4;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar11 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_06ac6154;
                                                  uVar12 = *(uint *)(lVar11 + 0x18);
                                                  }
                                                  uVar2 = *puVar13;
                                                  if (uVar2 < uVar12) {
                                                    *puVar13 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar2 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar10 = (long *)(*(long *)(*(long *)(unaff_x24 +
                                                                                        0xfd0) +
                                                                              0xb8) + 0x20);
                                                  *plVar10 = lVar7;
                                                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)plVar10 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  uVar5 = FUN_03398188(*(undefined8 *)
                                                                        (unaff_x21 + 0x6b8),5);
                                                  FUN_06736060(uVar5,DAT_0842c3e0,0);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0xfd0) +
                                                                     0xb8) + 0x28);
                                                  *puVar9 = uVar5;
                                                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)puVar9 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_06ac6154;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


