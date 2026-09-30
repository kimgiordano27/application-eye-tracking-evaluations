/*
FUNCTION_NAME: UnityEngine.InputForUI.InputManagerProvider$$CheckIfIMEChanged
ENTRY_POINT: 0605c360
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_13;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputForUI_InputManagerProvider__CheckIfIMEChanged(undefined8 param_1)

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
  undefined8 uVar11;
  long lVar12;
  undefined8 in_x9;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined8 *puVar16;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  puVar16 = *(undefined8 **)(unaff_x27 + 0x5b0);
  *(undefined4 *)(unaff_x22 + 0x18) = 0;
  uVar8 = *unaff_x29;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x9;
  lVar9 = thunk_FUN_02f45270(uVar8);
  FUN_03abf108(lVar9,*puVar16);
  puVar3 = PTR_DAT_067c95a0;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x10);
    uVar8 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f64__;
    lVar13 = *(long *)PTR_DAT_067c95a0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
      }
      else {
        FUN_03abf904(lVar9,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
      }
      puVar7 = 
      Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
      ;
      *(long *)(unaff_x22 + 0x30) = lVar9;
      lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
      FUN_03abf108(lVar9,*(undefined8 *)
                          Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__);
      lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                 );
      FUN_06051fb4(lVar10,0);
      if (lVar10 != 0) {
        uVar8 = *unaff_x29;
        uVar11 = *(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_<Render>b__6_0__;
        *(undefined8 *)(lVar10 + 0x10) = *unaff_x28;
        *(undefined8 *)(lVar10 + 0x18) = uVar11;
        lVar13 = thunk_FUN_02f45270(uVar8);
        FUN_03abf108(lVar13,*puVar16);
        if (lVar13 != 0) {
          lVar12 = *(long *)(lVar13 + 0x10);
          uVar8 = *(undefined8 *)
                   Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__28_0__
          ;
          lVar14 = *(long *)puVar3;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar2 = *(uint *)(lVar13 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
            }
            else {
              FUN_03abf904(lVar13,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar10 + 0x20) = lVar13;
            puVar7 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__;
            if (lVar9 != 0) {
              lVar13 = *(long *)(lVar9 + 0x10);
              lVar12 = *(long *)
                        Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar13 != 0) {
                uVar2 = *(uint *)(lVar9 + 0x18);
                if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                  *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                }
                else {
                  FUN_03abf904(lVar9,lVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                             Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                           );
                FUN_06051fb4(lVar10,0);
                if (lVar10 != 0) {
                  uVar8 = *unaff_x29;
                  uVar11 = *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__98_System_Collections_IEnumerator_Reset__
                  ;
                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x28;
                  *(undefined8 *)(lVar10 + 0x18) = uVar11;
                  lVar13 = thunk_FUN_02f45270(uVar8);
                  FUN_03abf108(lVar13,*puVar16);
                  if (lVar13 != 0) {
                    lVar12 = *(long *)(lVar13 + 0x10);
                    uVar8 = *(undefined8 *)
                             Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__;
                    lVar14 = *(long *)puVar3;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar12 != 0) {
                      uVar2 = *(uint *)(lVar13 + 0x18);
                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                      }
                      else {
                        FUN_03abf904(lVar13,uVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar1 = *(int *)(lVar9 + 0x1c);
                      lVar12 = *(long *)(lVar9 + 0x10);
                      lVar14 = *(long *)puVar7;
                      *(long *)(lVar10 + 0x20) = lVar13;
                      *(int *)(lVar9 + 0x1c) = iVar1 + 1;
                      puVar5 = 
                      Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__;
                      if (lVar12 != 0) {
                        uVar2 = *(uint *)(lVar9 + 0x18);
                        if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                          *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar10;
                        }
                        else {
                          FUN_03abf904(lVar9,lVar10,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
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
                            lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                            FUN_06051fbc(lVar9,0);
                            puVar4 = 
                            Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_5__
                            ;
                            puVar5 = Method_UnityEngine_Events_UnityEvent<float>_AddListener__;
                            if (lVar9 != 0) {
                              uVar8 = *unaff_x29;
                              *(undefined4 *)(lVar9 + 0x18) = 0;
                              uVar11 = *(undefined8 *)puVar4;
                              *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)puVar5;
                              *(undefined8 *)(lVar9 + 0x20) = uVar11;
                              lVar10 = thunk_FUN_02f45270(uVar8);
                              FUN_03abf108(lVar10,*puVar16);
                              if (lVar10 != 0) {
                                lVar13 = *(long *)(lVar10 + 0x10);
                                uVar8 = *(undefined8 *)
                                         Method_Unity_Burst_Intrinsics_Arm_Neon_vminq_f32__;
                                lVar12 = *(long *)puVar3;
                                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                if (lVar13 != 0) {
                                  uVar2 = *(uint *)(lVar10 + 0x18);
                                  if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                    *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                    *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                                  }
                                  else {
                                    FUN_03abf904(lVar10,uVar8,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  puVar5 = 
                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                  ;
                                  *(long *)(lVar9 + 0x30) = lVar10;
                                  lVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                  FUN_03abf108(lVar10,*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                              );
                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                  FUN_06051fb4(lVar13,0);
                                  if (lVar13 != 0) {
                                    uVar8 = *unaff_x29;
                                    uVar11 = *(undefined8 *)
                                              Method_UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_<OnFindLayoutForDevice>b__0__
                                    ;
                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                    *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                    lVar12 = thunk_FUN_02f45270(uVar8);
                                    FUN_03abf108(lVar12,*puVar16);
                                    if (lVar12 != 0) {
                                      lVar14 = *(long *)(lVar12 + 0x10);
                                      uVar8 = *(undefined8 *)
                                               Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__28_0__
                                      ;
                                      lVar15 = *(long *)puVar3;
                                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                      if (lVar14 != 0) {
                                        uVar2 = *(uint *)(lVar12 + 0x18);
                                        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) =
                                               uVar8;
                                        }
                                        else {
                                          FUN_03abf904(lVar12,uVar8,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar13 + 0x20) = lVar12;
                                        if (lVar10 != 0) {
                                          lVar12 = *(long *)(lVar10 + 0x10);
                                          lVar14 = *(long *)puVar7;
                                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                          if (lVar12 != 0) {
                                            uVar2 = *(uint *)(lVar10 + 0x18);
                                            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                              *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) =
                                                   lVar13;
                                            }
                                            else {
                                              FUN_03abf904(lVar10,lVar13,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar14 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                            FUN_06051fb4(lVar13,0);
                                            if (lVar13 != 0) {
                                              uVar8 = *unaff_x29;
                                              uVar11 = *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_8__
                                              ;
                                              *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                              *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                              lVar12 = thunk_FUN_02f45270(uVar8);
                                              FUN_03abf108(lVar12,*puVar16);
                                              if (lVar12 != 0) {
                                                lVar14 = *(long *)(lVar12 + 0x10);
                                                uVar8 = *(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__
                                                ;
                                                lVar15 = *(long *)puVar3;
                                                *(int *)(lVar12 + 0x1c) =
                                                     *(int *)(lVar12 + 0x1c) + 1;
                                                if (lVar14 != 0) {
                                                  uVar2 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                    *(undefined8 *)
                                                     (lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                                                  }
                                                  else {
                                                    FUN_03abf904(lVar12,uVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar15 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar10 + 0x1c);
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar7;
                                                  *(long *)(lVar13 + 0x20) = lVar12;
                                                  *(int *)(lVar10 + 0x1c) = iVar1 + 1;
                                                  puVar5 = 
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    puVar6 = 
                                                  Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
                                                  ;
                                                  puVar4 = PTR_DAT_067cc618;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x29;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                    lVar10 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar10,*puVar16);
                                                    if (lVar10 != 0) {
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__
                                                  ;
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
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
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar7;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar12 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar13;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    puVar5 = 
                                                  System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x29;
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
                                                  FUN_03abf108(lVar10,*puVar16);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar8 = *(undefined8 *)puVar5;
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
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
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar13,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_0__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_0__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar7;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar12 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar13;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar9,0);
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_6__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x29;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                    lVar10 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar10,*puVar16);
                                                    if (lVar10 != 0) {
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f32__
                                                  ;
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
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
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar8 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)puVar7;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      puVar5 = 
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    puVar5 = 
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x29;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Nullable<byte>__ctor__;
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar10 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar10,*puVar16);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar8 = *(undefined8 *)puVar5;
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                             uVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
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
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar13,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar7;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar12 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar13;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar9,0);
                                                  puVar6 = 
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x29;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                    lVar10 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar10,*puVar16);
                                                    if (lVar10 != 0) {
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__
                                                  ;
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
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
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar8 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)puVar7;
                                                      *(int *)(lVar10 + 0x1c) =
                                                           *(int *)(lVar10 + 0x1c) + 1;
                                                      puVar5 = 
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    if (lVar9 != 0) {
                                                      uVar8 = *unaff_x29;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_s32__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Microsoft_Win32_SafeHandles_SafeFileHandle_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar9 + 0x18) = 2;
                                                  lVar10 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar10,*puVar16);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u8__;
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
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
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_3__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar7;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar12 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar13;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    puVar6 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_10__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar8 = *unaff_x29;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar4;
                                                    *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                    lVar10 = thunk_FUN_02f45270(uVar8);
                                                    FUN_03abf108(lVar10,*puVar16);
                                                    if (lVar10 != 0) {
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__
                                                  ;
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
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
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_11__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar7;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar12 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar13;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    if (lVar9 != 0) {
                                                      uVar8 = *unaff_x29;
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
                                                  FUN_03abf108(lVar10,*puVar16);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                  ;
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
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
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar7;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar12 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar13;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    if (lVar9 != 0) {
                                                      uVar8 = *unaff_x29;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar9 + 0x20) = uVar11;
                                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                                  lVar10 = thunk_FUN_02f45270(uVar8);
                                                  FUN_03abf108(lVar10,*puVar16);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
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
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar7;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar12 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar13;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_06051fbc(lVar9,0);
                                                    if (lVar9 != 0) {
                                                      uVar8 = *unaff_x29;
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
                                                  FUN_03abf108(lVar10,*puVar16);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar2 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar10,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
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
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)puVar7;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar2 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar12 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar13;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar10,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar9;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    FUN_06051d9c(unaff_x26);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


