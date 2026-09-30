/*
FUNCTION_NAME: FUN_06862ee8
ENTRY_POINT: 06862ee8
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


ulong FUN_06862ee8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_30;
  uint local_24;
  
  if ((DAT_071d6b92 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_Vector3f_TypeInfo);
    FUN_02f07e70(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_02f07e70(OVRPlugin_Vector4f_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_PointerCaptureEvent_TypeInfo);
    DAT_071d6b92 = 1;
  }
  puVar1 = UnityEngine_UIElements_PointerCaptureEvent_TypeInfo;
  local_24 = 0;
  local_30 = 0;
  if (*(long *)(param_1 + 0x450) != 0) {
    uVar2 = FUN_046bc728(*(long *)(param_1 + 0x450),*(undefined8 *)OVRPlugin_Vector4f_TypeInfo);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar1);
    }
    uVar3 = FUN_066d2bc4(param_2,uVar2,&local_24,&local_30,0);
    lVar4 = *(long *)(param_1 + 0x3f0);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),local_30,*(undefined8 *)(lVar4 + 0x28));
    }
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_045f5438(param_1,*(undefined8 *)OVRPlugin_Vector3f_TypeInfo);
    }
    else {
      uVar3 = (ulong)local_24;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


