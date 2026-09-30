/*
FUNCTION_NAME: OVRManager$$get_isPowerSavingActive
ENTRY_POINT: 063686b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__get_isPowerSavingActive(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  long unaff_x20;
  long *plVar11;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack0000000000000070;
  long in_stack_00000078;
  
  uStack0000000000000070 = param_1;
  while (uVar5 = FUN_05e3d424(&stack0x00000050,*unaff_x25), uVar9 = in_stack_00000060,
        (uVar5 & 1) != 0) {
    if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar11 = (long *)(in_stack_00000078 + 0x88);
    if (*plVar11 == 0) {
      lVar6 = thunk_FUN_037788cc(*unaff_x26);
      FUN_05b0e950(lVar6,*unaff_x27);
      *plVar11 = lVar6;
      thunk_FUN_037aeb94(plVar11,lVar6);
      if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    plVar11 = *(long **)(in_stack_00000078 + 0x88);
    uVar7 = FUN_063683dc();
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar6 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_06368770;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c(plVar11,*unaff_x28,1);
LAB_06368770:
    (*(code *)*puVar8)(plVar11,uVar9,uVar7,puVar8[1]);
  }
  FUN_05e3d544(&stack0x00000050,*(undefined8 *)PTR_DAT_07db5658);
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    FUN_049cf910(&stack0x00000008,*(long *)(unaff_x20 + 0x30),*(undefined8 *)PTR_DAT_07db5698);
    puVar4 = PTR_DAT_07db5668;
    puVar3 = PTR_DAT_07db33b0;
    puVar2 = PTR_DAT_07db33a0;
    puVar1 = PTR_DAT_07db3348;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000018;
    while (uVar5 = FUN_05d64e98(&stack0x00000030,*(undefined8 *)puVar4), (uVar5 & 1) != 0) {
      if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar11 = (long *)(in_stack_00000078 + 0x78);
      if (*plVar11 == 0) {
        lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
        FUN_049ce6c0(lVar6,*(undefined8 *)puVar2);
        *plVar11 = lVar6;
        thunk_FUN_037aeb94(plVar11,lVar6);
        if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
      }
      plVar11 = *(long **)(in_stack_00000078 + 0x78);
      uVar9 = FUN_063683dc();
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_063688a4;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar1,2);
LAB_063688a4:
      (*(code *)*puVar8)(plVar11,uVar9,puVar8[1]);
    }
    FUN_05d64e94(&stack0x00000030,*(undefined8 *)PTR_DAT_07db5660);
    lVar6 = in_stack_00000078;
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      uVar9 = FUN_063683dc();
      if (lVar6 == 0) goto LAB_06368964;
      puVar8 = (undefined8 *)(lVar6 + 0x90);
      *puVar8 = uVar9;
      thunk_FUN_037aeb94(puVar8,uVar9);
    }
    lVar6 = in_stack_00000078;
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      uVar9 = FUN_063683dc();
      if (lVar6 == 0) goto LAB_06368964;
      puVar8 = (undefined8 *)(lVar6 + 0x98);
      *puVar8 = uVar9;
      thunk_FUN_037aeb94(puVar8,uVar9);
    }
    return in_stack_00000078;
  }
LAB_06368964:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


