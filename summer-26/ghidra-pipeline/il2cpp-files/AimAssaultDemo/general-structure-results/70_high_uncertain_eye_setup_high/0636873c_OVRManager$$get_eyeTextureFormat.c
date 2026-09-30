/*
FUNCTION_NAME: OVRManager$$get_eyeTextureFormat
ENTRY_POINT: 0636873c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__get_eyeTextureFormat(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong in_x9;
  int *in_x10;
  int *piVar9;
  long in_x11;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar10;
  long *unaff_x22;
  undefined8 unaff_x23;
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
  long in_stack_00000078;
  
  do {
    if (in_x11 == param_3) {
      puVar7 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_063686b4;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar7 = (undefined8 *)FUN_0377596c(unaff_x22,param_3,1);
LAB_063686b4:
        (*(code *)*puVar7)(unaff_x22,unaff_x21,unaff_x23,puVar7[1]);
        uVar5 = FUN_05e3d424(&stack0x00000050,*unaff_x25);
        unaff_x21 = in_stack_00000060;
        if ((uVar5 & 1) == 0) {
          FUN_05e3d544(&stack0x00000050,*(undefined8 *)PTR_DAT_07db5658);
          if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_06368964;
          FUN_049cf910(&stack0x00000008,*(long *)(unaff_x20 + 0x30),*(undefined8 *)PTR_DAT_07db5698)
          ;
          puVar4 = PTR_DAT_07db5668;
          puVar3 = PTR_DAT_07db33b0;
          puVar2 = PTR_DAT_07db33a0;
          puVar1 = PTR_DAT_07db3348;
          in_stack_00000038 = in_stack_00000010;
          in_stack_00000030 = in_stack_00000008;
          in_stack_00000040 = in_stack_00000018;
          goto LAB_063687e8;
        }
        if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar10 = (long *)(in_stack_00000078 + 0x88);
        if (*plVar10 == 0) {
          lVar6 = thunk_FUN_037788cc(*unaff_x26);
          FUN_05b0e950(lVar6,*unaff_x27);
          *plVar10 = lVar6;
          thunk_FUN_037aeb94(plVar10,lVar6);
          if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        unaff_x22 = *(long **)(in_stack_00000078 + 0x88);
        unaff_x23 = FUN_063683dc();
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        param_1 = *unaff_x22;
        param_3 = *unaff_x28;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
LAB_063687e8:
  uVar5 = FUN_05d64e98(&stack0x00000030,*(undefined8 *)puVar4);
  if ((uVar5 & 1) == 0) goto LAB_063688b8;
  if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar10 = (long *)(in_stack_00000078 + 0x78);
  if (*plVar10 == 0) {
    lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
    FUN_049ce6c0(lVar6,*(undefined8 *)puVar2);
    *plVar10 = lVar6;
    thunk_FUN_037aeb94(plVar10,lVar6);
    if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
  plVar10 = *(long **)(in_stack_00000078 + 0x78);
  uVar8 = FUN_063683dc();
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar6 = *plVar10;
  uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_063688a4;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar1,2);
LAB_063688a4:
  (*(code *)*puVar7)(plVar10,uVar8,puVar7[1]);
  goto LAB_063687e8;
LAB_063688b8:
  FUN_05d64e94(&stack0x00000030,*(undefined8 *)PTR_DAT_07db5660);
  lVar6 = in_stack_00000078;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    uVar8 = FUN_063683dc();
    if (lVar6 == 0) goto LAB_06368964;
    puVar7 = (undefined8 *)(lVar6 + 0x90);
    *puVar7 = uVar8;
    thunk_FUN_037aeb94(puVar7,uVar8);
  }
  lVar6 = in_stack_00000078;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    uVar8 = FUN_063683dc();
    if (lVar6 == 0) {
LAB_06368964:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    puVar7 = (undefined8 *)(lVar6 + 0x98);
    *puVar7 = uVar8;
    thunk_FUN_037aeb94(puVar7,uVar8);
  }
  return in_stack_00000078;
}


