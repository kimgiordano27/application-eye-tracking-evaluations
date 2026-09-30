/*
FUNCTION_NAME: System.Xml.ValueHandle$$ToDouble
ENTRY_POINT: 055465d8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_8;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_13;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow
*/


void System_Xml_ValueHandle__ToDouble(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long lVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  FUN_02f08768(PTR_DAT_067c9fd8);
  FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
  FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_TypeInfo);
  FUN_02f08768(
              UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_GetHandAxisDirection_00000190_PostfixBurstDelegate_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_RaycastHitComparer_TypeInfo
              );
  FUN_02f08768(UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_TypeInfo);
  FUN_02f08768(
              UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_BurstDirectCall_TypeInfo
              );
  FUN_02f08768(UnityEngine_XR_ARSubsystems_XRResultStatus_StatusCode_TypeInfo);
  FUN_02f08768(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo);
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_BurstDirectCall_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_PostfixBurstDelegate_TypeInfo
              );
  FUN_02f08768(PTR_DAT_067c9070);
  FUN_02f08768(PTR_DAT_067cd9a8);
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate_TypeInfo
              );
  FUN_02f08768(UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_TypeInfo);
  FUN_02f08768(UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_TypeInfo);
  FUN_02f08768(
              UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_FingerConfigDefaults_TypeInfo
              );
  FUN_02f08768(UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_TypeInfo);
  FUN_02f08768(UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystemDescriptor_Cinfo_TypeInfo);
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_InputSourceMode_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupMemberAndOverridesPair_TypeInfo
              );
  FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupNames_TypeInfo
              );
  FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_TypeInfo);
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__98_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000DB7_BurstDirectCall_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000DB7_PostfixBurstDelegate_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_ComputeNewRenderPoints_00000DB8_BurstDirectCall_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_ComputeNewRenderPoints_00000DB8_PostfixBurstDelegate_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_EvaluateLineEndPoint_00000DB9_BurstDirectCall_TypeInfo
              );
  FUN_02f08768(
              UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_EvaluateLineEndPoint_00000DB9_PostfixBurstDelegate_TypeInfo
              );
  FUN_02f08768(UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_TypeInfo);
  FUN_02f08768(UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo);
  FUN_02f08768(UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Capabilities_TypeInfo
              );
  FUN_02f08768(UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Cinfo_TypeInfo);
  FUN_02f08768(UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_TypeInfo);
  FUN_02f08768(UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo);
  FUN_02f08768(UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_TypeInfo);
  FUN_02f08768(Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_TypeInfo);
  FUN_02f08768(Unity_XR_CoreUtils_XROrigin_TrackingOriginMode_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x77c) = 1;
  puVar1 = PTR_DAT_067c9fd8;
  if (unaff_x19 != 0) {
    uVar8 = FUN_04fecc40();
    *(undefined8 *)(unaff_x20 + 0x90) = uVar8;
    uVar8 = FUN_04fecc40();
    *(undefined8 *)(unaff_x20 + 0x98) = uVar8;
    uVar8 = FUN_04fecc40();
    *(undefined8 *)(unaff_x20 + 0xa0) = uVar8;
    FUN_04fec710();
    FUN_055498b8();
    bVar4 = FUN_04fec710();
    puVar2 = PTR_DAT_067c9338;
    *(byte *)(unaff_x20 + 0xe9) = (bVar4 ^ 0xff) & 1;
    lVar14 = *(long *)(puVar2 + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050e4454(lVar14 + 0x20,0);
    plVar9 = (long *)FUN_04feade0();
    uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    puVar3 = 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
    ;
    puVar1 = UnityEngine_XR_ARSubsystems_XRResultStatus_StatusCode_TypeInfo;
    if (plVar9 != (long *)0x0) {
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(puVar2 + 0x48) + 0x40))
      goto LAB_055473c8;
      puVar10 = (undefined4 *)thunk_FUN_02f453b8(plVar9);
      FUN_0506ee78(uVar8,*puVar10,0);
      FUN_05549ba4();
      *(undefined1 *)(unaff_x20 + 0xc0) = 1;
      FUN_04fec85c();
      FUN_0554a0f4();
      bVar4 = FUN_04fec710();
      *(byte *)(unaff_x20 + 0xb0) = bVar4 & 1;
      uVar8 = FUN_04fecc40();
      uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
      FUN_058253b4(uVar11,uVar8,0);
      *(undefined8 *)(unaff_x20 + 0x130) = uVar11;
      bVar4 = FUN_04fec710();
      uVar8 = *(undefined8 *)puVar1;
      *(byte *)(unaff_x20 + 0x128) = bVar4 & 1;
      FUN_050e4454(uVar8,0);
      plVar9 = (long *)FUN_04feade0();
      plVar12 = (long *)PTR_DAT_067c9fd8;
      if (plVar9 == (long *)0x0) {
        *(undefined8 *)(unaff_x20 + 0x88) = 0;
        plVar12 = (long *)PTR_DAT_067c9fd8;
      }
      else {
        lVar14 = *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo;
        bVar4 = *(byte *)(lVar14 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) != lVar14)) {
LAB_055473c8:
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar9);
        }
        *(long **)(unaff_x20 + 0x88) = plVar9;
        if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) != lVar14))
        goto LAB_055473c8;
      }
      puVar1 = PTR_DAT_067c9070;
      uVar5 = FUN_04fec85c();
      lVar14 = FUN_02f0880c(*(undefined8 *)puVar1,uVar5);
      if (*(int *)(*plVar12 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*plVar12);
      }
      uVar8 = FUN_050656a0(0);
      if ((int)uVar5 < 1) {
        if ((unaff_x21 & 1) == 0) {
          return;
        }
      }
      else {
        uVar16 = 0;
        do {
          plVar12 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                                System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo
                                              );
          FUN_0555c018(plVar12,0);
          uVar15 = (undefined4)uVar16;
          uStack000000000000004c = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000048 + 4);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_TypeInfo
                       ,uVar11,0);
          uVar11 = FUN_04fecc40();
          if (plVar12 == (long *)0x0) goto LAB_055473b4;
          FUN_0555e5d4(plVar12,uVar11,0);
          uStack0000000000000048 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000048);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystemDescriptor_Cinfo_TypeInfo
                       ,uVar11,0);
          lVar13 = FUN_04fecc40();
          uVar11 = *(undefined8 *)(puVar2 + 0x48);
          plVar12[0x17] = lVar13;
          uStack0000000000000044 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(uVar11,(long)&stack0x00000040 + 4);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_TypeInfo,
                       uVar11,0);
          uVar11 = FUN_04fecc40();
          FUN_0555ea34(plVar12,uVar11,0);
          uStack0000000000000040 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000040);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_TypeInfo
                       ,uVar11,0);
          lVar13 = *(long *)(puVar2 + 0x90);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(puVar2 + 0xe0));
          }
          FUN_050e4454(lVar13 + 0x20,0);
          plVar9 = (long *)FUN_04feade0();
          if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)(puVar2 + 0x90))) goto LAB_055473c8;
          uVar11 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>__AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_AsyncProtocolRequest_<InnerRead>d__25>
                             (plVar9,1,*(undefined8 *)PTR_DAT_067cd9a8,
                              *(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_RaycastHitComparer_TypeInfo
                             );
          FUN_0555d820(plVar12,uVar11,0);
          uStack000000000000003c = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000038 + 4);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_TypeInfo
                       ,uVar11,0);
          FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
          plVar9 = (long *)FUN_04feade0();
          if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)(puVar2 + 0x90))) goto LAB_055473c8;
          plVar12[0x1c] = (long)plVar9;
          uStack0000000000000038 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000038);
          FUN_04f70148(uVar8,*(undefined8 *)
                              Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_TypeInfo,
                       uVar11,0);
          FUN_050e4454(*(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_BurstDirectCall_TypeInfo
                       ,0);
          plVar9 = (long *)FUN_04feade0();
          if ((plVar9 != (long *)0x0) &&
             (*plVar9 !=
              *(long *)
               UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_PostfixBurstDelegate_TypeInfo
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar9);
          }
          FUN_0555c418(plVar12,plVar9,0);
          uStack0000000000000034 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000030 + 4);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_TypeInfo,uVar11,0
                      );
          FUN_050e4454(*(undefined8 *)
                        UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_TypeInfo,0);
          plVar9 = (long *)FUN_04feade0();
          if (plVar9 == (long *)0x0) goto LAB_055473b4;
          if (*(long *)(*plVar9 + 0x40) !=
              *(long *)(*(long *)
                         UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_BurstDirectCall_TypeInfo
                       + 0x40)) goto LAB_055473c8;
          puVar10 = (undefined4 *)thunk_FUN_02f453b8();
          (**(code **)(*plVar12 + 0x1e8))(plVar12,*puVar10,*(undefined8 *)(*plVar12 + 0x1f0));
          uStack0000000000000030 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000030);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_TypeInfo
                       ,uVar11,0);
          FUN_050e4454(*(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_TypeInfo,
                       0);
          plVar9 = (long *)FUN_04feade0();
          if (plVar9 == (long *)0x0) goto LAB_055473b4;
          if (*(long *)(*plVar9 + 0x40) !=
              *(long *)(*(long *)
                         UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_GetHandAxisDirection_00000190_PostfixBurstDelegate_TypeInfo
                       + 0x40)) goto LAB_055473c8;
          puVar10 = (undefined4 *)thunk_FUN_02f453b8();
          FUN_0555f488(plVar12,*puVar10,0);
          uStack000000000000002c = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000028 + 4);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo
                       ,uVar11,0);
          uVar6 = FUN_04fec710();
          FUN_0555cd88(plVar12,uVar6 & 1,0);
          uStack0000000000000028 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000028);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupNames_TypeInfo
                       ,uVar11,0);
          uVar6 = FUN_04fec710();
          FUN_0555d32c(plVar12,uVar6 & 1,0);
          uStack0000000000000024 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000020 + 4);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_EvaluateLineEndPoint_00000DB9_BurstDirectCall_TypeInfo
                       ,uVar11,0);
          uVar11 = FUN_04fec9a8();
          FUN_0555e3e8(plVar12,uVar11,0);
          uStack0000000000000020 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000020);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Cinfo_TypeInfo
                       ,uVar11,0);
          uVar11 = FUN_04fec9a8();
          FUN_0555e2dc(plVar12,uVar11,0);
          uStack000000000000001c = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000018 + 4);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Capabilities_TypeInfo
                       ,uVar11,0);
          uVar11 = FUN_04fecc40();
          FUN_0555e4fc(plVar12,uVar11,0);
          uStack0000000000000018 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000018);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000DB7_PostfixBurstDelegate_TypeInfo
                       ,uVar11,0);
          FUN_050e4454(*(long *)(puVar2 + 0x10) + 0x20,0);
          uVar11 = FUN_04feade0();
          FUN_0555f03c(plVar12,uVar11,0);
          uStack0000000000000014 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000010 + 4);
          FUN_04f70148(uVar8,*(undefined8 *)Unity_XR_CoreUtils_XROrigin_TrackingOriginMode_TypeInfo,
                       uVar11,0);
          uVar6 = FUN_04fec710();
          FUN_0555f8ec(plVar12,uVar6 & 1,0);
          uStack0000000000000010 = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000010);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_TypeInfo
                       ,uVar11,0);
          uVar7 = FUN_04fec85c();
          FUN_0555fd8c(plVar12,uVar7,0);
          in_stack_00000008._4_4_ = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000008 + 4);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_TypeInfo
                       ,uVar11,0);
          FUN_050e4454(*(long *)(puVar2 + 0x10) + 0x20,0);
          uVar11 = FUN_04feade0();
          FUN_0555e0f0(plVar12,uVar11,0);
          if ((unaff_x21 & 1) != 0) {
            uStack000000000000004c = uVar15;
            uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000048 + 4);
            FUN_04f70148(uVar8,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000DB7_BurstDirectCall_TypeInfo
                         ,uVar11,0);
            uVar11 = FUN_04fecc40();
            if (lVar14 == 0) goto LAB_055473b4;
            if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_055473b8;
            *(undefined8 *)(lVar14 + uVar16 * 8 + 0x20) = uVar11;
          }
          uStack000000000000004c = uVar15;
          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000048 + 4);
          FUN_04f70148(uVar8,*(undefined8 *)
                              UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_FingerConfigDefaults_TypeInfo
                       ,uVar11,0);
          uVar11 = *(undefined8 *)UnityEngine_XR_ARSubsystems_XRResultStatus_StatusCode_TypeInfo;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(puVar2 + 0xe0));
          }
          FUN_050e4454(uVar11,0);
          plVar9 = (long *)FUN_04feade0();
          if (plVar9 == (long *)0x0) {
            plVar12[0x14] = 0;
          }
          else {
            lVar13 = *(long *)
                      UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo;
            bVar4 = *(byte *)(lVar13 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) != lVar13))
            goto LAB_055473c8;
            plVar12[0x14] = (long)plVar9;
            if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) != lVar13))
            goto LAB_055473c8;
          }
          if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_055473b4;
          FUN_0557e700(*(long *)(unaff_x20 + 0x40),plVar12,0);
          uVar16 = uVar16 + 1;
        } while (uVar5 != uVar16);
        if ((unaff_x21 & 1) == 0) {
          return;
        }
        if (0 < (int)uVar5) {
          if (lVar14 == 0) goto LAB_055473b4;
          uVar16 = 0;
          do {
            if (*(uint *)(lVar14 + 0x18) <= uVar16) {
LAB_055473b8:
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            if (*(long *)(lVar14 + 0x20 + uVar16 * 8) != 0) {
              if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_055473b4;
              lVar13 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),uVar16 & 0xffffffff,0);
              if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_055473b8;
              if (lVar13 == 0) goto LAB_055473b4;
              FUN_0555c54c(lVar13,*(undefined8 *)(lVar14 + 0x20 + uVar16 * 8),0);
            }
            uVar16 = uVar16 + 1;
          } while (uVar5 != uVar16);
        }
      }
      FUN_0554a11c();
      return;
    }
  }
LAB_055473b4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


