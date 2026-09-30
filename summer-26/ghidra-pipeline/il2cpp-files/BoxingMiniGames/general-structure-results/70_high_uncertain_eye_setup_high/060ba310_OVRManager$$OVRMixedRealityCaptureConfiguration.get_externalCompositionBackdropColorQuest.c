/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest
ENTRY_POINT: 060ba310
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
OVRManager__OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x23;
  long unaff_x24;
  
  *(undefined1 *)(unaff_x24 + 0x9ae) = 1;
  lVar1 = *(long *)(unaff_x23 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 1) {
      plVar2 = (long *)FUN_0459ed6c(lVar1,0,*(undefined8 *)PTR_DAT_07a23d80);
      if (plVar2 == (long *)0x0)
      goto OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange;
      (**(code **)(*plVar2 + 0x1a8))();
    }
    else {
      if (*(int *)(lVar1 + 0x18) < 2) {
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


