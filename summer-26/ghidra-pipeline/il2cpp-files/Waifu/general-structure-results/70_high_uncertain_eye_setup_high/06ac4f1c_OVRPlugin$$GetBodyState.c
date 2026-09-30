/*
FUNCTION_NAME: OVRPlugin$$GetBodyState
ENTRY_POINT: 06ac4f1c
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBodyState(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined8 unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  uint *puVar12;
  int *piVar13;
  
  puVar8 = (undefined8 *)(param_1 + 8);
  *puVar8 = unaff_x19;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0x18);
  FUN_06736060(uVar5,DAT_0842c3b8,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)(unaff_x24 + 0xfd0) + 0xb8) + 0x10);
  *puVar8 = uVar5;
  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = FUN_03398188(DAT_083c7288,0x18);
  uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),6);
  FUN_06736060(uVar5,DAT_0842c360,0);
  if (lVar6 == 0) goto LAB_06ac6154;
  puVar12 = (uint *)(lVar6 + 0x18);
  if (*puVar12 != 0) {
    puVar8 = (undefined8 *)(lVar6 + 0x20);
    *puVar8 = uVar5;
                    /* try { // try from 06ac500c to 06bc5013 has its CatchHandler @ 06ac5120 */
    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                    /* try { // try from 06ac5020 to 06bc5023 has its CatchHandler @ 06ac511c */
      puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0);
    if (1 < *puVar12) {
                    /* try { // try from 06ac505c to 06bc5087 has its CatchHandler @ 06ac5124 */
      puVar8 = (undefined8 *)(lVar6 + 0x28);
      *puVar8 = uVar5;
      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
                    /* try { // try from 06ac508c to 06bc508f has its CatchHandler @ 06ac5118 */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
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
                    /* try { // try from 06ac50c4 to 06bc50ef has its CatchHandler @ 06ac5114 */
      if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 3, 2 < *puVar12)) {
        plVar9 = (long *)(lVar6 + 0x30);
        *plVar9 = lVar7;
        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                    /* try { // try from 06ac50f0 to 06bc50f7 has its CatchHandler @ 06ac5110 */
          puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
                    /* try { // try from 06ac50fc to 06bc5107 has its CatchHandler @ 06ac510c */
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
                    /* try { // try from 06ac5108 to 06bc5133 has its CatchHandler @ 06ac4ac8 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac50fc with catch @ 06ac510c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac50f0 with catch @ 06ac5110
                        */
        lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac50c4 with catch @ 06ac5114
                        */
        if (lVar7 == 0) goto LAB_06ac6154;
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac508c with catch @ 06ac5118
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac5020 with catch @ 06ac511c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac500c with catch @ 06ac5120
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac505c with catch @ 06ac5124
                        */
        if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 4, 3 < *puVar12)) {
                    /* try { // try from 06ac5134 to 06bc5137 has its CatchHandler @ 06ac524c */
                    /* try { // try from 06ac5138 to 06bc5253 has its CatchHandler @ 06ac4ac8 */
          plVar9 = (long *)(lVar6 + 0x38);
          *plVar9 = lVar7;
          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
            puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
          if (lVar7 == 0) goto LAB_06ac6154;
          if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 5, 4 < *puVar12)) {
            plVar9 = (long *)(lVar6 + 0x40);
            *plVar9 = lVar7;
            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
              puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
            if (lVar7 == 0) goto LAB_06ac6154;
            if ((*(int *)(lVar7 + 0x18) != 0) &&
               (*(undefined4 *)(lVar7 + 0x20) = 0x13, 5 < *puVar12)) {
              plVar9 = (long *)(lVar6 + 0x48);
              *plVar9 = lVar7;
              if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar4) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
                    /* catch() { ... } // from try @ 06ac5134 with catch @ 06ac524c */
                    /* try { // try from 06ac5254 to 06bc525b has its CatchHandler @ 06ac525c */
              lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
              if (lVar7 == 0) goto LAB_06ac6154;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06ac5254 with catch @ 06ac525c
                        */
              if ((*(int *)(lVar7 + 0x18) != 0) && (*(undefined4 *)(lVar7 + 0x20) = 7, 6 < *puVar12)
                 ) {
                plVar9 = (long *)(lVar6 + 0x50);
                *plVar9 = lVar7;
                if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                  puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                if (lVar7 == 0) goto LAB_06ac6154;
                if ((*(int *)(lVar7 + 0x18) != 0) &&
                   (*(undefined4 *)(lVar7 + 0x20) = 8, 7 < *puVar12)) {
                  plVar9 = (long *)(lVar6 + 0x58);
                  *plVar9 = lVar7;
                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                    puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar4) {
                        *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                  if (lVar7 == 0) goto LAB_06ac6154;
                  if ((*(int *)(lVar7 + 0x18) != 0) &&
                     (*(undefined4 *)(lVar7 + 0x20) = 0x14, 8 < *puVar12)) {
                    plVar9 = (long *)(lVar6 + 0x60);
                    *plVar9 = lVar7;
                    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                      puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0)
                      ;
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                          *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                    if (lVar7 == 0) goto LAB_06ac6154;
                    if ((*(int *)(lVar7 + 0x18) != 0) &&
                       (*(undefined4 *)(lVar7 + 0x20) = 10, 9 < *puVar12)) {
                      plVar9 = (long *)(lVar6 + 0x68);
                      *plVar9 = lVar7;
                      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                        puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 +
                                          0x464e0);
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar4) {
                            *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                      if (lVar7 == 0) goto LAB_06ac6154;
                      if ((*(int *)(lVar7 + 0x18) != 0) &&
                         (*(undefined4 *)(lVar7 + 0x20) = 0xb, 10 < *puVar12)) {
                        plVar9 = (long *)(lVar6 + 0x70);
                        *plVar9 = lVar7;
                        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                          puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 +
                                            0x464e0);
                          do {
                            cVar3 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar4) {
                              *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                        }
                        lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                        if (lVar7 == 0) goto LAB_06ac6154;
                        if ((*(int *)(lVar7 + 0x18) != 0) &&
                           (*(undefined4 *)(lVar7 + 0x20) = 0x15, 0xb < *puVar12)) {
                          plVar9 = (long *)(lVar6 + 0x78);
                          *plVar9 = lVar7;
                          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                            puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 +
                                              0x464e0);
                            do {
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar4) {
                                *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                          }
                          lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                          if (lVar7 == 0) goto LAB_06ac6154;
                          if ((*(int *)(lVar7 + 0x18) != 0) &&
                             (*(undefined4 *)(lVar7 + 0x20) = 0xd, 0xc < *puVar12)) {
                            plVar9 = (long *)(lVar6 + 0x80);
                            *plVar9 = lVar7;
                            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                              puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 +
                                                0x464e0);
                              do {
                                cVar3 = '\x01';
                                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar4) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                                  cVar3 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar3 != '\0');
                            }
                            lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                            if (lVar7 == 0) goto LAB_06ac6154;
                            if ((*(int *)(lVar7 + 0x18) != 0) &&
                               (*(undefined4 *)(lVar7 + 0x20) = 0xe, 0xd < *puVar12)) {
                              plVar9 = (long *)(lVar6 + 0x88);
                              *plVar9 = lVar7;
                              if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                puVar1 = (ulong *)(unaff_x22 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8
                                                  + 0x464e0);
                                do {
                                  cVar3 = '\x01';
                                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                  if (bVar4) {
                                    *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                                    cVar3 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar3 != '\0');
                              }
                              lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                              if (lVar7 == 0) goto LAB_06ac6154;
                              if ((*(int *)(lVar7 + 0x18) != 0) &&
                                 (*(undefined4 *)(lVar7 + 0x20) = 0x16, 0xe < *puVar12)) {
                                plVar9 = (long *)(lVar6 + 0x90);
                                *plVar9 = lVar7;
                                if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                  puVar1 = (ulong *)(unaff_x22 +
                                                     ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0)
                                  ;
                                  do {
                                    cVar3 = '\x01';
                                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar4) {
                                      *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                                      cVar3 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar3 != '\0');
                                }
                                lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                if (lVar7 == 0) goto LAB_06ac6154;
                                if ((*(int *)(lVar7 + 0x18) != 0) &&
                                   (*(undefined4 *)(lVar7 + 0x20) = 0x10, 0xf < *puVar12)) {
                                  plVar9 = (long *)(lVar6 + 0x98);
                                  *plVar9 = lVar7;
                                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                    puVar1 = (ulong *)(unaff_x22 +
                                                       ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 +
                                                      0x464e0);
                                    do {
                                      cVar3 = '\x01';
                                      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                      if (bVar4) {
                                        *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                                        cVar3 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar3 != '\0');
                                  }
                                  lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                  if (lVar7 == 0) goto LAB_06ac6154;
                                  if ((*(int *)(lVar7 + 0x18) != 0) &&
                                     (*(undefined4 *)(lVar7 + 0x20) = 0x11, 0x10 < *puVar12)) {
                                    plVar9 = (long *)(lVar6 + 0xa0);
                                    *plVar9 = lVar7;
                                    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                      puVar1 = (ulong *)(unaff_x22 +
                                                         ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 +
                                                        0x464e0);
                                      do {
                                        cVar3 = '\x01';
                                        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                        if (bVar4) {
                                          *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                                          cVar3 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar3 != '\0');
                                    }
                                    lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                    if (lVar7 == 0) goto LAB_06ac6154;
                                    if ((*(int *)(lVar7 + 0x18) != 0) &&
                                       (*(undefined4 *)(lVar7 + 0x20) = 0x12, 0x11 < *puVar12)) {
                                      plVar9 = (long *)(lVar6 + 0xa8);
                                      *plVar9 = lVar7;
                                      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                        puVar1 = (ulong *)(unaff_x22 +
                                                           ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 +
                                                          0x464e0);
                                        do {
                                          cVar3 = '\x01';
                                          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                          if (bVar4) {
                                            *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                                            cVar3 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar3 != '\0');
                                      }
                                      lVar7 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),1);
                                      if (lVar7 == 0) goto LAB_06ac6154;
                                      if ((*(int *)(lVar7 + 0x18) != 0) &&
                                         (*(undefined4 *)(lVar7 + 0x20) = 0x17, 0x12 < *puVar12)) {
                                        plVar9 = (long *)(lVar6 + 0xb0);
                                        *plVar9 = lVar7;
                                        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                          puVar1 = (ulong *)(unaff_x22 +
                                                             ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 +
                                                            0x464e0);
                                          do {
                                            cVar3 = '\x01';
                                            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                            if (bVar4) {
                                              *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f
                                                                        );
                                              cVar3 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar3 != '\0');
                                        }
                                        uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0);
                                        if (0x13 < *puVar12) {
                                          puVar8 = (undefined8 *)(lVar6 + 0xb8);
                                          *puVar8 = uVar5;
                                          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                            puVar1 = (ulong *)(unaff_x22 +
                                                               ((ulong)puVar8 >> 0x12 & 0x7fff) * 8
                                                              + 0x464e0);
                                            do {
                                              cVar3 = '\x01';
                                              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                              if (bVar4) {
                                                *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc &
                                                                          0x3f);
                                                cVar3 = ExclusiveMonitorsStatus();
                                              }
                                            } while (cVar3 != '\0');
                                          }
                                          uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),0)
                                          ;
                                          if (0x14 < *puVar12) {
                                            puVar8 = (undefined8 *)(lVar6 + 0xc0);
                                            *puVar8 = uVar5;
                                            if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                              puVar1 = (ulong *)(unaff_x22 +
                                                                 ((ulong)puVar8 >> 0x12 & 0x7fff) *
                                                                 8 + 0x464e0);
                                              do {
                                                cVar3 = '\x01';
                                                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar4) {
                                                  *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc &
                                                                            0x3f);
                                                  cVar3 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar3 != '\0');
                                            }
                                            uVar5 = FUN_03398188(*(undefined8 *)(unaff_x21 + 0x6b8),
                                                                 0);
                                            if (0x15 < *puVar12) {
                                              puVar8 = (undefined8 *)(lVar6 + 200);
                                              *puVar8 = uVar5;
                                              if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                puVar1 = (ulong *)(unaff_x22 +
                                                                   ((ulong)puVar8 >> 0x12 & 0x7fff)
                                                                   * 8 + 0x464e0);
                                                do {
                                                  cVar3 = '\x01';
                                                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar4) {
                                                    *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc
                                                                              & 0x3f);
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                              }
                                              uVar5 = FUN_03398188(*(undefined8 *)
                                                                    (unaff_x21 + 0x6b8),0);
                                              if (0x16 < *puVar12) {
                                                puVar8 = (undefined8 *)(lVar6 + 0xd0);
                                                *puVar8 = uVar5;
                                                if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                  puVar1 = (ulong *)(unaff_x22 +
                                                                     ((ulong)puVar8 >> 0x12 & 0x7fff
                                                                     ) * 8 + 0x464e0);
                                                  do {
                                                    cVar3 = '\x01';
                                                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                    if (bVar4) {
                                                      *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >>
                                                                                 0xc & 0x3f);
                                                      cVar3 = ExclusiveMonitorsStatus();
                                                    }
                                                  } while (cVar3 != '\0');
                                                }
                                                uVar5 = FUN_03398188(*(undefined8 *)
                                                                      (unaff_x21 + 0x6b8),0);
                                                if (0x17 < *puVar12) {
                                                  puVar8 = (undefined8 *)(lVar6 + 0xd8);
                                                  *puVar8 = uVar5;
                                                  if (*(int *)(unaff_x23 + 0xcd0) == 0) {
                                                    *(long *)(*(long *)(*(long *)(unaff_x24 + 0xfd0)
                                                                       + 0xb8) + 0x18) = lVar6;
                                                  }
                                                  else {
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)puVar8 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                    plVar9 = (long *)(*(long *)(*(long *)(unaff_x24
                                                                                         + 0xfd0) +
                                                                               0xb8) + 0x18);
                                                    *plVar9 = lVar6;
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)plVar9 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  lVar7 = FUN_03398a84(DAT_083c4710);
                                                  FUN_04a04720(lVar7,DAT_083f1290);
                                                  lVar6 = DAT_083f12a0;
                                                  if (lVar7 != 0) {
                                                    piVar13 = (int *)(lVar7 + 0x1c);
                                                    *piVar13 = *piVar13 + 1;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    puVar12 = (uint *)(lVar7 + 0x18);
                                                    uVar2 = *puVar12;
                                                    if (lVar10 != 0) {
                                                      uVar11 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < uVar11) {
                                                        *puVar12 = uVar2 + 1;
                                                        *(undefined4 *)
                                                         (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 6;
                                                        *piVar13 = *piVar13 + 1;
                                                      }
                                                      else {
                                                        FUN_04a05144(lVar7,6,*(undefined8 *)
                                                                              (*(long *)(*(long *)(
                                                  lVar6 + 0x20) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_06ac6154;
                                                  uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 7;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_06ac6154;
                                                  uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 8;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_06ac6154;
                                                  uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 9;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_06ac6154;
                                                  uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 10;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar6 + 0x20) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_06ac6154;
                                                  uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 0xb;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_06ac6154;
                                                    uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 0xc;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_06ac6154;
                                                    uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 0xd;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_06ac6154;
                                                    uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 0xe;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_06ac6154;
                                                    uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 0xf;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_06ac6154;
                                                    uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 0x10;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_06ac6154;
                                                    uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 0x11;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_06ac6154;
                                                    uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 0x12;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar6 = DAT_083f12a0;
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_06ac6154;
                                                    uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 2;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_06ac6154;
                                                  uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 3;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_06ac6154;
                                                  uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 4;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar6 = DAT_083f12a0;
                                                  lVar10 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_06ac6154;
                                                  uVar11 = *(uint *)(lVar10 + 0x18);
                                                  }
                                                  uVar2 = *puVar12;
                                                  if (uVar2 < uVar11) {
                                                    *puVar12 = uVar2 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar2 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_04a05144(lVar7,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar6
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar9 = (long *)(*(long *)(*(long *)(unaff_x24 +
                                                                                       0xfd0) + 0xb8
                                                                             ) + 0x20);
                                                  *plVar9 = lVar7;
                                                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)plVar9 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >>
                                                                                   0xc & 0x3f);
                                                        cVar3 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar3 != '\0');
                                                  }
                                                  uVar5 = FUN_03398188(*(undefined8 *)
                                                                        (unaff_x21 + 0x6b8),5);
                                                  FUN_06736060(uVar5,DAT_0842c3e0,0);
                                                  puVar8 = (undefined8 *)
                                                           (*(long *)(*(long *)(unaff_x24 + 0xfd0) +
                                                                     0xb8) + 0x28);
                                                  *puVar8 = uVar5;
                                                  if (*(int *)(unaff_x23 + 0xcd0) != 0) {
                                                    puVar1 = (ulong *)(unaff_x22 +
                                                                       ((ulong)puVar8 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar3 = '\x01';
                                                      bVar4 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar4) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >>
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


