/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 036902fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetSpaceBoundary2D(void)

{
  int in_w8;
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar1 = SQRT(unaff_s9 * unaff_s9 + unaff_s8 * unaff_s8 + unaff_s11 * unaff_s11);
  if (fVar1 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    fVar1 = **(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
  }
  else {
    fVar1 = unaff_s8 / fVar1;
  }
  return fVar1;
}


