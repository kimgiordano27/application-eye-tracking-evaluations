/*
FUNCTION_NAME: FUN_07c5a098
ENTRY_POINT: 07c5a098
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07c5a098(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_0a526626 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4fed0);
    DAT_0a526626 = 1;
  }
  plVar4 = (long *)(param_1 + 0x30);
  lVar2 = FUN_07a843dc(*plVar4,param_2,0);
  puVar1 = PTR_DAT_09f4fed0;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_09f4fed0;
    lVar3 = thunk_FUN_04485110(lVar2,uVar5);
    if (lVar3 != 0) {
      *plVar4 = lVar3;
      uVar5 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_04485110(lVar2,uVar5);
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


