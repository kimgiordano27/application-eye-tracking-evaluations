/*
FUNCTION_NAME: UnityEngine.Physics$$OverlapSphereNonAlloc
ENTRY_POINT: 0606c520
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_generic_rendering_without_foveation_or_eye_source;negative_generic_render_terms_without_foveation;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Physics__OverlapSphereNonAlloc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int in_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  *(int *)(unaff_x23 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20) = param_3;
    }
    else {
      FUN_03abf904();
    }
    puVar3 = 
    Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
    ;
    *(long *)(unaff_x22 + 0x30) = unaff_x23;
    lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
    FUN_03abf108(lVar5,*(undefined8 *)
                        Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__);
    lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                              );
    FUN_06051fb4(lVar6,0);
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_11__
      ;
      *(undefined8 *)(lVar6 + 0x10) = *unaff_x29;
      *(undefined8 *)(lVar6 + 0x18) = uVar7;
      if (lVar5 != 0) {
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *unaff_x27;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar6;
          }
          else {
            FUN_03abf904(lVar5,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          iVar1 = *(int *)(unaff_x21 + 0x1c);
          lVar6 = *(long *)(unaff_x21 + 0x10);
          *(long *)(unaff_x22 + 0x28) = lVar5;
          *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
          if (lVar6 != 0) {
            uVar2 = *(uint *)(unaff_x21 + 0x18);
            if (uVar2 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
              *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = unaff_x22;
            }
            else {
              FUN_03abf904();
            }
            lVar5 = thunk_FUN_02f45270(*unaff_x19);
            FUN_06051fbc(lVar5,0);
            puVar4 = 
            Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__0__
            ;
            puVar3 = Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__;
            if (lVar5 != 0) {
              uVar7 = *unaff_x25;
              *(undefined4 *)(lVar5 + 0x18) = 0;
              uVar10 = *(undefined8 *)puVar4;
              *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar3;
              *(undefined8 *)(lVar5 + 0x20) = uVar10;
              lVar6 = thunk_FUN_02f45270(uVar7);
              FUN_03abf108(lVar6,*(undefined8 *)PTR_DAT_067c95b0);
              if (lVar6 != 0) {
                lVar8 = *(long *)(lVar6 + 0x10);
                uVar7 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__;
                lVar9 = *unaff_x26;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar2 = *(uint *)(lVar6 + 0x18);
                  if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
                  }
                  else {
                    FUN_03abf904(lVar6,uVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
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
                             Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                    ;
                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                    *(undefined8 *)(lVar8 + 0x18) = uVar7;
                    if (lVar6 != 0) {
                      lVar9 = *(long *)(lVar6 + 0x10);
                      lVar11 = *unaff_x27;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                      if (lVar9 != 0) {
                        uVar2 = *(uint *)(lVar6 + 0x18);
                        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                          *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                        }
                        else {
                          FUN_03abf904(lVar6,lVar8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                        }
                        iVar1 = *(int *)(unaff_x21 + 0x1c);
                        lVar8 = *(long *)(unaff_x21 + 0x10);
                        *(long *)(lVar5 + 0x28) = lVar6;
                        *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                        if (lVar8 != 0) {
                          uVar2 = *(uint *)(unaff_x21 + 0x18);
                          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                            *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                          }
                          else {
                            FUN_03abf904();
                          }
                          lVar5 = thunk_FUN_02f45270(*unaff_x19);
                          FUN_06051fbc(lVar5,0);
                          puVar4 = 
                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__1__
                          ;
                          puVar3 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>__ctor__;
                          if (lVar5 != 0) {
                            uVar7 = *unaff_x25;
                            *(undefined4 *)(lVar5 + 0x18) = 0;
                            uVar10 = *(undefined8 *)puVar4;
                            *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar3;
                            *(undefined8 *)(lVar5 + 0x20) = uVar10;
                            lVar6 = thunk_FUN_02f45270(uVar7);
                            FUN_03abf108(lVar6,*(undefined8 *)PTR_DAT_067c95b0);
                            if (lVar6 != 0) {
                              lVar8 = *(long *)(lVar6 + 0x10);
                              uVar7 = *(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u16__;
                              lVar9 = *unaff_x26;
                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                              if (lVar8 != 0) {
                                uVar2 = *(uint *)(lVar6 + 0x18);
                                if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                  *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
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
                                  uVar7 = *(undefined8 *)
                                           Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_set_matchFrameRateRequested__
                                  ;
                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                  *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                  if (lVar6 != 0) {
                                    lVar9 = *(long *)(lVar6 + 0x10);
                                    lVar11 = *unaff_x27;
                                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                    if (lVar9 != 0) {
                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                        *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
                                      }
                                      else {
                                        FUN_03abf904(lVar6,lVar8,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      iVar1 = *(int *)(unaff_x21 + 0x1c);
                                      lVar8 = *(long *)(unaff_x21 + 0x10);
                                      *(long *)(lVar5 + 0x28) = lVar6;
                                      *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                      if (lVar8 != 0) {
                                        uVar2 = *(uint *)(unaff_x21 + 0x18);
                                        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                          *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                          *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                                        }
                                        else {
                                          FUN_03abf904();
                                        }
                                        lVar5 = thunk_FUN_02f45270(*unaff_x19);
                                        FUN_06051fbc(lVar5,0);
                                        if (lVar5 != 0) {
                                          uVar7 = *unaff_x25;
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
                                          FUN_03abf108(lVar6,*(undefined8 *)PTR_DAT_067c95b0);
                                          if (lVar6 != 0) {
                                            lVar8 = *(long *)(lVar6 + 0x10);
                                            uVar7 = *(undefined8 *)
                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__
                                            ;
                                            lVar9 = *unaff_x26;
                                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                            if (lVar8 != 0) {
                                              uVar2 = *(uint *)(lVar6 + 0x18);
                                              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20)
                                                     = uVar7;
                                              }
                                              else {
                                                FUN_03abf904(lVar6,uVar7,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                        0xc0) + 0x70));
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
                                                *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                                *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                                if (lVar6 != 0) {
                                                  lVar9 = *(long *)(lVar6 + 0x10);
                                                  lVar11 = *unaff_x27;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar8;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar6,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar5 = thunk_FUN_02f45270(*unaff_x19);
                                                    FUN_06051fbc(lVar5,0);
                                                    if (lVar5 != 0) {
                                                      uVar7 = *unaff_x25;
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar10;
                                                  *(undefined4 *)(lVar5 + 0x18) = 3;
                                                  lVar6 = thunk_FUN_02f45270(uVar7);
                                                  FUN_03abf108(lVar6,*(undefined8 *)PTR_DAT_067c95b0
                                                              );
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__
                                                  ;
                                                  lVar9 = *unaff_x26;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7
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
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_03abf904();
                                                    }
                                                    lVar5 = thunk_FUN_02f45270(*unaff_x19);
                                                    FUN_06051fbc(lVar5,0);
                                                    if (lVar5 != 0) {
                                                      uVar7 = *unaff_x25;
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
                                                  FUN_03abf108(lVar6,*(undefined8 *)PTR_DAT_067c95b0
                                                              );
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__
                                                  ;
                                                  lVar9 = *unaff_x26;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7
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
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x29;
                                                  *(undefined8 *)(lVar8 + 0x18) = uVar7;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *unaff_x27;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar2 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                        *(long *)(lVar9 + (long)(int)uVar2 * 8 +
                                                                 0x20) = lVar8;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar6,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(unaff_x21 + 0x1c);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  *(int *)(unaff_x21 + 0x1c) = iVar1 + 1;
                                                  if (lVar8 != 0) {
                                                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20)
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


