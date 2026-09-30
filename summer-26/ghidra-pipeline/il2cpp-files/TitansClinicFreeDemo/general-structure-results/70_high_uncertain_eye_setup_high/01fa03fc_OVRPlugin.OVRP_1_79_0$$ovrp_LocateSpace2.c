/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_LocateSpace2
ENTRY_POINT: 01fa03fc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01fa0670) */

long * OVRPlugin_OVRP_1_79_0__ovrp_LocateSpace2(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0xec0));
  thunk_FUN_01279b34(PTR_DAT_027c1f70);
  thunk_FUN_01279b34(PTR_DAT_027b32e0);
  *(undefined1 *)(unaff_x23 + 0xf94) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
                    /* try { // try from 01fa0428 to 020a042b has its CatchHandler @ 01fa0a80 */
  in_stack_00000008 = 0;
  if (unaff_x22 == 0) {
    uVar7 = 0;
  }
  else {
    plVar5 = (long *)FUN_01fbca84();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar10 = *plVar5;
                    /* try { // try from 01fa0448 to 020a044b has its CatchHandler @ 01fa0aa0 */
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
                    /* try { // try from 01fa0460 to 020a0463 has its CatchHandler @ 01fa0a7c */
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_027c1f70) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01fa04a0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
                    /* try { // try from 01fa0480 to 020a049f has its CatchHandler @ 01fa0ab8 */
    puVar6 = (undefined8 *)FUN_0122ea3c(plVar5,*(long *)PTR_DAT_027c1f70,0);
LAB_01fa04a0:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  FUN_01e5b5a4(&stack0x00000010,uVar7,0);
  FUN_01e5b7a4(&stack0x00000010,0);
  uVar7 = FUN_01246948();
  FUN_01e5b728(&stack0x00000008,uVar7,0);
  uVar4 = FUN_01e5b764(&stack0x00000008,0);
  plVar5 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027bb7d0,(ulong)uVar4);
  puVar3 = PTR_DAT_027b3ec0;
  puVar2 = PTR_DAT_027b32e0;
  if (0 < (int)uVar4) {
    uVar11 = 0;
    lVar10 = 0x20;
    do {
      uVar7 = thunk_FUN_01e5b420(&stack0x00000008,uVar11 & 0xffffffff,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      plVar8 = (long *)FUN_01f7d8a0(uVar7,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (plVar8 != (long *)0x0) {
        lVar9 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar9 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar8);
        }
        lVar9 = thunk_FUN_0124baac(plVar8,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar9 == 0) {
          uVar7 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar7,0);
        }
        lVar9 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar9 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar8);
        }
      }
      if (*(uint *)(plVar5 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      plVar5[uVar11 + 4] = (long)plVar8;
      thunk_FUN_01286abc((long)plVar5 + lVar10,plVar8);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 8;
    } while (uVar4 != uVar11);
  }
  FUN_01e5b748(&stack0x00000008,0);
  FUN_01e5b7ec(&stack0x00000010,0);
  return plVar5;
}


