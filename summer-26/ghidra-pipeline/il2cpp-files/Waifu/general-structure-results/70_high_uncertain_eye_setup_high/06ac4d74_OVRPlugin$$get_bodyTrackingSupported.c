/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 06ac4d74
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_bodyTrackingSupported(long param_1)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long in_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint *puVar14;
  int *piVar15;
  
  *(int *)(unaff_x19 + 0x18) = (int)in_x10 + 1;
  puVar8 = (undefined8 *)(param_1 + in_x10 * 8 + 0x20);
  *puVar8 = unaff_x20;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar6 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),5);
  FUN_06736060(uVar6,DAT_0842c358,0);
  lVar9 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_06ac6154;
  uVar3 = *(uint *)(unaff_x19 + 0x18);
  if (uVar3 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
    puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
    *puVar8 = uVar6;
    if (*(int *)(unaff_x23 + 0xcd0) == 0) {
      **(long **)(DAT_083cbfd0 + 0xb8) = unaff_x19;
    }
    else {
      puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      **(long **)(DAT_083cbfd0 + 0xb8) = unaff_x19;
LAB_06ac4ea8:
      uVar10 = *(ulong *)(DAT_083cbfd0 + 0xb8);
      puVar1 = (ulong *)(unaff_x22 + (uVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << (uVar10 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    FUN_04ab0e54();
    iVar2 = *(int *)(unaff_x23 + 0xcd0);
    **(long **)(DAT_083cbfd0 + 0xb8) = unaff_x19;
    if (iVar2 != 0) goto LAB_06ac4ea8;
  }
  uVar6 = FUN_03398188(DAT_083c76b0,0x18);
  FUN_06736060(uVar6,DAT_0842c410,0);
  puVar8 = (undefined8 *)(*(long *)(DAT_083cbfd0 + 0xb8) + 8);
  *puVar8 = uVar6;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar6 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0x18);
  FUN_06736060(uVar6,DAT_0842c3b8,0);
  puVar8 = (undefined8 *)(*(long *)(DAT_083cbfd0 + 0xb8) + 0x10);
  *puVar8 = uVar6;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar9 = FUN_03398188(DAT_083c7288,0x18);
  uVar6 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),6);
  FUN_06736060(uVar6,DAT_0842c360,0);
  if (lVar9 == 0) goto LAB_06ac6154;
  puVar14 = (uint *)(lVar9 + 0x18);
  if (*puVar14 != 0) {
    puVar8 = (undefined8 *)(lVar9 + 0x20);
    *puVar8 = uVar6;
    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
      puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar6 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0);
    if (1 < *puVar14) {
      puVar8 = (undefined8 *)(lVar9 + 0x28);
      *puVar8 = uVar6;
      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
      if (lVar7 == 0) {
LAB_06ac6154:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 3, 2 < *puVar14)) {
        plVar11 = (long *)(lVar9 + 0x30);
        *plVar11 = lVar7;
        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
          puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
        if (lVar7 == 0) goto LAB_06ac6154;
        if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 4, 3 < *puVar14)) {
          plVar11 = (long *)(lVar9 + 0x38);
          *plVar11 = lVar7;
          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
            puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
          if (lVar7 == 0) goto LAB_06ac6154;
          if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 5, 4 < *puVar14)) {
            plVar11 = (long *)(lVar9 + 0x40);
            *plVar11 = lVar7;
            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
              puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
            if (lVar7 == 0) goto LAB_06ac6154;
            if ((*(int *)(lVar7 + 0x18) != 0) &&
               (*(undefined4 *)(lVar7 + 0x20) = 0x13, 5 < *puVar14)) {
              plVar11 = (long *)(lVar9 + 0x48);
              *plVar11 = lVar7;
              if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
              if (lVar7 == 0) goto LAB_06ac6154;
              if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 7, 6 < *puVar14)
                 ) {
                plVar11 = (long *)(lVar9 + 0x50);
                *plVar11 = lVar7;
                if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                  puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                if (lVar7 == 0) goto LAB_06ac6154;
                if ((*(int *)(lVar7 + 0x18) != 0) &&
                   (*(undefined4 *)(lVar7 + 0x20) = 8, 7 < *puVar14)) {
                  plVar11 = (long *)(lVar9 + 0x58);
                  *plVar11 = lVar7;
                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                    puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                  if (lVar7 == 0) goto LAB_06ac6154;
                  if ((*(int *)(lVar7 + 0x18) != 0) &&
                     (*(undefined4 *)(lVar7 + 0x20) = 0x14, 8 < *puVar14)) {
                    plVar11 = (long *)(lVar9 + 0x60);
                    *plVar11 = lVar7;
                    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                      puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0
                                        );
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                          *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                    if (lVar7 == 0) goto LAB_06ac6154;
                    if ((*(int *)(lVar7 + 0x18) != 0) &&
                       (*(undefined4 *)(lVar7 + 0x20) = 10, 9 < *puVar14)) {
                      plVar11 = (long *)(lVar9 + 0x68);
                      *plVar11 = lVar7;
                      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                        puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 +
                                          0x464e0);
                        do {
                          cVar4 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar5) {
                            *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                      }
                      lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                      if (lVar7 == 0) goto LAB_06ac6154;
                      if ((*(int *)(lVar7 + 0x18) != 0) &&
                         (*(undefined4 *)(lVar7 + 0x20) = 0xb, 10 < *puVar14)) {
                        plVar11 = (long *)(lVar9 + 0x70);
                        *plVar11 = lVar7;
                        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                          puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 +
                                            0x464e0);
                          do {
                            cVar4 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar5) {
                              *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar4 != '\0');
                        }
                        lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                        if (lVar7 == 0) goto LAB_06ac6154;
                        if ((*(int *)(lVar7 + 0x18) != 0) &&
                           (*(undefined4 *)(lVar7 + 0x20) = 0x15, 0xb < *puVar14)) {
                          plVar11 = (long *)(lVar9 + 0x78);
                          *plVar11 = lVar7;
                          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                            puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 +
                                              0x464e0);
                            do {
                              cVar4 = '\x01';
                              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar5) {
                                *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                cVar4 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar4 != '\0');
                          }
                          lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                          if (lVar7 == 0) goto LAB_06ac6154;
                          if ((*(int *)(lVar7 + 0x18) != 0) &&
                             (*(undefined4 *)(lVar7 + 0x20) = 0xd, 0xc < *puVar14)) {
                            plVar11 = (long *)(lVar9 + 0x80);
                            *plVar11 = lVar7;
                            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                              puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 +
                                                0x464e0);
                              do {
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar5) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                            }
                            lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                            if (lVar7 == 0) goto LAB_06ac6154;
                            if ((*(int *)(lVar7 + 0x18) != 0) &&
                               (*(undefined4 *)(lVar7 + 0x20) = 0xe, 0xd < *puVar14)) {
                              plVar11 = (long *)(lVar9 + 0x88);
                              *plVar11 = lVar7;
                              if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8
                                                  + 0x464e0);
                                do {
                                  cVar4 = '\x01';
                                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                  if (bVar5) {
                                    *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                    cVar4 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar4 != '\0');
                              }
                              lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                              if (lVar7 == 0) goto LAB_06ac6154;
                              if ((*(int *)(lVar7 + 0x18) != 0) &&
                                 (*(undefined4 *)(lVar7 + 0x20) = 0x16, 0xe < *puVar14)) {
                                plVar11 = (long *)(lVar9 + 0x90);
                                *plVar11 = lVar7;
                                if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                  puVar1 = (ulong *)(unaff_x22 +
                                                     ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0
                                                    );
                                  do {
                                    cVar4 = '\x01';
                                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar5) {
                                      *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                      cVar4 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar4 != '\0');
                                }
                                lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                if (lVar7 == 0) goto LAB_06ac6154;
                                if ((*(int *)(lVar7 + 0x18) != 0) &&
                                   (*(undefined4 *)(lVar7 + 0x20) = 0x10, 0xf < *puVar14)) {
                                  plVar11 = (long *)(lVar9 + 0x98);
                                  *plVar11 = lVar7;
                                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                    puVar1 = (ulong *)(unaff_x22 +
                                                       ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 +
                                                      0x464e0);
                                    do {
                                      cVar4 = '\x01';
                                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                      if (bVar5) {
                                        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                        cVar4 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar4 != '\0');
                                  }
                                  lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                  if (lVar7 == 0) goto LAB_06ac6154;
                                  if ((*(int *)(lVar7 + 0x18) != 0) &&
                                     (*(undefined4 *)(lVar7 + 0x20) = 0x11, 0x10 < *puVar14)) {
                                    plVar11 = (long *)(lVar9 + 0xa0);
                                    *plVar11 = lVar7;
                                    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                      puVar1 = (ulong *)(unaff_x22 +
                                                         ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 +
                                                        0x464e0);
                                      do {
                                        cVar4 = '\x01';
                                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                        if (bVar5) {
                                          *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                                          cVar4 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar4 != '\0');
                                    }
                                    lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                    if (lVar7 == 0) goto LAB_06ac6154;
                                    if ((*(int *)(lVar7 + 0x18) != 0) &&
                                       (*(undefined4 *)(lVar7 + 0x20) = 0x12, 0x11 < *puVar14)) {
                                      plVar11 = (long *)(lVar9 + 0xa8);
                                      *plVar11 = lVar7;
                                      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                        puVar1 = (ulong *)(unaff_x22 +
                                                           ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 +
                                                          0x464e0);
                                        do {
                                          cVar4 = '\x01';
                                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                          if (bVar5) {
                                            *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f)
                                            ;
                                            cVar4 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar4 != '\0');
                                      }
                                      lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                      if (lVar7 == 0) goto LAB_06ac6154;
                                      if ((*(int *)(lVar7 + 0x18) != 0) &&
                                         (*(undefined4 *)(lVar7 + 0x20) = 0x17, 0x12 < *puVar14)) {
                                        plVar11 = (long *)(lVar9 + 0xb0);
                                        *plVar11 = lVar7;
                                        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                          puVar1 = (ulong *)(unaff_x22 +
                                                             ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 +
                                                            0x464e0);
                                          do {
                                            cVar4 = '\x01';
                                            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                            if (bVar5) {
                                              *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc &
                                                                        0x3f);
                                              cVar4 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar4 != '\0');
                                        }
                                        uVar6 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0);
                                        if (0x13 < *puVar14) {
                                          puVar8 = (undefined8 *)(lVar9 + 0xb8);
                                          *puVar8 = uVar6;
                                          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                            puVar1 = (ulong *)(unaff_x22 +
                                                               ((ulong)puVar8 >> 0x12 & 0x7fff) * 8
                                                              + 0x464e0);
                                            do {
                                              cVar4 = '\x01';
                                              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                              if (bVar5) {
                                                *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc &
                                                                          0x3f);
                                                cVar4 = ExclusiveMonitorsStatus();
                                              }
                                            } while (cVar4 != '\0');
                                          }
                                          uVar6 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0)
                                          ;
                                          if (0x14 < *puVar14) {
                                            puVar8 = (undefined8 *)(lVar9 + 0xc0);
                                            *puVar8 = uVar6;
                                            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                              puVar1 = (ulong *)(unaff_x22 +
                                                                 ((ulong)puVar8 >> 0x12 & 0x7fff) *
                                                                 8 + 0x464e0);
                                              do {
                                                cVar4 = '\x01';
                                                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar5) {
                                                  *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc &
                                                                            0x3f);
                                                  cVar4 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar4 != '\0');
                                            }
                                            uVar6 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),
                                                                 0);
                                            if (0x15 < *puVar14) {
                                              puVar8 = (undefined8 *)(lVar9 + 200);
                                              *puVar8 = uVar6;
                                              if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                puVar1 = (ulong *)(unaff_x22 +
                                                                   ((ulong)puVar8 >> 0x12 & 0x7fff)
                                                                   * 8 + 0x464e0);
                                                do {
                                                  cVar4 = '\x01';
                                                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar5) {
                                                    *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc
                                                                              & 0x3f);
                                                    cVar4 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar4 != '\0');
                                              }
                                              uVar6 = FUN_03398188(*(undefined8 *)
                                                                    (unaff_x21 + 0x6b8),0);
                                              if (0x16 < *puVar14) {
                                                puVar8 = (undefined8 *)(lVar9 + 0xd0);
                                                *puVar8 = uVar6;
                                                if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                  puVar1 = (ulong *)(unaff_x22 +
                                                                     ((ulong)puVar8 >> 0x12 & 0x7fff
                                                                     ) * 8 + 0x464e0);
                                                  do {
                                                    cVar4 = '\x01';
                                                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                    if (bVar5) {
                                                      *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >>
                                                                                 0xc & 0x3f);
                                                      cVar4 = ExclusiveMonitorsStatus();
                                                    }
                                                  } while (cVar4 != '\0');
                                                }
                                                uVar6 = FUN_03398188(*(undefined8 *)
                                                                      (unaff_x21 + 0x6b8),0);
                                                if (0x17 < *puVar14) {
                                                  puVar8 = (undefined8 *)(lVar9 + 0xd8);
                                                  *puVar8 = uVar6;
                                                  if (*(int *)(unaff_x23 + 0xcd0) == 0) {
                                                    *(long *)(*(long *)(DAT_083cbfd0 + 0xb8) + 0x18)
                                                         = lVar9;
                                                  }
                                                  else {
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)puVar8 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar4 = '\x01';
                                                      bVar5 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar5) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >>
                                                                                   0xc & 0x3f);
                                                        cVar4 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar4 != '\0');
                                                    plVar11 = (long *)(*(long *)(DAT_083cbfd0 + 0xb8
                                                                                ) + 0x18);
                                                    *plVar11 = lVar9;
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)plVar11 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar4 = '\x01';
                                                      bVar5 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar5) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >>
                                                                                   0xc & 0x3f);
                                                        cVar4 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar4 != '\0');
                                                  }
                                                  lVar7 = FUN_03398a84(DAT_083c4710);
                                                  FUN_04a04720(lVar7,DAT_083f1290);
                                                  lVar9 = DAT_083f12a0;
                                                  if (lVar7 != 0) {
                                                    piVar15 = (int *)(lVar7 + 0x1c);
                                                    *piVar15 = *piVar15 + 1;
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    puVar14 = (uint *)(lVar7 + 0x18);
                                                    uVar3 = *puVar14;
                                                    if (lVar12 != 0) {
                                                      uVar13 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar3 < uVar13) {
                                                        *puVar14 = uVar3 + 1;
                                                        *(undefined4 *)
                                                         (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 6;
                                                        *piVar15 = *piVar15 + 1;
                                                      }
                                                      else {
                                                        FUN_04a05144(lVar7,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = DAT_083f12a0;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_06ac6154;
                                                  uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 7;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = DAT_083f12a0;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_06ac6154;
                                                  uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 8;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = DAT_083f12a0;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_06ac6154;
                                                  uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 9;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = DAT_083f12a0;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_06ac6154;
                                                  uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 10;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = DAT_083f12a0;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_06ac6154;
                                                  uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 0xb;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = DAT_083f12a0;
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_06ac6154;
                                                    uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 0xc;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = DAT_083f12a0;
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_06ac6154;
                                                    uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 0xd;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = DAT_083f12a0;
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_06ac6154;
                                                    uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 0xe;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = DAT_083f12a0;
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_06ac6154;
                                                    uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 0xf;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = DAT_083f12a0;
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_06ac6154;
                                                    uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 0x10;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = DAT_083f12a0;
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_06ac6154;
                                                    uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 0x11;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = DAT_083f12a0;
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_06ac6154;
                                                    uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 0x12;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = DAT_083f12a0;
                                                    lVar12 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar12 == 0) goto LAB_06ac6154;
                                                    uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 2;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = DAT_083f12a0;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_06ac6154;
                                                  uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 3;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = DAT_083f12a0;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_06ac6154;
                                                  uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 4;
                                                    *piVar15 = *piVar15 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = DAT_083f12a0;
                                                  lVar12 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar12 == 0) goto LAB_06ac6154;
                                                  uVar13 = *(uint *)(lVar12 + 0x18);
                                                  }
                                                  uVar3 = *puVar14;
                                                  if (uVar3 < uVar13) {
                                                    *puVar14 = uVar3 + 1;
                                                    *(undefined4 *)
                                                     (lVar12 + (long)(int)uVar3 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar11 = (long *)(*(long *)(DAT_083cbfd0 + 0xb8)
                                                                    + 0x20);
                                                  *plVar11 = lVar7;
                                                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)plVar11 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar4 = '\x01';
                                                      bVar5 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar5) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >>
                                                                                   0xc & 0x3f);
                                                        cVar4 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar4 != '\0');
                                                  }
                                                  uVar6 = FUN_03398188(*(undefined8 *)
                                                                        (unaff_x21 + 0x6b8),5);
                                                  FUN_06736060(uVar6,DAT_0842c3e0,0);
                                                  puVar8 = (undefined8 *)
                                                           (*(long *)(DAT_083cbfd0 + 0xb8) + 0x28);
                                                  *puVar8 = uVar6;
                                                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)puVar8 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar4 = '\x01';
                                                      bVar5 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar5) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >>
                                                                                   0xc & 0x3f);
                                                        cVar4 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar4 != '\0');
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


