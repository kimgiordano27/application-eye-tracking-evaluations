/*
FUNCTION_NAME: OVRManager$$OnDestroy
ENTRY_POINT: 073cd604
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__OnDestroy(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  float *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar3;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  
  if ((param_1 & 1) == 0) {
    lVar3 = *unaff_x21;
                    /* try { // try from 073cd61c to 074cd61f has its CatchHandler @ 073cd7f8 */
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
                    /* try { // try from 073cd62c to 074cd633 has its CatchHandler @ 073cd810 */
    uVar2 = FUN_085dfaac(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      *unaff_x21 = *unaff_x20;
      thunk_FUN_03d233cc();
      if (*unaff_x20 == 0) goto LAB_073cd734;
      FUN_073cdde0();
      lVar3 = FUN_073cdab0();
      *unaff_x20 = lVar3;
      thunk_FUN_03d233cc();
    }
                    /* try { // try from 073cd678 to 074cd67b has its CatchHandler @ 073cd7f4 */
    lVar3 = *unaff_x20;
                    /* try { // try from 073cd67c to 074cd68f has its CatchHandler @ 073cd80c */
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_085dfaac(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
                    /* try { // try from 073cd69c to 074cd6a7 has its CatchHandler @ 073cd808 */
      *unaff_x20 = *unaff_x21;
      thunk_FUN_03d233cc();
      if (*unaff_x21 == 0) goto LAB_073cd734;
      FUN_073cdde0();
      lVar3 = FUN_073cdc48();
      *unaff_x21 = lVar3;
      thunk_FUN_03d233cc();
    }
    if ((*unaff_x21 == 0) || (fVar4 = (float)FUN_073cdde0(), *unaff_x20 == 0)) {
LAB_073cd734:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    fVar5 = (float)FUN_073cdde0();
    fVar6 = 0.0;
    if (fVar4 - fVar5 != 0.0) {
      if (*unaff_x20 == 0) goto LAB_073cd734;
      fVar6 = (float)FUN_073cdde0();
      fVar6 = (unaff_s8 - fVar6) / (fVar4 - fVar5);
    }
    *unaff_x19 = fVar6;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    *unaff_x19 = 0.0;
  }
  return uVar1;
}


