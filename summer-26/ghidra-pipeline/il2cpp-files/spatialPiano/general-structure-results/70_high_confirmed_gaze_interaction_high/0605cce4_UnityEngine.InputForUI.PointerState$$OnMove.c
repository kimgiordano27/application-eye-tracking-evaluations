/*
FUNCTION_NAME: UnityEngine.InputForUI.PointerState$$OnMove
ENTRY_POINT: 0605cce4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputForUI_PointerState__OnMove(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  FUN_03abf904();
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x23;
  lVar7 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (lVar7 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
    }
    else {
      FUN_03abf904();
    }
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                              );
    FUN_06051fbc(lVar7,0);
    puVar3 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_6__;
    puVar2 = Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__;
    if (lVar7 != 0) {
      uVar5 = *unaff_x29;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      uVar9 = *(undefined8 *)puVar3;
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar7 + 0x20) = uVar9;
      lVar6 = thunk_FUN_02f45270(uVar5);
      FUN_03abf108(lVar6,*unaff_x27);
      if (lVar6 != 0) {
        lVar8 = *(long *)(lVar6 + 0x10);
        uVar5 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f32__;
        lVar10 = *unaff_x19;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          }
          else {
            FUN_03abf904(lVar6,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          puVar2 = 
          Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
          ;
          *(long *)(lVar7 + 0x30) = lVar6;
          lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_03abf108(lVar6,*(undefined8 *)
                              Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                      );
          lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                    );
          FUN_06051fb4(lVar8,0);
          if (lVar8 != 0) {
            uVar5 = *unaff_x25;
            *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
            *(undefined8 *)(lVar8 + 0x18) = uVar5;
            if (lVar6 != 0) {
              lVar10 = *(long *)(lVar6 + 0x10);
              lVar11 = *unaff_x26;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              puVar2 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__;
              if (lVar10 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
                }
                else {
                  FUN_03abf904(lVar6,lVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar7 + 0x28) = lVar6;
                lVar6 = *(long *)(unaff_x21 + 0x10);
                *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                if (lVar6 != 0) {
                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                  }
                  else {
                    FUN_03abf904();
                  }
                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                  FUN_06051fbc(lVar7,0);
                  puVar2 = 
                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo;
                  if (lVar7 != 0) {
                    uVar5 = *unaff_x29;
                    uVar9 = *(undefined8 *)
                             UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                    ;
                    *(undefined8 *)(lVar7 + 0x10) =
                         *(undefined8 *)Method_System_Nullable<byte>__ctor__;
                    *(undefined8 *)(lVar7 + 0x20) = uVar9;
                    *(undefined4 *)(lVar7 + 0x18) = 1;
                    lVar6 = thunk_FUN_02f45270(uVar5);
                    FUN_03abf108(lVar6,*unaff_x27);
                    if (lVar6 != 0) {
                      lVar8 = *(long *)(lVar6 + 0x10);
                      uVar5 = *(undefined8 *)puVar2;
                      lVar10 = *unaff_x19;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(lVar6 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                        }
                        else {
                          FUN_03abf904(lVar6,uVar5,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                        }
                        puVar2 = 
                        Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                        ;
                        *(long *)(lVar7 + 0x30) = lVar6;
                        lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                        FUN_03abf108(lVar6,*(undefined8 *)
                                            Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                    );
                        lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                        FUN_06051fb4(lVar8,0);
                        puVar2 = 
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                        ;
                        if (lVar8 != 0) {
                          uVar5 = *(undefined8 *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                          ;
                          *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                          *(undefined8 *)(lVar8 + 0x18) = uVar5;
                          if (lVar6 != 0) {
                            lVar10 = *(long *)(lVar6 + 0x10);
                            lVar11 = *unaff_x26;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar10 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
                              }
                              else {
                                FUN_03abf904(lVar6,lVar8,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar7 + 0x28) = lVar6;
                              lVar6 = *(long *)(unaff_x21 + 0x10);
                              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                              if (lVar6 != 0) {
                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                  *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                                }
                                else {
                                  FUN_03abf904();
                                }
                                lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                FUN_06051fbc(lVar7,0);
                                puVar4 = 
                                Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                                ;
                                puVar3 = 
                                Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__;
                                if (lVar7 != 0) {
                                  uVar5 = *unaff_x29;
                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                  uVar9 = *(undefined8 *)puVar4;
                                  *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)puVar3;
                                  *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                  lVar6 = thunk_FUN_02f45270(uVar5);
                                  FUN_03abf108(lVar6,*unaff_x27);
                                  if (lVar6 != 0) {
                                    lVar8 = *(long *)(lVar6 + 0x10);
                                    uVar5 = *(undefined8 *)
                                             Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__;
                                    lVar10 = *unaff_x19;
                                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                    if (lVar8 != 0) {
                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                        ;
                                      }
                                      else {
                                        FUN_03abf904(lVar6,uVar5,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      puVar3 = 
                                      Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                      ;
                                      *(long *)(lVar7 + 0x30) = lVar6;
                                      lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                      FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                      lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                      FUN_06051fb4(lVar8,0);
                                      if (lVar8 != 0) {
                                        uVar5 = *(undefined8 *)puVar2;
                                        *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                        *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                        if (lVar6 != 0) {
                                          lVar10 = *(long *)(lVar6 + 0x10);
                                          lVar11 = *unaff_x26;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          puVar2 = 
                                          Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                          ;
                                          if (lVar10 != 0) {
                                            uVar1 = *(uint *)(lVar6 + 0x18);
                                            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                              *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                   lVar8;
                                            }
                                            else {
                                              FUN_03abf904(lVar6,lVar8,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar7 + 0x28) = lVar6;
                                            lVar6 = *(long *)(unaff_x21 + 0x10);
                                            *(int *)(unaff_x21 + 0x1c) =
                                                 *(int *)(unaff_x21 + 0x1c) + 1;
                                            if (lVar6 != 0) {
                                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                     lVar7;
                                              }
                                              else {
                                                FUN_03abf904();
                                              }
                                              lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                              FUN_06051fbc(lVar7,0);
                                              if (lVar7 != 0) {
                                                uVar5 = *unaff_x29;
                                                uVar9 = *(undefined8 *)
                                                                                                                  
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_s32__
                                                ;
                                                *(undefined8 *)(lVar7 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Microsoft_Win32_SafeHandles_SafeFileHandle_TypeInfo
                                                ;
                                                *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                *(undefined4 *)(lVar7 + 0x18) = 2;
                                                lVar6 = thunk_FUN_02f45270(uVar5);
                                                FUN_03abf108(lVar6,*unaff_x27);
                                                if (lVar6 != 0) {
                                                  lVar8 = *(long *)(lVar6 + 0x10);
                                                  uVar5 = *(undefined8 *)
                                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u8__;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar7 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_3__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06051fbc(lVar7,0);
                                                    puVar4 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_10__
                                                  ;
                                                  puVar3 = 
                                                  Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    uVar5 = *unaff_x29;
                                                    *(undefined4 *)(lVar7 + 0x18) = 0;
                                                    uVar9 = *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                    lVar6 = thunk_FUN_02f45270(uVar5);
                                                    FUN_03abf108(lVar6,*unaff_x27);
                                                    if (lVar6 != 0) {
                                                      lVar8 = *(long *)(lVar6 + 0x10);
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar7 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_11__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06051fbc(lVar7,0);
                                                    if (lVar7 != 0) {
                                                      uVar5 = *unaff_x29;
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar7 + 0x18) = 3;
                                                  lVar6 = thunk_FUN_02f45270(uVar5);
                                                  FUN_03abf108(lVar6,*unaff_x27);
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar7 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06051fbc(lVar7,0);
                                                    if (lVar7 != 0) {
                                                      uVar5 = *unaff_x29;
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar7 + 0x18) = 3;
                                                  lVar6 = thunk_FUN_02f45270(uVar5);
                                                  FUN_03abf108(lVar6,*unaff_x27);
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar7 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06051fbc(lVar7,0);
                                                    if (lVar7 != 0) {
                                                      uVar5 = *unaff_x29;
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x20) = uVar9;
                                                  *(undefined4 *)(lVar7 + 0x18) = 4;
                                                  lVar6 = thunk_FUN_02f45270(uVar5);
                                                  FUN_03abf108(lVar6,*unaff_x27);
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar7 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar5;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar10 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar7;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


