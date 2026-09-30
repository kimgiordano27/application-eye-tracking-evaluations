/*
FUNCTION_NAME: OVRManager$$add_SpaceSetComponentStatusComplete
ENTRY_POINT: 07c587a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceSetComponentStatusComplete(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_0a526618 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4fff8);
                    /* try { // try from 07c587cc to 07d587cf has its CatchHandler @ 07c58f20 */
    DAT_0a526618 = 1;
  }
                    /* try { // try from 07c587d0 to 07d587db has its CatchHandler @ 07c58fb8 */
  plVar4 = (long *)(param_1 + 0xa8);
  lVar2 = FUN_07a84204(*plVar4,param_2,0);
  puVar1 = PTR_DAT_09f4fff8;
  if (lVar2 != 0) {
                    /* try { // try from 07c587ec to 07d587f7 has its CatchHandler @ 07c58fa4 */
    uVar5 = *(undefined8 *)PTR_DAT_09f4fff8;
    lVar3 = thunk_FUN_04485110(lVar2,uVar5);
    if (lVar3 != 0) {
      *plVar4 = lVar3;
      uVar5 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_04485110(lVar2,uVar5);
      if (lVar3 != 0) goto LAB_07c58830;
    }
                    /* WARNING: Subroutine does not return */
    FUN_044481e4(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_07c58830:
                    /* try { // try from 07c58834 to 07d5883f has its CatchHandler @ 07c59088 */
  thunk_FUN_044bb4b4(plVar4,lVar3);
  return;
}


