/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$AppendToProxyFlex
ENTRY_POINT: 0635dcac
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__AppendToProxyFlex
               (undefined8 param_1,undefined8 param_2)

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
  int in_w8;
  long in_x9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
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
  
  puVar10 = (undefined8 *)(in_x9 + 0x20);
  *puVar10 = param_2;
  if (in_w8 != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar6 = FUN_03398a84(DAT_083c9888);
  *(undefined4 *)(lVar6 + 0x10) = 1;
  plVar11 = (long *)(unaff_x19 + 0x28);
  *plVar11 = lVar6;
  iVar2 = *(int *)(unaff_x22 + 0xcd0);
  if (iVar2 != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if (lVar6 != 0) {
    lVar9 = *plVar11;
    lVar12 = *(long *)(lVar6 + 0x10);
    lVar13 = *(long *)(unaff_x20 + 0x4c0);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar12 != 0) {
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar3 + 1;
        plVar11 = (long *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
        *plVar11 = lVar9;
        if (iVar2 != 0) {
          puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        FUN_04ab0e54(lVar6,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar6 = FUN_03398a84(DAT_083c9890);
      *(undefined4 *)(lVar6 + 0x10) = 1;
      plVar11 = (long *)(unaff_x19 + 0x38);
      *plVar11 = lVar6;
      iVar2 = *(int *)(unaff_x22 + 0xcd0);
      if (iVar2 != 0) {
        puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if (lVar6 != 0) {
        lVar9 = *plVar11;
        lVar12 = *(long *)(lVar6 + 0x10);
        lVar13 = *(long *)(unaff_x20 + 0x4c0);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar12 != 0) {
          uVar3 = *(uint *)(lVar6 + 0x18);
          if (uVar3 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar3 + 1;
            plVar11 = (long *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
            *plVar11 = lVar9;
            if (iVar2 != 0) {
              puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          else {
            FUN_04ab0e54(lVar6,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_05fd5ad4();
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            in_stack_00000040 = (long *)0x0;
            while (uVar7 = FUN_05fd5b44(&stack0x00000030,DAT_083e6fc0), (uVar7 & 1) != 0) {
              if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1d3c();
              }
              plVar11 = in_stack_00000040 + 3;
              *plVar11 = *(long *)(unaff_x19 + 0x10);
              if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              (**(code **)(*in_stack_00000040 + 0x178))
                        (in_stack_00000040,*(undefined8 *)(*in_stack_00000040 + 0x180));
            }
            uVar8 = FUN_03398a84(DAT_083d0818);
            puVar10 = (undefined8 *)(unaff_x19 + 0x90);
            *puVar10 = uVar8;
            iVar2 = *(int *)(unaff_x22 + 0xcd0);
            if (iVar2 != 0) {
              puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            lVar6 = DAT_083f34d8;
            lVar9 = *(long *)(unaff_x19 + 0x88);
            if (lVar9 != 0) {
              uVar8 = *puVar10;
              lVar12 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar12 != 0) {
                uVar3 = *(uint *)(lVar9 + 0x18);
                if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                  puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
                  *puVar10 = uVar8;
                  if (iVar2 != 0) {
                    puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
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
                puVar10 = (undefined8 *)(unaff_x19 + 0x98);
                *puVar10 = uVar8;
                iVar2 = *(int *)(unaff_x22 + 0xcd0);
                if (iVar2 != 0) {
                  puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                lVar6 = DAT_083f34d8;
                lVar9 = *(long *)(unaff_x19 + 0x88);
                if (lVar9 != 0) {
                  uVar8 = *puVar10;
                  lVar12 = *(long *)(lVar9 + 0x10);
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar12 != 0) {
                    uVar3 = *(uint *)(lVar9 + 0x18);
                    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                      puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
                      *puVar10 = uVar8;
                      if (iVar2 != 0) {
                        puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 +
                                          0x464e0);
                        do {
                          cVar4 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar5) {
                            *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
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
                    uVar8 = FUN_03398a84(DAT_083cea88);
                    FUN_0637acdc(uVar8,0);
                    puVar10 = (undefined8 *)(unaff_x19 + 0xa0);
                    *puVar10 = uVar8;
                    iVar2 = *(int *)(unaff_x22 + 0xcd0);
                    if (iVar2 != 0) {
                      puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0
                                        );
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                          *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    lVar6 = DAT_083f34d8;
                    lVar9 = *(long *)(unaff_x19 + 0x88);
                    if (lVar9 != 0) {
                      uVar8 = *puVar10;
                      lVar12 = *(long *)(lVar9 + 0x10);
                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                      if (lVar12 != 0) {
                        uVar3 = *(uint *)(lVar9 + 0x18);
                        if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                          puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
                          *puVar10 = uVar8;
                          if (iVar2 != 0) {
                            puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 +
                                              0x464e0);
                            do {
                              cVar4 = '\x01';
                              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar5) {
                                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
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
                        uVar8 = FUN_03398a84(DAT_083d1400);
                        FUN_0637de04(uVar8,0);
                        puVar10 = (undefined8 *)(unaff_x19 + 0xa8);
                        *puVar10 = uVar8;
                        iVar2 = *(int *)(unaff_x22 + 0xcd0);
                        if (iVar2 != 0) {
                          puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 +
                                            0x464e0);
                          do {
                            cVar4 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar5) {
                              *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar4 != '\0');
                        }
                        lVar6 = DAT_083f34d8;
                        lVar9 = *(long *)(unaff_x19 + 0x88);
                        if (lVar9 != 0) {
                          uVar8 = *puVar10;
                          lVar12 = *(long *)(lVar9 + 0x10);
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar12 != 0) {
                            uVar3 = *(uint *)(lVar9 + 0x18);
                            if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                              puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
                              *puVar10 = uVar8;
                              if (iVar2 != 0) {
                                puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8
                                                  + 0x464e0);
                                do {
                                  cVar4 = '\x01';
                                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                  if (bVar5) {
                                    *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
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
                            puVar10 = (undefined8 *)(unaff_x19 + 0xb0);
                            *puVar10 = uVar8;
                            iVar2 = *(int *)(unaff_x22 + 0xcd0);
                            if (iVar2 != 0) {
                              puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 +
                                                0x464e0);
                              do {
                                cVar4 = '\x01';
                                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar5) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                                  cVar4 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar4 != '\0');
                            }
                            lVar6 = DAT_083f34d8;
                            lVar9 = *(long *)(unaff_x19 + 0x88);
                            if (lVar9 != 0) {
                              uVar8 = *puVar10;
                              lVar12 = *(long *)(lVar9 + 0x10);
                              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                              if (lVar12 != 0) {
                                uVar3 = *(uint *)(lVar9 + 0x18);
                                if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                                  puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
                                  *puVar10 = uVar8;
                                  if (iVar2 != 0) {
                                    puVar1 = (ulong *)(unaff_x21 +
                                                       ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 +
                                                      0x464e0);
                                    do {
                                      cVar4 = '\x01';
                                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                      if (bVar5) {
                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
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
                                puVar10 = (undefined8 *)(unaff_x19 + 0xb8);
                                *puVar10 = uVar8;
                                iVar2 = *(int *)(unaff_x22 + 0xcd0);
                                if (iVar2 != 0) {
                                  puVar1 = (ulong *)(unaff_x21 +
                                                     ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0
                                                    );
                                  do {
                                    cVar4 = '\x01';
                                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar5) {
                                      *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                                      cVar4 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar4 != '\0');
                                }
                                lVar6 = DAT_083f34d8;
                                lVar9 = *(long *)(unaff_x19 + 0x88);
                                if (lVar9 != 0) {
                                  uVar8 = *puVar10;
                                  lVar12 = *(long *)(lVar9 + 0x10);
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar12 != 0) {
                                    uVar3 = *(uint *)(lVar9 + 0x18);
                                    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                                      *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                                      puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar3 * 8 + 0x20)
                                      ;
                                      *puVar10 = uVar8;
                                      if (iVar2 != 0) {
                                        puVar1 = (ulong *)(unaff_x21 +
                                                           ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 +
                                                          0x464e0);
                                        do {
                                          cVar4 = '\x01';
                                          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                          if (bVar5) {
                                            *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f)
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
                                    uVar8 = FUN_03398a84(DAT_083d2340);
                                    puVar10 = (undefined8 *)(unaff_x19 + 0xc0);
                                    *puVar10 = uVar8;
                                    iVar2 = *(int *)(unaff_x22 + 0xcd0);
                                    if (iVar2 != 0) {
                                      puVar1 = (ulong *)(unaff_x21 +
                                                         ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 +
                                                        0x464e0);
                                      do {
                                        cVar4 = '\x01';
                                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                        if (bVar5) {
                                          *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                                          cVar4 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar4 != '\0');
                                    }
                                    lVar6 = DAT_083f34d8;
                                    lVar9 = *(long *)(unaff_x19 + 0x88);
                                    if (lVar9 != 0) {
                                      uVar8 = *puVar10;
                                      lVar12 = *(long *)(lVar9 + 0x10);
                                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                      if (lVar12 != 0) {
                                        uVar3 = *(uint *)(lVar9 + 0x18);
                                        if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                                          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                                          puVar10 = (undefined8 *)
                                                    (lVar12 + (long)(int)uVar3 * 8 + 0x20);
                                          *puVar10 = uVar8;
                                          if (iVar2 != 0) {
                                            puVar1 = (ulong *)(unaff_x21 +
                                                               ((ulong)puVar10 >> 0x12 & 0x7fff) * 8
                                                              + 0x464e0);
                                            do {
                                              cVar4 = '\x01';
                                              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                              if (bVar5) {
                                                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc &
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
                                        uVar8 = FUN_03398a84(DAT_083c8ed8);
                                        puVar10 = (undefined8 *)(unaff_x19 + 200);
                                        *puVar10 = uVar8;
                                        iVar2 = *(int *)(unaff_x22 + 0xcd0);
                                        if (iVar2 != 0) {
                                          puVar1 = (ulong *)(unaff_x21 +
                                                             ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 +
                                                            0x464e0);
                                          do {
                                            cVar4 = '\x01';
                                            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                            if (bVar5) {
                                              *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc &
                                                                        0x3f);
                                              cVar4 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar4 != '\0');
                                        }
                                        lVar6 = DAT_083f34d8;
                                        lVar9 = *(long *)(unaff_x19 + 0x88);
                                        if (lVar9 != 0) {
                                          uVar8 = *puVar10;
                                          lVar12 = *(long *)(lVar9 + 0x10);
                                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                          if (lVar12 != 0) {
                                            uVar3 = *(uint *)(lVar9 + 0x18);
                                            if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                                              *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                                              puVar10 = (undefined8 *)
                                                        (lVar12 + (long)(int)uVar3 * 8 + 0x20);
                                              *puVar10 = uVar8;
                                              if (iVar2 != 0) {
                                                puVar1 = (ulong *)(unaff_x21 +
                                                                   ((ulong)puVar10 >> 0x12 & 0x7fff)
                                                                   * 8 + 0x464e0);
                                                do {
                                                  cVar4 = '\x01';
                                                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar5) {
                                                    *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc
                                                                              & 0x3f);
                                                    cVar4 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar4 != '\0');
                                              }
                                            }
                                            else {
                                              FUN_04ab0e54(lVar9,uVar8,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar6 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            if (*(long *)(unaff_x19 + 0x88) != 0) {
                                              in_stack_00000020 = 0;
                                              in_stack_00000028 = (long *)0x0;
                                              in_stack_00000018 = 0;
                                              FUN_05fd5ad4(&stack0x00000018,
                                                           *(long *)(unaff_x19 + 0x88),
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(DAT_083f34e0 + 0x20
                                                                                ) + 0xc0) + 0x138));
                                              while( true ) {
                                                uVar7 = FUN_05fd5b44(&stack0x00000018,DAT_083e6fd8);
                                                if ((uVar7 & 1) == 0) {
                                                  if (*(int *)(DAT_083ca030 + 0xe0) == 0) {
                                                    FUN_033b9870();
                                                  }
                                                  uVar8 = FUN_07a1e864(DAT_08435680,0,0);
                                                  puVar10 = (undefined8 *)(unaff_x19 + 0xe8);
                                                  *puVar10 = uVar8;
                                                  if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)puVar10 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar4 = '\x01';
                                                      bVar5 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar5) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >>
                                                                                   0xc & 0x3f);
                                                        cVar4 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar4 != '\0');
                                                  }
                                                  uVar8 = FUN_07a1e864(DAT_0844c910,0,0);
                                                  puVar10 = (undefined8 *)(unaff_x19 + 0xf0);
                                                  *puVar10 = uVar8;
                                                  if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                    puVar1 = (ulong *)(unaff_x21 +
                                                                       ((ulong)puVar10 >> 0x12 &
                                                                       0x7fff) * 8 + 0x464e0);
                                                    do {
                                                      cVar4 = '\x01';
                                                      bVar5 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar5) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >>
                                                                                   0xc & 0x3f);
                                                        cVar4 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar4 != '\0');
                                                  }
                                                  return;
                                                }
                                                if (in_stack_00000028 == (long *)0x0) break;
                                                plVar11 = in_stack_00000028 + 2;
                                                *plVar11 = *(long *)(unaff_x19 + 0x10);
                                                if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                                                  puVar1 = (ulong *)(unaff_x21 +
                                                                     ((ulong)plVar11 >> 0x12 &
                                                                     0x7fff) * 8 + 0x464e0);
                                                  do {
                                                    cVar4 = '\x01';
                                                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                    if (bVar5) {
                                                      *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >>
                                                                                 0xc & 0x3f);
                                                      cVar4 = ExclusiveMonitorsStatus();
                                                    }
                                                  } while (cVar4 != '\0');
                                                }
                                                (**(code **)(*in_stack_00000028 + 0x188))
                                                          (in_stack_00000028,
                                                           *(undefined8 *)(*in_stack_00000028 + 400)
                                                          );
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


