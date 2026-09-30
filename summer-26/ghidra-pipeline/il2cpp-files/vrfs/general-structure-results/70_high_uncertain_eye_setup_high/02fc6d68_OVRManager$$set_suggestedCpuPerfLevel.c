/*
FUNCTION_NAME: OVRManager$$set_suggestedCpuPerfLevel
ENTRY_POINT: 02fc6d68
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__set_suggestedCpuPerfLevel(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x19;
  int iVar5;
  uint uVar6;
  long unaff_x22;
  long unaff_x24;
  undefined8 in_stack_00000008;
  
  uVar2 = FUN_031d7008(param_2,*(undefined8 *)(param_1 + 0x130));
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar5 = 0;
  if (uVar1 != 0) {
    iVar5 = (int)uVar2 / (int)uVar1;
  }
  uVar6 = uVar2 - iVar5 * uVar1;
  if (uVar6 < uVar1) {
    if (unaff_x24 == 0) {
LAB_02fc6f80:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar1 = *(uint *)(unaff_x24 + 0x18);
    uVar6 = *(int *)(unaff_x22 + (ulong)uVar6 * 4 + 0x20) - 1;
    if (uVar6 < uVar1) {
      iVar5 = 0;
      do {
        if (*(uint *)(unaff_x24 + (long)(int)uVar6 * 0x10 + 0x20) == uVar2) {
          plVar3 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                 0x10) + 8))();
          if (*(uint *)(unaff_x24 + 0x18) <= uVar6) goto LAB_02fc6f7c;
          if (plVar3 == (long *)0x0) goto LAB_02fc6f80;
          uVar4 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined4 *)(unaff_x24 + (long)(int)uVar6 * 0x10 + 0x28),
                             in_stack_00000008._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
          if ((uVar4 & 1) != 0) {
            return uVar6;
          }
          uVar1 = *(uint *)(unaff_x24 + 0x18);
        }
        if (uVar1 <= uVar6) goto LAB_02fc6f7c;
        uVar6 = *(uint *)(unaff_x24 + (long)(int)uVar6 * 0x10 + 0x24);
        if ((int)uVar1 <= iVar5) {
          FUN_031dbf48(0);
        }
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        iVar5 = iVar5 + 1;
      } while (uVar6 < uVar1);
    }
    return uVar6;
  }
LAB_02fc6f7c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


