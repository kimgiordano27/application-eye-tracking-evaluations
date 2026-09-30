/*
FUNCTION_NAME: UnityEngineInternal.Input.NativeInputSystem$$SetPollingFrequency
ENTRY_POINT: 060607e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngineInternal_Input_NativeInputSystem__SetPollingFrequency(undefined8 *param_1)

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
  undefined8 *in_x13;
  undefined8 uVar20;
  long unaff_x19;
  undefined8 *puVar21;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar22;
  undefined8 unaff_x28;
  
  puVar22 = *(undefined8 **)(unaff_x21 + 0xcb0);
  puVar21 = *(undefined8 **)(unaff_x19 + 0xc88);
  uVar15 = *in_x9;
  uVar20 = *in_x13;
  uVar11 = **(undefined8 **)(in_x12 + 0xcc0);
  *(undefined8 *)(unaff_x20 + 0x10) = *param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar15;
  uVar15 = *in_x10;
  uVar16 = *in_x11;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar16;
  lVar12 = thunk_FUN_02f45270(uVar11);
  FUN_03abf108(lVar12,*puVar22);
  lVar13 = thunk_FUN_02f45270(*puVar21);
  FUN_06051fc4(lVar13,0);
  puVar4 = 
  Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__28_0__;
  if (lVar13 != 0) {
    *(undefined4 *)(lVar13 + 0x10) = 0x164;
    *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)puVar4;
    puVar4 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_2__;
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
        puVar5 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__;
        if (lVar13 != 0) {
          iVar1 = *(int *)(lVar12 + 0x1c);
          *(undefined4 *)(lVar13 + 0x10) = 0x264;
          lVar17 = *(long *)puVar4;
          uVar11 = *(undefined8 *)puVar5;
          lVar14 = *(long *)(lVar12 + 0x10);
          *(int *)(lVar12 + 0x1c) = iVar1 + 1;
          *(undefined8 *)(lVar13 + 0x18) = uVar11;
          puVar5 = Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_1__;
          puVar4 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_5__;
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
            uVar11 = *(undefined8 *)puVar5;
            *(long *)(unaff_x20 + 0x20) = lVar12;
            lVar12 = thunk_FUN_02f45270(uVar11);
            FUN_03abf108(lVar12,*(undefined8 *)puVar4);
            lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                         Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                       );
            FUN_06051fbc(lVar13,0);
            puVar5 = PTR_DAT_067c95c8;
            puVar4 = PTR_DAT_067c95b0;
            if (lVar13 != 0) {
              uVar15 = *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
              ;
              uVar16 = *(undefined8 *)
                        Method_Oculus_Platform_Message<PushNotificationResult>_get_Data__;
              *(undefined4 *)(lVar13 + 0x18) = 0;
              uVar11 = *(undefined8 *)puVar5;
              *(undefined8 *)(lVar13 + 0x10) = uVar15;
              *(undefined8 *)(lVar13 + 0x20) = uVar16;
              lVar14 = thunk_FUN_02f45270(uVar11);
              FUN_03abf108(lVar14,*(undefined8 *)puVar4);
              puVar3 = PTR_DAT_067c95a0;
              if (lVar14 != 0) {
                lVar17 = *(long *)(lVar14 + 0x10);
                uVar11 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f64__;
                lVar18 = *(long *)PTR_DAT_067c95a0;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                puVar10 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__;
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
                  puVar8 = 
                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                  ;
                  *(long *)(lVar13 + 0x30) = lVar14;
                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
                  FUN_03abf108(lVar14,*(undefined8 *)puVar10);
                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                               Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                             );
                  FUN_06051fb4(lVar17,0);
                  if (lVar17 != 0) {
                    uVar11 = *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_<>c_<_ctor>b__107_0__
                    ;
                    *(undefined8 *)(lVar17 + 0x10) =
                         *(undefined8 *)
                          Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__;
                    *(undefined8 *)(lVar17 + 0x18) = uVar11;
                    puVar8 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                    ;
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
                        puVar9 = 
                        Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__;
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
                            lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                            FUN_06051fbc(lVar13,0);
                            puVar7 = 
                            Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
                            ;
                            puVar6 = PTR_DAT_067cc618;
                            if (lVar13 != 0) {
                              uVar11 = *(undefined8 *)puVar5;
                              *(undefined4 *)(lVar13 + 0x18) = 0;
                              uVar15 = *(undefined8 *)puVar7;
                              *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)puVar6;
                              *(undefined8 *)(lVar13 + 0x20) = uVar15;
                              lVar14 = thunk_FUN_02f45270(uVar11);
                              FUN_03abf108(lVar14,*(undefined8 *)puVar4);
                              if (lVar14 != 0) {
                                lVar17 = *(long *)(lVar14 + 0x10);
                                uVar11 = *(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__;
                                lVar18 = *(long *)puVar3;
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
                                                  (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  puVar6 = 
                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                  ;
                                  *(long *)(lVar13 + 0x30) = lVar14;
                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                  FUN_03abf108(lVar14,*(undefined8 *)puVar10);
                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                  FUN_06051fb4(lVar17,0);
                                  if (lVar17 != 0) {
                                    uVar11 = *(undefined8 *)
                                              Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                                    ;
                                    *(undefined8 *)(lVar17 + 0x10) =
                                         *(undefined8 *)
                                          Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__
                                    ;
                                    *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                    if (lVar14 != 0) {
                                      lVar18 = *(long *)(lVar14 + 0x10);
                                      lVar19 = *(long *)puVar8;
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
                                                        (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        iVar1 = *(int *)(lVar12 + 0x1c);
                                        lVar17 = *(long *)(lVar12 + 0x10);
                                        lVar18 = *(long *)puVar9;
                                        *(long *)(lVar13 + 0x28) = lVar14;
                                        *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                        if (lVar17 != 0) {
                                          uVar2 = *(uint *)(lVar12 + 0x18);
                                          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = lVar13
                                            ;
                                          }
                                          else {
                                            FUN_03abf904(lVar12,lVar13,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                          FUN_06051fbc(lVar13,0);
                                          if (lVar13 != 0) {
                                            uVar11 = *(undefined8 *)puVar5;
                                            uVar15 = *(undefined8 *)
                                                                                                            
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                            ;
                                            *(undefined8 *)(lVar13 + 0x10) =
                                                 *(undefined8 *)
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                            ;
                                            *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                            *(undefined4 *)(lVar13 + 0x18) = 3;
                                            lVar14 = thunk_FUN_02f45270(uVar11);
                                            FUN_03abf108(lVar14,*(undefined8 *)puVar4);
                                            if (lVar14 != 0) {
                                              lVar17 = *(long *)(lVar14 + 0x10);
                                              uVar11 = *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
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
                                                puVar6 = 
                                                Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                ;
                                                *(long *)(lVar13 + 0x30) = lVar14;
                                                lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                                FUN_03abf108(lVar14,*(undefined8 *)puVar10);
                                                lVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                          
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                FUN_06051fb4(lVar17,0);
                                                if (lVar17 != 0) {
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)puVar8;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar18 != 0) {
                                                      uVar2 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar18 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar17;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar14,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                  *(undefined4 *)(lVar13 + 0x18) = 3;
                                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar4);
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
                                                  puVar6 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar10);
                                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)puVar8;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar18 != 0) {
                                                      uVar2 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar18 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar17;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar14,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    uVar11 = *(undefined8 *)puVar5;
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar13 + 0x20) = uVar15;
                                                  *(undefined4 *)(lVar13 + 0x18) = 4;
                                                  lVar14 = thunk_FUN_02f45270(uVar11);
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar4);
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
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar13 + 0x30) = lVar14;
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03abf108(lVar14,*(undefined8 *)puVar10);
                                                  lVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__
                                                  ;
                                                  *(undefined8 *)(lVar17 + 0x18) = uVar11;
                                                  if (lVar14 != 0) {
                                                    lVar18 = *(long *)(lVar14 + 0x10);
                                                    lVar19 = *(long *)puVar8;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar18 != 0) {
                                                      uVar2 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar18 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar17;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar14,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar12 + 0x1c);
                                                  lVar17 = *(long *)(lVar12 + 0x10);
                                                  lVar18 = *(long *)puVar9;
                                                  *(long *)(lVar13 + 0x28) = lVar14;
                                                  *(int *)(lVar12 + 0x1c) = iVar1 + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar13;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x20 + 0x28) = lVar12;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


