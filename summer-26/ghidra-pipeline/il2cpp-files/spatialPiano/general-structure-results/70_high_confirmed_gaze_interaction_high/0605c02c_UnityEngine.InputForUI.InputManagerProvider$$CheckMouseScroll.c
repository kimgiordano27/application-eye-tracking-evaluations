/*
FUNCTION_NAME: UnityEngine.InputForUI.InputManagerProvider$$CheckMouseScroll
ENTRY_POINT: 0605c02c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_14;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputForUI_InputManagerProvider__CheckMouseScroll(long param_1)

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
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x26;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x490));
  FUN_02f08768(Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_8__)
  ;
  FUN_02f08768(Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_9__)
  ;
  FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f64__);
  FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f32__);
  FUN_02f08768(System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo);
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__98_System_Collections_IEnumerator_Reset__
              );
  FUN_02f08768(Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
  FUN_02f08768(UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo);
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
              );
  FUN_02f08768(
              Method_UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_<OnFindLayoutForDevice>b__0__
              );
  FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_s32__);
  FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__);
  FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__);
  FUN_02f08768(Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__);
  FUN_02f08768(
              Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
              );
  FUN_02f08768(PTR_DAT_067cbf00);
  FUN_02f08768(Method_UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_<Render>b__6_0__);
  FUN_02f08768(
              Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__28_0__
              );
  FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminq_f32__);
  FUN_02f08768(
              Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
              );
  FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__);
  FUN_02f08768(
              Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
              );
  FUN_02f08768(Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__);
  *(undefined1 *)(unaff_x19 + 0xe06) = 1;
  lVar11 = thunk_FUN_02f45270(*unaff_x20);
  FUN_06051fcc(lVar11,0);
  puVar10 = 
  Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
  ;
  puVar9 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_2__;
  puVar3 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_6__;
  puVar5 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_1__;
  puVar4 = PTR_DAT_067cbf00;
  if (lVar11 != 0) {
    uVar17 = *(undefined8 *)
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_System_Collections_IEnumerator_Reset__
    ;
    uVar22 = *(undefined8 *)
              Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
    ;
    uVar12 = *(undefined8 *)
              Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_0__;
    *(undefined8 *)(lVar11 + 0x10) =
         *(undefined8 *)
          Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_9__;
    *(undefined8 *)(lVar11 + 0x18) = uVar17;
    uVar17 = *(undefined8 *)puVar9;
    uVar18 = *(undefined8 *)puVar4;
    *(undefined8 *)(lVar11 + 0x30) = uVar22;
    *(undefined8 *)(lVar11 + 0x38) = uVar17;
    *(undefined8 *)(lVar11 + 0x40) = uVar18;
    lVar13 = thunk_FUN_02f45270(uVar12);
    FUN_03abf108(lVar13,*(undefined8 *)puVar3);
    lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
    FUN_06051fc4(lVar14,0);
    puVar4 = 
    Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__28_0__
    ;
    if (lVar14 != 0) {
      *(undefined4 *)(lVar14 + 0x10) = 0x164;
      *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)puVar4;
      puVar4 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_2__;
      if (lVar13 != 0) {
        lVar15 = *(long *)(lVar13 + 0x10);
        lVar19 = *(long *)Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_2__;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
            *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
          }
          else {
            FUN_03abf904(lVar13,lVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
          FUN_06051fc4(lVar14,0);
          puVar5 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__;
          if (lVar14 != 0) {
            iVar1 = *(int *)(lVar13 + 0x1c);
            *(undefined4 *)(lVar14 + 0x10) = 0x264;
            lVar19 = *(long *)puVar4;
            uVar12 = *(undefined8 *)puVar5;
            lVar15 = *(long *)(lVar13 + 0x10);
            *(int *)(lVar13 + 0x1c) = iVar1 + 1;
            *(undefined8 *)(lVar14 + 0x18) = uVar12;
            puVar3 = Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_1__
            ;
            puVar5 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_5__;
            puVar4 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__;
            if (lVar15 != 0) {
              uVar2 = *(uint *)(lVar13 + 0x18);
              if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
              }
              else {
                FUN_03abf904(lVar13,lVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              uVar12 = *(undefined8 *)puVar3;
              *(long *)(lVar11 + 0x20) = lVar13;
              lVar13 = thunk_FUN_02f45270(uVar12);
              FUN_03abf108(lVar13,*(undefined8 *)puVar5);
              lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
              FUN_06051fbc(lVar14,0);
              puVar5 = PTR_DAT_067c95c8;
              puVar4 = PTR_DAT_067c95b0;
              if (lVar14 != 0) {
                uVar17 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<float>__ctor__;
                uVar18 = *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_7__
                ;
                *(undefined4 *)(lVar14 + 0x18) = 0;
                uVar12 = *(undefined8 *)puVar5;
                *(undefined8 *)(lVar14 + 0x10) = uVar17;
                *(undefined8 *)(lVar14 + 0x20) = uVar18;
                lVar15 = thunk_FUN_02f45270(uVar12);
                FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                puVar3 = PTR_DAT_067c95a0;
                if (lVar15 != 0) {
                  lVar19 = *(long *)(lVar15 + 0x10);
                  uVar12 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f64__;
                  lVar20 = *(long *)PTR_DAT_067c95a0;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar19 != 0) {
                    uVar2 = *(uint *)(lVar15 + 0x18);
                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar19 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
                    }
                    else {
                      FUN_03abf904(lVar15,uVar12,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                    }
                    puVar9 = 
                    Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                    ;
                    *(long *)(lVar14 + 0x30) = lVar15;
                    lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar9);
                    FUN_03abf108(lVar15,*(undefined8 *)
                                         Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                );
                    lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                 Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                               );
                    FUN_06051fb4(lVar19,0);
                    if (lVar19 != 0) {
                      uVar12 = *(undefined8 *)puVar5;
                      uVar17 = *(undefined8 *)
                                Method_UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_<Render>b__6_0__
                      ;
                      *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)puVar10;
                      *(undefined8 *)(lVar19 + 0x18) = uVar17;
                      lVar20 = thunk_FUN_02f45270(uVar12);
                      FUN_03abf108(lVar20,*(undefined8 *)puVar4);
                      if (lVar20 != 0) {
                        lVar16 = *(long *)(lVar20 + 0x10);
                        uVar12 = *(undefined8 *)
                                  Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__28_0__
                        ;
                        lVar21 = *(long *)puVar3;
                        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                        if (lVar16 != 0) {
                          uVar2 = *(uint *)(lVar20 + 0x18);
                          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                            *(uint *)(lVar20 + 0x18) = uVar2 + 1;
                            *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
                          }
                          else {
                            FUN_03abf904(lVar20,uVar12,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar19 + 0x20) = lVar20;
                          puVar9 = 
                          Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__;
                          if (lVar15 != 0) {
                            lVar20 = *(long *)(lVar15 + 0x10);
                            lVar16 = *(long *)
                                      Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                            ;
                            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                            if (lVar20 != 0) {
                              uVar2 = *(uint *)(lVar15 + 0x18);
                              if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                *(long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20) = lVar19;
                              }
                              else {
                                FUN_03abf904(lVar15,lVar19,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                              FUN_06051fb4(lVar19,0);
                              if (lVar19 != 0) {
                                uVar12 = *(undefined8 *)puVar5;
                                uVar17 = *(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__98_System_Collections_IEnumerator_Reset__
                                ;
                                *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)puVar10;
                                *(undefined8 *)(lVar19 + 0x18) = uVar17;
                                lVar20 = thunk_FUN_02f45270(uVar12);
                                FUN_03abf108(lVar20,*(undefined8 *)puVar4);
                                if (lVar20 != 0) {
                                  lVar16 = *(long *)(lVar20 + 0x10);
                                  uVar12 = *(undefined8 *)
                                            Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__
                                  ;
                                  lVar21 = *(long *)puVar3;
                                  *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
                                  if (lVar16 != 0) {
                                    uVar2 = *(uint *)(lVar20 + 0x18);
                                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                      *(uint *)(lVar20 + 0x18) = uVar2 + 1;
                                      *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar12
                                      ;
                                    }
                                    else {
                                      FUN_03abf904(lVar20,uVar12,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    iVar1 = *(int *)(lVar15 + 0x1c);
                                    lVar16 = *(long *)(lVar15 + 0x10);
                                    lVar21 = *(long *)puVar9;
                                    *(long *)(lVar19 + 0x20) = lVar20;
                                    *(int *)(lVar15 + 0x1c) = iVar1 + 1;
                                    puVar7 = 
                                    Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                    ;
                                    if (lVar16 != 0) {
                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                        *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = lVar19;
                                      }
                                      else {
                                        FUN_03abf904(lVar15,lVar19,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar14 + 0x28) = lVar15;
                                      if (lVar13 != 0) {
                                        lVar15 = *(long *)(lVar13 + 0x10);
                                        lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                        ;
                                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                        if (lVar15 != 0) {
                                          uVar2 = *(uint *)(lVar13 + 0x18);
                                          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar14
                                            ;
                                          }
                                          else {
                                            FUN_03abf904(lVar13,lVar14,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
                                          FUN_06051fbc(lVar14,0);
                                          puVar6 = 
                                          Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_5__
                                          ;
                                          puVar7 = 
                                          Method_UnityEngine_Events_UnityEvent<float>_AddListener__;
                                          if (lVar14 != 0) {
                                            uVar12 = *(undefined8 *)puVar5;
                                            *(undefined4 *)(lVar14 + 0x18) = 0;
                                            uVar17 = *(undefined8 *)puVar6;
                                            *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)puVar7;
                                            *(undefined8 *)(lVar14 + 0x20) = uVar17;
                                            lVar15 = thunk_FUN_02f45270(uVar12);
                                            FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                            if (lVar15 != 0) {
                                              lVar19 = *(long *)(lVar15 + 0x10);
                                              uVar12 = *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminq_f32__
                                              ;
                                              lVar20 = *(long *)puVar3;
                                              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                              if (lVar19 != 0) {
                                                uVar2 = *(uint *)(lVar15 + 0x18);
                                                if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                  *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar19 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
                                                }
                                                else {
                                                  FUN_03abf904(lVar15,uVar12,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar20 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                puVar7 = 
                                                Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                ;
                                                *(long *)(lVar14 + 0x30) = lVar15;
                                                lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
                                                FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                          
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                          
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                FUN_06051fb4(lVar19,0);
                                                if (lVar19 != 0) {
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  uVar17 = *(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_<OnFindLayoutForDevice>b__0__
                                                  ;
                                                  *(undefined8 *)(lVar19 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar19 + 0x18) = uVar17;
                                                  lVar20 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar20,*(undefined8 *)puVar4);
                                                  if (lVar20 != 0) {
                                                    lVar16 = *(long *)(lVar20 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__28_0__
                                                  ;
                                                  lVar21 = *(long *)puVar3;
                                                  *(int *)(lVar20 + 0x1c) =
                                                       *(int *)(lVar20 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar2 = *(uint *)(lVar20 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar20 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar20,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar21 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar19 + 0x20) = lVar20;
                                                  if (lVar15 != 0) {
                                                    lVar20 = *(long *)(lVar15 + 0x10);
                                                    lVar16 = *(long *)puVar9;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar20 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar19;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar19,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar19,0);
                                                  if (lVar19 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    uVar17 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_8__
                                                  ;
                                                  *(undefined8 *)(lVar19 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar19 + 0x18) = uVar17;
                                                  lVar20 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar20,*(undefined8 *)puVar4);
                                                  if (lVar20 != 0) {
                                                    lVar16 = *(long *)(lVar20 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__
                                                  ;
                                                  lVar21 = *(long *)puVar3;
                                                  *(int *)(lVar20 + 0x1c) =
                                                       *(int *)(lVar20 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar2 = *(uint *)(lVar20 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar20 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar20,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar21 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar15 + 0x1c);
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  lVar21 = *(long *)puVar9;
                                                  *(long *)(lVar19 + 0x20) = lVar20;
                                                  *(int *)(lVar15 + 0x1c) = iVar1 + 1;
                                                  puVar7 = 
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar19;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,lVar19,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar21 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
                                                  ;
                                                  puVar6 = PTR_DAT_067cc618;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    *(undefined4 *)(lVar14 + 0x18) = 0;
                                                    uVar17 = *(undefined8 *)puVar8;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar14 + 0x20) = uVar17;
                                                    lVar15 = thunk_FUN_02f45270(uVar12);
                                                    FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                    if (lVar15 != 0) {
                                                      lVar19 = *(long *)(lVar15 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__
                                                  ;
                                                  lVar20 = *(long *)puVar3;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar19 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar19 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar19,0);
                                                  if (lVar19 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                                                  ;
                                                  *(undefined8 *)(lVar19 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar19 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar20 = *(long *)(lVar15 + 0x10);
                                                    lVar16 = *(long *)puVar9;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar20 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar19;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar19,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  puVar7 = 
                                                  System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    uVar17 = *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar17;
                                                  *(undefined4 *)(lVar14 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar7;
                                                    lVar20 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar19 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar19 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar12;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar7 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar19,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_0__
                                                  ;
                                                  if (lVar19 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_0__
                                                  ;
                                                  *(undefined8 *)(lVar19 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar19 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar20 = *(long *)(lVar15 + 0x10);
                                                    lVar16 = *(long *)puVar9;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar20 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar19;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar19,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar14,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_6__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    *(undefined4 *)(lVar14 + 0x18) = 0;
                                                    uVar17 = *(undefined8 *)puVar8;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar14 + 0x20) = uVar17;
                                                    lVar15 = thunk_FUN_02f45270(uVar12);
                                                    FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                    if (lVar15 != 0) {
                                                      lVar19 = *(long *)(lVar15 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f32__
                                                  ;
                                                  lVar20 = *(long *)puVar3;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar19 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar19 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar19,0);
                                                  if (lVar19 != 0) {
                                                    uVar12 = *(undefined8 *)puVar7;
                                                    *(undefined8 *)(lVar19 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar19 + 0x18) = uVar12;
                                                    if (lVar15 != 0) {
                                                      lVar20 = *(long *)(lVar15 + 0x10);
                                                      lVar16 = *(long *)puVar9;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      puVar7 = 
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  ;
                                                  if (lVar20 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar19;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,lVar19,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  puVar7 = 
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    uVar17 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Nullable<byte>__ctor__;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar17;
                                                  *(undefined4 *)(lVar14 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar7;
                                                    lVar20 = *(long *)puVar3;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar19 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar19 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar12;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar7 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar19,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  if (lVar19 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar19 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar19 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar20 = *(long *)(lVar15 + 0x10);
                                                    lVar16 = *(long *)puVar9;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar20 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar19;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar19,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar14,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    *(undefined4 *)(lVar14 + 0x18) = 0;
                                                    uVar17 = *(undefined8 *)puVar8;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar14 + 0x20) = uVar17;
                                                    lVar15 = thunk_FUN_02f45270(uVar12);
                                                    FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                    if (lVar15 != 0) {
                                                      lVar19 = *(long *)(lVar15 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__
                                                  ;
                                                  lVar20 = *(long *)puVar3;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar19 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar19 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar19,0);
                                                  if (lVar19 != 0) {
                                                    uVar12 = *(undefined8 *)puVar7;
                                                    *(undefined8 *)(lVar19 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar19 + 0x18) = uVar12;
                                                    if (lVar15 != 0) {
                                                      lVar20 = *(long *)(lVar15 + 0x10);
                                                      lVar16 = *(long *)puVar9;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      puVar7 = 
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  ;
                                                  if (lVar20 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar20 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar19;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,lVar19,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    uVar17 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_s32__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Microsoft_Win32_SafeHandles_SafeFileHandle_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar17;
                                                  *(undefined4 *)(lVar14 + 0x18) = 2;
                                                  lVar15 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u8__;
                                                  lVar20 = *(long *)puVar3;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar19 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar19 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar19,0);
                                                  if (lVar19 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_3__
                                                  ;
                                                  *(undefined8 *)(lVar19 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar19 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar20 = *(long *)(lVar15 + 0x10);
                                                    lVar16 = *(long *)puVar9;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar20 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar19;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar19,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_10__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    *(undefined4 *)(lVar14 + 0x18) = 0;
                                                    uVar17 = *(undefined8 *)puVar8;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar14 + 0x20) = uVar17;
                                                    lVar15 = thunk_FUN_02f45270(uVar12);
                                                    FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                    if (lVar15 != 0) {
                                                      lVar19 = *(long *)(lVar15 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__
                                                  ;
                                                  lVar20 = *(long *)puVar3;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar19 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar19 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar19,0);
                                                  if (lVar19 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_11__
                                                  ;
                                                  *(undefined8 *)(lVar19 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar19 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar20 = *(long *)(lVar15 + 0x10);
                                                    lVar16 = *(long *)puVar9;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar20 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar19;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar19,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    uVar17 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar17;
                                                  *(undefined4 *)(lVar14 + 0x18) = 3;
                                                  lVar15 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                  ;
                                                  lVar20 = *(long *)puVar3;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar19 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar19 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar19,0);
                                                  if (lVar19 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar19 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar19 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar20 = *(long *)(lVar15 + 0x10);
                                                    lVar16 = *(long *)puVar9;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar20 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar19;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar19,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    uVar17 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar17;
                                                  *(undefined4 *)(lVar14 + 0x18) = 3;
                                                  lVar15 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar20 = *(long *)puVar3;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar19 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar19 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar19,0);
                                                  if (lVar19 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar19 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar19 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar20 = *(long *)(lVar15 + 0x10);
                                                    lVar16 = *(long *)puVar9;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar20 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar19;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar19,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    uVar17 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar17;
                                                  *(undefined4 *)(lVar14 + 0x18) = 4;
                                                  lVar15 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar20 = *(long *)puVar3;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar19 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar19 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar19 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar19,0);
                                                  if (lVar19 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar19 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar19 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar20 = *(long *)(lVar15 + 0x10);
                                                    lVar16 = *(long *)puVar9;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar20 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar20 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar19;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar19,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  FUN_06051d9c(unaff_x26,lVar11,0);
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
                        }
                      }
                    }
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


