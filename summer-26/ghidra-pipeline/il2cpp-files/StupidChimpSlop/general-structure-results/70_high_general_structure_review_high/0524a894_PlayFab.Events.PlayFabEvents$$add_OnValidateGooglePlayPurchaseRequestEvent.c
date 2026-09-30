/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnValidateGooglePlayPurchaseRequestEvent
ENTRY_POINT: 0524a894
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8 PlayFab_Events_PlayFabEvents__add_OnValidateGooglePlayPurchaseRequestEvent(ulong param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined4 unaff_w23;
  undefined4 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_02d4dc40(System_Func<Task>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664a6c0);
    FUN_02d4dc40(PTR_DAT_066463a0);
    FUN_02d4dc40(PTR_DAT_0664c4a8);
    FUN_02d4dc40(System_Func<VisualElementFocusChangeTarget>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x33f) = 1;
  }
  puVar1 = PTR_DAT_066463a0;
  uVar2 = FUN_0524a0c8(unaff_w20);
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*unaff_x19);
  }
  uVar3 = FUN_04f2cb40(uVar2,0);
  uVar2 = FUN_0524a144(uVar3,unaff_w23,unaff_w20);
  plVar4 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar1,3);
  puVar1 = System_Func<VisualElementFocusChangeTarget>_TypeInfo;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((*(long *)System_Func<VisualElementFocusChangeTarget>_TypeInfo != 0) &&
     (lVar5 = thunk_FUN_02d8a53c(*(long *)System_Func<VisualElementFocusChangeTarget>_TypeInfo,
                                 *(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
    uVar3 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar3,0);
  }
  if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  plVar4[4] = *(long *)puVar1;
  thunk_FUN_02dc1ef0();
  lVar5 = thunk_FUN_02d8a270(*(undefined8 *)PTR_DAT_0664c4a8,&stack0x0000001c);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    uVar3 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar3,0);
  }
  if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  plVar4[5] = lVar5;
  thunk_FUN_02dc1ef0(plVar4 + 5,lVar5);
  lVar5 = thunk_FUN_02d8a270(*(undefined8 *)System_Func<Task>_TypeInfo,&stack0x00000018);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_02d8a53c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    uVar3 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar3,0);
  }
  if (2 < *(uint *)(plVar4 + 3)) {
    plVar4[6] = lVar5;
    thunk_FUN_02dc1ef0(plVar4 + 6,lVar5);
    FUN_0524a354(uVar2,plVar4);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


