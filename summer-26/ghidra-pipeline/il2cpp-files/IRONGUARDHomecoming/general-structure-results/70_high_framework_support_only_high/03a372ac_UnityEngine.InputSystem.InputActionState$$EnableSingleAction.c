/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionState$$EnableSingleAction
ENTRY_POINT: 03a372ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a37dbc) */
/* WARNING: Removing unreachable block (ram,0x03a37de8) */

void UnityEngine_InputSystem_InputActionState__EnableSingleAction(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeFieldInfo_CheckGeneric__);
  thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeFieldInfo_GetObjectData__);
  thunk_FUN_01efb3a4(StringLiteral_7159);
  thunk_FUN_01efb3a4(Method_System_Reflection_RuntimeFieldInfo_GetValue__);
  *(undefined1 *)(unaff_x21 + 0xbed) = 1;
  if (((unaff_x19 & 1) == 0) || (uVar6 = System_DateTimeOffset__ToString(), (uVar6 & 1) == 0)) {
    lVar8 = *unaff_x20;
LAB_03a37da0:
                    /* WARNING: Could not recover jumptable at 0x03a37db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x168))();
    return;
  }
  plVar7 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
  FUN_03416d98(plVar7,0);
  if (plVar7 != (long *)0x0) {
    FUN_03418c10(plVar7,*(undefined8 *)StringLiteral_7149,0);
    FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7150,0);
    uVar4 = FUN_03a37050();
    FUN_03419108(plVar7,uVar4,0);
    FUN_03418bf0(plVar7,0);
    FUN_03418bf0(plVar7,0);
    FUN_03418c10(plVar7,*(undefined8 *)Method_System_RuntimeFieldHandle_GetObjectData__,0);
    puVar1 = Method_System_Reflection_Module_FilterTypeNameIgnoreCaseImpl__;
    FUN_03418748(plVar7,*(undefined8 *)
                         Method_System_Reflection_Module_FilterTypeNameIgnoreCaseImpl__,0);
    lVar8 = FUN_03a36fc8();
    if (lVar8 != 0) {
      FUN_03418748(plVar7,*(undefined8 *)(lVar8 + 0x20),0);
      lVar8 = FUN_03a37144();
      if (lVar8 != 0) {
        if (0 < *(int *)(lVar8 + 0x10)) {
          FUN_03418bf0(plVar7,0);
          FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
          FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7147,0);
          FUN_03418748(plVar7,lVar8,0);
        }
        lVar8 = FUN_03a37144();
        if (lVar8 != 0) {
          if (0 < *(int *)(lVar8 + 0x10)) {
            FUN_03418bf0(plVar7,0);
            FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
            FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7152,0);
            FUN_03418748(plVar7,lVar8,0);
          }
          lVar8 = FUN_03a37144();
          if (lVar8 != 0) {
            if (0 < *(int *)(lVar8 + 0x10)) {
              FUN_03418bf0(plVar7,0);
              FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
              FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7151,0);
              FUN_03418748(plVar7,lVar8,0);
            }
            lVar8 = FUN_03a37144();
            if (lVar8 != 0) {
              if (0 < *(int *)(lVar8 + 0x10)) {
                FUN_03418bf0(plVar7,0);
                FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7159,0);
                FUN_03418748(plVar7,lVar8,0);
              }
              FUN_03418bf0(plVar7,0);
              FUN_03418bf0(plVar7,0);
              FUN_03418c10(plVar7,*(undefined8 *)
                                   Method_System_Reflection_RuntimeFieldInfo_GetObjectData__,0);
              FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
              lVar8 = FUN_03a36d04();
              if (lVar8 != 0) {
                FUN_03418748(plVar7,*(undefined8 *)(lVar8 + 0x20),0);
                lVar8 = FUN_03a37144();
                if (lVar8 != 0) {
                  if (0 < *(int *)(lVar8 + 0x10)) {
                    FUN_03418bf0(plVar7,0);
                    FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                    FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7147,0);
                    FUN_03418748(plVar7,lVar8,0);
                  }
                  lVar8 = FUN_03a37144();
                  if (lVar8 != 0) {
                    if (0 < *(int *)(lVar8 + 0x10)) {
                      FUN_03418bf0(plVar7,0);
                      FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                      FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7152,0);
                      FUN_03418748(plVar7,lVar8,0);
                    }
                    lVar8 = FUN_03a37144();
                    if (lVar8 != 0) {
                      if (0 < *(int *)(lVar8 + 0x10)) {
                        FUN_03418bf0(plVar7,0);
                        FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                        FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7151,0);
                        FUN_03418748(plVar7,lVar8,0);
                      }
                      lVar8 = FUN_03a37144();
                      if (lVar8 != 0) {
                        if (0 < *(int *)(lVar8 + 0x10)) {
                          FUN_03418bf0(plVar7,0);
                          FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                          FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7159,0);
                          FUN_03418748(plVar7,lVar8,0);
                        }
                        FUN_03418bf0(plVar7,0);
                        FUN_03418bf0(plVar7,0);
                        FUN_03418c10(plVar7,*(undefined8 *)
                                             Method_System_Reflection_RuntimeFieldInfo_CheckConsistency__
                                     ,0);
                        FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                        uVar9 = (**(code **)(*unaff_x20 + 0x248))();
                        FUN_03418c10(plVar7,uVar9,0);
                        FUN_03418bf0(plVar7,0);
                        FUN_03418c10(plVar7,*(undefined8 *)
                                             Method_System_Reflection_RuntimeFieldInfo_GetValue__,0)
                        ;
                        FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                        uVar9 = FUN_0345174c();
                        uVar9 = FUN_034517e8(uVar9,0);
                        FUN_03418c10(plVar7,uVar9,0);
                        FUN_03418bf0(plVar7,0);
                        FUN_03418c10(plVar7,*(undefined8 *)
                                             Method_System_Reflection_RuntimeFieldInfo_CheckGeneric__
                                     ,0);
                        FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                        uVar9 = FUN_03451930();
                        uVar9 = FUN_034517e8(uVar9,0);
                        FUN_03418c10(plVar7,uVar9,0);
                        FUN_03418bf0(plVar7,0);
                        FUN_03418c10(plVar7,*(undefined8 *)Method_System_RuntimeFieldHandle__ctor__,
                                     0);
                        FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                        uVar9 = (**(code **)(*unaff_x20 + 0x1d8))();
                        uVar9 = FUN_0340cdc0(uVar9,0);
                        FUN_03418c10(plVar7,uVar9,0);
                        FUN_03418bf0(plVar7,0);
                        FUN_03418c10(plVar7,*(undefined8 *)StringLiteral_7155,0);
                        FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                        lVar8 = FUN_03a36f54();
                        if (lVar8 != 0) {
                          uVar9 = FUN_03a3263c();
                          FUN_03418748(plVar7,uVar9,0);
                          FUN_03419060(plVar7,0x28,0);
                          lVar8 = FUN_03a36f54();
                          if (lVar8 != 0) {
                            FUN_03418748(plVar7,*(undefined8 *)(lVar8 + 0x10),0);
                            FUN_03418c10(plVar7,*(undefined8 *)
                                                 Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__
                                         ,0);
                            FUN_03418bf0(plVar7,0);
                            FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7157,0);
                            lVar8 = FUN_03a36d80();
                            FUN_03418bf0(plVar7,0);
                            FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                            FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7145,0);
                            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            uVar9 = FUN_03a3263c();
                            FUN_03418748(plVar7,uVar9,0);
                            FUN_03418bf0(plVar7,0);
                            FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                            FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7153,0);
                            plVar10 = (long *)FUN_03970fb4();
                            if (plVar10 != (long *)0x0) {
                              uVar4 = (**(code **)(*plVar10 + 0x198))
                                                (plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
                              FUN_03419108(plVar7,uVar4,0);
                              lVar12 = *plVar10;
                              uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
                              if (uVar6 != 0) {
                                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar13 + -2) ==
                                      *(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                     ) {
                                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138)
                                    ;
                                    goto LAB_03a37ac0;
                                  }
                                  uVar6 = uVar6 - 1;
                                  piVar13 = piVar13 + 4;
                                } while (uVar6 != 0);
                              }
                              puVar11 = (undefined8 *)
                                        FUN_01ecb238(plVar10,*(long *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                                  ,0);
LAB_03a37ac0:
                              (*(code *)*puVar11)(plVar10,puVar11[1]);
                            }
                            FUN_03418bf0(plVar7,0);
                            FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                            FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7154,0);
                            plVar10 = *(long **)(lVar8 + 0x10);
                            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            uVar9 = (**(code **)(*plVar10 + 0x188))
                                              (plVar10,1,*(undefined8 *)(*plVar10 + 400));
                            FUN_03418c10(plVar7,uVar9,0);
                            FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                            FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7156,0);
                            plVar10 = *(long **)(lVar8 + 0x18);
                            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            uVar9 = (**(code **)(*plVar10 + 0x188))
                                              (plVar10,1,*(undefined8 *)(*plVar10 + 400));
                            FUN_03418748(plVar7,uVar9,0);
                            plVar10 = (long *)FUN_03a368a8();
                            if (plVar10 != (long *)0x0) {
                              (**(code **)(*plVar10 + 0x328))
                                        (plVar10,plVar7,*(undefined8 *)(*plVar10 + 0x330));
                              lVar8 = FUN_03a36468();
                              if ((lVar8 != 0) &&
                                 (plVar10 = *(long **)(lVar8 + 0x10), plVar10 != (long *)0x0)) {
                                iVar5 = (**(code **)(*plVar10 + 0x298))
                                                  (plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
                                if (0 < iVar5) {
                                  FUN_03418bf0(plVar7,0);
                                  FUN_03418bf0(plVar7,0);
                                  FUN_03418748(plVar7,*(undefined8 *)StringLiteral_7158,0);
                                  lVar8 = FUN_03a38040(lVar8);
                                  if (lVar8 == 0) goto LAB_03a37dd4;
                                  uVar6 = FUN_03a3818c();
                                  puVar3 = StringLiteral_7148;
                                  puVar2 = StringLiteral_7146;
                                  while ((uVar6 & 1) != 0) {
                                    plVar10 = (long *)
                                                  UnityEngine_InputSystem_InputActionState__GetComplexityFromMonitorIndex
                                                            (lVar8);
                                    FUN_03418bf0(plVar7,0);
                                    FUN_03418748(plVar7,*(undefined8 *)puVar2,0);
                                    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01f08a3c();
                                    }
                                    if (plVar10[2] == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01f08a3c();
                                    }
                                    uVar9 = FUN_03a3263c();
                                    FUN_03418748(plVar7,uVar9,0);
                                    FUN_03419060(plVar7,0x28,0);
                                    if (plVar10[2] == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01f08a3c();
                                    }
                                    FUN_03418748(plVar7,*(undefined8 *)(plVar10[2] + 0x10),0);
                                    FUN_03418748(plVar7,*(undefined8 *)puVar3,0);
                                    FUN_03418bf0(plVar7,0);
                                    FUN_03418748(plVar7,*(undefined8 *)puVar1,0);
                                    uVar9 = (**(code **)(*plVar10 + 0x188))
                                                      (plVar10,1,*(undefined8 *)(*plVar10 + 400));
                                    FUN_03418748(plVar7,uVar9,0);
                                    uVar6 = FUN_03a3818c(lVar8);
                                  }
                                }
                                FUN_03418bf0(plVar7,0);
                                lVar8 = *plVar7;
                                goto LAB_03a37da0;
                              }
                            }
                          }
                        }
                      }
                    }
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


