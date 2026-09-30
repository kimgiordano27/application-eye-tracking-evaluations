/*
FUNCTION_NAME: OVRManager$$get_gpuLevel
ENTRY_POINT: 06368594
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__get_gpuLevel(undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16])

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
  long lVar10;
  int *piVar11;
  long unaff_x20;
  long *plVar12;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  long in_stack_00000078;
  
  puVar1 = PTR_DAT_07db3350;
  uStack0000000000000068 = param_3._8_8_;
  uStack0000000000000060 = param_3._0_8_;
  uStack0000000000000058 = param_2._8_8_;
  uStack0000000000000050 = param_2._0_8_;
  uStack0000000000000070 = param_1;
  while (uVar5 = FUN_05e3d424(&stack0x00000050,*unaff_x25), uVar9 = uStack0000000000000060,
        (uVar5 & 1) != 0) {
    if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar12 = (long *)(in_stack_00000078 + 0x80);
    if (*plVar12 == 0) {
      lVar6 = thunk_FUN_037788cc(*unaff_x26);
      FUN_05b0e950(lVar6,*unaff_x27);
      *plVar12 = lVar6;
      thunk_FUN_037aeb94(plVar12,lVar6);
      if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
    plVar12 = *(long **)(in_stack_00000078 + 0x80);
    uVar7 = FUN_063683dc();
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar10 = *plVar12;
    lVar6 = *(long *)puVar1;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06368660;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c(plVar12,lVar6,1);
LAB_06368660:
    (*(code *)*puVar8)(plVar12,uVar9,uVar7,puVar8[1]);
  }
  FUN_05e3d544(&stack0x00000050,*(undefined8 *)PTR_DAT_07db5658);
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    FUN_05b0fb30(&stack0x00000008,*(long *)(unaff_x20 + 0x28),*unaff_x29);
    uStack0000000000000058 = in_stack_00000010;
    uStack0000000000000050 = in_stack_00000008;
    uStack0000000000000068 = in_stack_00000020;
    uStack0000000000000060 = in_stack_00000018;
    uStack0000000000000070 = in_stack_00000028;
    while (uVar5 = FUN_05e3d424(&stack0x00000050,*unaff_x25), uVar9 = uStack0000000000000060,
          (uVar5 & 1) != 0) {
      if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar12 = (long *)(in_stack_00000078 + 0x88);
      if (*plVar12 == 0) {
        lVar6 = thunk_FUN_037788cc(*unaff_x26);
        FUN_05b0e950(lVar6,*unaff_x27);
        *plVar12 = lVar6;
        thunk_FUN_037aeb94(plVar12,lVar6);
        if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
      }
      plVar12 = *(long **)(in_stack_00000078 + 0x88);
      uVar7 = FUN_063683dc();
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar10 = *plVar12;
      lVar6 = *(long *)puVar1;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_06368770;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_0377596c(plVar12,lVar6,1);
LAB_06368770:
      (*(code *)*puVar8)(plVar12,uVar9,uVar7,puVar8[1]);
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
        plVar12 = (long *)(in_stack_00000078 + 0x78);
        if (*plVar12 == 0) {
          lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
          FUN_049ce6c0(lVar6,*(undefined8 *)puVar2);
          *plVar12 = lVar6;
          thunk_FUN_037aeb94(plVar12,lVar6);
          if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        plVar12 = *(long **)(in_stack_00000078 + 0x78);
        uVar9 = FUN_063683dc();
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar6 = *plVar12;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_063688a4;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar1,2);
LAB_063688a4:
        (*(code *)*puVar8)(plVar12,uVar9,puVar8[1]);
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
  }
LAB_06368964:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


