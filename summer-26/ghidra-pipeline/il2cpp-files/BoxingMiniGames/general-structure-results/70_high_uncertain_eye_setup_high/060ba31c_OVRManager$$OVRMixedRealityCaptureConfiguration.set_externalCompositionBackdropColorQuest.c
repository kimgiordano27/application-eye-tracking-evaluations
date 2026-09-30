/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest
ENTRY_POINT: 060ba31c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest
          (long param_1)

{
  long *plVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) == 1) {
      plVar1 = (long *)FUN_0459ed6c(param_1,0,*(undefined8 *)PTR_DAT_07a23d80);
      if (plVar1 == (long *)0x0)
      goto OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange;
      (**(code **)(*plVar1 + 0x1a8))();
    }
    else {
      if (*(int *)(param_1 + 0x18) < 2) {
        return 0;
      }
      FUN_060bdeec();
    }
    return 1;
  }
OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


