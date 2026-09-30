/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 06788778
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 111
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long *unaff_x19;
  
  *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x24) = param_2;
  uVar1 = FUN_068cca24(*(undefined8 *)
                        UnityEngine_Events_UnityAction<List<OVRSpatialAnchor>,_OVRSpatialAnchor_OperationResult>_TypeInfo
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x28) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)UnityEngine_Events_UnityAction<Scene,_LoadSceneMode>_TypeInfo,
                       0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x2c) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)
                        UnityEngine_Events_UnityAction<AtlasAllocator_AtlasNode>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x30) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)
                        UnityEngine_Events_UnityAction<OVRHand_MicrogestureType>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x34) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)
                        UnityEngine_Events_UnityAction<List<OVRSpatialAnchor>,_OVRAnchor_ShareResult>_TypeInfo
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x38) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)
                        UnityEngine_Events_UnityAction<ProbeReferenceVolume_BlendingCellInfo>_TypeInfo
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x3c) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)UnityEngine_Events_UnityAction<string>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x40) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)
                        UnityEngine_Events_UnityAction<ProbeBrickIndex_BrickMeta>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x44) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)
                        UnityEngine_Events_UnityAction<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>_TypeInfo
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x48) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)UnityEngine_Events_UnityAction<Scene,_Scene>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x4c) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)UnityEngine_Events_UnityAction<float>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x50) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)UnityEngine_Events_UnityEvent<Guid>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x54) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)
                        UnityEngine_Events_UnityAction<ProbeBrickIndex_VoxelMeta>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x58) = uVar1;
  uVar1 = FUN_068cca24(*(undefined8 *)
                        UnityEngine_Events_UnityAction<CustomMatchmaking_RoomOperationResult>_TypeInfo
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x5c) = uVar1;
  return;
}


