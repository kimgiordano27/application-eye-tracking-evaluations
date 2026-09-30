/*
FUNCTION_NAME: OVRPlugin$$GetLayerTexture
ENTRY_POINT: 0909b428
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetLayerTexture(long param_1)

{
  float *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  
  *unaff_x21 = param_1;
  thunk_FUN_049ee3d8();
  if ((*unaff_x21 != 0) && (fVar1 = (float)FUN_0909bb18(), *unaff_x20 != 0)) {
    fVar2 = (float)FUN_0909bb18();
    fVar3 = 0.0;
    if (fVar1 - fVar2 != 0.0) {
      if (*unaff_x20 == 0) goto LAB_0909b498;
      fVar3 = (float)FUN_0909bb18();
      fVar3 = (unaff_s8 - fVar3) / (fVar1 - fVar2);
    }
    *unaff_x19 = fVar3;
    return 1;
  }
LAB_0909b498:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


