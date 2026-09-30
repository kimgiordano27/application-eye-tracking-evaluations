/*
FUNCTION_NAME: OVRManager$$get_volumeLevel
ENTRY_POINT: 0745c3ac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_volumeLevel(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 uVar4;
  
                    /* try { // try from 0745c3ac to 0755c3af has its CatchHandler @ 0745c498 */
  lVar2 = FUN_071bfc68();
  puVar1 = PTR_StringLiteral_51754_09222a38;
  if (lVar2 != 0) {
                    /* try { // try from 0745c3c0 to 0755c3c3 has its CatchHandler @ 0745c48c */
    uVar4 = *(undefined8 *)PTR_StringLiteral_51754_09222a38;
                    /* try { // try from 0745c3c4 to 0755c3cf has its CatchHandler @ 0745c494 */
    lVar3 = thunk_FUN_03d2ee44(lVar2,uVar4);
    if (lVar3 != 0) {
      *unaff_x19 = lVar3;
                    /* try { // try from 0745c3d4 to 0755c3db has its CatchHandler @ 0745c490 */
      uVar4 = *(undefined8 *)puVar1;
                    /* try { // try from 0745c3dc to 0755c46f has its CatchHandler @ 0745c214 */
      lVar3 = thunk_FUN_03d2ee44(lVar2,uVar4);
      if (lVar3 != 0) goto LAB_0745c400;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4(lVar2,uVar4);
  }
  *unaff_x19 = 0;
LAB_0745c400:
  thunk_FUN_03d1023c();
  return;
}


