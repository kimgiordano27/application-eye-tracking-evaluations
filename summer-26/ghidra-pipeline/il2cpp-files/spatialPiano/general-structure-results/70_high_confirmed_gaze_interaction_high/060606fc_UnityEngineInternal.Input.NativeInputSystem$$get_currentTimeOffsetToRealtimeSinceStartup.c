/*
FUNCTION_NAME: UnityEngineInternal.Input.NativeInputSystem$$get_currentTimeOffsetToRealtimeSinceStartup
ENTRY_POINT: 060606fc
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


void UnityEngineInternal_Input_NativeInputSystem__get_currentTimeOffsetToRealtimeSinceStartup(void)

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
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x28;
  
  FUN_02f08768();
  FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f64__);
  FUN_02f08768(Method_UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_<>c_<_ctor>b__107_0__);
  FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__);
  FUN_02f08768(Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__);
  FUN_02f08768(PTR_DAT_067cbf00);
  FUN_02f08768(
              Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__28_0__
              );
  FUN_02f08768(
              Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
              );
  FUN_02f08768(Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__);
  FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__);
  FUN_02f08768(
              Method_System_Runtime_Serialization_XmlDataContract_XmlDataContractCriticalHelper__ctor__
              );
  FUN_02f08768(Method_System_Xml_XmlDictionaryWriter_XmlWrappedWriter_WriteXmlnsAttribute__);
  FUN_02f08768(Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__);
  *(undefined1 *)(unaff_x19 + 0xe12) = 1;
  lVar11 = thunk_FUN_02f45270(*unaff_x20);
  FUN_06051fcc(lVar11,0);
  puVar10 = 
  Method_System_Runtime_Serialization_XmlDataContract_XmlDataContractCriticalHelper__ctor__;
  puVar3 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_6__;
  puVar5 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_1__;
  puVar4 = PTR_DAT_067cbf00;
  if (lVar11 != 0) {
    uVar16 = *(undefined8 *)
              Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_<>c_<_cctor>b__49_0__
    ;
    uVar21 = *(undefined8 *)Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__;
    uVar12 = *(undefined8 *)
              Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_0__;
    *(undefined8 *)(lVar11 + 0x10) =
         *(undefined8 *)Method_System_Xml_XmlDictionaryWriter_XmlWrappedWriter_WriteXmlnsAttribute__
    ;
    *(undefined8 *)(lVar11 + 0x18) = uVar16;
    uVar16 = *(undefined8 *)puVar10;
    uVar17 = *(undefined8 *)puVar4;
    *(undefined8 *)(lVar11 + 0x30) = uVar21;
    *(undefined8 *)(lVar11 + 0x38) = uVar16;
    *(undefined8 *)(lVar11 + 0x40) = uVar17;
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
        lVar18 = *(long *)Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_2__;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
            *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
          }
          else {
            FUN_03abf904(lVar13,lVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
          FUN_06051fc4(lVar14,0);
          puVar5 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__;
          if (lVar14 != 0) {
            iVar1 = *(int *)(lVar13 + 0x1c);
            *(undefined4 *)(lVar14 + 0x10) = 0x264;
            lVar18 = *(long *)puVar4;
            uVar12 = *(undefined8 *)puVar5;
            lVar15 = *(long *)(lVar13 + 0x10);
            *(int *)(lVar13 + 0x1c) = iVar1 + 1;
            *(undefined8 *)(lVar14 + 0x18) = uVar12;
            puVar5 = Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_1__
            ;
            puVar4 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_5__;
            if (lVar15 != 0) {
              uVar2 = *(uint *)(lVar13 + 0x18);
              if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
              }
              else {
                FUN_03abf904(lVar13,lVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              uVar12 = *(undefined8 *)puVar5;
              *(long *)(lVar11 + 0x20) = lVar13;
              lVar13 = thunk_FUN_02f45270(uVar12);
              FUN_03abf108(lVar13,*(undefined8 *)puVar4);
              lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                           Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                         );
              FUN_06051fbc(lVar14,0);
              puVar5 = PTR_DAT_067c95c8;
              puVar4 = PTR_DAT_067c95b0;
              if (lVar14 != 0) {
                uVar16 = *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                ;
                uVar17 = *(undefined8 *)
                          Method_Oculus_Platform_Message<PushNotificationResult>_get_Data__;
                *(undefined4 *)(lVar14 + 0x18) = 0;
                uVar12 = *(undefined8 *)puVar5;
                *(undefined8 *)(lVar14 + 0x10) = uVar16;
                *(undefined8 *)(lVar14 + 0x20) = uVar17;
                lVar15 = thunk_FUN_02f45270(uVar12);
                FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                puVar3 = PTR_DAT_067c95a0;
                if (lVar15 != 0) {
                  lVar18 = *(long *)(lVar15 + 0x10);
                  uVar12 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f64__;
                  lVar19 = *(long *)PTR_DAT_067c95a0;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  puVar10 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__;
                  if (lVar18 != 0) {
                    uVar2 = *(uint *)(lVar15 + 0x18);
                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
                    }
                    else {
                      FUN_03abf904(lVar15,uVar12,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                    }
                    puVar8 = 
                    Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                    ;
                    *(long *)(lVar14 + 0x30) = lVar15;
                    lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
                    FUN_03abf108(lVar15,*(undefined8 *)puVar10);
                    lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                 Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                               );
                    FUN_06051fb4(lVar18,0);
                    if (lVar18 != 0) {
                      uVar12 = *(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_<>c_<_ctor>b__107_0__
                      ;
                      *(undefined8 *)(lVar18 + 0x10) =
                           *(undefined8 *)
                            Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__;
                      *(undefined8 *)(lVar18 + 0x18) = uVar12;
                      puVar8 = 
                      Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__;
                      if (lVar15 != 0) {
                        lVar19 = *(long *)(lVar15 + 0x10);
                        lVar20 = *(long *)
                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__
                        ;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar19 != 0) {
                          uVar2 = *(uint *)(lVar15 + 0x18);
                          if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                            *(long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20) = lVar18;
                          }
                          else {
                            FUN_03abf904(lVar15,lVar18,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar14 + 0x28) = lVar15;
                          puVar9 = 
                          Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__;
                          if (lVar13 != 0) {
                            lVar15 = *(long *)(lVar13 + 0x10);
                            lVar18 = *(long *)
                                      Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__
                            ;
                            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                            if (lVar15 != 0) {
                              uVar2 = *(uint *)(lVar13 + 0x18);
                              if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar14;
                              }
                              else {
                                FUN_03abf904(lVar13,lVar14,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                              FUN_06051fbc(lVar14,0);
                              puVar7 = 
                              Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
                              ;
                              puVar6 = PTR_DAT_067cc618;
                              if (lVar14 != 0) {
                                uVar12 = *(undefined8 *)puVar5;
                                *(undefined4 *)(lVar14 + 0x18) = 0;
                                uVar16 = *(undefined8 *)puVar7;
                                *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)puVar6;
                                *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                lVar15 = thunk_FUN_02f45270(uVar12);
                                FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                if (lVar15 != 0) {
                                  lVar18 = *(long *)(lVar15 + 0x10);
                                  uVar12 = *(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__;
                                  lVar19 = *(long *)puVar3;
                                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                  if (lVar18 != 0) {
                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                      *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar12
                                      ;
                                    }
                                    else {
                                      FUN_03abf904(lVar15,uVar12,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    puVar6 = 
                                    Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                    ;
                                    *(long *)(lVar14 + 0x30) = lVar15;
                                    lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                    FUN_03abf108(lVar15,*(undefined8 *)puVar10);
                                    lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                    FUN_06051fb4(lVar18,0);
                                    if (lVar18 != 0) {
                                      uVar12 = *(undefined8 *)
                                                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                                      ;
                                      *(undefined8 *)(lVar18 + 0x10) =
                                           *(undefined8 *)
                                            Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__
                                      ;
                                      *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                      if (lVar15 != 0) {
                                        lVar19 = *(long *)(lVar15 + 0x10);
                                        lVar20 = *(long *)puVar8;
                                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                        if (lVar19 != 0) {
                                          uVar2 = *(uint *)(lVar15 + 0x18);
                                          if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                            *(long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20) = lVar18
                                            ;
                                          }
                                          else {
                                            FUN_03abf904(lVar15,lVar18,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar20 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          iVar1 = *(int *)(lVar13 + 0x1c);
                                          lVar18 = *(long *)(lVar13 + 0x10);
                                          lVar19 = *(long *)puVar9;
                                          *(long *)(lVar14 + 0x28) = lVar15;
                                          *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                          if (lVar18 != 0) {
                                            uVar2 = *(uint *)(lVar13 + 0x18);
                                            if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                              *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                              *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) =
                                                   lVar14;
                                            }
                                            else {
                                              FUN_03abf904(lVar13,lVar14,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar19 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                            FUN_06051fbc(lVar14,0);
                                            if (lVar14 != 0) {
                                              uVar12 = *(undefined8 *)puVar5;
                                              uVar16 = *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                              ;
                                              *(undefined8 *)(lVar14 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                              ;
                                              *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                              *(undefined4 *)(lVar14 + 0x18) = 3;
                                              lVar15 = thunk_FUN_02f45270(uVar12);
                                              FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                              if (lVar15 != 0) {
                                                lVar18 = *(long *)(lVar15 + 0x10);
                                                uVar12 = *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                ;
                                                lVar19 = *(long *)puVar3;
                                                *(int *)(lVar15 + 0x1c) =
                                                     *(int *)(lVar15 + 0x1c) + 1;
                                                if (lVar18 != 0) {
                                                  uVar2 = *(uint *)(lVar15 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                    *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                    *(undefined8 *)
                                                     (lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar12
                                                    ;
                                                  }
                                                  else {
                                                    FUN_03abf904(lVar15,uVar12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar19 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  puVar6 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)puVar10);
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar8;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar19 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar19 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar18 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)puVar9;
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
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
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    uVar16 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                  *(undefined4 *)(lVar14 + 0x18) = 3;
                                                  lVar15 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar18 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar19 = *(long *)puVar3;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)puVar10);
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar8;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar19 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar19 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar18 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)puVar9;
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
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
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    uVar16 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                  *(undefined4 *)(lVar14 + 0x18) = 4;
                                                  lVar15 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar18 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar19 = *(long *)puVar3;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar12;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)puVar10);
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar8;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar19 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar19 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar15,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar18 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)puVar9;
                                                  *(long *)(lVar14 + 0x28) = lVar15;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar18 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar18 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar14;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  FUN_06051d9c(unaff_x28,lVar11,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


