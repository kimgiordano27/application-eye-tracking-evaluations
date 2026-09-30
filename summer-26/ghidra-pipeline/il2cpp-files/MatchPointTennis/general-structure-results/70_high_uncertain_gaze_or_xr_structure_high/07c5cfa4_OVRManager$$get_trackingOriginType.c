/*
FUNCTION_NAME: OVRManager$$get_trackingOriginType
ENTRY_POINT: 07c5cfa4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


undefined8
OVRManager__get_trackingOriginType(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x26;
  uint uVar13;
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
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  long *in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e8;
  
  thunk_FUN_044bb4b4();
  in_stack_000000c0 = 0;
  thunk_FUN_044bb4b4();
  plVar5 = in_stack_000000b0;
  puVar1 = PTR_DAT_09f50098;
  uStack00000000000000ac = 0x7f800000;
  if (in_stack_000000b0 == (long *)0x0) {
LAB_07c5d344:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar9 = *in_stack_000000b0;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f50098) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_07c5d020;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_044822ac(in_stack_000000b0,*(long *)PTR_DAT_09f50098,1);
LAB_07c5d020:
  uStack00000000000000a0 = (*(code *)*puVar8)(plVar5,0,puVar8[1]);
  plVar5 = in_stack_000000b0;
  uStack00000000000000a4 = (undefined4)param_2;
  in_stack_000000a8 = (undefined4)param_3;
  if (in_stack_000000b0 == (long *)0x0) goto LAB_07c5d344;
  lVar10 = *in_stack_000000b0;
  lVar9 = *(long *)puVar1;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar9) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_07c5d08c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_044822ac(in_stack_000000b0,lVar9,0);
LAB_07c5d08c:
  iVar6 = (*(code *)*puVar8)(plVar5,puVar8[1]);
  lVar10 = *plVar5;
  lVar9 = *(long *)puVar1;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar9) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_07c5d0ec;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_044822ac(plVar5,lVar9,1);
LAB_07c5d0ec:
  puVar1 = PTR_DAT_09f1e538;
  uVar14 = (*(code *)*puVar8)(plVar5,iVar6 + -1,puVar8[1]);
  if (DAT_0a51bf40 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    DAT_0a51bf40 = '\x01';
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  in_stack_00000008 = 0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000020 = 0;
  FUN_07c5d424(uVar14,param_2,param_3,*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
               *(undefined4 *)(lVar9 + 0x20));
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
  uVar11 = FUN_09531730(uVar14,0,0);
  if ((uVar11 & 1) != 0) {
    in_stack_00000070 = unaff_x21[2];
    in_stack_00000068 = unaff_x21[1];
    in_stack_00000060 = *unaff_x21;
    FUN_0574318c(&stack0x00000060,*(undefined8 *)puVar4);
    uVar13 = 0;
    in_stack_00000088 = in_stack_00000008;
    in_stack_00000080 = in_stack_00000000;
    in_stack_00000098 = in_stack_00000018;
    in_stack_00000090 = in_stack_00000010;
    while (uVar11 = FUN_05261068(&stack0x00000080,*(undefined8 *)puVar2), (uVar11 & 1) != 0) {
      lVar9 = FUN_05260f24(&stack0x00000080,*(undefined8 *)puVar3);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(char *)(lVar9 + 0xb0) == '\0') {
        if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_09539d64(*(long *)(unaff_x20 + 0x28),0);
        uVar7 = FUN_07c5d5d8();
        uVar13 = uVar13 | uVar7;
      }
    }
    FUN_05261304(&stack0x00000080,*(undefined8 *)puVar1);
    if ((uVar13 & 1) != 0) goto LAB_07c5d2e4;
  }
  in_stack_00000070 = unaff_x21[2];
  in_stack_00000068 = unaff_x21[1];
  in_stack_00000060 = *unaff_x21;
  FUN_0574318c(&stack0x00000060,*(undefined8 *)puVar4);
  in_stack_00000088 = in_stack_00000008;
  in_stack_00000080 = in_stack_00000000;
  in_stack_00000098 = in_stack_00000018;
  in_stack_00000090 = in_stack_00000010;
  while (uVar11 = FUN_05261068(&stack0x00000080,*(undefined8 *)puVar2), (uVar11 & 1) != 0) {
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
  return in_stack_000000c0;
}


