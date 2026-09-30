/*
FUNCTION_NAME: Unity.Services.Matchmaker.Overrides.ABAnalytics$$SubmitUserAssignmentConfirmedEvent
ENTRY_POINT: 08f74058
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Matchmaker_Overrides_ABAnalytics__SubmitUserAssignmentConfirmedEvent
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  code *in_x9;
  long unaff_x19;
  undefined8 uVar6;
  long lVar7;
  long unaff_x23;
  long unaff_x24;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(unaff_x24 + 0x398);
  uVar2 = (*in_x9)(param_2,param_3,*(undefined8 *)(param_1 + 0x970));
  uVar6 = *puVar8;
  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)(unaff_x23 + 0xe0));
  }
  FUN_07a4ce38(uVar6,0);
  uVar3 = FUN_07a5629c();
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_08f73710();
    plVar5 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,2);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((unaff_x19 != 0) && (lVar4 = thunk_FUN_04485110(), lVar4 == 0)) {
      uVar2 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar2,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar5[4] = unaff_x19;
    thunk_FUN_044bb4b4();
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)) {
      uVar2 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar2,0);
    }
    if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar5[5] = lVar7;
    thunk_FUN_044bb4b4(plVar5 + 5,lVar7);
    plVar5 = (long *)FUN_07a68e00(uVar2,plVar5,0);
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_09fbb578 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09fbb578))
      {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
    }
  }
  else {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 == 0) {
      lVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f22aa0);
      FUN_079e7dec(lVar4,0);
    }
    else {
      lVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f22aa0);
      FUN_079e7f6c(lVar4,lVar7,0);
    }
    plVar5 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,2);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar7 = thunk_FUN_04485110();
    if (lVar7 == 0) {
      uVar2 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar2,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar5[4] = unaff_x19;
    thunk_FUN_044bb4b4();
    if ((lVar4 != 0) &&
       (lVar7 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
      uVar2 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar2,0);
    }
    if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar5[5] = lVar4;
    thunk_FUN_044bb4b4(plVar5 + 5,lVar4);
    plVar5 = (long *)FUN_07a68e00(uVar2,plVar5,0);
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_09fbb578 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09fbb578))
      {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
    }
  }
  return;
}


