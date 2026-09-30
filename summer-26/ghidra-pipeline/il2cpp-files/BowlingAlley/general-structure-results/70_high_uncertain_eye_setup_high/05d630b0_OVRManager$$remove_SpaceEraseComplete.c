/*
FUNCTION_NAME: OVRManager$$remove_SpaceEraseComplete
ENTRY_POINT: 05d630b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceEraseComplete(undefined8 param_1)

{
  int in_w9;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined4 uVar1;
  
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d630ac with catch @ 05d630b0
                       try { // try from 05d630b0 to 05e630d3 has its CatchHandler @ 05d62ff0 */
  if (in_w9 == 0) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d63048 with catch @ 05d630b4
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d63074 with catch @ 05d630b8
                        */
    thunk_FUN_032cd7c0(param_1);
  }
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 05d63058 with catch @ 05d630bc
                        */
  if (unaff_x21 != 0) {
                    /* try { // try from 05d630d4 to 05e630eb has its CatchHandler @ 05d6318c */
    uVar1 = 0x3f800000;
    if ((unaff_x20 & 1) == 0) {
      uVar1 = 0;
    }
    FUN_06bc10e0(uVar1);
                    /* try { // try from 05d630ec to 05e63177 has its CatchHandler @ 05d62ff0 */
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_05ce7e10(*(long *)(unaff_x19 + 0x28),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


