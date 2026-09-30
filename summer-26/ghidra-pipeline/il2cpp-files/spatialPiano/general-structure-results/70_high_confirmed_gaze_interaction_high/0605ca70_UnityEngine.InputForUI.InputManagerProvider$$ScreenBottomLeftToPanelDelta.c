/*
FUNCTION_NAME: UnityEngine.InputForUI.InputManagerProvider$$ScreenBottomLeftToPanelDelta
ENTRY_POINT: 0605ca70
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_11;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputForUI_InputManagerProvider__ScreenBottomLeftToPanelDelta(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
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
  puVar2 = 
  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
  ;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x23;
  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_03abf108(lVar5,*(undefined8 *)
                      Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__);
  lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                              Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                            );
  FUN_06051fb4(lVar6,0);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)
             Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__;
    *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
    *(undefined8 *)(lVar6 + 0x18) = uVar7;
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *unaff_x26;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
        }
        else {
          FUN_03abf904(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(unaff_x22 + 0x28) = lVar5;
        lVar5 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
          }
          else {
            FUN_03abf904();
          }
          lVar5 = thunk_FUN_02f45270(*unaff_x25);
          FUN_06051fbc(lVar5,0);
          puVar2 = System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo;
          if (lVar5 != 0) {
            uVar7 = *unaff_x29;
            uVar10 = *(undefined8 *)
                      System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo;
            *(undefined8 *)(lVar5 + 0x10) =
                 *(undefined8 *)Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__;
            *(undefined8 *)(lVar5 + 0x20) = uVar10;
            *(undefined4 *)(lVar5 + 0x18) = 1;
            lVar6 = thunk_FUN_02f45270(uVar7);
            FUN_03abf108(lVar6,*unaff_x27);
            if (lVar6 != 0) {
              lVar8 = *(long *)(lVar6 + 0x10);
              uVar7 = *(undefined8 *)puVar2;
              lVar9 = *unaff_x19;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                }
                else {
                  FUN_03abf904(lVar6,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                puVar2 = 
                Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                ;
                *(long *)(lVar5 + 0x30) = lVar6;
                lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                FUN_03abf108(lVar6,*(undefined8 *)
                                    Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                            );
                lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                            Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                          );
                FUN_06051fb4(lVar8,0);
                puVar2 = 
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_0__
                ;
                if (lVar8 != 0) {
                  uVar7 = *(undefined8 *)
                           Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_0__
                  ;
                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                  *(undefined8 *)(lVar8 + 0x18) = uVar7;
                  if (lVar6 != 0) {
                    lVar9 = *(long *)(lVar6 + 0x10);
                    lVar11 = *unaff_x26;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar9 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
                      }
                      else {
                        FUN_03abf904(lVar6,lVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar5 + 0x28) = lVar6;
                      lVar6 = *(long *)(unaff_x21 + 0x10);
                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                      if (lVar6 != 0) {
                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                          *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
                        }
                        else {
                          FUN_03abf904();
                        }
                        lVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                        FUN_06051fbc(lVar5,0);
                        puVar4 = 
                        Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_6__
                        ;
                        puVar3 = Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__;
                        if (lVar5 != 0) {
                          uVar7 = *unaff_x29;
                          *(undefined4 *)(lVar5 + 0x18) = 0;
                          uVar10 = *(undefined8 *)puVar4;
                          *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar3;
                          *(undefined8 *)(lVar5 + 0x20) = uVar10;
                          lVar6 = thunk_FUN_02f45270(uVar7);
                          FUN_03abf108(lVar6,*unaff_x27);
                          if (lVar6 != 0) {
                            lVar8 = *(long *)(lVar6 + 0x10);
                            uVar7 = *(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f32__;
                            lVar9 = *unaff_x19;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                              }
                              else {
                                FUN_03abf904(lVar6,uVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              puVar3 = 
                              Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                              ;
                              *(long *)(lVar5 + 0x30) = lVar6;
                              lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                              FUN_03abf108(lVar6,*(undefined8 *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                          );
                              lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                              FUN_06051fb4(lVar8,0);
                              if (lVar8 != 0) {
                                uVar7 = *(undefined8 *)puVar2;
                                *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                if (lVar6 != 0) {
                                  lVar9 = *(long *)(lVar6 + 0x10);
                                  lVar11 = *unaff_x26;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  puVar2 = 
                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                  ;
                                  if (lVar9 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
                                    }
                                    else {
                                      FUN_03abf904(lVar6,lVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar5 + 0x28) = lVar6;
                                    lVar6 = *(long *)(unaff_x21 + 0x10);
                                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                    if (lVar6 != 0) {
                                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
                                      }
                                      else {
                                        FUN_03abf904();
                                      }
                                      lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                      FUN_06051fbc(lVar5,0);
                                      puVar2 = 
                                      UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                      ;
                                      if (lVar5 != 0) {
                                        uVar7 = *unaff_x29;
                                        uVar10 = *(undefined8 *)
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                        ;
                                        *(undefined8 *)(lVar5 + 0x10) =
                                             *(undefined8 *)Method_System_Nullable<byte>__ctor__;
                                        *(undefined8 *)(lVar5 + 0x20) = uVar10;
                                        *(undefined4 *)(lVar5 + 0x18) = 1;
                                        lVar6 = thunk_FUN_02f45270(uVar7);
                                        FUN_03abf108(lVar6,*unaff_x27);
                                        if (lVar6 != 0) {
                                          lVar8 = *(long *)(lVar6 + 0x10);
                                          uVar7 = *(undefined8 *)puVar2;
                                          lVar9 = *unaff_x19;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar6 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar7;
                                            }
                                            else {
                                              FUN_03abf904(lVar6,uVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            puVar2 = 
                                            Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                            ;
                                            *(long *)(lVar5 + 0x30) = lVar6;
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
                                              uVar7 = *(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                              ;
                                              *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                              *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                              if (lVar6 != 0) {
                                                lVar9 = *(long *)(lVar6 + 0x10);
                                                lVar11 = *unaff_x26;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar9 != 0) {
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                         lVar8;
                                                  }
                                                  else {
                                                    FUN_03abf904(lVar6,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar5 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar5,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                                                  ;
                                                  puVar3 = 
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    uVar7 = *unaff_x29;
                                                    *(undefined4 *)(lVar5 + 0x18) = 0;
                                                    uVar10 = *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar10;
                                                    lVar6 = thunk_FUN_02f45270(uVar7);
                                                    FUN_03abf108(lVar6,*unaff_x27);
                                                    if (lVar6 != 0) {
                                                      lVar8 = *(long *)(lVar6 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__
                                                  ;
                                                  lVar9 = *unaff_x19;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)puVar2;
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                    *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                                    if (lVar6 != 0) {
                                                      lVar9 = *(long *)(lVar6 + 0x10);
                                                      lVar11 = *unaff_x26;
                                                      *(int *)(lVar6 + 0x1c) =
                                                           *(int *)(lVar6 + 0x1c) + 1;
                                                      puVar2 = 
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06051fbc(lVar5,0);
                                                    if (lVar5 != 0) {
                                                      uVar7 = *unaff_x29;
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_s32__
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Microsoft_Win32_SafeHandles_SafeFileHandle_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar5 + 0x18) = 2;
                                                  lVar6 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar6,*unaff_x27);
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u8__;
                                                  lVar9 = *unaff_x19;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_3__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06051fbc(lVar5,0);
                                                    puVar4 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_10__
                                                  ;
                                                  puVar3 = 
                                                  Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    uVar7 = *unaff_x29;
                                                    *(undefined4 *)(lVar5 + 0x18) = 0;
                                                    uVar10 = *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)puVar3;
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar10;
                                                    lVar6 = thunk_FUN_02f45270(uVar7);
                                                    FUN_03abf108(lVar6,*unaff_x27);
                                                    if (lVar6 != 0) {
                                                      lVar8 = *(long *)(lVar6 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__
                                                  ;
                                                  lVar9 = *unaff_x19;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_11__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06051fbc(lVar5,0);
                                                    if (lVar5 != 0) {
                                                      uVar7 = *unaff_x29;
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar5 + 0x18) = 3;
                                                  lVar6 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar6,*unaff_x27);
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                  ;
                                                  lVar9 = *unaff_x19;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06051fbc(lVar5,0);
                                                    if (lVar5 != 0) {
                                                      uVar7 = *unaff_x29;
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar5 + 0x18) = 3;
                                                  lVar6 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar6,*unaff_x27);
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar9 = *unaff_x19;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_06051fbc(lVar5,0);
                                                    if (lVar5 != 0) {
                                                      uVar7 = *unaff_x29;
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar5 + 0x18) = 4;
                                                  lVar6 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar6,*unaff_x27);
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar9 = *unaff_x19;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar2 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                                  FUN_03abf108(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


