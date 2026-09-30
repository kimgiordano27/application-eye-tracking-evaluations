/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingVisemesSupported
ENTRY_POINT: 06950964
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_faceTrackingVisemesSupported
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x21;
  
  FUN_069445ec(param_2,param_3,*param_1);
  if (unaff_x21 != 0) {
    lVar3 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *puVar2 = param_2;
        thunk_FUN_03afed3c(puVar2,param_2);
      }
      else {
        FUN_04de85b0();
      }
      return unaff_w19 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


