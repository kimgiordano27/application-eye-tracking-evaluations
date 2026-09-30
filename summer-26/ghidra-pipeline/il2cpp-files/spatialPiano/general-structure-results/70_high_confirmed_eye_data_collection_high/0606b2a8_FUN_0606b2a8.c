/*
FUNCTION_NAME: FUN_0606b2a8
ENTRY_POINT: 0606b2a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;negative_generic_rendering_without_foveation_or_eye_source;negative_generic_render_terms_without_foveation;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_0606b2a8(undefined8 param_1)

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
  
  puVar3 = Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_4__;
  if ((DAT_06bc5e2c & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__);
    FUN_02f08768(Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__);
    FUN_02f08768(Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_4__);
    FUN_02f08768(Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_1__);
    FUN_02f08768(Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_2__);
    FUN_02f08768(Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_3__);
    FUN_02f08768(Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_4__);
    FUN_02f08768(PTR_DAT_067c95a0);
    FUN_02f08768(Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_5__);
    FUN_02f08768(Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_6__);
    FUN_02f08768(Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__);
    FUN_02f08768(PTR_DAT_067c95b0);
    FUN_02f08768(Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_0__);
    FUN_02f08768(Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_1__);
    FUN_02f08768(
                Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                );
    FUN_02f08768(PTR_DAT_067c95c8);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__);
    FUN_02f08768(PTR_DAT_067cc618);
    FUN_02f08768(
                Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanStencilMode__
                );
    FUN_02f08768(Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                );
    FUN_02f08768(PTR_DAT_067de050);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__1__
                );
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                );
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__2__
                );
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u16__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_AddListener__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_AddListener__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<short>__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__3__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_11__
                );
    FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_3__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u8__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
                );
    FUN_02f08768(Method_Newtonsoft_Json_Bson_BsonReader_ReadCodeWScope__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_RemoveListener__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_6__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_0__
                );
    FUN_02f08768(Method_System_Xml_Linq_XContainer_ContentReader_ReadContentFrom__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateAlbedoPreset>b__6_4__
                );
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__);
    FUN_02f08768(Method_System_Nullable<byte>__ctor__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f32__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f64__);
    FUN_02f08768(System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo);
    FUN_02f08768(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<int>__);
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>__ctor__);
    FUN_02f08768(UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateMaterialValidationMode>b__2_4__
                );
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__);
    FUN_02f08768(Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__0__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__1__
                );
    FUN_02f08768(PTR_DAT_067cbf00);
    FUN_02f08768(
                Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__28_0__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__1__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
                );
    FUN_02f08768(Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpestri_emulation<short>__);
    FUN_02f08768(
                Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_set_matchFrameRateRequested__
                );
    FUN_02f08768(Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                );
    DAT_06bc5e2c = 1;
  }
  lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_06051fcc(lVar11,0);
  puVar10 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateMaterialValidationMode>b__2_4__
  ;
  puVar7 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__1__
  ;
  puVar5 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_6__;
  puVar4 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_1__;
  puVar3 = PTR_DAT_067cbf00;
  if (lVar11 != 0) {
    uVar16 = *(undefined8 *)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__3__
    ;
    uVar21 = *(undefined8 *)
              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateMaterialValidationMode>b__2_4__
    ;
    uVar12 = *(undefined8 *)
              Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_0__;
    *(undefined8 *)(lVar11 + 0x10) =
         *(undefined8 *)
          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__2__
    ;
    *(undefined8 *)(lVar11 + 0x18) = uVar16;
    uVar16 = *(undefined8 *)puVar7;
    uVar17 = *(undefined8 *)puVar3;
    *(undefined8 *)(lVar11 + 0x30) = uVar21;
    *(undefined8 *)(lVar11 + 0x38) = uVar16;
    *(undefined8 *)(lVar11 + 0x40) = uVar17;
    lVar13 = thunk_FUN_02f45270(uVar12);
    FUN_03abf108(lVar13,*(undefined8 *)puVar5);
    lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
    FUN_06051fc4(lVar14,0);
    puVar3 = 
    Method_UnityEngine_UIElements_VisualTreeStyleUpdaterTraversal_<>c_<ProcessMatchedRules>b__28_0__
    ;
    if (lVar14 != 0) {
      *(undefined4 *)(lVar14 + 0x10) = 0x164;
      *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)puVar3;
      puVar3 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_2__;
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
          lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
          FUN_06051fc4(lVar14,0);
          puVar4 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Clear__;
          if (lVar14 != 0) {
            iVar1 = *(int *)(lVar13 + 0x1c);
            *(undefined4 *)(lVar14 + 0x10) = 0x264;
            lVar18 = *(long *)puVar3;
            uVar12 = *(undefined8 *)puVar4;
            lVar15 = *(long *)(lVar13 + 0x10);
            *(int *)(lVar13 + 0x1c) = iVar1 + 1;
            *(undefined8 *)(lVar14 + 0x18) = uVar12;
            puVar4 = Method_UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_<_ctor>b__0_1__
            ;
            puVar3 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_5__;
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
              uVar12 = *(undefined8 *)puVar4;
              *(long *)(lVar11 + 0x20) = lVar13;
              lVar13 = thunk_FUN_02f45270(uVar12);
              FUN_03abf108(lVar13,*(undefined8 *)puVar3);
              puVar5 = Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__;
              lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                           Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                         );
              FUN_06051fbc(lVar14,0);
              puVar4 = PTR_DAT_067c95c8;
              puVar3 = PTR_DAT_067c95b0;
              if (lVar14 != 0) {
                uVar16 = *(undefined8 *)
                          Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<int>__
                ;
                uVar12 = *(undefined8 *)PTR_DAT_067c95c8;
                *(undefined8 *)(lVar14 + 0x10) =
                     *(undefined8 *)
                      Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_RemoveListener__;
                *(undefined8 *)(lVar14 + 0x20) = uVar16;
                *(undefined4 *)(lVar14 + 0x18) = 2;
                lVar15 = thunk_FUN_02f45270(uVar12);
                FUN_03abf108(lVar15,*(undefined8 *)puVar3);
                puVar3 = PTR_DAT_067c95a0;
                if (lVar15 != 0) {
                  lVar18 = *(long *)(lVar15 + 0x10);
                  uVar12 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u8__;
                  lVar19 = *(long *)PTR_DAT_067c95a0;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
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
                    puVar7 = 
                    Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                    ;
                    *(long *)(lVar14 + 0x30) = lVar15;
                    lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
                    FUN_03abf108(lVar15,*(undefined8 *)
                                         Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                );
                    lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                 Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                               );
                    FUN_06051fb4(lVar18,0);
                    if (lVar18 != 0) {
                      uVar12 = *(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_3__
                      ;
                      *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)puVar10;
                      *(undefined8 *)(lVar18 + 0x18) = uVar12;
                      puVar7 = 
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
                          puVar8 = 
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
                              lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                              FUN_06051fbc(lVar14,0);
                              if (lVar14 != 0) {
                                uVar12 = *(undefined8 *)puVar4;
                                uVar16 = *(undefined8 *)
                                          Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__1__
                                ;
                                *(undefined8 *)(lVar14 + 0x10) =
                                     *(undefined8 *)
                                      Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_AddListener__
                                ;
                                *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                *(undefined4 *)(lVar14 + 0x18) = 2;
                                lVar15 = thunk_FUN_02f45270(uVar12);
                                FUN_03abf108(lVar15,*(undefined8 *)PTR_DAT_067c95b0);
                                if (lVar15 != 0) {
                                  lVar18 = *(long *)(lVar15 + 0x10);
                                  uVar12 = *(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f64__;
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
                                    FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                );
                                    lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                    FUN_06051fb4(lVar18,0);
                                    if (lVar18 != 0) {
                                      uVar12 = *(undefined8 *)
                                                Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_set_requestedHumanStencilMode__
                                      ;
                                      *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)puVar10;
                                      *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                      if (lVar15 != 0) {
                                        lVar19 = *(long *)(lVar15 + 0x10);
                                        lVar20 = *(long *)puVar7;
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
                                          lVar19 = *(long *)puVar8;
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
                                            lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5);
                                            FUN_06051fbc(lVar14,0);
                                            puVar5 = 
                                            System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo
                                            ;
                                            if (lVar14 != 0) {
                                              uVar12 = *(undefined8 *)puVar4;
                                              uVar16 = *(undefined8 *)
                                                                                                                
                                                  System_Linq_Expressions_Interpreter_AndInstruction_AndUInt64_TypeInfo
                                              ;
                                              *(undefined8 *)(lVar14 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_Events_UnityEvent<SelectEnterEventArgs>_Invoke__
                                              ;
                                              *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                              *(undefined4 *)(lVar14 + 0x18) = 1;
                                              lVar15 = thunk_FUN_02f45270(uVar12);
                                              FUN_03abf108(lVar15,*(undefined8 *)PTR_DAT_067c95b0);
                                              if (lVar15 != 0) {
                                                lVar18 = *(long *)(lVar15 + 0x10);
                                                uVar12 = *(undefined8 *)puVar5;
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
                                                  puVar5 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_0__
                                                  ;
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_<FilterOutTriggerColliders>b__329_0__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar7;
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
                                                  lVar19 = *(long *)puVar8;
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
                                                  puVar9 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_6__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_Events_UnityEvent<Quaternion>__ctor__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar14 + 0x18) = 0;
                                                    uVar16 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                    lVar15 = thunk_FUN_02f45270(uVar12);
                                                    FUN_03abf108(lVar15,*(undefined8 *)
                                                                         PTR_DAT_067c95b0);
                                                    if (lVar15 != 0) {
                                                      lVar18 = *(long *)(lVar15 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmq_f32__
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
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar18 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                    if (lVar15 != 0) {
                                                      lVar19 = *(long *)(lVar15 + 0x10);
                                                      lVar20 = *(long *)puVar7;
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
                                                                        (*(long *)(*(long *)(lVar20 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar18 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)puVar8;
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
                                                  puVar6 = 
                                                  Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable<JArray>_GetAwaiter__
                                                  ;
                                                  puVar5 = PTR_DAT_067cc618;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar14 + 0x18) = 0;
                                                    uVar16 = *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                    lVar15 = thunk_FUN_02f45270(uVar12);
                                                    FUN_03abf108(lVar15,*(undefined8 *)
                                                                         PTR_DAT_067c95b0);
                                                    if (lVar15 != 0) {
                                                      lVar18 = *(long *)(lVar15 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmv_f32__
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
                                                  puVar5 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__238_1__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar7;
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
                                                  lVar19 = *(long *)puVar8;
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
                                                  puVar5 = 
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    uVar16 = *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_<>c_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)
                                                        Method_System_Nullable<byte>__ctor__;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                  *(undefined4 *)(lVar14 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                       PTR_DAT_067c95b0);
                                                  if (lVar15 != 0) {
                                                    lVar18 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar5;
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
                                                  puVar5 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar7;
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
                                                  lVar19 = *(long *)puVar8;
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
                                                  puVar9 = 
                                                  Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthCpuImage__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_Events_UnityEvent<SelectExitEventArgs>__ctor__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar14 + 0x18) = 0;
                                                    uVar16 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                    lVar15 = thunk_FUN_02f45270(uVar12);
                                                    FUN_03abf108(lVar15,*(undefined8 *)
                                                                         PTR_DAT_067c95b0);
                                                    if (lVar15 != 0) {
                                                      lVar18 = *(long *)(lVar15 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnm_f32__
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
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    *(undefined8 *)(lVar18 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                    if (lVar15 != 0) {
                                                      lVar19 = *(long *)(lVar15 + 0x10);
                                                      lVar20 = *(long *)puVar7;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      puVar5 = 
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_0__
                                                  ;
                                                  if (lVar19 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      *(long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20
                                                               ) = lVar18;
                                                    }
                                                    else {
                                                      FUN_03abf904(lVar15,lVar18,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar20 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  iVar1 = *(int *)(lVar13 + 0x1c);
                                                  lVar18 = *(long *)(lVar13 + 0x10);
                                                  lVar19 = *(long *)puVar8;
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
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  puVar9 = 
                                                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateAlbedoPreset>b__6_4__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_Events_UnityEvent<OVRHand_MicrogestureType>_AddListener__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar14 + 0x18) = 0;
                                                    uVar16 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                    lVar15 = thunk_FUN_02f45270(uVar12);
                                                    FUN_03abf108(lVar15,*(undefined8 *)
                                                                         PTR_DAT_067c95b0);
                                                    if (lVar15 != 0) {
                                                      lVar18 = *(long *)(lVar15 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminnmvq_f32__
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
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_11__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar7;
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
                                                  lVar19 = *(long *)puVar8;
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
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  puVar9 = 
                                                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__0__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_Events_UnityEvent<Vector4>_Invoke__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar14 + 0x18) = 0;
                                                    uVar16 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                    lVar15 = thunk_FUN_02f45270(uVar12);
                                                    FUN_03abf108(lVar15,*(undefined8 *)
                                                                         PTR_DAT_067c95b0);
                                                    if (lVar15 != 0) {
                                                      lVar18 = *(long *)(lVar15 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__;
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
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar7;
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
                                                  lVar19 = *(long *)puVar8;
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
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  puVar9 = 
                                                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__1__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>__ctor__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar14 + 0x18) = 0;
                                                    uVar16 = *(undefined8 *)puVar9;
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)puVar6;
                                                    *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                    lVar15 = thunk_FUN_02f45270(uVar12);
                                                    FUN_03abf108(lVar15,*(undefined8 *)
                                                                         PTR_DAT_067c95b0);
                                                    if (lVar15 != 0) {
                                                      lVar18 = *(long *)(lVar15 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_u16__;
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
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider_set_matchFrameRateRequested__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar7;
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
                                                  lVar19 = *(long *)puVar8;
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
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
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
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                       PTR_DAT_067c95b0);
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
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_ARSubsystems_XRAnchorSubsystem_Provider_TryEraseAnchorAsync__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar7;
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
                                                  lVar19 = *(long *)puVar8;
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
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    uVar16 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<sbyte>__
                                                  ;
                                                  *(undefined8 *)(lVar14 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_067de050;
                                                  *(undefined8 *)(lVar14 + 0x20) = uVar16;
                                                  *(undefined4 *)(lVar14 + 0x18) = 3;
                                                  lVar15 = thunk_FUN_02f45270(uVar12);
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                       PTR_DAT_067c95b0);
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
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar7;
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
                                                  lVar19 = *(long *)puVar8;
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
                                                  lVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_06051fbc(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    uVar12 = *(undefined8 *)puVar4;
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
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                       PTR_DAT_067c95b0);
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
                                                  puVar3 = 
                                                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                                                  ;
                                                  *(long *)(lVar14 + 0x30) = lVar15;
                                                  lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03abf108(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                                                  );
                                                  lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                                  );
                                                  FUN_06051fb4(lVar18,0);
                                                  if (lVar18 != 0) {
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                                                  ;
                                                  *(undefined8 *)(lVar18 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  *(undefined8 *)(lVar18 + 0x18) = uVar12;
                                                  if (lVar15 != 0) {
                                                    lVar19 = *(long *)(lVar15 + 0x10);
                                                    lVar20 = *(long *)puVar7;
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
                                                  lVar19 = *(long *)puVar8;
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
                                                  FUN_06051d9c(param_1,lVar11,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


