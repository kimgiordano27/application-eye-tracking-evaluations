/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 07c5a0c4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__set_hasVrFocus(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x21;
  undefined8 uVar5;
  
  *(undefined1 *)(unaff_x21 + 0x626) = 1;
  plVar4 = (long *)(unaff_x19 + 0x30);
  lVar2 = FUN_07a843dc(*plVar4);
  puVar1 = PTR_DAT_09f4fed0;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_09f4fed0;
    lVar3 = thunk_FUN_04485110(lVar2,uVar5);
    if (lVar3 != 0) {
      *plVar4 = lVar3;
      uVar5 = *(undefined8 *)puVar1;
                    /* try { // try from 07c5a108 to 07d5a10b has its CatchHandler @ 07c5a1e0 */
                    /* try { // try from 07c5a10c to 07d5a10f has its CatchHandler @ 07c5a1dc */
      lVar3 = thunk_FUN_04485110(lVar2,uVar5);
                    /* try { // try from 07c5a110 to 07d5a1cb has its CatchHandler @ 07c59d34 */
      if (lVar3 != 0) goto OVRManager__get_hasInputFocus;
    }
                    /* WARNING: Subroutine does not return */
    FUN_044481e4(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
OVRManager__get_hasInputFocus:
  thunk_FUN_044bb4b4(plVar4,lVar3);
  return;
}


