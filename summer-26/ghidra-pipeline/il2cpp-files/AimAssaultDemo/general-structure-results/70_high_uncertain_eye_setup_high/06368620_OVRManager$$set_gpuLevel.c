/*
FUNCTION_NAME: OVRManager$$set_gpuLevel
ENTRY_POINT: 06368620
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__set_gpuLevel(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong in_x9;
  int *piVar10;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar11;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  
  do {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar7 = (undefined8 *)(param_1 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_063685a4;
      }
      in_x9 = in_x9 - 1;
      piVar10 = piVar10 + 4;
    } while (in_x9 != 0);
    do {
      puVar7 = (undefined8 *)FUN_0377596c(unaff_x22,param_3,1);
LAB_063685a4:
      (*(code *)*puVar7)(unaff_x22,unaff_x21,unaff_x23,puVar7[1]);
      uVar5 = FUN_05e3d424(&stack0x00000050,*unaff_x25);
      unaff_x21 = in_stack_00000060;
      if ((uVar5 & 1) == 0) {
        FUN_05e3d544(&stack0x00000050,*(undefined8 *)PTR_DAT_07db5658);
        if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_06368964;
        FUN_05b0fb30(&stack0x00000008,*(long *)(unaff_x20 + 0x28),*unaff_x29);
        in_stack_00000058 = in_stack_00000010;
        in_stack_00000050 = in_stack_00000008;
        in_stack_00000068 = in_stack_00000020;
        in_stack_00000060 = in_stack_00000018;
        in_stack_00000070 = in_stack_00000028;
        goto LAB_063686b4;
      }
      if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar11 = (long *)(in_stack_00000078 + 0x80);
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
      unaff_x22 = *(long **)(in_stack_00000078 + 0x80);
      unaff_x23 = FUN_063683dc();
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      param_1 = *unaff_x22;
      param_3 = *unaff_x28;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
LAB_063686b4:
  uVar5 = FUN_05e3d424(&stack0x00000050,*unaff_x25);
  uVar9 = in_stack_00000060;
  if ((uVar5 & 1) == 0) goto LAB_06368788;
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
  uVar8 = FUN_063683dc();
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
        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_06368770;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0377596c(plVar11,*unaff_x28,1);
LAB_06368770:
  (*(code *)*puVar7)(plVar11,uVar9,uVar8,puVar7[1]);
  goto LAB_063686b4;
LAB_06368788:
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
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_063688a4;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar1,2);
LAB_063688a4:
      (*(code *)*puVar7)(plVar11,uVar9,puVar7[1]);
    }
    FUN_05d64e94(&stack0x00000030,*(undefined8 *)PTR_DAT_07db5660);
    lVar6 = in_stack_00000078;
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      uVar9 = FUN_063683dc();
      if (lVar6 == 0) goto LAB_06368964;
      puVar7 = (undefined8 *)(lVar6 + 0x90);
      *puVar7 = uVar9;
      thunk_FUN_037aeb94(puVar7,uVar9);
    }
    lVar6 = in_stack_00000078;
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      uVar9 = FUN_063683dc();
      if (lVar6 == 0) goto LAB_06368964;
      puVar7 = (undefined8 *)(lVar6 + 0x98);
      *puVar7 = uVar9;
      thunk_FUN_037aeb94(puVar7,uVar9);
    }
    return in_stack_00000078;
  }
LAB_06368964:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


