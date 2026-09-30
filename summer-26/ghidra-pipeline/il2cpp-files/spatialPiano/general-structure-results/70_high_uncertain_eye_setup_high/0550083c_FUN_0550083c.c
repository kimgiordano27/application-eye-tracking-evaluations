/*
FUNCTION_NAME: FUN_0550083c
ENTRY_POINT: 0550083c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_12
*/


void FUN_0550083c(long param_1)

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
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar9 = OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo;
  puVar8 = OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo;
  puVar7 = OVRPlugin_GUID_TypeInfo;
  puVar6 = OVRPlugin_EyeTextureFormat_TypeInfo;
  puVar5 = OVRPlugin_EnvironmentRaycastStatus_TypeInfo;
  puVar4 = OVRPlugin_BodyTrackingFidelity2_TypeInfo;
  puVar3 = OVRPassthroughColorLut_ColorChannels_TypeInfo;
  puVar2 = OVROverlayCanvas_<>c__DisplayClass70_0_TypeInfo;
  puVar1 = OVRObjectPool_IPoolObject_TypeInfo;
  if ((DAT_06bbf54e & 1) == 0) {
    FUN_02f08768(OVROverlayCanvas_<>c__DisplayClass70_0_TypeInfo);
    FUN_02f08768(OVRPassthroughColorLut_ColorChannels_TypeInfo);
    FUN_02f08768(UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass13_0_TypeInfo)
    ;
    FUN_02f08768(OVRObjectPool_IPoolObject_TypeInfo);
    FUN_02f08768(OVRPlugin_EyeTextureFormat_TypeInfo);
    FUN_02f08768(OVRPlugin_EnvironmentRaycastStatus_TypeInfo);
    FUN_02f08768(OVRPlugin_BodyTrackingFidelity2_TypeInfo);
    FUN_02f08768(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    FUN_02f08768(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    FUN_02f08768(OVRPlugin_GUID_TypeInfo);
    DAT_06bbf54e = 1;
  }
  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_05513420(uVar10,0);
  uVar11 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  uVar10 = thunk_FUN_02f45270(uVar11);
  FUN_03abf108(uVar10,*(undefined8 *)puVar6);
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  uVar10 = thunk_FUN_02f45270(uVar11);
  FUN_037838a8(uVar10,*(undefined8 *)puVar2);
  uVar11 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  lVar12 = thunk_FUN_02f45270(uVar11);
  FUN_05116b38(lVar12,0);
  uVar10 = *(undefined8 *)puVar7;
  *(undefined8 *)(lVar12 + 0x20) = 0;
  *(undefined4 *)(lVar12 + 0x18) = 3;
  *(long *)(param_1 + 0x30) = lVar12;
  uVar10 = thunk_FUN_02f45270(uVar10);
  FUN_042e7604(uVar10,*(undefined8 *)puVar8);
  uVar11 = *(undefined8 *)puVar9;
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  uVar10 = thunk_FUN_02f45270(uVar11);
  FUN_054e629c(uVar10,0);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  FUN_05116b38(param_1,0);
  uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                               UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass13_0_TypeInfo
                             );
  FUN_054fc558();
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  return;
}


