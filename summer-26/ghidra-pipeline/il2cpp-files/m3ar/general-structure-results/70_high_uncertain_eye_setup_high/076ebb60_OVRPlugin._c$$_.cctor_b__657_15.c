/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_15
ENTRY_POINT: 076ebb60
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_<>c__<_cctor>b__657_15(void)

{
  bool bVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x310) = 1;
                    /* try { // try from 076ebb6c to 077ebb6f has its CatchHandler @ 076ebb9c */
                    /* try { // try from 076ebb70 to 077ebb73 has its CatchHandler @ 076ebb98 */
  lVar2 = System_Collections_Generic_Dictionary<int,_Pose>__Add();
                    /* try { // try from 076ebb74 to 077ebb87 has its CatchHandler @ 076eb504 */
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x10) == '\0') {
                    /* catch() { ... } // from try @ 076eba4c with catch @ 076ebb90
                       try { // try from 076ebb90 to 077ebbb7 has its CatchHandler @ 076eb504 */
      bVar1 = false;
    }
    else {
                    /* catch() { ... } // from try @ 076eba44 with catch @ 076ebb84 */
      bVar1 = *(int *)(lVar2 + 0x34) != 0;
                    /* try { // try from 076ebb88 to 077ebb8f has its CatchHandler @ 076ebbd8 */
    }
                    /* catch() { ... } // from try @ 076eba24 with catch @ 076ebb94 */
                    /* catch() { ... } // from try @ 076ebb70 with catch @ 076ebb98 */
                    /* catch() { ... } // from try @ 076ebb6c with catch @ 076ebb9c */
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 076eb808 with catch @ 076ebba0 */
  FUN_0403188c();
}


