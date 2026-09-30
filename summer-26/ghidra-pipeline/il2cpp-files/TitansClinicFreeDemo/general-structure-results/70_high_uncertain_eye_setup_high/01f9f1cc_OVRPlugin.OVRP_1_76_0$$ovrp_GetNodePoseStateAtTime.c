/*
FUNCTION_NAME: OVRPlugin.OVRP_1_76_0$$ovrp_GetNodePoseStateAtTime
ENTRY_POINT: 01f9f1cc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_76_0__ovrp_GetNodePoseStateAtTime(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c1f08);
    thunk_FUN_01279b34(PTR_DAT_027bced0);
    *(undefined1 *)(unaff_x22 + 0xf8f) = 1;
  }
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  FUN_01fb58d8(&stack0x00000018);
  uVar4 = FUN_01244d38();
  FUN_01e5b728(&stack0x00000008,uVar4,0);
  uVar3 = FUN_01e5b764(&stack0x00000008,0);
  plVar5 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027c1f08,(ulong)uVar3);
  puVar2 = PTR_DAT_027bced0;
  if (0 < (int)uVar3) {
    uVar8 = 0;
    lVar9 = 0x20;
    do {
      uVar4 = thunk_FUN_01e5b420(&stack0x00000008,uVar8 & 0xffffffff,0);
      plVar6 = (long *)FUN_01ef1cc8(uVar4,in_stack_00000018,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (plVar6 != (long *)0x0) {
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar6);
        }
        lVar7 = thunk_FUN_0124baac(plVar6,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar7 == 0) {
          uVar4 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar4,0);
        }
        lVar7 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar6);
        }
      }
      if (*(uint *)(plVar5 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      plVar5[uVar8 + 4] = (long)plVar6;
      thunk_FUN_01286abc((long)plVar5 + lVar9,plVar6);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (uVar3 != uVar8);
  }
  FUN_01e5b748(&stack0x00000008,0);
  return plVar5;
}


