/*
FUNCTION_NAME: FUN_035676b0
ENTRY_POINT: 035676b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_035676b0(void)

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
  undefined8 *puVar12;
  
  puVar10 = OVRVirtualKeyboard_<>c_TypeInfo;
  puVar9 = OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_TypeInfo;
  puVar8 = OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_TypeInfo;
  puVar7 = OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo;
  puVar6 = OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_TypeInfo;
  puVar5 = OVRTrackedKeyboard_TrackedKeyboardState_TypeInfo;
  puVar4 = OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__92_TypeInfo;
  puVar3 = OVRTrackedKeyboard_<UpdateKeyboardPose>d__95_TypeInfo;
  puVar2 = OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_32_0_TypeInfo;
  if ((DAT_0412dfa2 & 1) == 0) {
    FUN_01ab69ac(OVRVirtualKeyboard_<InitializeGlTFModel>d__89_TypeInfo);
    FUN_01ab69ac(OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
    FUN_01ab69ac(OVRVirtualKeyboard_ControllerInputSource_TypeInfo);
    FUN_01ab69ac(OVRVirtualKeyboard_HandInputSource_TypeInfo);
    FUN_01ab69ac(OVRTrackedKeyboard_<UpdateKeyboardPose>d__95_TypeInfo);
    FUN_01ab69ac(OVRTrackedKeyboard_TrackedKeyboardState_TypeInfo);
    FUN_01ab69ac(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    FUN_01ab69ac(OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_TypeInfo);
    FUN_01ab69ac(OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_TypeInfo);
    FUN_01ab69ac(OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__92_TypeInfo);
    FUN_01ab69ac(OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_TypeInfo);
    FUN_01ab69ac(OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_TypeInfo);
    FUN_01ab69ac(OVRVirtualKeyboard_<>c_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_32_0_TypeInfo);
    DAT_0412dfa2 = 1;
  }
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_021c8560(uVar11,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            (*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
  FUN_021c8560(uVar11,*(undefined8 *)puVar5);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_021c8560(uVar11,*(undefined8 *)puVar7);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_021c8560(uVar11,*(undefined8 *)puVar7);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_021c8560(uVar11,*(undefined8 *)puVar7);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
  FUN_021c8610(uVar11,*(undefined8 *)puVar9);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)OVRVirtualKeyboard_HandInputSource_TypeInfo);
  FUN_021c84b0(uVar11,*(undefined8 *)OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
  puVar3 = OVRVirtualKeyboard_ControllerInputSource_TypeInfo;
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)OVRVirtualKeyboard_ControllerInputSource_TypeInfo);
  puVar2 = OVRVirtualKeyboard_<InitializeGlTFModel>d__89_TypeInfo;
  FUN_021c84b0(uVar11,*(undefined8 *)OVRVirtualKeyboard_<InitializeGlTFModel>d__89_TypeInfo);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar10);
  FUN_035575f8();
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar10);
  FUN_035575f8();
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
  FUN_021c8560(uVar11,*(undefined8 *)puVar7);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
  FUN_021c84b0(uVar11,*(undefined8 *)puVar2);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58);
  *puVar12 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar12,uVar11);
  return;
}


