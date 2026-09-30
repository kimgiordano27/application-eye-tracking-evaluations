/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionState$$EnableControls
ENTRY_POINT: 03a37310
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a37dbc) */
/* WARNING: Removing unreachable block (ram,0x03a37de8) */

void UnityEngine_InputSystem_InputActionState__EnableControls(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x20;
  
  FUN_03416d98();
  if (param_1 != (long *)0x0) {
    FUN_03418c10(param_1,*(undefined8 *)StringLiteral_7149,0);
    FUN_03418748(param_1,*(undefined8 *)StringLiteral_7150,0);
    uVar4 = FUN_03a37050();
    FUN_03419108(param_1,uVar4,0);
    FUN_03418bf0(param_1,0);
    FUN_03418bf0(param_1,0);
    FUN_03418c10(param_1,*(undefined8 *)Method_System_RuntimeFieldHandle_GetObjectData__,0);
    puVar1 = Method_System_Reflection_Module_FilterTypeNameIgnoreCaseImpl__;
    FUN_03418748(param_1,*(undefined8 *)
                          Method_System_Reflection_Module_FilterTypeNameIgnoreCaseImpl__,0);
    lVar6 = FUN_03a36fc8();
    if (lVar6 != 0) {
      FUN_03418748(param_1,*(undefined8 *)(lVar6 + 0x20),0);
      lVar6 = FUN_03a37144();
      if (lVar6 != 0) {
        if (0 < *(int *)(lVar6 + 0x10)) {
          FUN_03418bf0(param_1,0);
          FUN_03418748(param_1,*(undefined8 *)puVar1,0);
          FUN_03418748(param_1,*(undefined8 *)StringLiteral_7147,0);
          FUN_03418748(param_1,lVar6,0);
        }
        lVar6 = FUN_03a37144();
        if (lVar6 != 0) {
          if (0 < *(int *)(lVar6 + 0x10)) {
            FUN_03418bf0(param_1,0);
            FUN_03418748(param_1,*(undefined8 *)puVar1,0);
            FUN_03418748(param_1,*(undefined8 *)StringLiteral_7152,0);
            FUN_03418748(param_1,lVar6,0);
          }
          lVar6 = FUN_03a37144();
          if (lVar6 != 0) {
            if (0 < *(int *)(lVar6 + 0x10)) {
              FUN_03418bf0(param_1,0);
              FUN_03418748(param_1,*(undefined8 *)puVar1,0);
              FUN_03418748(param_1,*(undefined8 *)StringLiteral_7151,0);
              FUN_03418748(param_1,lVar6,0);
            }
            lVar6 = FUN_03a37144();
            if (lVar6 != 0) {
              if (0 < *(int *)(lVar6 + 0x10)) {
                FUN_03418bf0(param_1,0);
                FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                FUN_03418748(param_1,*(undefined8 *)StringLiteral_7159,0);
                FUN_03418748(param_1,lVar6,0);
              }
              FUN_03418bf0(param_1,0);
              FUN_03418bf0(param_1,0);
              FUN_03418c10(param_1,*(undefined8 *)
                                    Method_System_Reflection_RuntimeFieldInfo_GetObjectData__,0);
              FUN_03418748(param_1,*(undefined8 *)puVar1,0);
              lVar6 = FUN_03a36d04();
              if (lVar6 != 0) {
                FUN_03418748(param_1,*(undefined8 *)(lVar6 + 0x20),0);
                lVar6 = FUN_03a37144();
                if (lVar6 != 0) {
                  if (0 < *(int *)(lVar6 + 0x10)) {
                    FUN_03418bf0(param_1,0);
                    FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                    FUN_03418748(param_1,*(undefined8 *)StringLiteral_7147,0);
                    FUN_03418748(param_1,lVar6,0);
                  }
                  lVar6 = FUN_03a37144();
                  if (lVar6 != 0) {
                    if (0 < *(int *)(lVar6 + 0x10)) {
                      FUN_03418bf0(param_1,0);
                      FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                      FUN_03418748(param_1,*(undefined8 *)StringLiteral_7152,0);
                      FUN_03418748(param_1,lVar6,0);
                    }
                    lVar6 = FUN_03a37144();
                    if (lVar6 != 0) {
                      if (0 < *(int *)(lVar6 + 0x10)) {
                        FUN_03418bf0(param_1,0);
                        FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                        FUN_03418748(param_1,*(undefined8 *)StringLiteral_7151,0);
                        FUN_03418748(param_1,lVar6,0);
                      }
                      lVar6 = FUN_03a37144();
                      if (lVar6 != 0) {
                        if (0 < *(int *)(lVar6 + 0x10)) {
                          FUN_03418bf0(param_1,0);
                          FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                          FUN_03418748(param_1,*(undefined8 *)StringLiteral_7159,0);
                          FUN_03418748(param_1,lVar6,0);
                        }
                        FUN_03418bf0(param_1,0);
                        FUN_03418bf0(param_1,0);
                        FUN_03418c10(param_1,*(undefined8 *)
                                              Method_System_Reflection_RuntimeFieldInfo_CheckConsistency__
                                     ,0);
                        FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                        uVar7 = (**(code **)(*unaff_x20 + 0x248))();
                        FUN_03418c10(param_1,uVar7,0);
                        FUN_03418bf0(param_1,0);
                        FUN_03418c10(param_1,*(undefined8 *)
                                              Method_System_Reflection_RuntimeFieldInfo_GetValue__,0
                                    );
                        FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                        uVar7 = FUN_0345174c();
                        uVar7 = FUN_034517e8(uVar7,0);
                        FUN_03418c10(param_1,uVar7,0);
                        FUN_03418bf0(param_1,0);
                        FUN_03418c10(param_1,*(undefined8 *)
                                              Method_System_Reflection_RuntimeFieldInfo_CheckGeneric__
                                     ,0);
                        FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                        uVar7 = FUN_03451930();
                        uVar7 = FUN_034517e8(uVar7,0);
                        FUN_03418c10(param_1,uVar7,0);
                        FUN_03418bf0(param_1,0);
                        FUN_03418c10(param_1,*(undefined8 *)Method_System_RuntimeFieldHandle__ctor__
                                     ,0);
                        FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                        uVar7 = (**(code **)(*unaff_x20 + 0x1d8))();
                        uVar7 = FUN_0340cdc0(uVar7,0);
                        FUN_03418c10(param_1,uVar7,0);
                        FUN_03418bf0(param_1,0);
                        FUN_03418c10(param_1,*(undefined8 *)StringLiteral_7155,0);
                        FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                        lVar6 = FUN_03a36f54();
                        if (lVar6 != 0) {
                          uVar7 = FUN_03a3263c();
                          FUN_03418748(param_1,uVar7,0);
                          FUN_03419060(param_1,0x28,0);
                          lVar6 = FUN_03a36f54();
                          if (lVar6 != 0) {
                            FUN_03418748(param_1,*(undefined8 *)(lVar6 + 0x10),0);
                            FUN_03418c10(param_1,*(undefined8 *)
                                                  Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__
                                         ,0);
                            FUN_03418bf0(param_1,0);
                            FUN_03418748(param_1,*(undefined8 *)StringLiteral_7157,0);
                            lVar6 = FUN_03a36d80();
                            FUN_03418bf0(param_1,0);
                            FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                            FUN_03418748(param_1,*(undefined8 *)StringLiteral_7145,0);
                            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            uVar7 = FUN_03a3263c();
                            FUN_03418748(param_1,uVar7,0);
                            FUN_03418bf0(param_1,0);
                            FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                            FUN_03418748(param_1,*(undefined8 *)StringLiteral_7153,0);
                            plVar8 = (long *)FUN_03970fb4();
                            if (plVar8 != (long *)0x0) {
                              uVar4 = (**(code **)(*plVar8 + 0x198))
                                                (plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
                              FUN_03419108(param_1,uVar4,0);
                              lVar10 = *plVar8;
                              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                              if (uVar11 != 0) {
                                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar12 + -2) ==
                                      *(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                     ) {
                                    puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                                    goto LAB_03a37ac0;
                                  }
                                  uVar11 = uVar11 - 1;
                                  piVar12 = piVar12 + 4;
                                } while (uVar11 != 0);
                              }
                              puVar9 = (undefined8 *)
                                       FUN_01ecb238(plVar8,*(long *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                                  ,0);
LAB_03a37ac0:
                              (*(code *)*puVar9)(plVar8,puVar9[1]);
                            }
                            FUN_03418bf0(param_1,0);
                            FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                            FUN_03418748(param_1,*(undefined8 *)StringLiteral_7154,0);
                            plVar8 = *(long **)(lVar6 + 0x10);
                            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            uVar7 = (**(code **)(*plVar8 + 0x188))
                                              (plVar8,1,*(undefined8 *)(*plVar8 + 400));
                            FUN_03418c10(param_1,uVar7,0);
                            FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                            FUN_03418748(param_1,*(undefined8 *)StringLiteral_7156,0);
                            plVar8 = *(long **)(lVar6 + 0x18);
                            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            uVar7 = (**(code **)(*plVar8 + 0x188))
                                              (plVar8,1,*(undefined8 *)(*plVar8 + 400));
                            FUN_03418748(param_1,uVar7,0);
                            plVar8 = (long *)FUN_03a368a8();
                            if (plVar8 != (long *)0x0) {
                              (**(code **)(*plVar8 + 0x328))
                                        (plVar8,param_1,*(undefined8 *)(*plVar8 + 0x330));
                              lVar6 = FUN_03a36468();
                              if ((lVar6 != 0) &&
                                 (plVar8 = *(long **)(lVar6 + 0x10), plVar8 != (long *)0x0)) {
                                iVar5 = (**(code **)(*plVar8 + 0x298))
                                                  (plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
                                if (0 < iVar5) {
                                  FUN_03418bf0(param_1,0);
                                  FUN_03418bf0(param_1,0);
                                  FUN_03418748(param_1,*(undefined8 *)StringLiteral_7158,0);
                                  lVar6 = FUN_03a38040(lVar6);
                                  if (lVar6 == 0) goto LAB_03a37dd4;
                                  uVar11 = FUN_03a3818c();
                                  puVar3 = StringLiteral_7148;
                                  puVar2 = StringLiteral_7146;
                                  while ((uVar11 & 1) != 0) {
                                    plVar8 = (long *)
                                                  UnityEngine_InputSystem_InputActionState__GetComplexityFromMonitorIndex
                                                            (lVar6);
                                    FUN_03418bf0(param_1,0);
                                    FUN_03418748(param_1,*(undefined8 *)puVar2,0);
                                    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01f08a3c();
                                    }
                                    if (plVar8[2] == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01f08a3c();
                                    }
                                    uVar7 = FUN_03a3263c();
                                    FUN_03418748(param_1,uVar7,0);
                                    FUN_03419060(param_1,0x28,0);
                                    if (plVar8[2] == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01f08a3c();
                                    }
                                    FUN_03418748(param_1,*(undefined8 *)(plVar8[2] + 0x10),0);
                                    FUN_03418748(param_1,*(undefined8 *)puVar3,0);
                                    FUN_03418bf0(param_1,0);
                                    FUN_03418748(param_1,*(undefined8 *)puVar1,0);
                                    uVar7 = (**(code **)(*plVar8 + 0x188))
                                                      (plVar8,1,*(undefined8 *)(*plVar8 + 400));
                                    FUN_03418748(param_1,uVar7,0);
                                    uVar11 = FUN_03a3818c(lVar6);
                                  }
                                }
                                FUN_03418bf0(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x03a37db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (**(code **)(*param_1 + 0x168))
                                          (param_1,*(undefined8 *)(*param_1 + 0x170));
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
LAB_03a37dd4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


