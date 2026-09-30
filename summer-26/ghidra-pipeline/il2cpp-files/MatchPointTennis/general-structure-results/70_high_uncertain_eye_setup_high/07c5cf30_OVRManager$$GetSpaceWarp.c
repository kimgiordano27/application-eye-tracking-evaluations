/*
FUNCTION_NAME: OVRManager$$GetSpaceWarp
ENTRY_POINT: 07c5cf30
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__GetSpaceWarp(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x26;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  FUN_04447ba8(PTR_DAT_09f500a0);
  FUN_04447ba8(PTR_DAT_09f1e538);
  *(undefined1 *)(unaff_x24 + 0x63f) = 1;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000c8 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  _uStack00000000000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  thunk_FUN_044bb4b4(unaff_x26 + 0x10);
  thunk_FUN_044bb4b4(unaff_x26 + 0x18);
  thunk_FUN_044bb4b4(unaff_x26 + 0x50);
  thunk_FUN_044bb4b4(unaff_x26 + 0x20,0);
  puVar1 = PTR_DAT_09f50098;
  uStack00000000000000ac = 0x7f800000;
  if (unaff_x23 == (long *)0x0) {
LAB_07c5d344:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar8 = *unaff_x23;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f50098) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_07c5d020;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac(unaff_x23,*(long *)PTR_DAT_09f50098,1);
LAB_07c5d020:
  uVar13 = (*(code *)*puVar7)(unaff_x23,0,puVar7[1]);
  in_stack_000000a0 = CONCAT44((int)param_2,uVar13);
  uStack00000000000000a8 = (undefined4)param_3;
  if (unaff_x23 == (long *)0x0) goto LAB_07c5d344;
  lVar9 = *unaff_x23;
  lVar8 = *(long *)puVar1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_07c5d08c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac(unaff_x23,lVar8,0);
LAB_07c5d08c:
  iVar5 = (*(code *)*puVar7)(unaff_x23,puVar7[1]);
  lVar9 = *unaff_x23;
  lVar8 = *(long *)puVar1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_07c5d0ec;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac(unaff_x23,lVar8,1);
LAB_07c5d0ec:
  puVar1 = PTR_DAT_09f1e538;
  uVar14 = (*(code *)*puVar7)(unaff_x23,iVar5 + -1,puVar7[1]);
  if (DAT_0a51bf40 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    DAT_0a51bf40 = '\x01';
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  in_stack_00000008 = 0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000020 = 0;
  FUN_07c5d424(uVar14,param_2,param_3,*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x1c),
               *(undefined4 *)(lVar8 + 0x20));
  *(undefined8 *)(unaff_x26 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x26 + 0x28) = in_stack_00000000;
  *(undefined8 *)(unaff_x26 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x26 + 0x38) = in_stack_00000010;
  in_stack_000000e8 = in_stack_00000020;
  thunk_FUN_044bb4b4(&stack0x000000c8,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  puVar4 = PTR_DAT_09f500a0;
  puVar3 = PTR_DAT_09f50090;
  puVar2 = PTR_DAT_09f50088;
  puVar1 = PTR_DAT_09f50080;
  uVar10 = FUN_09531730(uVar14,0,0);
  if ((uVar10 & 1) != 0) {
    in_stack_00000070 = unaff_x21[2];
    in_stack_00000068 = unaff_x21[1];
    in_stack_00000060 = *unaff_x21;
    FUN_0574318c(&stack0x00000060,*(undefined8 *)puVar4);
    uVar12 = 0;
    in_stack_00000088 = in_stack_00000008;
    in_stack_00000080 = in_stack_00000000;
    in_stack_00000098 = in_stack_00000018;
    in_stack_00000090 = in_stack_00000010;
    while (uVar10 = FUN_05261068(&stack0x00000080,*(undefined8 *)puVar2), (uVar10 & 1) != 0) {
      lVar8 = FUN_05260f24(&stack0x00000080,*(undefined8 *)puVar3);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(char *)(lVar8 + 0xb0) == '\0') {
        if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_09539d64(*(long *)(unaff_x20 + 0x28),0);
        uVar6 = FUN_07c5d5d8();
        uVar12 = uVar12 | uVar6;
      }
    }
    FUN_05261304(&stack0x00000080,*(undefined8 *)puVar1);
    if ((uVar12 & 1) != 0) goto LAB_07c5d2e4;
  }
  in_stack_00000070 = unaff_x21[2];
  in_stack_00000068 = unaff_x21[1];
  in_stack_00000060 = *unaff_x21;
  FUN_0574318c(&stack0x00000060,*(undefined8 *)puVar4);
  in_stack_00000088 = in_stack_00000008;
  in_stack_00000080 = in_stack_00000000;
  in_stack_00000098 = in_stack_00000018;
  in_stack_00000090 = in_stack_00000010;
  while (uVar10 = FUN_05261068(&stack0x00000080,*(undefined8 *)puVar2), (uVar10 & 1) != 0) {
    FUN_05260f24(&stack0x00000080,*(undefined8 *)puVar3);
    FUN_07c5d750();
  }
  FUN_05261304(&stack0x00000080,*(undefined8 *)puVar1);
LAB_07c5d2e4:
  memcpy(&stack0x00000000,&stack0x000000a0,0x58);
  unaff_x19[1] = in_stack_00000030;
  *unaff_x19 = in_stack_00000028;
  unaff_x19[3] = in_stack_00000040;
  unaff_x19[2] = in_stack_00000038;
  unaff_x19[4] = in_stack_00000048;
  thunk_FUN_044bb4b4();
  return 0;
}


