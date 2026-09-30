/*
FUNCTION_NAME: OVRPlugin$$GetHeadPoseModifier
ENTRY_POINT: 05bc64c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHeadPoseModifier(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  
  do {
                    /* try { // try from 05bc64c8 to 05cc64cf has its CatchHandler @ 05bc630c */
                    /* catch() { ... } // from try @ 05bc6408 with catch @ 05bc64cc
                       catch() { ... } // from try @ 05bc64b8 with catch @ 05bc64cc */
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_05bc64f8:
      (*(code *)*puVar1)();
      if (unaff_x19 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188cd0();
    }
                    /* try { // try from 05bc64d0 to 05cc64d3 has its CatchHandler @ 05bc64dc */
    in_x9 = in_x9 + -1;
                    /* try { // try from 05bc64d4 to 05cc64df has its CatchHandler @ 05bc630c */
    if (in_x9 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bc64d0 with catch @ 05bc64dc
                        */
      puVar1 = (undefined8 *)FUN_031c0d08();
      goto LAB_05bc64f8;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


