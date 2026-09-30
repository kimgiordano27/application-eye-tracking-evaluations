/*
FUNCTION_NAME: FUN_055465a4
ENTRY_POINT: 055465a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_8;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_16;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_055465a4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined4 *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  if ((DAT_06bbf77c & 1) == 0) {
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
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupNames_TypeInfo
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
    FUN_02f08768(
                UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Capabilities_TypeInfo
                );
    FUN_02f08768(UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_TypeInfo);
    FUN_02f08768(UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo);
    FUN_02f08768(UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02f08768(Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_TypeInfo);
    FUN_02f08768(Unity_XR_CoreUtils_XROrigin_TrackingOriginMode_TypeInfo);
    DAT_06bbf77c = 1;
  }
  puVar6 = UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo;
  puVar5 = UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo;
  puVar4 = UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_TypeInfo;
  puVar2 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_ComputeNewRenderPoints_00000DB8_PostfixBurstDelegate_TypeInfo
  ;
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupMemberAndOverridesPair_TypeInfo
  ;
  puVar1 = PTR_DAT_067c9fd8;
  if (param_2 != 0) {
    uVar12 = FUN_04fecc40(param_2,*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_InputSourceMode_TypeInfo
                          ,0);
    uVar18 = *(undefined8 *)puVar6;
    *(undefined8 *)(param_1 + 0x90) = uVar12;
    uVar12 = FUN_04fecc40(param_2,uVar18,0);
    uVar18 = *(undefined8 *)puVar2;
    *(undefined8 *)(param_1 + 0x98) = uVar12;
    uVar12 = FUN_04fecc40(param_2,uVar18,0);
    uVar18 = *(undefined8 *)puVar5;
    *(undefined8 *)(param_1 + 0xa0) = uVar12;
    uVar8 = FUN_04fec710(param_2,uVar18,0);
    FUN_055498b8(param_1,uVar8 & 1,1,0);
    bVar7 = FUN_04fec710(param_2,*(undefined8 *)puVar4,0);
    puVar2 = PTR_DAT_067c9338;
    *(byte *)(param_1 + 0xe9) = (bVar7 ^ 0xff) & 1;
    lVar19 = *(long *)(puVar2 + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar12 = FUN_050e4454(lVar19 + 0x20,0);
    plVar13 = (long *)FUN_04feade0(param_2,*(undefined8 *)puVar3,uVar12,0);
    uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    puVar6 = 
    UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
    ;
    puVar5 = UnityEngine_XR_ARSubsystems_XRResultStatus_StatusCode_TypeInfo;
    puVar4 = UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_TypeInfo;
    puVar3 = 
    UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_EvaluateLineEndPoint_00000DB9_PostfixBurstDelegate_TypeInfo
    ;
    puVar1 = 
    UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__98_TypeInfo
    ;
    if (plVar13 != (long *)0x0) {
      if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)(puVar2 + 0x48) + 0x40))
      goto LAB_055473c8;
      puVar14 = (undefined4 *)thunk_FUN_02f453b8(plVar13);
      FUN_0506ee78(uVar12,*puVar14,0);
      FUN_05549ba4(param_1,uVar12,1,0);
      uVar12 = *(undefined8 *)puVar3;
      *(undefined1 *)(param_1 + 0xc0) = 1;
      uVar9 = FUN_04fec85c(param_2,uVar12,0);
      FUN_0554a0f4(param_1,uVar9);
      bVar7 = FUN_04fec710(param_2,*(undefined8 *)puVar1,0);
      uVar12 = *(undefined8 *)puVar4;
      *(byte *)(param_1 + 0xb0) = bVar7 & 1;
      uVar12 = FUN_04fecc40(param_2,uVar12,0);
      uVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
      FUN_058253b4(uVar18,uVar12,0);
      puVar1 = 
      UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate_TypeInfo
      ;
      *(undefined8 *)(param_1 + 0x130) = uVar18;
      bVar7 = FUN_04fec710(param_2,*(undefined8 *)puVar1,0);
      uVar12 = *(undefined8 *)puVar5;
      *(byte *)(param_1 + 0x128) = bVar7 & 1;
      uVar12 = FUN_050e4454(uVar12,0);
      plVar13 = (long *)FUN_04feade0(param_2,*(undefined8 *)
                                              UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_TypeInfo
                                     ,uVar12,0);
      plVar15 = (long *)PTR_DAT_067c9fd8;
      if (plVar13 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x88) = 0;
        plVar15 = (long *)PTR_DAT_067c9fd8;
      }
      else {
        lVar19 = *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo;
        bVar7 = *(byte *)(lVar19 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar7) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar7 * 8 + -8) != lVar19)) {
LAB_055473c8:
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar13);
        }
        *(long **)(param_1 + 0x88) = plVar13;
        if ((*(byte *)(*plVar13 + 0x130) < bVar7) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar7 * 8 + -8) != lVar19))
        goto LAB_055473c8;
      }
      puVar1 = PTR_DAT_067c9070;
      uVar8 = FUN_04fec85c(param_2,*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_ComputeNewRenderPoints_00000DB8_BurstDirectCall_TypeInfo
                           ,0);
      lVar19 = FUN_02f0880c(*(undefined8 *)puVar1,uVar8);
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*plVar15);
      }
      uVar12 = FUN_050656a0(0);
      if ((int)uVar8 < 1) {
        if ((param_5 & 1) == 0) {
          return;
        }
      }
      else {
        uVar20 = 0;
        do {
          plVar15 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                                System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo
                                              );
          FUN_0555c018(plVar15,0);
          uVar9 = (undefined4)uVar20;
          local_64 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_64);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_TypeInfo
                                ,uVar18,0);
          uVar18 = FUN_04fecc40(param_2,uVar18,0);
          if (plVar15 == (long *)0x0) goto LAB_055473b4;
          FUN_0555e5d4(plVar15,uVar18,0);
          local_68 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_68);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystemDescriptor_Cinfo_TypeInfo
                                ,uVar18,0);
          lVar16 = FUN_04fecc40(param_2,uVar18,0);
          uVar18 = *(undefined8 *)(puVar2 + 0x48);
          plVar15[0x17] = lVar16;
          local_6c = uVar9;
          uVar18 = thunk_FUN_02f44ec4(uVar18,&local_6c);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_TypeInfo
                                ,uVar18,0);
          uVar18 = FUN_04fecc40(param_2,uVar18,0);
          FUN_0555ea34(plVar15,uVar18,0);
          local_70 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_70);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_TypeInfo
                                ,uVar18,0);
          lVar16 = *(long *)(puVar2 + 0x90);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(puVar2 + 0xe0));
          }
          uVar17 = FUN_050e4454(lVar16 + 0x20,0);
          plVar13 = (long *)FUN_04feade0(param_2,uVar18,uVar17,0);
          if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)(puVar2 + 0x90))) goto LAB_055473c8;
          uVar18 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>__AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_AsyncProtocolRequest_<InnerRead>d__25>
                             (plVar13,1,*(undefined8 *)PTR_DAT_067cd9a8,
                              *(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_RaycastHitComparer_TypeInfo
                             );
          FUN_0555d820(plVar15,uVar18,0);
          local_74 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_74);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_TypeInfo
                                ,uVar18,0);
          uVar17 = FUN_050e4454(*(long *)(puVar2 + 0x90) + 0x20,0);
          plVar13 = (long *)FUN_04feade0(param_2,uVar18,uVar17,0);
          if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)(puVar2 + 0x90))) goto LAB_055473c8;
          plVar15[0x1c] = (long)plVar13;
          local_78 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_78);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_TypeInfo
                                ,uVar18,0);
          uVar17 = FUN_050e4454(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_BurstDirectCall_TypeInfo
                                ,0);
          plVar13 = (long *)FUN_04feade0(param_2,uVar18,uVar17,0);
          if ((plVar13 != (long *)0x0) &&
             (*plVar13 !=
              *(long *)
               UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_PostfixBurstDelegate_TypeInfo
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar13);
          }
          FUN_0555c418(plVar15,plVar13,0);
          local_7c = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_7c);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_TypeInfo
                                ,uVar18,0);
          uVar17 = FUN_050e4454(*(undefined8 *)
                                 UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_TypeInfo
                                ,0);
          plVar13 = (long *)FUN_04feade0(param_2,uVar18,uVar17,0);
          if (plVar13 == (long *)0x0) goto LAB_055473b4;
          if (*(long *)(*plVar13 + 0x40) !=
              *(long *)(*(long *)
                         UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_BurstDirectCall_TypeInfo
                       + 0x40)) goto LAB_055473c8;
          puVar14 = (undefined4 *)thunk_FUN_02f453b8();
          (**(code **)(*plVar15 + 0x1e8))(plVar15,*puVar14,*(undefined8 *)(*plVar15 + 0x1f0));
          local_80 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_80);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_TypeInfo
                                ,uVar18,0);
          uVar17 = FUN_050e4454(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_<>c_TypeInfo
                                ,0);
          plVar13 = (long *)FUN_04feade0(param_2,uVar18,uVar17,0);
          if (plVar13 == (long *)0x0) goto LAB_055473b4;
          if (*(long *)(*plVar13 + 0x40) !=
              *(long *)(*(long *)
                         UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_GetHandAxisDirection_00000190_PostfixBurstDelegate_TypeInfo
                       + 0x40)) goto LAB_055473c8;
          puVar14 = (undefined4 *)thunk_FUN_02f453b8();
          FUN_0555f488(plVar15,*puVar14,0);
          local_84 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_84);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo
                                ,uVar18,0);
          uVar10 = FUN_04fec710(param_2,uVar18,0);
          FUN_0555cd88(plVar15,uVar10 & 1,0);
          local_88 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_88);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupNames_TypeInfo
                                ,uVar18,0);
          uVar10 = FUN_04fec710(param_2,uVar18,0);
          FUN_0555d32c(plVar15,uVar10 & 1,0);
          local_8c = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_8c);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_EvaluateLineEndPoint_00000DB9_BurstDirectCall_TypeInfo
                                ,uVar18,0);
          uVar18 = FUN_04fec9a8(param_2,uVar18,0);
          FUN_0555e3e8(plVar15,uVar18,0);
          local_90 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_90);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Cinfo_TypeInfo
                                ,uVar18,0);
          uVar18 = FUN_04fec9a8(param_2,uVar18,0);
          FUN_0555e2dc(plVar15,uVar18,0);
          local_94 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_94);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Capabilities_TypeInfo
                                ,uVar18,0);
          uVar18 = FUN_04fecc40(param_2,uVar18,0);
          FUN_0555e4fc(plVar15,uVar18,0);
          local_98 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_98);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000DB7_PostfixBurstDelegate_TypeInfo
                                ,uVar18,0);
          uVar17 = FUN_050e4454(*(long *)(puVar2 + 0x10) + 0x20,0);
          uVar18 = FUN_04feade0(param_2,uVar18,uVar17,0);
          FUN_0555f03c(plVar15,uVar18,0);
          local_9c = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_9c);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        Unity_XR_CoreUtils_XROrigin_TrackingOriginMode_TypeInfo,
                                uVar18,0);
          uVar10 = FUN_04fec710(param_2,uVar18,0);
          FUN_0555f8ec(plVar15,uVar10 & 1,0);
          local_a0 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_a0);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_TypeInfo
                                ,uVar18,0);
          uVar11 = FUN_04fec85c(param_2,uVar18,0);
          FUN_0555fd8c(plVar15,uVar11,0);
          local_a4 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_a4);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_TypeInfo
                                ,uVar18,0);
          uVar17 = FUN_050e4454(*(long *)(puVar2 + 0x10) + 0x20,0);
          uVar18 = FUN_04feade0(param_2,uVar18,uVar17,0);
          FUN_0555e0f0(plVar15,uVar18,0);
          if ((param_5 & 1) != 0) {
            local_64 = uVar9;
            uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_64);
            uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                          UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000DB7_BurstDirectCall_TypeInfo
                                  ,uVar18,0);
            uVar18 = FUN_04fecc40(param_2,uVar18,0);
            if (lVar19 == 0) goto LAB_055473b4;
            if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_055473b8;
            *(undefined8 *)(lVar19 + uVar20 * 8 + 0x20) = uVar18;
          }
          local_64 = uVar9;
          uVar18 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_64);
          uVar18 = FUN_04f70148(uVar12,*(undefined8 *)
                                        UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_FingerConfigDefaults_TypeInfo
                                ,uVar18,0);
          uVar17 = *(undefined8 *)UnityEngine_XR_ARSubsystems_XRResultStatus_StatusCode_TypeInfo;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(puVar2 + 0xe0));
          }
          uVar17 = FUN_050e4454(uVar17,0);
          plVar13 = (long *)FUN_04feade0(param_2,uVar18,uVar17,0);
          if (plVar13 == (long *)0x0) {
            plVar15[0x14] = 0;
          }
          else {
            lVar16 = *(long *)
                      UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo;
            bVar7 = *(byte *)(lVar16 + 0x130);
            if ((*(byte *)(*plVar13 + 0x130) < bVar7) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar7 * 8 + -8) != lVar16))
            goto LAB_055473c8;
            plVar15[0x14] = (long)plVar13;
            if ((*(byte *)(*plVar13 + 0x130) < bVar7) ||
               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar7 * 8 + -8) != lVar16))
            goto LAB_055473c8;
          }
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_055473b4;
          FUN_0557e700(*(long *)(param_1 + 0x40),plVar15,0);
          uVar20 = uVar20 + 1;
        } while (uVar8 != uVar20);
        if ((param_5 & 1) == 0) {
          return;
        }
        if (0 < (int)uVar8) {
          if (lVar19 == 0) goto LAB_055473b4;
          uVar20 = 0;
          do {
            if (*(uint *)(lVar19 + 0x18) <= uVar20) {
LAB_055473b8:
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            if (*(long *)(lVar19 + 0x20 + uVar20 * 8) != 0) {
              if (*(long *)(param_1 + 0x40) == 0) goto LAB_055473b4;
              lVar16 = FUN_0557e298(*(long *)(param_1 + 0x40),uVar20 & 0xffffffff,0);
              if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_055473b8;
              if (lVar16 == 0) goto LAB_055473b4;
              FUN_0555c54c(lVar16,*(undefined8 *)(lVar19 + 0x20 + uVar20 * 8),0);
            }
            uVar20 = uVar20 + 1;
          } while (uVar8 != uVar20);
        }
      }
      FUN_0554a11c(param_1,param_2);
      return;
    }
  }
LAB_055473b4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


