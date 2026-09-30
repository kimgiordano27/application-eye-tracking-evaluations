/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionState$$DisableControls
ENTRY_POINT: 03a37418
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a37dbc) */
/* WARNING: Removing unreachable block (ram,0x03a37de8) */

void UnityEngine_InputSystem_InputActionState__DisableControls
               (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  
  FUN_03418748(param_2,*param_1);
  FUN_03418748();
  lVar2 = FUN_03a37144();
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x10)) {
      FUN_03418bf0();
      FUN_03418748();
      FUN_03418748();
      FUN_03418748();
    }
    lVar2 = FUN_03a37144();
    if (lVar2 != 0) {
      if (0 < *(int *)(lVar2 + 0x10)) {
        FUN_03418bf0();
        FUN_03418748();
        FUN_03418748();
        FUN_03418748();
      }
      lVar2 = FUN_03a37144();
      if (lVar2 != 0) {
        if (0 < *(int *)(lVar2 + 0x10)) {
          FUN_03418bf0();
          FUN_03418748();
          FUN_03418748();
          FUN_03418748();
        }
        FUN_03418bf0();
        FUN_03418bf0();
        FUN_03418c10();
        FUN_03418748();
        lVar2 = FUN_03a36d04();
        if (lVar2 != 0) {
          FUN_03418748();
          lVar2 = FUN_03a37144();
          if (lVar2 != 0) {
            if (0 < *(int *)(lVar2 + 0x10)) {
              FUN_03418bf0();
              FUN_03418748();
              FUN_03418748();
              FUN_03418748();
            }
            lVar2 = FUN_03a37144();
            if (lVar2 != 0) {
              if (0 < *(int *)(lVar2 + 0x10)) {
                FUN_03418bf0();
                FUN_03418748();
                FUN_03418748();
                FUN_03418748();
              }
              lVar2 = FUN_03a37144();
              if (lVar2 != 0) {
                if (0 < *(int *)(lVar2 + 0x10)) {
                  FUN_03418bf0();
                  FUN_03418748();
                  FUN_03418748();
                  FUN_03418748();
                }
                lVar2 = FUN_03a37144();
                if (lVar2 != 0) {
                  if (0 < *(int *)(lVar2 + 0x10)) {
                    FUN_03418bf0();
                    FUN_03418748();
                    FUN_03418748();
                    FUN_03418748();
                  }
                  FUN_03418bf0();
                  FUN_03418bf0();
                  FUN_03418c10();
                  FUN_03418748();
                  (**(code **)(*unaff_x20 + 0x248))();
                  FUN_03418c10();
                  FUN_03418bf0();
                  FUN_03418c10();
                  FUN_03418748();
                  uVar3 = FUN_0345174c();
                  FUN_034517e8(uVar3,0);
                  FUN_03418c10();
                  FUN_03418bf0();
                  FUN_03418c10();
                  FUN_03418748();
                  uVar3 = FUN_03451930();
                  FUN_034517e8(uVar3,0);
                  FUN_03418c10();
                  FUN_03418bf0();
                  FUN_03418c10();
                  FUN_03418748();
                  uVar3 = (**(code **)(*unaff_x20 + 0x1d8))();
                  FUN_0340cdc0(uVar3,0);
                  FUN_03418c10();
                  FUN_03418bf0();
                  FUN_03418c10();
                  FUN_03418748();
                  lVar2 = FUN_03a36f54();
                  if (lVar2 != 0) {
                    FUN_03a3263c();
                    FUN_03418748();
                    FUN_03419060();
                    lVar2 = FUN_03a36f54();
                    if (lVar2 != 0) {
                      FUN_03418748();
                      FUN_03418c10();
                      FUN_03418bf0();
                      FUN_03418748();
                      lVar2 = FUN_03a36d80();
                      FUN_03418bf0();
                      FUN_03418748();
                      FUN_03418748();
                      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      if (*(long *)(lVar2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      FUN_03a3263c();
                      FUN_03418748();
                      FUN_03418bf0();
                      FUN_03418748();
                      FUN_03418748();
                      plVar4 = (long *)FUN_03970fb4();
                      if (plVar4 != (long *)0x0) {
                        (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
                        FUN_03419108();
                        lVar6 = *plVar4;
                        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                        if (uVar7 != 0) {
                          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) ==
                                *(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ) {
                              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                              goto LAB_03a37ac0;
                            }
                            uVar7 = uVar7 - 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar7 != 0);
                        }
                        puVar5 = (undefined8 *)
                                 FUN_01ecb238(plVar4,*(long *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                              ,0);
LAB_03a37ac0:
                        (*(code *)*puVar5)(plVar4,puVar5[1]);
                      }
                      FUN_03418bf0();
                      FUN_03418748();
                      FUN_03418748();
                      plVar4 = *(long **)(lVar2 + 0x10);
                      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      (**(code **)(*plVar4 + 0x188))(plVar4,1,*(undefined8 *)(*plVar4 + 400));
                      FUN_03418c10();
                      FUN_03418748();
                      FUN_03418748();
                      plVar4 = *(long **)(lVar2 + 0x18);
                      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      (**(code **)(*plVar4 + 0x188))(plVar4,1,*(undefined8 *)(*plVar4 + 400));
                      FUN_03418748();
                      plVar4 = (long *)FUN_03a368a8();
                      if (plVar4 != (long *)0x0) {
                        (**(code **)(*plVar4 + 0x328))();
                        lVar2 = FUN_03a36468();
                        if ((lVar2 != 0) &&
                           (plVar4 = *(long **)(lVar2 + 0x10), plVar4 != (long *)0x0)) {
                          iVar1 = (**(code **)(*plVar4 + 0x298))
                                            (plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
                          if (0 < iVar1) {
                            FUN_03418bf0();
                            FUN_03418bf0();
                            FUN_03418748();
                            lVar2 = FUN_03a38040(lVar2);
                            if (lVar2 == 0) goto LAB_03a37dd4;
                            uVar7 = FUN_03a3818c();
                            while ((uVar7 & 1) != 0) {
                              plVar4 = (long *)UnityEngine_InputSystem_InputActionState__GetComplexityFromMonitorIndex
                                                         (lVar2);
                              FUN_03418bf0();
                              FUN_03418748();
                              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01f08a3c();
                              }
                              if (plVar4[2] == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01f08a3c();
                              }
                              FUN_03a3263c();
                              FUN_03418748();
                              FUN_03419060();
                              if (plVar4[2] == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01f08a3c();
                              }
                              FUN_03418748();
                              FUN_03418748();
                              FUN_03418bf0();
                              FUN_03418748();
                              (**(code **)(*plVar4 + 0x188))
                                        (plVar4,1,*(undefined8 *)(*plVar4 + 400));
                              FUN_03418748();
                              uVar7 = FUN_03a3818c(lVar2);
                            }
                          }
                          FUN_03418bf0();
                    /* WARNING: Could not recover jumptable at 0x03a37db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (**(code **)(*unaff_x19 + 0x168))();
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
LAB_03a37dd4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


