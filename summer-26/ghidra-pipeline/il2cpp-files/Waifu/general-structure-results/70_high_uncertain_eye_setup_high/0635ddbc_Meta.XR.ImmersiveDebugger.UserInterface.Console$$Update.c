/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$Update
ENTRY_POINT: 0635ddbc
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__Update(ulong *param_1)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong in_x9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong in_x10;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  
  while( true ) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = in_x10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
    in_x10 = *param_1 | in_x9;
  }
  lVar6 = FUN_03398a84(DAT_083c9890);
  *(undefined4 *)(lVar6 + 0x10) = 1;
  plVar10 = (long *)(unaff_x19 + 0x38);
  *plVar10 = lVar6;
  iVar2 = *(int *)(unaff_x22 + 0xcd0);
  if (iVar2 != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if (lVar6 != 0) {
    lVar9 = *plVar10;
    lVar11 = *(long *)(lVar6 + 0x10);
    lVar13 = *(long *)(unaff_x20 + 0x4c0);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar11 != 0) {
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar3 + 1;
        plVar10 = (long *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
        *plVar10 = lVar9;
        if (iVar2 != 0) {
          puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
                    /* try { // try from 0635dea8 to 0645deaf has its CatchHandler @ 0635df3c */
        FUN_04ab0e54(lVar6,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
                    /* try { // try from 0635dec4 to 0645decb has its CatchHandler @ 0635df34 */
        FUN_05fd5ad4();
                    /* try { // try from 0635dee4 to 0645deeb has its CatchHandler @ 0635df38 */
        in_stack_00000038 = 0;
        in_stack_00000030 = 0;
        in_stack_00000040 = (long *)0x0;
                    /* try { // try from 0635df08 to 0645df1b has its CatchHandler @ 0635df28 */
        while (uVar7 = FUN_05fd5b44(&stack0x00000030,DAT_083e6fc0), (uVar7 & 1) != 0) {
          if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          plVar10 = in_stack_00000040 + 3;
          *plVar10 = *(long *)(unaff_x19 + 0x10);
          if (*(int *)(unaff_x22 + 0xcd0) != 0) {
            puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          (**(code **)(*in_stack_00000040 + 0x178))
                    (in_stack_00000040,*(undefined8 *)(*in_stack_00000040 + 0x180));
        }
        uVar8 = FUN_03398a84(DAT_083d0818);
        puVar12 = (undefined8 *)(unaff_x19 + 0x90);
        *puVar12 = uVar8;
        iVar2 = *(int *)(unaff_x22 + 0xcd0);
        if (iVar2 != 0) {
          puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar6 = DAT_083f34d8;
        lVar9 = *(long *)(unaff_x19 + 0x88);
        if (lVar9 != 0) {
          uVar8 = *puVar12;
          lVar11 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar3 = *(uint *)(lVar9 + 0x18);
            if (uVar3 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar3 + 1;
              puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
              *puVar12 = uVar8;
              if (iVar2 != 0) {
                puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
            }
            else {
              FUN_04ab0e54(lVar9,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            uVar8 = FUN_03398a84(DAT_083d2db8);
            puVar12 = (undefined8 *)(unaff_x19 + 0x98);
            *puVar12 = uVar8;
            iVar2 = *(int *)(unaff_x22 + 0xcd0);
            if (iVar2 != 0) {
              puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            lVar6 = DAT_083f34d8;
            lVar9 = *(long *)(unaff_x19 + 0x88);
            if (lVar9 != 0) {
              uVar8 = *puVar12;
              lVar11 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar3 = *(uint *)(lVar9 + 0x18);
                if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                  puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                  *puVar12 = uVar8;
                  if (iVar2 != 0) {
                    puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                }
                else {
                  FUN_04ab0e54(lVar9,uVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                }
                uVar8 = FUN_03398a84(DAT_083cea88);
                FUN_0637acdc(uVar8,0);
                puVar12 = (undefined8 *)(unaff_x19 + 0xa0);
                *puVar12 = uVar8;
                iVar2 = *(int *)(unaff_x22 + 0xcd0);
                if (iVar2 != 0) {
                  puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                lVar6 = DAT_083f34d8;
                lVar9 = *(long *)(unaff_x19 + 0x88);
                if (lVar9 != 0) {
                  uVar8 = *puVar12;
                  lVar11 = *(long *)(lVar9 + 0x10);
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar11 != 0) {
                    uVar3 = *(uint *)(lVar9 + 0x18);
                    if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                      puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                      *puVar12 = uVar8;
                      if (iVar2 != 0) {
                        puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 +
                                          0x464e0);
                        do {
                          cVar4 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar5) {
                            *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                      }
                    }
                    else {
                      FUN_04ab0e54(lVar9,uVar8,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    uVar8 = FUN_03398a84(DAT_083d1400);
                    FUN_0637de04(uVar8,0);
                    puVar12 = (undefined8 *)(unaff_x19 + 0xa8);
                    *puVar12 = uVar8;
                    iVar2 = *(int *)(unaff_x22 + 0xcd0);
                    if (iVar2 != 0) {
                      puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x464e0
                                        );
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                          *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    lVar6 = DAT_083f34d8;
                    lVar9 = *(long *)(unaff_x19 + 0x88);
                    if (lVar9 != 0) {
                      uVar8 = *puVar12;
                      lVar11 = *(long *)(lVar9 + 0x10);
                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                      if (lVar11 != 0) {
                        uVar3 = *(uint *)(lVar9 + 0x18);
                        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                          puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                          *puVar12 = uVar8;
                          if (iVar2 != 0) {
                            puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 +
                                              0x464e0);
                            do {
                              cVar4 = '\x01';
                              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar5) {
                                *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                                cVar4 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar4 != '\0');
                          }
                        }
                        else {
                          FUN_04ab0e54(lVar9,uVar8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                        }
                        uVar8 = FUN_03398a84(DAT_083c8688);
                        puVar12 = (undefined8 *)(unaff_x19 + 0xb0);
                        *puVar12 = uVar8;
                        iVar2 = *(int *)(unaff_x22 + 0xcd0);
                        if (iVar2 != 0) {
                          puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 +
                                            0x464e0);
                          do {
                            cVar4 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar5) {
                              *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar4 != '\0');
                        }
                        lVar6 = DAT_083f34d8;
                        lVar9 = *(long *)(unaff_x19 + 0x88);
                        if (lVar9 != 0) {
                          uVar8 = *puVar12;
                          lVar11 = *(long *)(lVar9 + 0x10);
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar11 != 0) {
                            uVar3 = *(uint *)(lVar9 + 0x18);
                            if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                              puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                              *puVar12 = uVar8;
                              if (iVar2 != 0) {
                                puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8
                                                  + 0x464e0);
                                do {
                                  cVar4 = '\x01';
                                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                  if (bVar5) {
                                    *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                                    cVar4 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar4 != '\0');
                              }
                            }
                            else {
                              FUN_04ab0e54(lVar9,uVar8,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            }
                            uVar8 = FUN_03398a84(DAT_083ce338);
                            puVar12 = (undefined8 *)(unaff_x19 + 0xb8);
                            *puVar12 = uVar8;
                            iVar2 = *(int *)(unaff_x22 + 0xcd0);
                            if (iVar2 != 0) {
                              puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 +
                                                0x464e0);
                              do {
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar5) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                            }
                            lVar6 = DAT_083f34d8;
                            lVar9 = *(long *)(unaff_x19 + 0x88);
                            if (lVar9 != 0) {
                              uVar8 = *puVar12;
                              lVar11 = *(long *)(lVar9 + 0x10);
                              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                              if (lVar11 != 0) {
                                uVar3 = *(uint *)(lVar9 + 0x18);
                                if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                                  puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                                  *puVar12 = uVar8;
                                  if (iVar2 != 0) {
                                    puVar1 = (ulong *)(unaff_x21 +
                                                       ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 +
                                                      0x464e0);
                                    do {
                                      cVar4 = '\x01';
                                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                      if (bVar5) {
                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                                        cVar4 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar4 != '\0');
                                  }
                                }
                                else {
                                  FUN_04ab0e54(lVar9,uVar8,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                }
                                uVar8 = FUN_03398a84(DAT_083d2340);
                                puVar12 = (undefined8 *)(unaff_x19 + 0xc0);
                                *puVar12 = uVar8;
                                iVar2 = *(int *)(unaff_x22 + 0xcd0);
                                if (iVar2 != 0) {
                                  puVar1 = (ulong *)(unaff_x21 +
                                                     ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x464e0
                                                    );
                                  do {
                                    cVar4 = '\x01';
                                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar5) {
                                      *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                                      cVar4 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar4 != '\0');
                                }
                                lVar6 = DAT_083f34d8;
                                lVar9 = *(long *)(unaff_x19 + 0x88);
                                if (lVar9 != 0) {
                                  uVar8 = *puVar12;
                                  lVar11 = *(long *)(lVar9 + 0x10);
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar11 != 0) {
                                    uVar3 = *(uint *)(lVar9 + 0x18);
                                    if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                                      *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                                      puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20)
                                      ;
                                      *puVar12 = uVar8;
                                      if (iVar2 != 0) {
                                        puVar1 = (ulong *)(unaff_x21 +
                                                           ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 +
                                                          0x464e0);
                                        do {
                                          cVar4 = '\x01';
                                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                          if (bVar5) {
                                            *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f)
                                            ;
                                            cVar4 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar4 != '\0');
                                      }
                                    }
                                    else {
                                      FUN_04ab0e54(lVar9,uVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    uVar8 = FUN_03398a84(DAT_083c8ed8);
                                    puVar12 = (undefined8 *)(unaff_x19 + 200);
                                    *puVar12 = uVar8;
                                    iVar2 = *(int *)(unaff_x22 + 0xcd0);
                                    if (iVar2 != 0) {
                                      puVar1 = (ulong *)(unaff_x21 +
                                                         ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 +
                                                        0x464e0);
                                      do {
                                        cVar4 = '\x01';
                                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                        if (bVar5) {
                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                                          cVar4 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar4 != '\0');
                                    }
                                    lVar6 = DAT_083f34d8;
                                    lVar9 = *(long *)(unaff_x19 + 0x88);
                                    if (lVar9 != 0) {
                                      uVar8 = *puVar12;
                                      lVar11 = *(long *)(lVar9 + 0x10);
                                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                      if (lVar11 != 0) {
                                        uVar3 = *(uint *)(lVar9 + 0x18);
                                        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                                          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                                          puVar12 = (undefined8 *)
                                                    (lVar11 + (long)(int)uVar3 * 8 + 0x20);
                                          *puVar12 = uVar8;
                                          if (iVar2 != 0) {
                                            puVar1 = (ulong *)(unaff_x21 +
                                                               ((ulong)puVar12 >> 0x12 & 0x7fff) * 8
                                                              + 0x464e0);
                                            do {
                                              cVar4 = '\x01';
                                              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                              if (bVar5) {
                                                *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc &
                                                                          0x3f);
                                                cVar4 = ExclusiveMonitorsStatus();
                                              }
                                            } while (cVar4 != '\0');
                                          }
                                        }
                                        else {
                                          FUN_04ab0e54(lVar9,uVar8,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        if (*(long *)(unaff_x19 + 0x88) != 0) {
                                          in_stack_00000020 = 0;
                                          in_stack_00000028 = (long *)0x0;
                                          in_stack_00000018 = 0;
                                          FUN_05fd5ad4(&stack0x00000018,*(long *)(unaff_x19 + 0x88),
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(DAT_083f34e0 + 0x20) +
                                                                  0xc0) + 0x138));
                                          while( true ) {
                                            uVar7 = FUN_05fd5b44(&stack0x00000018,DAT_083e6fd8);
                                            if ((uVar7 & 1) == 0) {
                                              if (*(int *)(DAT_083ca030 + 0xe0) == 0) {
                                                FUN_033b9870();
                                              }
                                              uVar8 = FUN_07a1e864(DAT_08435680,0,0);
                                              puVar12 = (undefined8 *)(unaff_x19 + 0xe8);
                                              *puVar12 = uVar8;
                                              if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                puVar1 = (ulong *)(unaff_x21 +
                                                                   ((ulong)puVar12 >> 0x12 & 0x7fff)
                                                                   * 8 + 0x464e0);
                                                do {
                                                  cVar4 = '\x01';
                                                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar5) {
                                                    *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc
                                                                              & 0x3f);
                                                    cVar4 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar4 != '\0');
                                              }
                                              uVar8 = FUN_07a1e864(DAT_0844c910,0,0);
                                              puVar12 = (undefined8 *)(unaff_x19 + 0xf0);
                                              *puVar12 = uVar8;
                                              if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                puVar1 = (ulong *)(unaff_x21 +
                                                                   ((ulong)puVar12 >> 0x12 & 0x7fff)
                                                                   * 8 + 0x464e0);
                                                do {
                                                  cVar4 = '\x01';
                                                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar5) {
                                                    *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc
                                                                              & 0x3f);
                                                    cVar4 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar4 != '\0');
                                              }
                                              return;
                                            }
                                            if (in_stack_00000028 == (long *)0x0) break;
                                            plVar10 = in_stack_00000028 + 2;
                                            *plVar10 = *(long *)(unaff_x19 + 0x10);
                                            if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                              puVar1 = (ulong *)(unaff_x21 +
                                                                 ((ulong)plVar10 >> 0x12 & 0x7fff) *
                                                                 8 + 0x464e0);
                                              do {
                                                cVar4 = '\x01';
                                                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar5) {
                                                  *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc &
                                                                            0x3f);
                                                  cVar4 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar4 != '\0');
                                            }
                                            (**(code **)(*in_stack_00000028 + 0x188))
                                                      (in_stack_00000028,
                                                       *(undefined8 *)(*in_stack_00000028 + 400));
                                          }
                    /* WARNING: Subroutine does not return */
                                          FUN_033d1d3c();
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_033d1d3c();
}


