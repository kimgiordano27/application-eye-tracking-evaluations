/*
FUNCTION_NAME: FUN_072ce810
ENTRY_POINT: 072ce810
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_072ce810(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = OVRPlugin_Vector4s___TypeInfo;
  puVar2 = OVRPlugin_Vector4f___TypeInfo;
  if ((DAT_08268af1 & 1) == 0) {
    FUN_0373b518(OVRPlugin_Vector3f___TypeInfo);
    FUN_0373b518(OVRPlugin_Vector4s___TypeInfo);
    FUN_0373b518(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
    FUN_0373b518(OVRPlugin_Vector4f___TypeInfo);
    DAT_08268af1 = 1;
  }
  puVar1 = OVRPlugin_Vector3f___TypeInfo;
  lVar4 = FUN_041b8498(*(undefined8 *)puVar2,*(undefined8 *)puVar3);
  if (lVar4 == 0) {
    lVar4 = FUN_041e3678(*(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
  }
  **(long **)(*(long *)puVar1 + 0xb8) = lVar4;
  thunk_FUN_037aeb94(*(undefined8 *)(*(long *)puVar1 + 0xb8));
  return;
}


