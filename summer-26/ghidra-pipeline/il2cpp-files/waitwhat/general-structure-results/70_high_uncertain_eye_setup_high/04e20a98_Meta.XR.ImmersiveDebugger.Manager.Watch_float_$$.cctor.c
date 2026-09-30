/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<float>$$.cctor
ENTRY_POINT: 04e20a98
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<float>___cctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  long in_x10;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x29;
  undefined1 in_stack_00000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000034;
  
  piVar12 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar12 + -2) == param_3) {
      puVar9 = (undefined8 *)(param_1 + (long)(*piVar12 + 1) * 0x10 + 0x138);
      goto LAB_04e20c48;
    }
    in_x9 = in_x9 + -1;
    piVar12 = piVar12 + 4;
  } while (in_x9 != 0);
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e20c48:
  uVar1 = (*(code *)*puVar9)();
  lVar10 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000034 = *(undefined4 *)(unaff_x21 + 8);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18),&stack0x00000034);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x29) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_04e20cdc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e20cdc:
  uVar2 = (*(code *)*puVar9)();
  lVar10 = *(long *)(unaff_x22 + 0x20);
  in_stack_00000028 = *(undefined8 *)(unaff_x21 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20),&stack0x00000028);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x29) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_04e20d70;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e20d70:
  uVar3 = (*(code *)*puVar9)();
  lVar10 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000024 = *(undefined4 *)(unaff_x21 + 0x18);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28),&stack0x00000024);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x29) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_04e20e04;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e20e04:
  uVar4 = (*(code *)*puVar9)();
  lVar10 = *(long *)(unaff_x22 + 0x20);
  in_stack_00000018 = *(undefined8 *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x30),&stack0x00000018);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x29) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_04e20e98;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e20e98:
  uVar5 = (*(code *)*puVar9)();
  lVar10 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000014 = *(undefined4 *)(unaff_x21 + 0x28);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x38),&stack0x00000014);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x29) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_04e20f2c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e20f2c:
  uVar6 = (*(code *)*puVar9)();
  lVar10 = *(long *)(unaff_x22 + 0x20);
  in_stack_00000010 = *(undefined1 *)(unaff_x21 + 0x2c);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x40),&stack0x00000010);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x29) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_04e20fc0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e20fc0:
  uVar7 = (*(code *)*puVar9)();
  lVar10 = *unaff_x20;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_070f5978) {
        puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_04e2099c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_031c0d08();
LAB_04e2099c:
  uVar8 = (*(code *)*puVar9)();
  FUN_0594e7e4(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  return;
}


