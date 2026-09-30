/*
FUNCTION_NAME: FUN_05d7453c
ENTRY_POINT: 05d7453c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05d7453c(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint local_64;
  
  puVar3 = PTR_DAT_06764da0;
  if ((DAT_06b82c7a & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06764da0);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(Method_System_Nullable<uint>_get_Value__);
    FUN_02d6084c(Method_System_Nullable<ulong>__ctor__);
    FUN_02d6084c(Method_System_Nullable<ulong>_GetValueOrDefault__);
    FUN_02d6084c(Method_System_Nullable<ulong>_get_HasValue__);
    FUN_02d6084c(Method_System_Nullable<ulong>_get_Value__);
    FUN_02d6084c(Method_System_Nullable<Vector2>__ctor__);
    FUN_02d6084c(Method_System_Nullable<Vector2>_GetValueOrDefault__);
    FUN_02d6084c(Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_02d6084c(Method_System_Nullable<Vector2>_get_Value__);
    FUN_02d6084c(Method_System_Nullable<Vector3>__ctor__);
    FUN_02d6084c(Method_System_Nullable<Vector3>_GetHashCode__);
    FUN_02d6084c(Method_System_Nullable<Vector3>_GetValueOrDefault__);
    FUN_02d6084c(Method_System_Nullable<Vector3>_get_HasValue__);
    FUN_02d6084c(Method_System_Nullable<Vector3>_get_Value__);
    FUN_02d6084c(Method_System_Nullable<Vector4>__ctor__);
    FUN_02d6084c(PTR_DAT_06765548);
    FUN_02d6084c(Method_System_Nullable<Vector4>_get_HasValue__);
    FUN_02d6084c(Method_System_Nullable<Vector4>_get_Value__);
    FUN_02d6084c(Method_System_Nullable<XRCameraConfiguration>__ctor__);
    FUN_02d6084c(Method_System_Nullable<XRCameraConfiguration>_GetValueOrDefault__);
    FUN_02d6084c(Method_System_Nullable<XRCameraConfiguration>_get_HasValue__);
    FUN_02d6084c(Method_System_Nullable<XRCameraConfiguration>_get_Value__);
    FUN_02d6084c(Method_System_Nullable<CompositionLayerAnalytics_UsageMetricsEvent>__ctor__);
    FUN_02d6084c(Method_System_Nullable<DebugAssert_Message>_GetValueOrDefault__);
    FUN_02d6084c(Method_System_Nullable<DebugAssert_Message>_get_HasValue__);
    FUN_02d6084c(Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>__ctor__);
    FUN_02d6084c(
                Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>_GetValueOrDefault__
                );
    FUN_02d6084c(
                Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>_get_HasValue__
                );
    FUN_02d6084c(Method_System_Nullable<InputAction_CallbackContext>__ctor__);
    FUN_02d6084c(PTR_DAT_06765750);
    FUN_02d6084c(Method_System_Nullable<InputAction_CallbackContext>_get_HasValue__);
    FUN_02d6084c(Method_System_Nullable<InputAction_CallbackContext>_get_Value__);
    FUN_02d6084c(Method_System_Nullable<InputActionRebindingExtensions_ParameterOverride>__ctor__);
    FUN_02d6084c(
                Method_System_Nullable<InputActionRebindingExtensions_ParameterOverride>_get_HasValue__
                );
    FUN_02d6084c(
                Method_System_Nullable<InputActionRebindingExtensions_ParameterOverride>_get_Value__
                );
    FUN_02d6084c(Method_System_Nullable<uint>_get_HasValue__);
    DAT_06b82c7a = 1;
  }
  local_64 = 0;
  plVar10 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_04e9624c(plVar10,0);
  uVar11 = FUN_05d85e54(param_1,1,0);
  uVar12 = FUN_05d863dc(param_1,1,1,0);
  puVar6 = Method_System_Nullable<Vector3>_get_HasValue__;
  puVar5 = Method_System_Nullable<ulong>_get_HasValue__;
  puVar4 = Method_System_Nullable<ulong>_GetValueOrDefault__;
  puVar3 = PTR_DAT_0675e238;
  if (plVar10 != (long *)0x0) {
    FUN_04e9808c(plVar10,*(undefined8 *)
                          Method_System_Nullable<InputAction_CallbackContext>_get_Value__,0);
    FUN_04e9808c(plVar10,*(undefined8 *)puVar6,0);
    FUN_04e9806c(plVar10,0);
    FUN_04e9808c(plVar10,*(undefined8 *)puVar5,0);
    FUN_04e9808c(plVar10,*(undefined8 *)puVar4,0);
    lVar13 = FUN_02d60934(*(undefined8 *)puVar3,5);
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) != 0) {
        *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)Method_System_Nullable<uint>_get_Value__;
        thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x20));
        if (1 < *(uint *)(lVar13 + 0x18)) {
          *(undefined8 *)(lVar13 + 0x28) = uVar12;
          thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x28),uVar12);
          if (2 < *(uint *)(lVar13 + 0x18)) {
            *(undefined8 *)(lVar13 + 0x30) =
                 *(undefined8 *)Method_System_Nullable<Vector4>_get_Value__;
            thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x30));
            if (3 < *(uint *)(lVar13 + 0x18)) {
              *(undefined8 *)(lVar13 + 0x38) = uVar12;
              thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x38),uVar12);
              puVar6 = Method_System_Nullable<CompositionLayerAnalytics_UsageMetricsEvent>__ctor__;
              puVar5 = Method_System_Nullable<Vector4>_get_HasValue__;
              puVar4 = PTR_DAT_06765548;
              if (4 < *(uint *)(lVar13 + 0x18)) {
                *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)PTR_DAT_06765750;
                thunk_FUN_02dd37b4();
                uVar14 = FUN_04e8e3a4(lVar13,0);
                FUN_04e9808c(plVar10,uVar14,0);
                FUN_04e9808c(plVar10,*(undefined8 *)puVar6,0);
                FUN_04e9808c(plVar10,*(undefined8 *)puVar4,0);
                FUN_04e9806c(plVar10,0);
                FUN_04e9808c(plVar10,*(undefined8 *)puVar5,0);
                lVar13 = FUN_02d60934(*(undefined8 *)puVar3,5);
                if (lVar13 == 0) goto LAB_05d75104;
                if (*(int *)(lVar13 + 0x18) != 0) {
                  *(undefined8 *)(lVar13 + 0x20) =
                       *(undefined8 *)
                        Method_System_Nullable<XRCameraConfiguration>_GetValueOrDefault__;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x20));
                  if (1 < *(uint *)(lVar13 + 0x18)) {
                    *(undefined8 *)(lVar13 + 0x28) = uVar12;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x28),uVar12);
                    if (2 < *(uint *)(lVar13 + 0x18)) {
                      *(undefined8 *)(lVar13 + 0x30) =
                           *(undefined8 *)Method_System_Nullable<Vector2>_get_Value__;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x30));
                      if (3 < *(uint *)(lVar13 + 0x18)) {
                        *(undefined8 *)(lVar13 + 0x38) = uVar11;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x38),uVar11);
                        puVar6 = Method_System_Nullable<InputAction_CallbackContext>_get_HasValue__;
                        puVar5 = Method_System_Nullable<InputAction_CallbackContext>__ctor__;
                        puVar4 = Method_System_Nullable<ulong>__ctor__;
                        if (4 < *(uint *)(lVar13 + 0x18)) {
                          *(undefined8 *)(lVar13 + 0x40) =
                               *(undefined8 *)Method_System_Nullable<Vector3>_GetValueOrDefault__;
                          thunk_FUN_02dd37b4();
                          uVar12 = FUN_04e8e3a4(lVar13,0);
                          FUN_04e9808c(plVar10,uVar12,0);
                          uVar12 = FUN_04e8db00(*(undefined8 *)puVar6,uVar11,*(undefined8 *)puVar5,0
                                               );
                          FUN_04e9808c(plVar10,uVar12,0);
                          FUN_04e9808c(plVar10,*(undefined8 *)puVar4,0);
                          FUN_04e9806c(plVar10,0);
                          puVar8 = Method_System_Nullable<DebugAssert_Message>_get_HasValue__;
                          puVar6 = Method_System_Nullable<Vector4>__ctor__;
                          puVar5 = Method_System_Nullable<Vector2>__ctor__;
                          puVar4 = Method_System_Nullable<ulong>_get_Value__;
                          if (param_2 != 0) {
                            uVar15 = *(uint *)(param_2 + 0x18);
                            if (0 < (int)uVar15) {
                              uVar17 = 0;
                              do {
                                if (uVar15 <= uVar17) goto LAB_05d75100;
                                lVar16 = *(long *)(param_2 + (long)(int)uVar17 * 8 + 0x20);
                                lVar13 = FUN_02d60934(*(undefined8 *)puVar3,7);
                                if (lVar13 == 0) goto LAB_05d75104;
                                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar4;
                                thunk_FUN_02dd37b4();
                                if (*(int *)(*(long *)Method_System_Nullable<uint>_get_HasValue__ +
                                            0xe4) == 0) {
                                  thunk_FUN_02dbd7b4();
                                }
                                uVar12 = FUN_05d7536c(lVar16);
                                if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x28) = uVar12;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x28),uVar12);
                                if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar8;
                                thunk_FUN_02dd37b4();
                                if (lVar16 == 0) goto LAB_05d75104;
                                if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(lVar16 + 0x30);
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x38));
                                if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar5;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x40));
                                if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(lVar16 + 0x38);
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x48));
                                if (*(uint *)(lVar13 + 0x18) < 7) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)puVar6;
                                thunk_FUN_02dd37b4();
                                uVar12 = FUN_04e8e3a4(lVar13,0);
                                FUN_04e9808c(plVar10,uVar12,0);
                                uVar15 = *(uint *)(param_2 + 0x18);
                                uVar17 = uVar17 + 1;
                              } while ((int)uVar17 < (int)uVar15);
                            }
                            puVar9 = 
                            Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>_GetValueOrDefault__
                            ;
                            puVar7 = Method_System_Nullable<XRCameraConfiguration>_get_Value__;
                            puVar5 = Method_System_Nullable<Vector3>_get_Value__;
                            puVar4 = Method_System_Nullable<Vector2>_GetValueOrDefault__;
                            FUN_04e9806c(plVar10,0);
                            FUN_04e9808c(plVar10,*(undefined8 *)puVar7,0);
                            FUN_04e9808c(plVar10,*(undefined8 *)puVar9,0);
                            FUN_04e9806c(plVar10,0);
                            uVar12 = FUN_04e8db00(*(undefined8 *)puVar5,uVar11,*(undefined8 *)puVar4
                                                  ,0);
                            FUN_04e9808c(plVar10,uVar12,0);
                            FUN_04e9808c(plVar10,*(undefined8 *)
                                                  Method_System_Nullable<ulong>__ctor__,0);
                            FUN_04e9806c(plVar10,0);
                            puVar7 = 
                            Method_System_Nullable<InputActionRebindingExtensions_ParameterOverride>__ctor__
                            ;
                            puVar5 = Method_System_Nullable<Vector2>_get_HasValue__;
                            puVar4 = PTR_DAT_06765750;
                            local_64 = 0;
                            uVar15 = *(uint *)(param_2 + 0x18);
                            if (0 < (int)uVar15) {
                              do {
                                if (uVar15 <= local_64) goto LAB_05d75100;
                                lVar16 = *(long *)(param_2 + (long)(int)local_64 * 8 + 0x20);
                                lVar13 = FUN_02d60934(*(undefined8 *)puVar3,5);
                                if (lVar13 == 0) goto LAB_05d75104;
                                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x20) =
                                     *(undefined8 *)
                                      Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>__ctor__
                                ;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x20));
                                uVar12 = FUN_050048bc(&local_64,0);
                                if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x28) = uVar12;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x28),uVar12);
                                if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x30) =
                                     *(undefined8 *)Method_System_Nullable<Vector3>_GetHashCode__;
                                thunk_FUN_02dd37b4();
                                if (lVar16 == 0) goto LAB_05d75104;
                                if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(lVar16 + 0x38);
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x38));
                                if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar4;
                                thunk_FUN_02dd37b4();
                                uVar12 = FUN_04e8e3a4(lVar13,0);
                                FUN_04e9808c(plVar10,uVar12,0);
                                lVar13 = FUN_02d60934(*(undefined8 *)puVar3,7);
                                if (lVar13 == 0) goto LAB_05d75104;
                                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x20) =
                                     *(undefined8 *)
                                      Method_System_Nullable<XRCameraConfiguration>__ctor__;
                                thunk_FUN_02dd37b4();
                                if (*(int *)(*(long *)Method_System_Nullable<uint>_get_HasValue__ +
                                            0xe4) == 0) {
                                  thunk_FUN_02dbd7b4();
                                }
                                uVar12 = FUN_05d7536c(lVar16);
                                if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x28) = uVar12;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x28),uVar12);
                                if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar8;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x30));
                                if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(lVar16 + 0x30);
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x38));
                                if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x40) =
                                     *(undefined8 *)
                                      Method_System_Nullable<DebugAssert_Message>_GetValueOrDefault__
                                ;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x40));
                                uVar12 = FUN_050048bc(&local_64,0);
                                if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x48) = uVar12;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x48),uVar12);
                                if (*(uint *)(lVar13 + 0x18) < 7) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)puVar6;
                                thunk_FUN_02dd37b4();
                                uVar12 = FUN_04e8e3a4(lVar13,0);
                                FUN_04e9808c(plVar10,uVar12,0);
                                lVar13 = FUN_02d60934(*(undefined8 *)puVar3,5);
                                if (lVar13 == 0) goto LAB_05d75104;
                                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar5;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x20));
                                if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar16 + 0x38);
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x28));
                                if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar7;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x30));
                                uVar12 = FUN_050048bc(&local_64,0);
                                if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x38) = uVar12;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x38),uVar12);
                                if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_05d75100;
                                *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar4;
                                thunk_FUN_02dd37b4();
                                uVar12 = FUN_04e8e3a4(lVar13,0);
                                FUN_04e9808c(plVar10,uVar12,0);
                                FUN_04e9806c(plVar10,0);
                                local_64 = local_64 + 1;
                                uVar15 = *(uint *)(param_2 + 0x18);
                              } while ((int)local_64 < (int)uVar15);
                            }
                            puVar1 = (undefined8 *)
                                     Method_System_Nullable<InputActionRebindingExtensions_ParameterOverride>_get_Value__
                            ;
                            puVar6 = 
                            Method_System_Nullable<InputActionRebindingExtensions_ParameterOverride>_get_HasValue__
                            ;
                            puVar5 = 
                            Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>_get_HasValue__
                            ;
                            puVar2 = (undefined8 *)
                                     Method_System_Nullable<XRCameraConfiguration>_get_HasValue__;
                            puVar3 = Method_System_Nullable<Vector3>__ctor__;
                            FUN_04e9808c(plVar10,*(undefined8 *)
                                                  Method_System_Nullable<XRCameraConfiguration>_get_Value__
                                         ,0);
                            puVar4 = 
                            Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>_GetValueOrDefault__
                            ;
                            FUN_04e9808c(plVar10,*(undefined8 *)
                                                  Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>_GetValueOrDefault__
                                         ,0);
                            FUN_04e9806c(plVar10,0);
                            FUN_04e9808c(plVar10,*(undefined8 *)puVar6,0);
                            if ((param_3 & 1) == 0) {
                              puVar1 = (undefined8 *)puVar3;
                              puVar2 = (undefined8 *)puVar5;
                            }
                            uVar11 = FUN_04e8db00(*puVar2,uVar11,*puVar1,0);
                            FUN_04e9808c(plVar10,uVar11,0);
                            FUN_04e9808c(plVar10,*(undefined8 *)puVar4,0);
                            FUN_04e9808c(plVar10,*(undefined8 *)
                                                  Method_System_Nullable<CompositionLayerAnalytics_UsageMetricsEvent>__ctor__
                                         ,0);
                            FUN_04e9808c(plVar10,*(undefined8 *)PTR_DAT_06765548,0);
                            (**(code **)(*plVar10 + 0x168))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                            return;
                          }
                          goto LAB_05d75104;
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
LAB_05d75100:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
  }
LAB_05d75104:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


