/*
FUNCTION_NAME: UnityEngine.Input$$set_compositionCursorPos
ENTRY_POINT: 0605eba8
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


void UnityEngine_Input__set_compositionCursorPos(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  FUN_03abf904();
  puVar2 = PTR_DAT_067c95a0;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x23;
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
    lVar6 = thunk_FUN_02f45270(*unaff_x27);
    FUN_06051fbc(lVar6,0);
    if (lVar6 != 0) {
      uVar8 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__;
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_067cc618;
      puVar3 = PTR_DAT_067c95c8;
      *(undefined8 *)(lVar6 + 0x20) = uVar8;
      *(undefined4 *)(lVar6 + 0x18) = 0;
      lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
      FUN_03abf108(lVar5,*unaff_x20);
      if (lVar5 != 0) {
        lVar7 = *(long *)(lVar5 + 0x10);
        uVar8 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__;
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          }
          else {
            FUN_03abf904(lVar5,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = *unaff_x26;
          *(long *)(lVar6 + 0x30) = lVar5;
          lVar5 = thunk_FUN_02f45270(uVar8);
          FUN_03abf108(lVar5,*unaff_x28);
          lVar7 = thunk_FUN_02f45270(*unaff_x25);
          FUN_06051fb4(lVar7,0);
          if (lVar7 != 0) {
            uVar8 = *(undefined8 *)
                     Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
            ;
            *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
            *(undefined8 *)(lVar7 + 0x18) = uVar8;
            if (lVar5 != 0) {
              lVar9 = *(long *)(lVar5 + 0x10);
              lVar10 = *(long *)
                        Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                }
                else {
                  FUN_03abf904(lVar5,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar6 + 0x28) = lVar5;
                lVar5 = *(long *)(unaff_x21 + 0x10);
                *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                if (lVar5 != 0) {
                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                  }
                  else {
                    FUN_03abf904();
                  }
                  lVar6 = thunk_FUN_02f45270(*unaff_x27);
                  FUN_06051fbc(lVar6,0);
                  if (lVar6 != 0) {
                    uVar8 = *(undefined8 *)
                             Method_Oculus_Platform_Message<PushNotificationResult>_get_Data__;
                    *(undefined8 *)(lVar6 + 0x10) =
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                    ;
                    puVar3 = PTR_DAT_067c95c8;
                    *(undefined8 *)(lVar6 + 0x20) = uVar8;
                    *(undefined4 *)(lVar6 + 0x18) = 0;
                    lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                    FUN_03abf108(lVar5,*unaff_x20);
                    if (lVar5 != 0) {
                      lVar7 = *(long *)(lVar5 + 0x10);
                      uVar8 = *(undefined8 *)
                               Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_get_frameRate__
                      ;
                      lVar9 = *(long *)puVar2;
                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                      if (lVar7 != 0) {
                        uVar1 = *(uint *)(lVar5 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                        }
                        else {
                          FUN_03abf904(lVar5,uVar8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        }
                        uVar8 = *unaff_x26;
                        *(long *)(lVar6 + 0x30) = lVar5;
                        lVar5 = thunk_FUN_02f45270(uVar8);
                        FUN_03abf108(lVar5,*unaff_x28);
                        lVar7 = thunk_FUN_02f45270(*unaff_x25);
                        FUN_06051fb4(lVar7,0);
                        if (lVar7 != 0) {
                          uVar8 = *(undefined8 *)
                                   Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryGetHumanStencil__
                          ;
                          *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                          *(undefined8 *)(lVar7 + 0x18) = uVar8;
                          if (lVar5 != 0) {
                            lVar9 = *(long *)(lVar5 + 0x10);
                            lVar10 = *(long *)
                                      Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                            ;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                              }
                              else {
                                FUN_03abf904(lVar5,lVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar6 + 0x28) = lVar5;
                              lVar5 = *(long *)(unaff_x21 + 0x10);
                              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                              if (lVar5 != 0) {
                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                  *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                                }
                                else {
                                  FUN_03abf904();
                                }
                                lVar6 = thunk_FUN_02f45270(*unaff_x27);
                                FUN_06051fbc(lVar6,0);
                                puVar3 = 
                                UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                ;
                                if (lVar6 != 0) {
                                  uVar8 = *(undefined8 *)
                                           UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                  ;
                                  *(undefined8 *)(lVar6 + 0x10) =
                                       *(undefined8 *)Method_System_Nullable<byte>__ctor__;
                                  puVar4 = PTR_DAT_067c95c8;
                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                  FUN_03abf108(lVar5,*unaff_x20);
                                  if (lVar5 != 0) {
                                    lVar7 = *(long *)(lVar5 + 0x10);
                                    uVar8 = *(undefined8 *)puVar3;
                                    lVar9 = *(long *)puVar2;
                                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                    if (lVar7 != 0) {
                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                        ;
                                      }
                                      else {
                                        FUN_03abf904(lVar5,uVar8,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      uVar8 = *unaff_x26;
                                      *(long *)(lVar6 + 0x30) = lVar5;
                                      lVar5 = thunk_FUN_02f45270(uVar8);
                                      FUN_03abf108(lVar5,*unaff_x28);
                                      lVar7 = thunk_FUN_02f45270(*unaff_x25);
                                      FUN_06051fb4(lVar7,0);
                                      if (lVar7 != 0) {
                                        uVar8 = *(undefined8 *)
                                                 Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                        ;
                                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                        *(undefined8 *)(lVar7 + 0x18) = uVar8;
                                        if (lVar5 != 0) {
                                          lVar9 = *(long *)(lVar5 + 0x10);
                                          lVar10 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                          ;
                                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                              *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7
                                              ;
                                            }
                                            else {
                                              FUN_03abf904(lVar5,lVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar6 + 0x28) = lVar5;
                                            lVar5 = *(long *)(unaff_x21 + 0x10);
                                            *(int *)(unaff_x21 + 0x1c) =
                                                 *(int *)(unaff_x21 + 0x1c) + 1;
                                            if (lVar5 != 0) {
                                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                                              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) =
                                                     lVar6;
                                              }
                                              else {
                                                FUN_03abf904();
                                              }
                                              lVar6 = thunk_FUN_02f45270(*unaff_x27);
                                              FUN_06051fbc(lVar6,0);
                                              if (lVar6 != 0) {
                                                uVar8 = *(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                                                ;
                                                *(undefined8 *)(lVar6 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__
                                                ;
                                                puVar3 = PTR_DAT_067c95c8;
                                                *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                *(undefined4 *)(lVar6 + 0x18) = 0;
                                                lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                FUN_03abf108(lVar5,*unaff_x20);
                                                if (lVar5 != 0) {
                                                  lVar7 = *(long *)(lVar5 + 0x10);
                                                  uVar8 = *(undefined8 *)
                                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__
                                                  ;
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar5,*unaff_x28);
                                                  lVar7 = thunk_FUN_02f45270(*unaff_x25);
                                                  FUN_06051fb4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRRaycastSubsystem_Provider_Raycast__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x27);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_XR_ARSubsystems_XRRaycastSubsystem_Provider_Raycast__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_RemoveListener__
                                                  ;
                                                  puVar3 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar6 + 0x18) = 2;
                                                  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u8__;
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar5,*unaff_x28);
                                                  lVar7 = thunk_FUN_02f45270(*unaff_x25);
                                                  FUN_06051fb4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanStencilMode__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x27);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanDepthMode__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_Invoke__
                                                  ;
                                                  puVar3 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f64__
                                                  ;
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar5,*unaff_x28);
                                                  lVar7 = thunk_FUN_02f45270(*unaff_x25);
                                                  FUN_06051fb4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_set_matchFrameRateRequested__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x27);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryGetHumanDepth__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_1__
                                                  ;
                                                  puVar3 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__
                                                  ;
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar5,*unaff_x28);
                                                  lVar7 = thunk_FUN_02f45270(*unaff_x25);
                                                  FUN_06051fb4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x27);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                                  ;
                                                  puVar3 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                                  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                  ;
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar5,*unaff_x28);
                                                  lVar7 = thunk_FUN_02f45270(*unaff_x25);
                                                  FUN_06051fb4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x27);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  puVar3 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                                  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar5,*unaff_x28);
                                                  lVar7 = thunk_FUN_02f45270(*unaff_x25);
                                                  FUN_06051fb4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*unaff_x27);
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  puVar3 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar8;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar8 = *unaff_x26;
                                                  *(long *)(lVar6 + 0x30) = lVar5;
                                                  lVar5 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar5,*unaff_x28);
                                                  lVar7 = thunk_FUN_02f45270(*unaff_x25);
                                                  FUN_06051fb4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar8;
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar5,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar5;
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20)
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


