/*
FUNCTION_NAME: UnityEngine.Physics$$Query_SphereCastAll
ENTRY_POINT: 0606ba98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_18;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_generic_rendering_without_foveation_or_eye_source;negative_generic_render_terms_without_foveation;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_Physics__Query_SphereCastAll(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(param_1 + 0x20) = param_3;
  puVar3 = 
  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
  ;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x23;
  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_03abf108(lVar6,*(undefined8 *)
                      Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__);
  lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                              Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                            );
  FUN_06051fb4(lVar7,0);
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)
             Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanStencilMode__
    ;
    *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
    *(undefined8 *)(lVar7 + 0x18) = uVar8;
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + 0x10);
      lVar10 = *unaff_x27;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
        }
        else {
          FUN_03abf904(lVar6,lVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        iVar1 = *(int *)(unaff_x21 + 0x1c);
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(long *)(unaff_x22 + 0x28) = lVar6;
        *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
        if (lVar7 != 0) {
          uVar2 = *(uint *)(unaff_x21 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
            *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
          }
          else {
            FUN_03abf904();
          }
          lVar6 = thunk_FUN_02f45270(*unaff_x19);
          FUN_06051fbc(lVar6,0);
          puVar3 = System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo;
          if (lVar6 != 0) {
            uVar8 = *unaff_x25;
            uVar11 = *(undefined8 *)
                      System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo;
            *(undefined8 *)(lVar6 + 0x10) =
                 *(undefined8 *)Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__;
            *(undefined8 *)(lVar6 + 0x20) = uVar11;
            *(undefined4 *)(lVar6 + 0x18) = 1;
            lVar7 = thunk_FUN_02f45270(uVar8);
            FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0);
            if (lVar7 != 0) {
              lVar9 = *(long *)(lVar7 + 0x10);
              uVar8 = *(undefined8 *)puVar3;
              lVar10 = *unaff_x26;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar2 = *(uint *)(lVar7 + 0x18);
                if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                }
                else {
                  FUN_03abf904(lVar7,uVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                puVar3 = 
                Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                ;
                *(long *)(lVar6 + 0x30) = lVar7;
                lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                FUN_03abf108(lVar7,*(undefined8 *)
                                    Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                            );
                lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                            Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                          );
                FUN_06051fb4(lVar9,0);
                puVar3 = 
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_0__
                ;
                if (lVar9 != 0) {
                  uVar8 = *(undefined8 *)
                           Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_0__
                  ;
                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                  *(undefined8 *)(lVar9 + 0x18) = uVar8;
                  if (lVar7 != 0) {
                    lVar10 = *(long *)(lVar7 + 0x10);
                    lVar12 = *unaff_x27;
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar2 = *(uint *)(lVar7 + 0x18);
                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                        *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                      }
                      else {
                        FUN_03abf904(lVar7,lVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar1 = *(int *)(unaff_x21 + 0x1c);
                      lVar9 = *(long *)(unaff_x21 + 0x10);
                      *(long *)(lVar6 + 0x28) = lVar7;
                      *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                      if (lVar9 != 0) {
                        uVar2 = *(uint *)(unaff_x21 + 0x18);
                        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                          *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
                        }
                        else {
                          FUN_03abf904();
                        }
                        lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                        FUN_06051fbc(lVar6,0);
                        puVar5 = 
                        Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_6__
                        ;
                        puVar4 = Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__;
                        if (lVar6 != 0) {
                          uVar8 = *unaff_x25;
                          *(undefined4 *)(lVar6 + 0x18) = 0;
                          uVar11 = *(undefined8 *)puVar5;
                          *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)puVar4;
                          *(undefined8 *)(lVar6 + 0x20) = uVar11;
                          lVar7 = thunk_FUN_02f45270(uVar8);
                          FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0);
                          if (lVar7 != 0) {
                            lVar9 = *(long *)(lVar7 + 0x10);
                            uVar8 = *(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f32__;
                            lVar10 = *unaff_x26;
                            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar2 = *(uint *)(lVar7 + 0x18);
                              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                              }
                              else {
                                FUN_03abf904(lVar7,uVar8,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                              }
                              puVar4 = 
                              Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                              ;
                              *(long *)(lVar6 + 0x30) = lVar7;
                              lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                              FUN_03abf108(lVar7,*(undefined8 *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                          );
                              lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                              FUN_06051fb4(lVar9,0);
                              if (lVar9 != 0) {
                                uVar8 = *(undefined8 *)puVar3;
                                *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                if (lVar7 != 0) {
                                  lVar10 = *(long *)(lVar7 + 0x10);
                                  lVar12 = *unaff_x27;
                                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                  if (lVar10 != 0) {
                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                                    }
                                    else {
                                      FUN_03abf904(lVar7,lVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    iVar1 = *(int *)(unaff_x21 + 0x1c);
                                    lVar9 = *(long *)(unaff_x21 + 0x10);
                                    *(long *)(lVar6 + 0x28) = lVar7;
                                    *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                    if (lVar9 != 0) {
                                      uVar2 = *(uint *)(unaff_x21 + 0x18);
                                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                        *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
                                      }
                                      else {
                                        FUN_03abf904();
                                      }
                                      lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                      FUN_06051fbc(lVar6,0);
                                      puVar4 = 
                                      Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
                                      ;
                                      puVar3 = PTR_DAT_067cc618;
                                      if (lVar6 != 0) {
                                        uVar8 = *unaff_x25;
                                        *(undefined4 *)(lVar6 + 0x18) = 0;
                                        uVar11 = *(undefined8 *)puVar4;
                                        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)puVar3;
                                        *(undefined8 *)(lVar6 + 0x20) = uVar11;
                                        lVar7 = thunk_FUN_02f45270(uVar8);
                                        FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0);
                                        if (lVar7 != 0) {
                                          lVar9 = *(long *)(lVar7 + 0x10);
                                          uVar8 = *(undefined8 *)
                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__
                                          ;
                                          lVar10 = *unaff_x26;
                                          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar2 = *(uint *)(lVar7 + 0x18);
                                            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) =
                                                   uVar8;
                                            }
                                            else {
                                              FUN_03abf904(lVar7,uVar8,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            puVar3 = 
                                            Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                            ;
                                            *(long *)(lVar6 + 0x30) = lVar7;
                                            lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                            FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                            lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                            FUN_06051fb4(lVar9,0);
                                            if (lVar9 != 0) {
                                              uVar8 = *(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                                              ;
                                              *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                              *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                              if (lVar7 != 0) {
                                                lVar10 = *(long *)(lVar7 + 0x10);
                                                lVar12 = *unaff_x27;
                                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                                if (lVar10 != 0) {
                                                  uVar2 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                    *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20)
                                                         = lVar9;
                                                  }
                                                  else {
                                                    FUN_03abf904(lVar7,lVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar6 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar6,0);
                                                  puVar3 = 
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  if (lVar6 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Nullable<byte>__ctor__;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)puVar3;
                                                    lVar10 = *unaff_x26;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar7,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar6 + 0x30) = lVar7;
                                                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar9,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar6 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar6,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    *(undefined4 *)(lVar6 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar11;
                                                    lVar7 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar7,*(undefined8 *)
                                                                        PTR_DAT_067c95b0);
                                                    if (lVar7 != 0) {
                                                      lVar9 = *(long *)(lVar7 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__
                                                  ;
                                                  lVar10 = *unaff_x26;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar6 + 0x30) = lVar7;
                                                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar8 = *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                    *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                                    if (lVar7 != 0) {
                                                      lVar10 = *(long *)(lVar7 + 0x10);
                                                      lVar12 = *unaff_x27;
                                                      *(int *)(lVar7 + 0x1c) =
                                                           *(int *)(lVar7 + 0x1c) + 1;
                                                      puVar3 = 
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar6 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_06051fbc(lVar6,0);
                                                    puVar5 = 
                                                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateAlbedoPreset>b__6_4__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_AddListener__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    *(undefined4 *)(lVar6 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar11;
                                                    lVar7 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar7,*(undefined8 *)
                                                                        PTR_DAT_067c95b0);
                                                    if (lVar7 != 0) {
                                                      lVar9 = *(long *)(lVar7 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__
                                                  ;
                                                  lVar10 = *unaff_x26;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar6 + 0x30) = lVar7;
                                                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_11__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar6 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_06051fbc(lVar6,0);
                                                    puVar5 = 
                                                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__0__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    *(undefined4 *)(lVar6 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar11;
                                                    lVar7 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar7,*(undefined8 *)
                                                                        PTR_DAT_067c95b0);
                                                    if (lVar7 != 0) {
                                                      lVar9 = *(long *)(lVar7 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__;
                                                  lVar10 = *unaff_x26;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar6 + 0x30) = lVar7;
                                                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar6 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_06051fbc(lVar6,0);
                                                    puVar5 = 
                                                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__1__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>__ctor__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    uVar8 = *unaff_x25;
                                                    *(undefined4 *)(lVar6 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar11;
                                                    lVar7 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar7,*(undefined8 *)
                                                                        PTR_DAT_067c95b0);
                                                    if (lVar7 != 0) {
                                                      lVar9 = *(long *)(lVar7 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u16__;
                                                  lVar10 = *unaff_x26;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar6 + 0x30) = lVar7;
                                                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_set_matchFrameRateRequested__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar6 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *unaff_x25;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                                  lVar7 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                  ;
                                                  lVar10 = *unaff_x26;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar6 + 0x30) = lVar7;
                                                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar6 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *unaff_x25;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                                  lVar7 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar10 = *unaff_x26;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar6 + 0x30) = lVar7;
                                                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar6 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_06051fbc(lVar6,0);
                                                    if (lVar6 != 0) {
                                                      uVar8 = *unaff_x25;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar6 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar7 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar10 = *unaff_x26;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar7,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar6 + 0x30) = lVar7;
                                                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar8;
                                                  if (lVar7 != 0) {
                                                    lVar10 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar9;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar6 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar6;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    FUN_06051d9c(in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


