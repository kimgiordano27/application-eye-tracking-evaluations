/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers
ENTRY_POINT: 060ba2d0
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
OVRManager__OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers
          (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  
  if ((DAT_07ee09ae & 1) == 0) {
    FUN_03642964(PTR_DAT_07a23d78);
    FUN_03642964(PTR_DAT_07a23d80);
    DAT_07ee09ae = 1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 1) {
      plVar2 = (long *)FUN_0459ed6c(lVar1,0,*(undefined8 *)PTR_DAT_07a23d80);
      if (plVar2 == (long *)0x0)
      goto OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange;
      (**(code **)(*plVar2 + 0x1a8))
                (param_2,plVar2,param_4,param_5,*(undefined8 *)(param_3 + 0x18),param_6,param_7,
                 *(undefined8 *)(*plVar2 + 0x1b0));
    }
    else {
      if (*(int *)(lVar1 + 0x18) < 2) {
        return 0;
      }
      FUN_060bdeec(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    return 1;
  }
OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


