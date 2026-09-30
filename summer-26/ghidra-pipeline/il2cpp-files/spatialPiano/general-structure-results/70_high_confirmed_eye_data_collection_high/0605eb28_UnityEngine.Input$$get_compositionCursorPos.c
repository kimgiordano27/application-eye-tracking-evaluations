/*
FUNCTION_NAME: UnityEngine.Input$$get_compositionCursorPos
ENTRY_POINT: 0605eb28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_Input__get_compositionCursorPos(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  lVar6 = thunk_FUN_02f45270();
  FUN_06051fb4(lVar6,0);
  if (lVar6 != 0) {
    uVar7 = *unaff_x29;
    *(undefined8 *)(lVar6 + 0x10) = *unaff_x27;
    *(undefined8 *)(lVar6 + 0x18) = uVar7;
    if (unaff_x23 != 0) {
      lVar8 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      puVar3 = PTR_DAT_067c95b0;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
          *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
        }
        else {
          FUN_03abf904();
        }
        puVar2 = PTR_DAT_067c95a0;
        *(long *)(unaff_x22 + 0x28) = unaff_x23;
        lVar6 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
          }
          else {
            FUN_03abf904();
          }
          lVar6 = thunk_FUN_02f45270(*unaff_x20);
          FUN_06051fbc(lVar6,0);
          if (lVar6 != 0) {
            uVar7 = *(undefined8 *)
                     Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
            ;
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_067cc618;
            puVar4 = PTR_DAT_067c95c8;
            *(undefined8 *)(lVar6 + 0x20) = uVar7;
            *(undefined4 *)(lVar6 + 0x18) = 0;
            lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
            FUN_03abf108(lVar8,*(undefined8 *)puVar3);
            if (lVar8 != 0) {
              lVar9 = *(long *)(lVar8 + 0x10);
              uVar7 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__;
              lVar10 = *(long *)puVar2;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                }
                else {
                  FUN_03abf904(lVar8,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                uVar7 = *unaff_x26;
                *(long *)(lVar6 + 0x30) = lVar8;
                lVar8 = thunk_FUN_02f45270(uVar7);
                FUN_03abf108(lVar8,*unaff_x28);
                lVar9 = thunk_FUN_02f45270(*unaff_x19);
                FUN_06051fb4(lVar9,0);
                if (lVar9 != 0) {
                  uVar7 = *(undefined8 *)
                           Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                  ;
                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x27;
                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                  if (lVar8 != 0) {
                    lVar10 = *(long *)(lVar8 + 0x10);
                    lVar11 = *(long *)
                              Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                    ;
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                        *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = lVar9;
                      }
                      else {
                        FUN_03abf904(lVar8,lVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar6 + 0x28) = lVar8;
                      lVar8 = *(long *)(unaff_x21 + 0x10);
                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                          *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                        }
                        else {
                          FUN_03abf904();
                        }
                        lVar6 = thunk_FUN_02f45270(*unaff_x20);
                        FUN_06051fbc(lVar6,0);
                        if (lVar6 != 0) {
                          uVar7 = *(undefined8 *)
                                   Method_Oculus_Platform_Message<PushNotificationResult>_get_Data__
                          ;
                          *(undefined8 *)(lVar6 + 0x10) =
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                          ;
                          puVar4 = PTR_DAT_067c95c8;
                          *(undefined8 *)(lVar6 + 0x20) = uVar7;
                          *(undefined4 *)(lVar6 + 0x18) = 0;
                          lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                          FUN_03abf108(lVar8,*(undefined8 *)puVar3);
                          if (lVar8 != 0) {
                            lVar9 = *(long *)(lVar8 + 0x10);
                            uVar7 = *(undefined8 *)
                                     Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_get_frameRate__
                            ;
                            lVar10 = *(long *)puVar2;
                            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar1 = *(uint *)(lVar8 + 0x18);
                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                              }
                              else {
                                FUN_03abf904(lVar8,uVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                              }
                              uVar7 = *unaff_x26;
                              *(long *)(lVar6 + 0x30) = lVar8;
                              lVar8 = thunk_FUN_02f45270(uVar7);
                              FUN_03abf108(lVar8,*unaff_x28);
                              lVar9 = thunk_FUN_02f45270(*unaff_x19);
                              FUN_06051fb4(lVar9,0);
                              if (lVar9 != 0) {
                                uVar7 = *(undefined8 *)
                                         Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryGetHumanStencil__
                                ;
                                *(undefined8 *)(lVar9 + 0x10) = *unaff_x27;
                                *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                if (lVar8 != 0) {
                                  lVar10 = *(long *)(lVar8 + 0x10);
                                  lVar11 = *(long *)
                                            Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                  ;
                                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                  if (lVar10 != 0) {
                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = lVar9;
                                    }
                                    else {
                                      FUN_03abf904(lVar8,lVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar6 + 0x28) = lVar8;
                                    lVar8 = *(long *)(unaff_x21 + 0x10);
                                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                    if (lVar8 != 0) {
                                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                                      }
                                      else {
                                        FUN_03abf904();
                                      }
                                      lVar6 = thunk_FUN_02f45270(*unaff_x20);
                                      FUN_06051fbc(lVar6,0);
                                      puVar4 = 
                                      UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                      ;
                                      if (lVar6 != 0) {
                                        uVar7 = *(undefined8 *)
                                                 UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar6 + 0x10) =
                                             *(undefined8 *)Method_System_Nullable<byte>__ctor__;
                                        puVar5 = PTR_DAT_067c95c8;
                                        *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                        *(undefined4 *)(lVar6 + 0x18) = 1;
                                        lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                        FUN_03abf108(lVar8,*(undefined8 *)puVar3);
                                        if (lVar8 != 0) {
                                          lVar9 = *(long *)(lVar8 + 0x10);
                                          uVar7 = *(undefined8 *)puVar4;
                                          lVar10 = *(long *)puVar2;
                                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar1 = *(uint *)(lVar8 + 0x18);
                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar7;
                                            }
                                            else {
                                              FUN_03abf904(lVar8,uVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            uVar7 = *unaff_x26;
                                            *(long *)(lVar6 + 0x30) = lVar8;
                                            lVar8 = thunk_FUN_02f45270(uVar7);
                                            FUN_03abf108(lVar8,*unaff_x28);
                                            lVar9 = thunk_FUN_02f45270(*unaff_x19);
                                            FUN_06051fb4(lVar9,0);
                                            if (lVar9 != 0) {
                                              uVar7 = *(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                              ;
                                              *(undefined8 *)(lVar9 + 0x10) = *unaff_x27;
                                              *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                              if (lVar8 != 0) {
                                                lVar10 = *(long *)(lVar8 + 0x10);
                                                lVar11 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                ;
                                                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                                if (lVar10 != 0) {
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20)
                                                         = lVar9;
                                                  }
                                                  else {
                                                    FUN_03abf904(lVar8,lVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x20);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__
                                                  ;
                                                  puVar4 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar8,*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__
                                                  ;
                                                  lVar10 = *(long *)puVar2;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar8;
                                                  lVar8 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar8,*unaff_x28);
                                                  lVar9 = thunk_FUN_02f45270(*unaff_x19);
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRRaycastSubsystem_Provider_Raycast__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x20);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_XR_ARSubsystems_XRRaycastSubsystem_Provider_Raycast__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_RemoveListener__
                                                  ;
                                                  puVar4 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar6 + 0x18) = 2;
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar8,*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u8__;
                                                  lVar10 = *(long *)puVar2;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar8;
                                                  lVar8 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar8,*unaff_x28);
                                                  lVar9 = thunk_FUN_02f45270(*unaff_x19);
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanStencilMode__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x20);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanDepthMode__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_Invoke__
                                                  ;
                                                  puVar4 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar8,*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f64__
                                                  ;
                                                  lVar10 = *(long *)puVar2;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar8;
                                                  lVar8 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar8,*unaff_x28);
                                                  lVar9 = thunk_FUN_02f45270(*unaff_x19);
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_set_matchFrameRateRequested__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x20);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryGetHumanDepth__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_1__
                                                  ;
                                                  puVar4 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar8,*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__
                                                  ;
                                                  lVar10 = *(long *)puVar2;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar8;
                                                  lVar8 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar8,*unaff_x28);
                                                  lVar9 = thunk_FUN_02f45270(*unaff_x19);
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x20);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                                  ;
                                                  puVar4 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar8,*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                  ;
                                                  lVar10 = *(long *)puVar2;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar8;
                                                  lVar8 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar8,*unaff_x28);
                                                  lVar9 = thunk_FUN_02f45270(*unaff_x19);
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x20);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  puVar4 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar8,*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar10 = *(long *)puVar2;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar8;
                                                  lVar8 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar8,*unaff_x28);
                                                  lVar9 = thunk_FUN_02f45270(*unaff_x19);
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x20);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  puVar4 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar8,*(undefined8 *)puVar3);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar10 = *(long *)puVar2;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar7 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar8;
                                                  lVar8 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar8,*unaff_x28);
                                                  lVar9 = thunk_FUN_02f45270(*unaff_x19);
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar7;
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar8;
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x21;
                                                    FUN_06051d9c(in_stack_00000000,in_stack_00000008
                                                                 ,0);
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
  FUN_02f089c8();
}


