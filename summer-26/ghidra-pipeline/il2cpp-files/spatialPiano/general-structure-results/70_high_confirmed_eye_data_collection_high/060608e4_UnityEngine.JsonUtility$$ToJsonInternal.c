/*
FUNCTION_NAME: UnityEngine.JsonUtility$$ToJsonInternal
ENTRY_POINT: 060608e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_JsonUtility__ToJsonInternal(undefined8 *param_1)

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
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  int in_w10;
  undefined8 uVar19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x28;
  
  uVar19 = *param_1;
  lVar13 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = in_w10 + 1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar19;
  puVar5 = Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_1__;
  puVar4 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_5__;
  if (lVar13 != 0) {
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
    }
    else {
      FUN_03abf904();
    }
    uVar19 = *(undefined8 *)puVar5;
    *(long *)(unaff_x20 + 0x20) = unaff_x21;
    lVar13 = thunk_FUN_02f45270(uVar19);
    FUN_03abf108(lVar13,*(undefined8 *)puVar4);
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                               );
    FUN_06051fbc(lVar11,0);
    puVar5 = PTR_DAT_067c95c8;
    puVar4 = PTR_DAT_067c95b0;
    if (lVar11 != 0) {
      uVar14 = *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
      ;
      uVar16 = *(undefined8 *)Method_Oculus_Platform_Message<PushNotificationResult>_get_Data__;
      *(undefined4 *)(lVar11 + 0x18) = 0;
      uVar19 = *(undefined8 *)puVar5;
      *(undefined8 *)(lVar11 + 0x10) = uVar14;
      *(undefined8 *)(lVar11 + 0x20) = uVar16;
      lVar12 = thunk_FUN_02f45270(uVar19);
      FUN_03abf108(lVar12,*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_067c95a0;
      if (lVar12 != 0) {
        lVar15 = *(long *)(lVar12 + 0x10);
        uVar19 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f64__;
        lVar17 = *(long *)PTR_DAT_067c95a0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        puVar10 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__;
        if (lVar15 != 0) {
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar19;
          }
          else {
            FUN_03abf904(lVar12,uVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          puVar8 = 
          Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
          ;
          *(long *)(lVar11 + 0x30) = lVar12;
          lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar8);
          FUN_03abf108(lVar12,*(undefined8 *)puVar10);
          lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                       Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                     );
          FUN_06051fb4(lVar15,0);
          if (lVar15 != 0) {
            uVar19 = *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_<>c_<_ctor>b__107_0__
            ;
            *(undefined8 *)(lVar15 + 0x10) =
                 *(undefined8 *)Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__;
            *(undefined8 *)(lVar15 + 0x18) = uVar19;
            puVar8 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__;
            if (lVar12 != 0) {
              lVar17 = *(long *)(lVar12 + 0x10);
              lVar18 = *(long *)
                        Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar17 != 0) {
                uVar2 = *(uint *)(lVar12 + 0x18);
                if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                  *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = lVar15;
                }
                else {
                  FUN_03abf904(lVar12,lVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar11 + 0x28) = lVar12;
                puVar9 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__;
                if (lVar13 != 0) {
                  lVar12 = *(long *)(lVar13 + 0x10);
                  lVar15 = *(long *)
                            Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar12 != 0) {
                    uVar2 = *(uint *)(lVar13 + 0x18);
                    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                      *(long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = lVar11;
                    }
                    else {
                      FUN_03abf904(lVar13,lVar11,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                                 Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                               );
                    FUN_06051fbc(lVar11,0);
                    puVar7 = 
                    Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
                    ;
                    puVar6 = PTR_DAT_067cc618;
                    if (lVar11 != 0) {
                      uVar19 = *(undefined8 *)puVar5;
                      *(undefined4 *)(lVar11 + 0x18) = 0;
                      uVar14 = *(undefined8 *)puVar7;
                      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)puVar6;
                      *(undefined8 *)(lVar11 + 0x20) = uVar14;
                      lVar12 = thunk_FUN_02f45270(uVar19);
                      FUN_03abf108(lVar12,*(undefined8 *)puVar4);
                      if (lVar12 != 0) {
                        lVar15 = *(long *)(lVar12 + 0x10);
                        uVar19 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__
                        ;
                        lVar17 = *(long *)puVar3;
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (lVar15 != 0) {
                          uVar2 = *(uint *)(lVar12 + 0x18);
                          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                            *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar19;
                          }
                          else {
                            FUN_03abf904(lVar12,uVar19,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          puVar6 = 
                          Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                          ;
                          *(long *)(lVar11 + 0x30) = lVar12;
                          lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                          FUN_03abf108(lVar12,*(undefined8 *)puVar10);
                          lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                          FUN_06051fb4(lVar15,0);
                          if (lVar15 != 0) {
                            uVar19 = *(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                            ;
                            *(undefined8 *)(lVar15 + 0x10) =
                                 *(undefined8 *)
                                  Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__;
                            *(undefined8 *)(lVar15 + 0x18) = uVar19;
                            if (lVar12 != 0) {
                              lVar17 = *(long *)(lVar12 + 0x10);
                              lVar18 = *(long *)puVar8;
                              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                              if (lVar17 != 0) {
                                uVar2 = *(uint *)(lVar12 + 0x18);
                                if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                  *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                  *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = lVar15;
                                }
                                else {
                                  FUN_03abf904(lVar12,lVar15,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                iVar1 = *(int *)(lVar13 + 0x1c);
                                lVar15 = *(long *)(lVar13 + 0x10);
                                lVar17 = *(long *)puVar9;
                                *(long *)(lVar11 + 0x28) = lVar12;
                                *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                if (lVar15 != 0) {
                                  uVar2 = *(uint *)(lVar13 + 0x18);
                                  if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                    *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                    *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = lVar11;
                                  }
                                  else {
                                    FUN_03abf904(lVar13,lVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                  FUN_06051fbc(lVar11,0);
                                  if (lVar11 != 0) {
                                    uVar19 = *(undefined8 *)puVar5;
                                    uVar14 = *(undefined8 *)
                                              Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                    ;
                                    *(undefined8 *)(lVar11 + 0x10) =
                                         *(undefined8 *)
                                          Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                    ;
                                    *(undefined8 *)(lVar11 + 0x20) = uVar14;
                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                    lVar12 = thunk_FUN_02f45270(uVar19);
                                    FUN_03abf108(lVar12,*(undefined8 *)puVar4);
                                    if (lVar12 != 0) {
                                      lVar15 = *(long *)(lVar12 + 0x10);
                                      uVar19 = *(undefined8 *)
                                                Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                      ;
                                      lVar17 = *(long *)puVar3;
                                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                      if (lVar15 != 0) {
                                        uVar2 = *(uint *)(lVar12 + 0x18);
                                        if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) =
                                               uVar19;
                                        }
                                        else {
                                          FUN_03abf904(lVar12,uVar19,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        puVar6 = 
                                        Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                        ;
                                        *(long *)(lVar11 + 0x30) = lVar12;
                                        lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                        FUN_03abf108(lVar12,*(undefined8 *)puVar10);
                                        lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                          
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                        FUN_06051fb4(lVar15,0);
                                        if (lVar15 != 0) {
                                          uVar19 = *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                          ;
                                          *(undefined8 *)(lVar15 + 0x10) =
                                               *(undefined8 *)
                                                Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__
                                          ;
                                          *(undefined8 *)(lVar15 + 0x18) = uVar19;
                                          if (lVar12 != 0) {
                                            lVar17 = *(long *)(lVar12 + 0x10);
                                            lVar18 = *(long *)puVar8;
                                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                            if (lVar17 != 0) {
                                              uVar2 = *(uint *)(lVar12 + 0x18);
                                              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                *(long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) =
                                                     lVar15;
                                              }
                                              else {
                                                FUN_03abf904(lVar12,lVar15,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar18 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              iVar1 = *(int *)(lVar13 + 0x1c);
                                              lVar15 = *(long *)(lVar13 + 0x10);
                                              lVar17 = *(long *)puVar9;
                                              *(long *)(lVar11 + 0x28) = lVar12;
                                              *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                              if (lVar15 != 0) {
                                                uVar2 = *(uint *)(lVar13 + 0x18);
                                                if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                  *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                  *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) =
                                                       lVar11;
                                                }
                                                else {
                                                  FUN_03abf904(lVar13,lVar11,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar17 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                          
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                FUN_06051fbc(lVar11,0);
                                                if (lVar11 != 0) {
                                                  uVar19 = *(undefined8 *)puVar5;
                                                  uVar14 = *(undefined8 *)
                                                                                                                        
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar14;
                                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                                  lVar12 = thunk_FUN_02f45270(uVar19);
                                                  FUN_03abf108(lVar12,*(undefined8 *)puVar4);
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    uVar19 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar17 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar19;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,uVar19,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar6 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_03abf108(lVar12,*(undefined8 *)puVar10);
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    uVar19 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__
                                                  ;
                                                  *(undefined8 *)(lVar15 + 0x18) = uVar19;
                                                  if (lVar12 != 0) {
                                                    lVar17 = *(long *)(lVar12 + 0x10);
                                                    lVar18 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar2 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar17 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar15;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar12,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar17 = *(long *)puVar9;
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  );
                                                  FUN_06051fbc(lVar11,0);
                                                  if (lVar11 != 0) {
                                                    uVar19 = *(undefined8 *)puVar5;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar14;
                                                  *(undefined4 *)(lVar11 + 0x18) = 4;
                                                  lVar12 = thunk_FUN_02f45270(uVar19);
                                                  FUN_03abf108(lVar12,*(undefined8 *)puVar4);
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    uVar19 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar17 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar19;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar12,uVar19,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar11 + 0x30) = lVar12;
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_03abf108(lVar12,*(undefined8 *)puVar10);
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    uVar19 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Xml_XmlBaseWriter_NamespaceManager_AddNamespace__
                                                  ;
                                                  *(undefined8 *)(lVar15 + 0x18) = uVar19;
                                                  if (lVar12 != 0) {
                                                    lVar17 = *(long *)(lVar12 + 0x10);
                                                    lVar18 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar2 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar17 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar15;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar12,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar17 = *(long *)puVar9;
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  *(int *)(lVar13 + 0x1c) = iVar1 + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar11;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar13,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x20 + 0x28) = lVar13;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


