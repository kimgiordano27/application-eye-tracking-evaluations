/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 02c080e4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c0828c) */

long * OVRManager__UpdateDynamicResolutionVersion(void)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 in_stack_00000028;
  
  FUN_02a3026c(&stack0x00000010);
  FUN_02a3046c(&stack0x00000010,0);
                    /* try { // try from 02c0810c to 02d08133 has its CatchHandler @ 02c083a8 */
  uVar4 = FUN_017ec7f0();
  FUN_02a303f0(&stack0x00000008,uVar4,0);
  uVar3 = FUN_02a3042c(&stack0x00000008,0);
                    /* try { // try from 02c08140 to 02d08153 has its CatchHandler @ 02c083a4 */
  plVar5 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380aee8,(ulong)uVar3);
  puVar2 = PTR_DAT_03804bd8;
  if (0 < (int)uVar3) {
    uVar8 = 0;
    lVar9 = 0x20;
    do {
      uVar4 = thunk_FUN_02a300f4(&stack0x00000008,uVar8 & 0xffffffff,0);
      plVar6 = (long *)FUN_02b20668(uVar4,in_stack_00000028,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (plVar6 != (long *)0x0) {
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(plVar6);
        }
        lVar7 = thunk_FUN_01861ac0(plVar6,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar7 == 0) {
          uVar4 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar4,0);
        }
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(plVar6);
        }
      }
      if (*(uint *)(plVar5 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      plVar5[uVar8 + 4] = (long)plVar6;
      thunk_FUN_0188fd20((long)plVar5 + lVar9,plVar6);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (uVar3 != uVar8);
  }
  FUN_02a30410(&stack0x00000008,0);
  FUN_02a304b4(&stack0x00000010,0);
  return plVar5;
}


