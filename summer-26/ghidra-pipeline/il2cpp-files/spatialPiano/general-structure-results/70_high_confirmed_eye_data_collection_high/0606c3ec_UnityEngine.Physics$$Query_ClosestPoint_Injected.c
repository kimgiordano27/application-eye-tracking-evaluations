/*
FUNCTION_NAME: UnityEngine.Physics$$Query_ClosestPoint_Injected
ENTRY_POINT: 0606c3ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;data_collection;telemetry;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_generic_rendering_without_foveation_or_eye_source;negative_generic_render_terms_without_foveation;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_Physics__Query_ClosestPoint_Injected(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x24 + 0x10) = *unaff_x19;
  *(undefined8 *)(unaff_x24 + 0x18) = param_1;
  if (unaff_x23 != 0) {
    lVar8 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    puVar4 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__;
    if (lVar8 != 0) {
      uVar2 = *(uint *)(unaff_x23 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
        *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = unaff_x24;
      }
      else {
        FUN_03abf904();
      }
      iVar1 = *(int *)(unaff_x21 + 0x1c);
      lVar8 = *(long *)(unaff_x21 + 0x10);
      *(long *)(unaff_x22 + 0x28) = unaff_x23;
      *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
      if (lVar8 != 0) {
        uVar2 = *(uint *)(unaff_x21 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
          *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
        }
        else {
          FUN_03abf904();
        }
        lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
        FUN_06051fbc(lVar8,0);
        puVar5 = 
        Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateAlbedoPreset>b__6_4__
        ;
        puVar3 = Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_AddListener__;
        if (lVar8 != 0) {
          uVar6 = *unaff_x25;
          *(undefined4 *)(lVar8 + 0x18) = 0;
          uVar10 = *(undefined8 *)puVar5;
          *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)puVar3;
          *(undefined8 *)(lVar8 + 0x20) = uVar10;
          lVar7 = thunk_FUN_02f45270(uVar6);
          FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0);
          if (lVar7 != 0) {
            lVar9 = *(long *)(lVar7 + 0x10);
            uVar6 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__;
            lVar11 = *unaff_x26;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar2 = *(uint *)(lVar7 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
              }
              else {
                FUN_03abf904(lVar7,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              puVar3 = 
              Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
              ;
              *(long *)(lVar8 + 0x30) = lVar7;
              lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
              FUN_03abf108(lVar7,*(undefined8 *)
                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                          );
              lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                          Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                        );
              FUN_06051fb4(lVar9,0);
              if (lVar9 != 0) {
                uVar6 = *(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_11__
                ;
                *(undefined8 *)(lVar9 + 0x10) = *unaff_x19;
                *(undefined8 *)(lVar9 + 0x18) = uVar6;
                if (lVar7 != 0) {
                  lVar11 = *(long *)(lVar7 + 0x10);
                  lVar12 = *unaff_x27;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar11 != 0) {
                    uVar2 = *(uint *)(lVar7 + 0x18);
                    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                      *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                    }
                    else {
                      FUN_03abf904(lVar7,lVar9,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    iVar1 = *(int *)(unaff_x21 + 0x1c);
                    lVar9 = *(long *)(unaff_x21 + 0x10);
                    *(long *)(lVar8 + 0x28) = lVar7;
                    *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                    if (lVar9 != 0) {
                      uVar2 = *(uint *)(unaff_x21 + 0x18);
                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                        *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                      }
                      else {
                        FUN_03abf904();
                      }
                      lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                      FUN_06051fbc(lVar8,0);
                      puVar5 = 
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__0__
                      ;
                      puVar3 = Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__;
                      if (lVar8 != 0) {
                        uVar6 = *unaff_x25;
                        *(undefined4 *)(lVar8 + 0x18) = 0;
                        uVar10 = *(undefined8 *)puVar5;
                        *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)puVar3;
                        *(undefined8 *)(lVar8 + 0x20) = uVar10;
                        lVar7 = thunk_FUN_02f45270(uVar6);
                        FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0);
                        if (lVar7 != 0) {
                          lVar9 = *(long *)(lVar7 + 0x10);
                          uVar6 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__;
                          lVar11 = *unaff_x26;
                          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                          if (lVar9 != 0) {
                            uVar2 = *(uint *)(lVar7 + 0x18);
                            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                              *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
                            }
                            else {
                              FUN_03abf904(lVar7,uVar6,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                            }
                            puVar3 = 
                            Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                            ;
                            *(long *)(lVar8 + 0x30) = lVar7;
                            lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                            FUN_03abf108(lVar7,*(undefined8 *)
                                                Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                        );
                            lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                            FUN_06051fb4(lVar9,0);
                            if (lVar9 != 0) {
                              uVar6 = *(undefined8 *)
                                       Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                              ;
                              *(undefined8 *)(lVar9 + 0x10) = *unaff_x19;
                              *(undefined8 *)(lVar9 + 0x18) = uVar6;
                              if (lVar7 != 0) {
                                lVar11 = *(long *)(lVar7 + 0x10);
                                lVar12 = *unaff_x27;
                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                if (lVar11 != 0) {
                                  uVar2 = *(uint *)(lVar7 + 0x18);
                                  if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                    *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                    *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
                                  }
                                  else {
                                    FUN_03abf904(lVar7,lVar9,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                  *(long *)(lVar8 + 0x28) = lVar7;
                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                  if (lVar9 != 0) {
                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                                    }
                                    else {
                                      FUN_03abf904();
                                    }
                                    lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                    FUN_06051fbc(lVar8,0);
                                    puVar5 = 
                                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__1__
                                    ;
                                    puVar3 = 
                                    Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>__ctor__
                                    ;
                                    if (lVar8 != 0) {
                                      uVar6 = *unaff_x25;
                                      *(undefined4 *)(lVar8 + 0x18) = 0;
                                      uVar10 = *(undefined8 *)puVar5;
                                      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)puVar3;
                                      *(undefined8 *)(lVar8 + 0x20) = uVar10;
                                      lVar7 = thunk_FUN_02f45270(uVar6);
                                      FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0);
                                      if (lVar7 != 0) {
                                        lVar9 = *(long *)(lVar7 + 0x10);
                                        uVar6 = *(undefined8 *)
                                                 Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u16__;
                                        lVar11 = *unaff_x26;
                                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                        if (lVar9 != 0) {
                                          uVar2 = *(uint *)(lVar7 + 0x18);
                                          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                            *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) =
                                                 uVar6;
                                          }
                                          else {
                                            FUN_03abf904(lVar7,uVar6,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          puVar3 = 
                                          Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                          ;
                                          *(long *)(lVar8 + 0x30) = lVar7;
                                          lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                          FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                          lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                          FUN_06051fb4(lVar9,0);
                                          if (lVar9 != 0) {
                                            uVar6 = *(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_set_matchFrameRateRequested__
                                            ;
                                            *(undefined8 *)(lVar9 + 0x10) = *unaff_x19;
                                            *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                            if (lVar7 != 0) {
                                              lVar11 = *(long *)(lVar7 + 0x10);
                                              lVar12 = *unaff_x27;
                                              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                              if (lVar11 != 0) {
                                                uVar2 = *(uint *)(lVar7 + 0x18);
                                                if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                  *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                  *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) =
                                                       lVar9;
                                                }
                                                else {
                                                  FUN_03abf904(lVar7,lVar9,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar12 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                lVar9 = *(long *)(unaff_x21 + 0x10);
                                                *(long *)(lVar8 + 0x28) = lVar7;
                                                *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                if (lVar9 != 0) {
                                                  uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                  if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                    *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) =
                                                         lVar8;
                                                  }
                                                  else {
                                                    FUN_03abf904();
                                                  }
                                                  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_06051fbc(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    uVar6 = *unaff_x25;
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar8 + 0x18) = 3;
                                                  lVar7 = thunk_FUN_02f45270(uVar6);
                                                  FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                                  ;
                                                  lVar11 = *unaff_x26;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar8 + 0x30) = lVar7;
                                                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x19;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
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
                                                  *(long *)(lVar8 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_06051fbc(lVar8,0);
                                                    if (lVar8 != 0) {
                                                      uVar6 = *unaff_x25;
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar8 + 0x18) = 3;
                                                  lVar7 = thunk_FUN_02f45270(uVar6);
                                                  FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar11 = *unaff_x26;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar8 + 0x30) = lVar7;
                                                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                                  FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x19;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
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
                                                  *(long *)(lVar8 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_06051fbc(lVar8,0);
                                                    if (lVar8 != 0) {
                                                      uVar6 = *unaff_x25;
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar8 + 0x18) = 4;
                                                  lVar7 = thunk_FUN_02f45270(uVar6);
                                                  FUN_03abf108(lVar7,*(undefined8 *)PTR_DAT_067c95b0
                                                              );
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar11 = *unaff_x26;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  puVar4 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar8 + 0x30) = lVar7;
                                                  lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                  FUN_03abf108(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x19;
                                                  *(undefined8 *)(lVar9 + 0x18) = uVar6;
                                                  if (lVar7 != 0) {
                                                    lVar11 = *(long *)(lVar7 + 0x10);
                                                    lVar12 = *unaff_x27;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar2 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar11 + (long)(int)uVar2 * 8 +
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
                                                  *(long *)(lVar8 + 0x28) = lVar7;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


