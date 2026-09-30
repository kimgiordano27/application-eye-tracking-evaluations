/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Utils$$LerpPosition
ENTRY_POINT: 0635e1c4
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Utils__LerpPosition(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool in_CY;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int in_w8;
  long *plVar9;
  long in_x9;
  undefined8 *puVar10;
  long lVar11;
  long in_x10;
  long lVar12;
  long in_x11;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  
  if (in_CY) {
    FUN_04ab0e54(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(in_x10 + 0x20) + 0xc0) + 0x70))
    ;
  }
  else {
    *(int *)(param_1 + 0x18) = (int)in_x11 + 1;
    puVar10 = (undefined8 *)(in_x9 + in_x11 * 8 + 0x20);
    *puVar10 = param_2;
    if (in_w8 != 0) {
                    /* catch() { ... } // from try @ 0635e114 with catch @ 0635e1ec */
                    /* try { // try from 0635e1f4 to 0645e1fb has its CatchHandler @ 0635e1fc */
      puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
                    /* catch() { ... } // from try @ 0635e0e8 with catch @ 0635e1fc
                       catch() { ... } // from try @ 0635e1f4 with catch @ 0635e1fc */
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  uVar6 = FUN_03398a84(DAT_083d1400);
  FUN_0637de04(uVar6,0);
  puVar10 = (undefined8 *)(unaff_x19 + 0xa8);
  *puVar10 = uVar6;
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
  lVar7 = *(long *)(unaff_x19 + 0x88);
  if (lVar7 != 0) {
    uVar6 = *puVar10;
    lVar11 = *(long *)(lVar7 + 0x10);
    lVar12 = *(long *)(unaff_x23 + 0x4d8);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar11 != 0) {
      uVar3 = *(uint *)(lVar7 + 0x18);
      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar3 + 1;
        puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
        *puVar10 = uVar6;
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
        FUN_04ab0e54(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar6 = FUN_03398a84(DAT_083c8688);
      puVar10 = (undefined8 *)(unaff_x19 + 0xb0);
      *puVar10 = uVar6;
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
      lVar7 = *(long *)(unaff_x19 + 0x88);
      if (lVar7 != 0) {
        uVar6 = *puVar10;
        lVar11 = *(long *)(lVar7 + 0x10);
        lVar12 = *(long *)(unaff_x23 + 0x4d8);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar3 = *(uint *)(lVar7 + 0x18);
          if (uVar3 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar3 + 1;
            puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
            *puVar10 = uVar6;
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
            FUN_04ab0e54(lVar7,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          uVar6 = FUN_03398a84(DAT_083ce338);
          puVar10 = (undefined8 *)(unaff_x19 + 0xb8);
          *puVar10 = uVar6;
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
          lVar7 = *(long *)(unaff_x19 + 0x88);
          if (lVar7 != 0) {
            uVar6 = *puVar10;
            lVar11 = *(long *)(lVar7 + 0x10);
            lVar12 = *(long *)(unaff_x23 + 0x4d8);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar11 != 0) {
              uVar3 = *(uint *)(lVar7 + 0x18);
              if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                *puVar10 = uVar6;
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
                FUN_04ab0e54(lVar7,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              uVar6 = FUN_03398a84(DAT_083d2340);
              puVar10 = (undefined8 *)(unaff_x19 + 0xc0);
              *puVar10 = uVar6;
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
              lVar7 = *(long *)(unaff_x19 + 0x88);
              if (lVar7 != 0) {
                uVar6 = *puVar10;
                lVar11 = *(long *)(lVar7 + 0x10);
                lVar12 = *(long *)(unaff_x23 + 0x4d8);
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar11 != 0) {
                  uVar3 = *(uint *)(lVar7 + 0x18);
                  if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                    puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                    *puVar10 = uVar6;
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
                  }
                  else {
                    FUN_04ab0e54(lVar7,uVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar6 = FUN_03398a84(DAT_083c8ed8);
                  puVar10 = (undefined8 *)(unaff_x19 + 200);
                  *puVar10 = uVar6;
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
                  lVar7 = *(long *)(unaff_x19 + 0x88);
                  if (lVar7 != 0) {
                    uVar6 = *puVar10;
                    lVar11 = *(long *)(lVar7 + 0x10);
                    lVar12 = *(long *)(unaff_x23 + 0x4d8);
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar3 = *(uint *)(lVar7 + 0x18);
                      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                        puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                        *puVar10 = uVar6;
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
                        FUN_04ab0e54(lVar7,uVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      if (*(long *)(unaff_x19 + 0x88) != 0) {
                        in_stack_00000020 = 0;
                        in_stack_00000028 = (long *)0x0;
                        in_stack_00000018 = 0;
                        FUN_05fd5ad4(&stack0x00000018,*(long *)(unaff_x19 + 0x88),
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(DAT_083f34e0 + 0x20) + 0xc0) + 0x138));
                        while( true ) {
                          uVar8 = FUN_05fd5b44(&stack0x00000018,DAT_083e6fd8);
                          if ((uVar8 & 1) == 0) {
                            if (*(int *)(DAT_083ca030 + 0xe0) == 0) {
                              FUN_033b9870();
                            }
                            uVar6 = FUN_07a1e864(DAT_08435680,0,0);
                            puVar10 = (undefined8 *)(unaff_x19 + 0xe8);
                            *puVar10 = uVar6;
                            if (*(int *)(unaff_x22 + 0xcd0) != 0) {
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
                            uVar6 = FUN_07a1e864(DAT_0844c910,0,0);
                            puVar10 = (undefined8 *)(unaff_x19 + 0xf0);
                            *puVar10 = uVar6;
                            if (*(int *)(unaff_x22 + 0xcd0) != 0) {
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
                            return;
                          }
                          if (in_stack_00000028 == (long *)0x0) break;
                          plVar9 = in_stack_00000028 + 2;
                          *plVar9 = *(long *)(unaff_x19 + 0x10);
                          if (*(int *)(unaff_x22 + 0xcd0) != 0) {
                            puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar9 >> 0x12 & 0x7fff) * 8 +
                                              0x464e0);
                            do {
                              cVar4 = '\x01';
                              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar5) {
                                *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                                cVar4 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar4 != '\0');
                          }
                          (**(code **)(*in_stack_00000028 + 0x188))
                                    (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 400));
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
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


