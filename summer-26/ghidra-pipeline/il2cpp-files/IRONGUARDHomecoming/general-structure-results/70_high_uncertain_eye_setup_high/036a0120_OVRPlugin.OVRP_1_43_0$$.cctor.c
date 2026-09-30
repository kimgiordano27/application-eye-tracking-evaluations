/*
FUNCTION_NAME: OVRPlugin.OVRP_1_43_0$$.cctor
ENTRY_POINT: 036a0120
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_43_0___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__;
  puVar1 = Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_67__;
  if ((DAT_04833f65 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_67__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    DAT_04833f65 = 1;
  }
  uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled();
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x80),uVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0369f958(param_1);
  return;
}


