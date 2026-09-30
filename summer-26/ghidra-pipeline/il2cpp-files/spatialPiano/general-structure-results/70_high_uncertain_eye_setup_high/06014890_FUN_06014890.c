/*
FUNCTION_NAME: FUN_06014890
ENTRY_POINT: 06014890
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_06014890(long param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_06bc5329 & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_13__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_130__);
    DAT_06bc5329 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if ((int)(uint)param_2 < *(int *)(lVar1 + 0x18)) {
      uVar2 = FUN_03abf644(lVar1,param_2,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_130__);
      return uVar2;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


