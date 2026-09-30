/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 033aa700
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x21;
  ulong unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  
  do {
    uVar2 = FUN_033aae5c();
                    /* try { // try from 033aa70c to 034aa70f has its CatchHandler @ 033aa71c */
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 033aa70c with catch @ 033aa71c */
      thunk_FUN_01dc4f30(*unaff_x24);
    }
                    /* try { // try from 033aa728 to 034aa733 has its CatchHandler @ 033aa748 */
    uVar2 = FUN_033c4e1c(uVar2,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
                    /* try { // try from 033aa734 to 034aa73f has its CatchHandler @ 033aa5c4 */
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    *(undefined8 *)(unaff_x25 + unaff_x22 * 8) = uVar2;
                    /* try { // try from 033aa740 to 034aa747 has its CatchHandler @ 033aa748 */
    unaff_x22 = unaff_x22 + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033aa728 with catch @ 033aa748
                       catch(type#2 @ 00000000) { ... } // from try @ 033aa740 with catch @ 033aa748
                        */
    iVar1 = FUN_033aadfc();
                    /* try { // try from 033aa74c to 034aa7af has its CatchHandler @ 033aa74c
                       catch() { ... } // from try @ 033aa74c with catch @ 033aa74c
                       catch() { ... } // from try @ 033aa7f4 with catch @ 033aa74c
                       catch() { ... } // from try @ 033aa874 with catch @ 033aa74c
                       catch() { ... } // from try @ 033aa8bc with catch @ 033aa74c */
  } while ((long)unaff_x22 < (long)iVar1);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033c4e1c();
  FUN_01f26d0c();
  return;
}


