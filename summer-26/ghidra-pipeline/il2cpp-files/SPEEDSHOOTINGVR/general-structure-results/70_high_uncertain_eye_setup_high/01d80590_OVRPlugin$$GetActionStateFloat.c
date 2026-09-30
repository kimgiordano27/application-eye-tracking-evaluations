/*
FUNCTION_NAME: OVRPlugin$$GetActionStateFloat
ENTRY_POINT: 01d80590
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d80774) */

long * OVRPlugin__GetActionStateFloat(void)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x24;
  long lVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_00fdc2e4(PTR_DAT_02359090);
  FUN_00fdc2e4(PTR_DAT_02353ea8);
  *(undefined1 *)(unaff_x24 + 0x809) = 1;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  FUN_01d96784(&stack0x00000028);
  FUN_01c43db8(&stack0x00000010);
  FUN_01c43fb8(&stack0x00000010,0);
  uVar4 = FUN_00fccdc0();
  FUN_01c43f3c(&stack0x00000008,uVar4,0);
                    /* try { // try from 01d80610 to 01e80637 has its CatchHandler @ 01d80a20 */
  uVar3 = FUN_01c43f78(&stack0x00000008,0);
  plVar5 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02359090,(ulong)uVar3);
  puVar2 = PTR_DAT_02353ea8;
  if (0 < (int)uVar3) {
    uVar8 = 0;
    lVar9 = 0x20;
    do {
      uVar4 = thunk_FUN_01c43c34(&stack0x00000008,uVar8 & 0xffffffff,0);
      plVar6 = (long *)FUN_01cd87b4(uVar4,in_stack_00000028,0);
                    /* try { // try from 01d8066c to 01e80697 has its CatchHandler @ 01d80a1c */
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (plVar6 != (long *)0x0) {
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar6);
        }
        lVar7 = thunk_FUN_0103ffe0(plVar6,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar7 == 0) {
          uVar4 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar4,0);
        }
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar6);
        }
      }
      if (*(uint *)(plVar5 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar5[uVar8 + 4] = (long)plVar6;
      thunk_FUN_0106e12c((long)plVar5 + lVar9,plVar6);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (uVar3 != uVar8);
  }
  FUN_01c43f5c(&stack0x00000008,0);
  FUN_01c44000(&stack0x00000010,0);
  return plVar5;
}


