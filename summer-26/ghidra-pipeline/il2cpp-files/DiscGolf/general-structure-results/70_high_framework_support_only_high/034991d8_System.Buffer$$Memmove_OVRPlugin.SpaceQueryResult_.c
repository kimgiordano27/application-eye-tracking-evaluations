/*
FUNCTION_NAME: System.Buffer$$Memmove<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 034991d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Buffer__Memmove<OVRPlugin_SpaceQueryResult>(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  void *unaff_x21;
  
  if (param_1 == 0) {
    FUN_02d965b8(&DAT_06b2f250);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
      FUN_02dcfd74();
    }
  }
  uVar1 = FUN_0550100c();
  if (uVar1 <= unaff_w19) {
    thunk_FUN_02dfd288(&DAT_06b301b0);
    uVar6 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(&DAT_06baaea0);
    FUN_05453f78(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6);
  }
  plVar2 = (long *)thunk_FUN_02dd3048();
  if (plVar2 == (long *)0x0) {
    FUN_02d9665c();
    return;
  }
  memcpy(&stack0x00000000,unaff_x21,0x50);
  lVar3 = thunk_FUN_02dd2d7c(**(undefined8 **)(unaff_x20 + 0x38));
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_02dd3048(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6,0);
  }
  if (unaff_w19 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)unaff_w19 + 4] = lVar3;
    LeanTween__value(plVar2 + (long)(int)unaff_w19 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


