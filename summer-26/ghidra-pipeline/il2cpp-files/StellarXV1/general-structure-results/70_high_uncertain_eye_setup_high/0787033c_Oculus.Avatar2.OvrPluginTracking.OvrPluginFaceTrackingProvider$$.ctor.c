/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginFaceTrackingProvider$$.ctor
ENTRY_POINT: 0787033c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider___ctor(void)

{
  long lVar1;
  long unaff_x24;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_0786c4b8();
  lVar1 = thunk_FUN_040b4efc(*unaff_x29);
                    /* try { // try from 07870348 to 07970353 has its CatchHandler @ 078705a4 */
  FUN_07845994(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = unaff_x28;
  thunk_FUN_040ec700();
  if (unaff_x24 != 0) {
                    /* try { // try from 0787036c to 0797037b has its CatchHandler @ 078703f0 */
    FUN_0784a34c();
                    /* try { // try from 07870384 to 0797039b has its CatchHandler @ 078703f4 */
    FUN_07854ce8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


