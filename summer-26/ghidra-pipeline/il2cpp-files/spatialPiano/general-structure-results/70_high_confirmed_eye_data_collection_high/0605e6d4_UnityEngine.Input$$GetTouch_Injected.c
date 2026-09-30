/*
FUNCTION_NAME: UnityEngine.Input$$GetTouch_Injected
ENTRY_POINT: 0605e6d4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_Input__GetTouch_Injected(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *in_x9;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *in_x10;
  undefined8 *in_x11;
  long in_x12;
  undefined8 uVar20;
  long unaff_x19;
  undefined8 *puVar21;
  long unaff_x21;
  undefined8 *puVar22;
  undefined8 unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x29;
  
  puVar22 = *(undefined8 **)(unaff_x21 + 0xcb0);
  puVar21 = *(undefined8 **)(unaff_x19 + 0xc88);
  uVar15 = *in_x9;
  uVar20 = *unaff_x27;
  uVar11 = **(undefined8 **)(in_x12 + 0xcc0);
  *(undefined8 *)(unaff_x29 + 0x10) = *param_1;
  *(undefined8 *)(unaff_x29 + 0x18) = uVar15;
  uVar15 = *in_x10;
  uVar16 = *in_x11;
  *(undefined8 *)(unaff_x29 + 0x30) = uVar20;
  *(undefined8 *)(unaff_x29 + 0x38) = uVar15;
  *(undefined8 *)(unaff_x29 + 0x40) = uVar16;
  lVar12 = thunk_FUN_02f45270(uVar11);
  FUN_03abf108(lVar12,*puVar22);
  lVar13 = thunk_FUN_02f45270(*puVar21);
  FUN_06051fc4(lVar13,0);
  puVar8 = 
  Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__28_0__;
  if (lVar13 != 0) {
    *(undefined4 *)(lVar13 + 0x10) = 0x164;
    *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)puVar8;
    puVar8 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_2__;
    if (lVar12 != 0) {
      lVar14 = *(long *)(lVar12 + 0x10);
      lVar17 = *(long *)Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_2__;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
        }
        else {
          FUN_03abf904(lVar12,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        lVar13 = thunk_FUN_02f45270(*puVar21);
        FUN_06051fc4(lVar13,0);
        puVar4 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__;
        if (lVar13 != 0) {
          iVar1 = *(int *)(lVar12 + 0x1c);
          *(undefined4 *)(lVar13 + 0x10) = 0x264;
          lVar17 = *(long *)puVar8;
          uVar11 = *(undefined8 *)puVar4;
          lVar14 = *(long *)(lVar12 + 0x10);
          *(int *)(lVar12 + 0x1c) = iVar1 + 1;
          *(undefined8 *)(lVar13 + 0x18) = uVar11;
          puVar9 = Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_1__;
          puVar4 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_5__;
          puVar8 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__;
          if (lVar14 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
            }
            else {
              FUN_03abf904(lVar12,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = *(undefined8 *)puVar9;
            *(long *)(unaff_x29 + 0x20) = lVar12;
            lVar12 = thunk_FUN_02f45270(uVar11);
            FUN_03abf108(lVar12,*(undefined8 *)puVar4);
            lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
            FUN_06051fbc(lVar13,0);
            puVar9 = System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo;
            puVar4 = PTR_DAT_067c95b0;
            if (lVar13 != 0) {
              uVar15 = *(undefined8 *)
                        System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo;
              uVar11 = *(undefined8 *)PTR_DAT_067c95c8;
              *(undefined8 *)(lVar13 + 0x10) =
                   *(undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__;
              *(undefined8 *)(lVar13 + 0x20) = uVar15;
              *(undefined4 *)(lVar13 + 0x18) = 1;
              lVar14 = thunk_FUN_02f45270(uVar11);
              FUN_03abf108(lVar14,*(undefined8 *)puVar4);
              if (lVar14 != 0) {
                lVar17 = *(long *)(lVar14 + 0x10);
                uVar11 = *(undefined8 *)puVar9;
                lVar18 = *(long *)PTR_DAT_067c95a0;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                puVar10 = 
                Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                ;
                puVar9 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__;
                puVar4 = Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__;
                if (lVar17 != 0) {
                  uVar2 = *(uint *)(lVar14 + 0x18);
                  if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                  }
                  else {
                    FUN_03abf904(lVar14,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar11 = *(undefined8 *)puVar10;
                  *(long *)(lVar13 + 0x30) = lVar14;
                  lVar14 = thunk_FUN_02f45270(uVar11);
                  FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                  FUN_06051fb4(lVar17,0);
                  puVar5 = 
                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_0__
                  ;
                  if (lVar17 != 0) {
                    uVar11 = *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_0__
                    ;
                    *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                    *(undefined8 *)(lVar17 + 0x18) = uVar11;
                    if (lVar14 != 0) {
                      lVar18 = *(long *)(lVar14 + 0x10);
                      lVar19 = *(long *)
                                Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                      ;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      if (lVar18 != 0) {
                        uVar2 = *(uint *)(lVar14 + 0x18);
                        if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                          *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = lVar17;
                        }
                        else {
                          FUN_03abf904(lVar14,lVar17,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar13 + 0x28) = lVar14;
                        if (lVar12 != 0) {
                          lVar14 = *(long *)(lVar12 + 0x10);
                          lVar17 = *(long *)
                                    Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                          ;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar14 != 0) {
                            uVar2 = *(uint *)(lVar12 + 0x18);
                            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                              *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar13;
                            }
                            else {
                              FUN_03abf904(lVar12,lVar13,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
                            FUN_06051fbc(lVar13,0);
                            if (lVar13 != 0) {
                              uVar11 = *(undefined8 *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_6__
                              ;
                              *(undefined8 *)(lVar13 + 0x10) =
                                   *(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__;
                              puVar3 = PTR_DAT_067c95c8;
                              *(undefined8 *)(lVar13 + 0x20) = uVar11;
                              *(undefined4 *)(lVar13 + 0x18) = 0;
                              lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                              FUN_03abf108(lVar14,*(undefined8 *)PTR_DAT_067c95b0);
                              puVar3 = PTR_DAT_067c95a0;
                              if (lVar14 != 0) {
                                lVar17 = *(long *)(lVar14 + 0x10);
                                uVar11 = *(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f32__;
                                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                if (lVar17 != 0) {
                                  uVar2 = *(uint *)(lVar14 + 0x18);
                                  if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                    *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                    *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                                  }
                                  else {
                                    FUN_03abf904(lVar14,uVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)puVar3 + 0x20) +
                                                            0xc0) + 0x70));
                                  }
                                  uVar11 = *(undefined8 *)puVar10;
                                  *(long *)(lVar13 + 0x30) = lVar14;
                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                  FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                  FUN_06051fb4(lVar17,0);
                                  if (lVar17 != 0) {
                                    uVar11 = *(undefined8 *)puVar5;
                                    *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                                    *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                    if (lVar14 != 0) {
                                      lVar18 = *(long *)(lVar14 + 0x10);
                                      lVar19 = *(long *)
                                                Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                      ;
                                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                      puVar5 = PTR_DAT_067c95b0;
                                      if (lVar18 != 0) {
                                        uVar2 = *(uint *)(lVar14 + 0x18);
                                        if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                          *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = lVar17;
                                        }
                                        else {
                                          FUN_03abf904(lVar14,lVar17,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        puVar3 = PTR_DAT_067c95a0;
                                        *(long *)(lVar13 + 0x28) = lVar14;
                                        lVar14 = *(long *)(lVar12 + 0x10);
                                        lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                        ;
                                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                        if (lVar14 != 0) {
                                          uVar2 = *(uint *)(lVar12 + 0x18);
                                          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = lVar13
                                            ;
                                          }
                                          else {
                                            FUN_03abf904(lVar12,lVar13,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
                                          FUN_06051fbc(lVar13,0);
                                          if (lVar13 != 0) {
                                            uVar11 = *(undefined8 *)
                                                                                                            
                                                  Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
                                            ;
                                            *(undefined8 *)(lVar13 + 0x10) =
                                                 *(undefined8 *)PTR_DAT_067cc618;
                                            puVar6 = PTR_DAT_067c95c8;
                                            *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                            *(undefined4 *)(lVar13 + 0x18) = 0;
                                            lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                            FUN_03abf108(lVar14,*(undefined8 *)puVar5);
                                            if (lVar14 != 0) {
                                              lVar17 = *(long *)(lVar14 + 0x10);
                                              uVar11 = *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__
                                              ;
                                              lVar18 = *(long *)puVar3;
                                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                              if (lVar17 != 0) {
                                                uVar2 = *(uint *)(lVar14 + 0x18);
                                                if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                  *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
                                                }
                                                else {
                                                  FUN_03abf904(lVar14,uVar11,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar18 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                uVar11 = *(undefined8 *)puVar10;
                                                *(long *)(lVar13 + 0x30) = lVar14;
                                                lVar14 = thunk_FUN_02f45270(uVar11);
                                                FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                                                lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                FUN_06051fb4(lVar17,0);
                                                if (lVar17 != 0) {
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_06051fbc(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Oculus_Platform_Message<PushNotificationResult>_get_Data__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                                                  ;
                                                  puVar6 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar5);
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_get_frameRate__
                                                  ;
                                                  lVar18 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_06051fb4(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryGetHumanStencil__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_06051fbc(lVar13,0);
                                                  puVar6 = 
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Nullable<byte>__ctor__;
                                                  puVar7 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 1;
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar5);
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    lVar18 = *(long *)puVar3;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar2 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar11;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar14,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_06051fb4(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_06051fbc(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__
                                                  ;
                                                  puVar6 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar5);
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__
                                                  ;
                                                  lVar18 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_06051fb4(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRRaycastSubsystem_Provider_Raycast__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_06051fbc(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRRaycastSubsystem_Provider_Raycast__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_RemoveListener__
                                                  ;
                                                  puVar6 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 2;
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar5);
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u8__;
                                                  lVar18 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_06051fb4(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanStencilMode__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_06051fbc(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanDepthMode__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>_Invoke__
                                                  ;
                                                  puVar6 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar5);
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f64__
                                                  ;
                                                  lVar18 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_06051fb4(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_set_matchFrameRateRequested__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_06051fbc(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryGetHumanDepth__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_1__
                                                  ;
                                                  puVar6 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar5);
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__
                                                  ;
                                                  lVar18 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_06051fb4(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_06051fbc(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                                  ;
                                                  puVar6 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 3;
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar5);
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                  ;
                                                  lVar18 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_06051fb4(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_06051fbc(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  puVar6 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 3;
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar5);
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar18 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_06051fb4(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_06051fbc(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  puVar8 = PTR_DAT_067c95c8;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x18) = 4;
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar5);
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar18 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar11;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  uVar11 = *(undefined8 *)puVar10;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar9);
                                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_06051fb4(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) = *unaff_x27;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar17;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar14,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x29 + 0x28) = lVar12;
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


