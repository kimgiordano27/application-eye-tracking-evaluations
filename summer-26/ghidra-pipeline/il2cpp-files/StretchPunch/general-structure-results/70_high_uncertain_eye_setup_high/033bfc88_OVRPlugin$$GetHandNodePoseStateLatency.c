/*
FUNCTION_NAME: OVRPlugin$$GetHandNodePoseStateLatency
ENTRY_POINT: 033bfc88
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetHandNodePoseStateLatency(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long in_x9;
  undefined8 uVar8;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x28;
  long in_stack_00000038;
  long in_stack_00000040;
  
  uVar8 = *(undefined8 *)(in_x9 + 0x20);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
                    /* try { // try from 033bfc98 to 034bfcbf has its CatchHandler @ 033c00a8 */
  uVar3 = FUN_033ab18c(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(unaff_x23 + 0x18)
                                 );
    uVar2 = *(int *)(unaff_x23 + 0x18) - 1;
    FUN_033b4f38(*unaff_x28,0,plVar4,0,uVar2,0);
    if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_033bfa24;
                    /* try { // try from 033bfcf4 to 034bfd1f has its CatchHandler @ 033c00a4 */
    uVar8 = *(undefined8 *)(in_stack_00000038 + 0x20);
    lVar5 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    if (lVar5 == 0) {
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_033bfa24;
    *(undefined4 *)(lVar5 + 0x20) = 1;
    lVar5 = thunk_FUN_033b4750(uVar8,lVar5,0);
    if (plVar4 == (long *)0x0) goto LAB_033bec5c;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar8 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar8,0);
    }
    if (*(uint *)(plVar4 + 3) <= uVar2) goto LAB_033bfa24;
    plVar7 = plVar4 + (long)(int)uVar2 + 4;
    *plVar7 = lVar5;
    thunk_FUN_01e10808(plVar7,lVar5);
    if (*(uint *)(plVar4 + 3) <= uVar2) goto LAB_033bfa24;
    lVar5 = *unaff_x28;
    if (lVar5 == 0) goto LAB_033bec5c;
    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_033bfa24;
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) goto LAB_033bec5c;
    bVar1 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1183))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c();
    }
    FUN_033b49e8(plVar7,*(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20),0,0);
    *unaff_x28 = (long)plVar4;
    thunk_FUN_01e10808();
    unaff_x24 = in_stack_00000040;
  }
  if (*(int *)(unaff_x24 + 0x18) != 0) {
    return *unaff_x26;
  }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


