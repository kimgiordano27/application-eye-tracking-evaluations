/*
FUNCTION_NAME: FUN_0623a324
ENTRY_POINT: 0623a324
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0623a324(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_ac;
  uint local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  
  puVar1 = PTR_DAT_0675eb20;
  if ((DAT_06b8b743 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675eb20);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandJointIDUtility_GetBackJointID__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandJointIDUtility_GetFrontJointID__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandMeshController_OnTrackingChanged__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_GetHandAxisDirection__
                );
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_GetRawJointArray__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_SetAngularVelocity__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_SetCorrespondingHand__
                );
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_SetLinearVelocity__)
    ;
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_SetPose__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_SetRootPose__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses__
                );
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRHandSkeletonPokeDisplacer_<BindToPokeInteractor>b__26_0__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRHandSkeletonPokeDisplacer_OnPokeDataUpdated__
                );
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandSubsystem_RegisterProcessor<HandProcessor>__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Hands_XRHandSubsystem_RegisterProcessor<HandsOneEuroFilterPostProcessor>__
                );
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandSubsystem_UnregisterProcessor<HandProcessor>__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Hands_XRHandSubsystem_UnregisterProcessor<HandsOneEuroFilterPostProcessor>__
                );
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandSubsystem_CompareProcessors__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandSubsystem_SetLeftHand__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandSubsystem_SetRightHand__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_GetFingerShapeConfiguration__
                );
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandTrackingEvents_OnTrackingAcquired__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandTrackingEvents_OnTrackingLost__);
    FUN_02d6084c(Method_UnityEngine_XR_Hands_XRHandTrackingEvents_OnUpdatedHands__);
    FUN_02d6084c(Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRHoverFilterDelegate__ctor__);
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Register__);
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystem_OnStart__);
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystem_set_imageLibrary__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnControllerTrackingAcquired__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnControllerTrackingAcquired__
                );
    DAT_06b8b743 = 1;
  }
  puVar10 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnControllerTrackingAcquired__
  ;
  puVar9 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_OnControllerTrackingAcquired__
  ;
  puVar8 = Method_UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystem_OnStart__;
  puVar7 = Method_UnityEngine_XR_Hands_XRHandTrackingEvents_OnTrackingLost__;
  puVar6 = Method_UnityEngine_XR_Hands_XRHandTrackingEvents_OnTrackingAcquired__;
  puVar5 = Method_UnityEngine_XR_Hands_XRHandSubsystem_SetRightHand__;
  puVar4 = Method_UnityEngine_XR_Hands_XRHandSubsystem_SetLeftHand__;
  puVar3 = Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_SetAngularVelocity__;
  puVar2 = Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_GetRawJointArray__;
  local_a4 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_90 = 0;
  lVar13 = *(long *)(param_1 + 0x108);
  uVar12 = 0x43800000;
  if (lVar13 != 0) {
    uVar12 = 0x43be0000;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060be22c(0x41a00000,0x42200000,0x43480000,uVar12,*(undefined8 *)puVar5,0);
  uVar11 = FUN_05023548(param_1 + 0x84,0);
  uVar11 = FUN_04e83184(*(undefined8 *)puVar3,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x42700000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0x88,0);
  uVar11 = FUN_04e83184(*(undefined8 *)puVar9,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x42900000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xd8,0);
  uVar11 = FUN_04e83184(*(undefined8 *)puVar8,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x42a80000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xd4,0);
  uVar11 = FUN_04e83184(*(undefined8 *)puVar4,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x42c00000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0x8c,0);
  uVar11 = FUN_04e83184(*(undefined8 *)puVar7,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x42d80000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0x90,0);
  uVar11 = FUN_04e83184(*(undefined8 *)puVar6,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x42f00000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xa0,0);
  uVar11 = FUN_04e83184(*(undefined8 *)puVar10,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x43040000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xa4,0);
  uVar11 = FUN_04e83184(*(undefined8 *)puVar2,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x43100000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xa8,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystem_set_imageLibrary__
                        ,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x431c0000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0x98,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_Hands_XRHandTrackingEvents_OnUpdatedHands__,uVar11,0)
  ;
  FUN_060bdd4c(0x41f00000,0x43280000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0x9c,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Register__
                        ,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x43340000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 200,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_Hands_XRHandSubsystem_CompareProcessors__,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x43400000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xcc,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_SetCorrespondingHand__
                        ,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x434c0000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xc4,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRHandSkeletonPokeDisplacer_OnPokeDataUpdated__
                        ,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x43580000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xd0,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_Hands_XRHandMeshController_OnTrackingChanged__,uVar11
                        ,0);
  FUN_060bdd4c(0x41f00000,0x43640000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xb4,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_SetLinearVelocity__
                        ,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x43700000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xb8,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses__
                        ,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x437c0000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xbc,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRHandSkeletonPokeDisplacer_<BindToPokeInteractor>b__26_0__
                        ,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x43840000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xc0,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment__
                        ,uVar11,0);
  FUN_060bdd4c(0x41f00000,0x438a0000,0x447a0000,0x42c80000,uVar11,0);
  uVar11 = FUN_05023548(param_1 + 0xdc,0);
  uVar11 = FUN_04e83184(*(undefined8 *)
                         Method_UnityEngine_XR_Hands_XRHandJointIDUtility_GetFrontJointID__,uVar11,0
                       );
  FUN_060bdd4c(0x41f00000,0x43900000,0x447a0000,0x42c80000,uVar11,0);
  puVar10 = Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRHoverFilterDelegate__ctor__;
  puVar9 = 
  Method_UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_GetFingerShapeConfiguration__
  ;
  puVar8 = 
  Method_UnityEngine_XR_Hands_XRHandSubsystem_UnregisterProcessor<HandsOneEuroFilterPostProcessor>__
  ;
  puVar7 = Method_UnityEngine_XR_Hands_XRHandSubsystem_UnregisterProcessor<HandProcessor>__;
  puVar6 = 
  Method_UnityEngine_XR_Hands_XRHandSubsystem_RegisterProcessor<HandsOneEuroFilterPostProcessor>__;
  puVar5 = Method_UnityEngine_XR_Hands_XRHandSubsystem_RegisterProcessor<HandProcessor>__;
  puVar4 = Method_UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose__;
  puVar3 = Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_SetRootPose__;
  puVar2 = Method_UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_GetHandAxisDirection__;
  puVar1 = Method_UnityEngine_XR_Hands_XRHandJointIDUtility_GetBackJointID__;
  if (lVar13 != 0) {
    if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0624dc34(&local_d0,*(long *)(param_1 + 0x108),0);
    uStack_98 = uStack_c8;
    local_a0 = local_d0;
    uStack_90 = uStack_c0;
    uStack_7c = uStack_ac;
    uVar11 = FUN_050048bc(&local_a0,0);
    uVar11 = FUN_04e83184(*(undefined8 *)puVar9,uVar11,0);
    if (*(int *)(*(long *)PTR_DAT_0675eb20 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eb20);
    }
    FUN_060bdd4c(0x41f00000,0x439c0000,0x447a0000,0x42c80000,uVar11,0);
    uVar11 = FUN_05023548((ulong)&local_a0 | 8,0);
    uVar11 = FUN_04e83184(*(undefined8 *)puVar8,uVar11,0);
    FUN_060bdd4c(0x41f00000,0x43a20000,0x447a0000,0x42c80000,uVar11,0);
    uVar11 = FUN_05023548((ulong)&local_a0 | 0xc,0);
    uVar11 = FUN_04e83184(*(undefined8 *)puVar3,uVar11,0);
    FUN_060bdd4c(0x41f00000,0x43a80000,0x447a0000,0x42c80000,uVar11,0);
    uVar11 = FUN_05023548(&uStack_90,0);
    uVar11 = FUN_04e83184(*(undefined8 *)puVar10,uVar11,0);
    FUN_060bdd4c(0x41f00000,0x43ae0000,0x447a0000,0x42c80000,uVar11,0);
    uVar11 = FUN_05023548((long)&uStack_90 + 4,0);
    uVar11 = FUN_04e83184(*(undefined8 *)puVar5,uVar11,0);
    FUN_060bdd4c(0x41f00000,0x43b40000,0x447a0000,0x42c80000,uVar11,0);
    uVar11 = FUN_05023548(&local_84,0);
    uVar11 = FUN_04e83184(*(undefined8 *)puVar1,uVar11,0);
    FUN_060bdd4c(0x41f00000,0x43ba0000,0x447a0000,0x42c80000,uVar11,0);
    uVar11 = FUN_05023548(&uStack_80,0);
    uVar11 = FUN_04e83184(*(undefined8 *)puVar6,uVar11,0);
    FUN_060bdd4c(0x41f00000,0x43c00000,0x447a0000,0x42c80000,uVar11,0);
    uVar11 = FUN_05023548(&uStack_88,0);
    uVar11 = FUN_04e83184(*(undefined8 *)puVar2,uVar11,0);
    FUN_060bdd4c(0x41f00000,0x43c60000,0x447a0000,0x42c80000,uVar11,0);
    uVar11 = FUN_05023548((long)&uStack_7c + 4,0);
    uVar11 = FUN_04e83184(*(undefined8 *)puVar4,uVar11,0);
    FUN_060bdd4c(0x41f00000,0x43cc0000,0x447a0000,0x42c80000,uVar11,0);
    uVar11 = FUN_05023548(&uStack_7c,0);
    uVar11 = FUN_04e83184(*(undefined8 *)puVar7,uVar11,0);
    FUN_060bdd4c(0x41f00000,0x43d20000,0x447a0000,0x42c80000,uVar11,0);
    local_a4 = local_a0._4_4_ / 3;
    uVar11 = FUN_05023548(&local_a4,0);
    uVar11 = FUN_04e83184(*(undefined8 *)
                           Method_UnityEngine_XR_Hands_Processing_XRHandProcessingUtility_SetPose__,
                          uVar11,0);
    FUN_060bdd4c(0x41f00000,0x43d80000,0x447a0000,0x42c80000,uVar11,0);
  }
  return;
}


