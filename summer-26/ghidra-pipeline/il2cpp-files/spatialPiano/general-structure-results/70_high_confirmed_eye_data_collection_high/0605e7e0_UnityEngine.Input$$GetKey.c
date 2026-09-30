/*
FUNCTION_NAME: UnityEngine.Input$$GetKey
ENTRY_POINT: 0605e7e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_Input__GetKey(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined4 in_w10;
  undefined8 in_x11;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x29;
  
  *(undefined4 *)(unaff_x21 + 0x1c) = in_w10;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x11;
  puVar8 = Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_1__;
  puVar3 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_5__;
  puVar7 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
    }
    else {
      FUN_03abf904();
    }
    uVar10 = *(undefined8 *)puVar8;
    *(long *)(unaff_x29 + 0x20) = unaff_x21;
    lVar11 = thunk_FUN_02f45270(uVar10);
    FUN_03abf108(lVar11,*(undefined8 *)puVar3);
    lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
    FUN_06051fbc(lVar12,0);
    puVar8 = System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo;
    puVar3 = PTR_DAT_067c95b0;
    if (lVar12 != 0) {
      uVar15 = *(undefined8 *)System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo;
      uVar10 = *(undefined8 *)PTR_DAT_067c95c8;
      *(undefined8 *)(lVar12 + 0x10) =
           *(undefined8 *)Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__;
      *(undefined8 *)(lVar12 + 0x20) = uVar15;
      *(undefined4 *)(lVar12 + 0x18) = 1;
      lVar13 = thunk_FUN_02f45270(uVar10);
      FUN_03abf108(lVar13,*(undefined8 *)puVar3);
      if (lVar13 != 0) {
        lVar14 = *(long *)(lVar13 + 0x10);
        uVar10 = *(undefined8 *)puVar8;
        lVar16 = *(long *)PTR_DAT_067c95a0;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        puVar9 = 
        Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
        ;
        puVar8 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__;
        puVar3 = Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
          }
          else {
            FUN_03abf904(lVar13,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = *(undefined8 *)puVar9;
          *(long *)(lVar12 + 0x30) = lVar13;
          lVar13 = thunk_FUN_02f45270(uVar10);
          FUN_03abf108(lVar13,*(undefined8 *)puVar8);
          lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
          FUN_06051fb4(lVar14,0);
          puVar4 = 
          Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_0__
          ;
          if (lVar14 != 0) {
            uVar10 = *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_0__
            ;
            *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
            *(undefined8 *)(lVar14 + 0x18) = uVar10;
            if (lVar13 != 0) {
              lVar16 = *(long *)(lVar13 + 0x10);
              lVar17 = *(long *)
                        Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar16 != 0) {
                uVar1 = *(uint *)(lVar13 + 0x18);
                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                  *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = lVar14;
                }
                else {
                  FUN_03abf904(lVar13,lVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar12 + 0x28) = lVar13;
                if (lVar11 != 0) {
                  lVar13 = *(long *)(lVar11 + 0x10);
                  lVar14 = *(long *)
                            Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar1 = *(uint *)(lVar11 + 0x18);
                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = lVar12;
                    }
                    else {
                      FUN_03abf904(lVar11,lVar12,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
                    FUN_06051fbc(lVar12,0);
                    if (lVar12 != 0) {
                      uVar10 = *(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_6__
                      ;
                      *(undefined8 *)(lVar12 + 0x10) =
                           *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__;
                      puVar2 = PTR_DAT_067c95c8;
                      *(undefined8 *)(lVar12 + 0x20) = uVar10;
                      *(undefined4 *)(lVar12 + 0x18) = 0;
                      lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                      FUN_03abf108(lVar13,*(undefined8 *)PTR_DAT_067c95b0);
                      puVar2 = PTR_DAT_067c95a0;
                      if (lVar13 != 0) {
                        lVar14 = *(long *)(lVar13 + 0x10);
                        uVar10 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f32__
                        ;
                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                        if (lVar14 != 0) {
                          uVar1 = *(uint *)(lVar13 + 0x18);
                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                          }
                          else {
                            FUN_03abf904(lVar13,uVar10,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) +
                                          0x70));
                          }
                          uVar10 = *(undefined8 *)puVar9;
                          *(long *)(lVar12 + 0x30) = lVar13;
                          lVar13 = thunk_FUN_02f45270(uVar10);
                          FUN_03abf108(lVar13,*(undefined8 *)puVar8);
                          lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                          FUN_06051fb4(lVar14,0);
                          if (lVar14 != 0) {
                            uVar10 = *(undefined8 *)puVar4;
                            *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
                            *(undefined8 *)(lVar14 + 0x18) = uVar10;
                            if (lVar13 != 0) {
                              lVar16 = *(long *)(lVar13 + 0x10);
                              lVar17 = *(long *)
                                        Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                              ;
                              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                              puVar4 = PTR_DAT_067c95b0;
                              if (lVar16 != 0) {
                                uVar1 = *(uint *)(lVar13 + 0x18);
                                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                  *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = lVar14;
                                }
                                else {
                                  FUN_03abf904(lVar13,lVar14,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                puVar2 = PTR_DAT_067c95a0;
                                *(long *)(lVar12 + 0x28) = lVar13;
                                lVar13 = *(long *)(lVar11 + 0x10);
                                lVar14 = *(long *)
                                          Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                ;
                                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                if (lVar13 != 0) {
                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                    *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = lVar12;
                                  }
                                  else {
                                    FUN_03abf904(lVar11,lVar12,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
                                  FUN_06051fbc(lVar12,0);
                                  if (lVar12 != 0) {
                                    uVar10 = *(undefined8 *)
                                              Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
                                    ;
                                    *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)PTR_DAT_067cc618
                                    ;
                                    puVar5 = PTR_DAT_067c95c8;
                                    *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                    *(undefined4 *)(lVar12 + 0x18) = 0;
                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                    FUN_03abf108(lVar13,*(undefined8 *)puVar4);
                                    if (lVar13 != 0) {
                                      lVar14 = *(long *)(lVar13 + 0x10);
                                      uVar10 = *(undefined8 *)
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__
                                      ;
                                      lVar16 = *(long *)puVar2;
                                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                      if (lVar14 != 0) {
                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar10;
                                        }
                                        else {
                                          FUN_03abf904(lVar13,uVar10,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        uVar10 = *(undefined8 *)puVar9;
                                        *(long *)(lVar12 + 0x30) = lVar13;
                                        lVar13 = thunk_FUN_02f45270(uVar10);
                                        FUN_03abf108(lVar13,*(undefined8 *)puVar8);
                                        lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                        FUN_06051fb4(lVar14,0);
                                        if (lVar14 != 0) {
                                          uVar10 = *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                                          ;
                                          *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
                                          *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                          if (lVar13 != 0) {
                                            lVar16 = *(long *)(lVar13 + 0x10);
                                            lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                            ;
                                            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                            if (lVar16 != 0) {
                                              uVar1 = *(uint *)(lVar13 + 0x18);
                                              if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                     lVar14;
                                              }
                                              else {
                                                FUN_03abf904(lVar13,lVar14,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar17 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar12 + 0x28) = lVar13;
                                              lVar13 = *(long *)(lVar11 + 0x10);
                                              lVar14 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                              ;
                                              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                              if (lVar13 != 0) {
                                                uVar1 = *(uint *)(lVar11 + 0x18);
                                                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                  *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                       lVar12;
                                                }
                                                else {
                                                  FUN_03abf904(lVar11,lVar12,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar14 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
                                                FUN_06051fbc(lVar12,0);
                                                if (lVar12 != 0) {
                                                  uVar10 = *(undefined8 *)
                                                                                                                        
                                                  Method_Oculus_Platform_Message<PushNotificationResult>_get_Data__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                                                  ;
                                                  puVar5 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_get_frameRate__
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = thunk_FUN_02f45270(uVar10);
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06051fb4(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryGetHumanStencil__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar12,0);
                                                  puVar5 = 
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Nullable<byte>__ctor__;
                                                  puVar6 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)puVar5;
                                                    lVar16 = *(long *)puVar2;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar10;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar13,uVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = thunk_FUN_02f45270(uVar10);
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06051fb4(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__
                                                  ;
                                                  puVar5 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = thunk_FUN_02f45270(uVar10);
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06051fb4(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRRaycastSubsystem_Provider_Raycast__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRRaycastSubsystem_Provider_Raycast__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_RemoveListener__
                                                  ;
                                                  puVar5 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 2;
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u8__;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = thunk_FUN_02f45270(uVar10);
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06051fb4(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanStencilMode__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanDepthMode__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_Invoke__
                                                  ;
                                                  puVar5 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f64__
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = thunk_FUN_02f45270(uVar10);
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06051fb4(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_set_matchFrameRateRequested__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryGetHumanDepth__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_1__
                                                  ;
                                                  puVar5 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = thunk_FUN_02f45270(uVar10);
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06051fb4(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                                  ;
                                                  puVar5 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = thunk_FUN_02f45270(uVar10);
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06051fb4(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  puVar5 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = thunk_FUN_02f45270(uVar10);
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06051fb4(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  puVar7 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar12 + 0x18) = 4;
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar16 = *(long *)puVar2;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar10 = *(undefined8 *)puVar9;
                                                  *(long *)(lVar12 + 0x30) = lVar13;
                                                  lVar13 = thunk_FUN_02f45270(uVar10);
                                                  FUN_03abf108(lVar13,*(undefined8 *)puVar8);
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_06051fb4(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar14 + 0x18) = uVar10;
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar13;
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x29 + 0x28) = lVar11;
                                                  FUN_06051d9c(unaff_x25,unaff_x29,0);
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


