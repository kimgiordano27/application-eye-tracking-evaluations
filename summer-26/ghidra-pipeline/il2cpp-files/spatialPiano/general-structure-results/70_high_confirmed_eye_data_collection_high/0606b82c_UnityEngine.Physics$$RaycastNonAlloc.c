/*
FUNCTION_NAME: UnityEngine.Physics$$RaycastNonAlloc
ENTRY_POINT: 0606b82c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_generic_rendering_without_foveation_or_eye_source;negative_generic_render_terms_without_foveation;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_Physics__RaycastNonAlloc(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x25;
  undefined8 *puVar15;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  
  puVar3 = PTR_DAT_067c95b0;
  puVar15 = *(undefined8 **)(unaff_x25 + 0x5c8);
  uVar11 = **(undefined8 **)(in_x9 + 0xd10);
  uVar8 = *puVar15;
  *(undefined8 *)(unaff_x22 + 0x10) = **(undefined8 **)(param_1 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined4 *)(unaff_x22 + 0x18) = 2;
  lVar9 = thunk_FUN_02f45270(uVar8);
  FUN_03abf108(lVar9,*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_067c95a0;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x10);
    uVar8 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u8__;
    lVar12 = *(long *)PTR_DAT_067c95a0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
      }
      else {
        FUN_03abf904(lVar9,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      puVar6 = 
      Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
      ;
      *(long *)(unaff_x22 + 0x30) = lVar9;
      lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
      FUN_03abf108(lVar9,*(undefined8 *)
                          Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__);
      lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                 );
      FUN_06051fb4(lVar10,0);
      if (lVar10 != 0) {
        uVar8 = *(undefined8 *)
                 Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_3__
        ;
        *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
        *(undefined8 *)(lVar10 + 0x18) = uVar8;
        puVar6 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__;
        if (lVar9 != 0) {
          lVar12 = *(long *)(lVar9 + 0x10);
          lVar13 = *(long *)Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
            }
            else {
              FUN_03abf904(lVar9,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar9;
            if (unaff_x21 != 0) {
              lVar9 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar2 = *(uint *)(unaff_x21 + 0x18);
                if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                  *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
                }
                else {
                  FUN_03abf904();
                }
                lVar9 = thunk_FUN_02f45270(*unaff_x19);
                FUN_06051fbc(lVar9,0);
                if (lVar9 != 0) {
                  uVar8 = *puVar15;
                  uVar11 = *(undefined8 *)
                            Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__1__
                  ;
                  *(undefined8 *)(lVar9 + 0x10) =
                       *(undefined8 *)
                        Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_AddListener__;
                  *(undefined8 *)(lVar9 + 0x20) = uVar11;
                  *(undefined4 *)(lVar9 + 0x18) = 2;
                  lVar10 = thunk_FUN_02f45270(uVar8);
                  FUN_03abf108(lVar10,*(undefined8 *)PTR_DAT_067c95b0);
                  if (lVar10 != 0) {
                    lVar12 = *(long *)(lVar10 + 0x10);
                    uVar8 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f64__;
                    lVar13 = *(long *)puVar3;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar12 != 0) {
                      uVar2 = *(uint *)(lVar10 + 0x18);
                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                      }
                      else {
                        FUN_03abf904(lVar10,uVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar4 = 
                      Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                      ;
                      *(long *)(lVar9 + 0x30) = lVar10;
                      lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                      FUN_03abf108(lVar10,*(undefined8 *)
                                           Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                  );
                      lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                 );
                      FUN_06051fb4(lVar12,0);
                      if (lVar12 != 0) {
                        uVar8 = *(undefined8 *)
                                 Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanStencilMode__
                        ;
                        *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                        *(undefined8 *)(lVar12 + 0x18) = uVar8;
                        if (lVar10 != 0) {
                          lVar13 = *(long *)(lVar10 + 0x10);
                          lVar14 = *(long *)puVar6;
                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                          if (lVar13 != 0) {
                            uVar2 = *(uint *)(lVar10 + 0x18);
                            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                              *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = lVar12;
                            }
                            else {
                              FUN_03abf904(lVar10,lVar12,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            iVar1 = *(int *)(unaff_x21 + 0x1c);
                            lVar12 = *(long *)(unaff_x21 + 0x10);
                            *(long *)(lVar9 + 0x28) = lVar10;
                            *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                            if (lVar12 != 0) {
                              uVar2 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                              }
                              else {
                                FUN_03abf904();
                              }
                              lVar9 = thunk_FUN_02f45270(*unaff_x19);
                              FUN_06051fbc(lVar9,0);
                              puVar4 = 
                              System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo;
                              if (lVar9 != 0) {
                                uVar8 = *puVar15;
                                uVar11 = *(undefined8 *)
                                          System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo
                                ;
                                *(undefined8 *)(lVar9 + 0x10) =
                                     *(undefined8 *)
                                      Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__
                                ;
                                *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                *(undefined4 *)(lVar9 + 0x18) = 1;
                                lVar10 = thunk_FUN_02f45270(uVar8);
                                FUN_03abf108(lVar10,*(undefined8 *)PTR_DAT_067c95b0);
                                if (lVar10 != 0) {
                                  lVar12 = *(long *)(lVar10 + 0x10);
                                  uVar8 = *(undefined8 *)puVar4;
                                  lVar13 = *(long *)puVar3;
                                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                  if (lVar12 != 0) {
                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                      *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                                    }
                                    else {
                                      FUN_03abf904(lVar10,uVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    puVar4 = 
                                    Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                    ;
                                    *(long *)(lVar9 + 0x30) = lVar10;
                                    lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                    FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                );
                                    lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                    FUN_06051fb4(lVar12,0);
                                    puVar4 = 
                                    Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_0__
                                    ;
                                    if (lVar12 != 0) {
                                      uVar8 = *(undefined8 *)
                                               Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_0__
                                      ;
                                      *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                      *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                      if (lVar10 != 0) {
                                        lVar13 = *(long *)(lVar10 + 0x10);
                                        lVar14 = *(long *)puVar6;
                                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                        if (lVar13 != 0) {
                                          uVar2 = *(uint *)(lVar10 + 0x18);
                                          if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = lVar12
                                            ;
                                          }
                                          else {
                                            FUN_03abf904(lVar10,lVar12,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          iVar1 = *(int *)(unaff_x21 + 0x1c);
                                          lVar12 = *(long *)(unaff_x21 + 0x10);
                                          *(long *)(lVar9 + 0x28) = lVar10;
                                          *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                          if (lVar12 != 0) {
                                            uVar2 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                              *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) =
                                                   lVar9;
                                            }
                                            else {
                                              FUN_03abf904();
                                            }
                                            lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                            FUN_06051fbc(lVar9,0);
                                            puVar7 = 
                                            Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_6__
                                            ;
                                            puVar5 = 
                                            Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__
                                            ;
                                            if (lVar9 != 0) {
                                              uVar8 = *puVar15;
                                              *(undefined4 *)(lVar9 + 0x18) = 0;
                                              uVar11 = *(undefined8 *)puVar7;
                                              *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)puVar5;
                                              *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                              lVar10 = thunk_FUN_02f45270(uVar8);
                                              FUN_03abf108(lVar10,*(undefined8 *)PTR_DAT_067c95b0);
                                              if (lVar10 != 0) {
                                                lVar12 = *(long *)(lVar10 + 0x10);
                                                uVar8 = *(undefined8 *)
                                                                                                                  
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f32__
                                                ;
                                                lVar13 = *(long *)puVar3;
                                                *(int *)(lVar10 + 0x1c) =
                                                     *(int *)(lVar10 + 0x1c) + 1;
                                                if (lVar12 != 0) {
                                                  uVar2 = *(uint *)(lVar10 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                    *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                    *(undefined8 *)
                                                     (lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                                                  }
                                                  else {
                                                    FUN_03abf904(lVar10,uVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  puVar5 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar8 = *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                    *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                                    if (lVar10 != 0) {
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)puVar6;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar2 = *(uint *)(lVar10 + 0x18);
                                                        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                          *(long *)(lVar13 + (long)(int)uVar2 * 8 +
                                                                   0x20) = lVar12;
                                                        }
                                                        else {
                                                          FUN_03abf904(lVar10,lVar12,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar12 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar9,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
                                                  ;
                                                  puVar4 = PTR_DAT_067cc618;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *puVar15;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                    lVar10 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar10,*(undefined8 *)
                                                                         PTR_DAT_067c95b0);
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar13 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar12;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar12 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar9,0);
                                                  puVar4 = 
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *puVar15;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Nullable<byte>__ctor__;
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar10 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                       PTR_DAT_067c95b0);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    uVar8 = *(undefined8 *)puVar4;
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar12 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar12,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar13 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar12;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar12 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar9,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *puVar15;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar7;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                    lVar10 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar10,*(undefined8 *)
                                                                         PTR_DAT_067c95b0);
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar5 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar8 = *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                    *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                                    if (lVar10 != 0) {
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)puVar6;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      puVar4 = 
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar12 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    puVar7 = 
                                                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateAlbedoPreset>b__6_4__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_AddListener__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *puVar15;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar7;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                    lVar10 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar10,*(undefined8 *)
                                                                         PTR_DAT_067c95b0);
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar5 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_11__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar13 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar12;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar12 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    puVar7 = 
                                                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__0__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *puVar15;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar7;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                    lVar10 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar10,*(undefined8 *)
                                                                         PTR_DAT_067c95b0);
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar5 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar13 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar12;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar12 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    puVar7 = 
                                                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__1__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>__ctor__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *puVar15;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar7;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                    lVar10 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar10,*(undefined8 *)
                                                                         PTR_DAT_067c95b0);
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u16__;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar5 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_set_matchFrameRateRequested__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar13 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar12;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar12 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    if (lVar9 != 0) {
                                                      uVar8 = *puVar15;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                                  lVar10 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                       PTR_DAT_067c95b0);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar5 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar13 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar12;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar12 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    if (lVar9 != 0) {
                                                      uVar8 = *puVar15;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                                  lVar10 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                       PTR_DAT_067c95b0);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar5 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar13 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar12;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar12 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    if (lVar9 != 0) {
                                                      uVar8 = *puVar15;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar9 + 0x18) = 4;
                                                  lVar10 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                       PTR_DAT_067c95b0);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar9 + 0x30) = lVar10;
                                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar6;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar13 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar12;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar12 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    FUN_06051d9c(unaff_x28);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


