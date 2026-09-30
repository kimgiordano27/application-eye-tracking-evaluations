/*
FUNCTION_NAME: OVRManager$$OnApplicationPause
ENTRY_POINT: 073cd6a0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__OnApplicationPause(undefined8 param_1,long param_2)

{
  long lVar1;
  float *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  
  *unaff_x20 = param_2;
  thunk_FUN_03d233cc();
  if (*unaff_x21 != 0) {
    FUN_073cdde0();
                    /* try { // try from 073cd6bc to 074cd6bf has its CatchHandler @ 073cd7f0 */
    lVar1 = FUN_073cdc48();
    *unaff_x21 = lVar1;
                    /* try { // try from 073cd6cc to 074cd6d3 has its CatchHandler @ 073cd800 */
    thunk_FUN_03d233cc();
    if ((*unaff_x21 != 0) && (fVar2 = (float)FUN_073cdde0(), *unaff_x20 != 0)) {
                    /* try { // try from 073cd6e8 to 074cd6ef has its CatchHandler @ 073cd82c */
      fVar3 = (float)FUN_073cdde0();
      fVar4 = 0.0;
      if (fVar2 - fVar3 != 0.0) {
        if (*unaff_x20 == 0) goto LAB_073cd734;
        fVar4 = (float)FUN_073cdde0();
                    /* try { // try from 073cd70c to 074cd70f has its CatchHandler @ 073cd828 */
        fVar4 = (unaff_s8 - fVar4) / (fVar2 - fVar3);
      }
      *unaff_x19 = fVar4;
      return 1;
    }
  }
LAB_073cd734:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 073cd734 to 074cd73b has its CatchHandler @ 073cd804 */
  FUN_03c8fb30();
}


