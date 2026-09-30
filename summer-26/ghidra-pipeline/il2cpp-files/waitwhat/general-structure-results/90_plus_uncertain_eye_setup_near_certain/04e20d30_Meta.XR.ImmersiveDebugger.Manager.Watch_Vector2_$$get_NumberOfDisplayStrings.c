/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfDisplayStrings
ENTRY_POINT: 04e20d30
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfDisplayStrings
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  long *unaff_x29;
  undefined1 in_stack_00000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000024;
  
  piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar10 + -2) == param_3) {
      puVar7 = (undefined8 *)(param_1 + (long)(*piVar10 + 1) * 0x10 + 0x138);
      goto LAB_04e20d70;
    }
    in_x9 = in_x9 + -1;
    piVar10 = piVar10 + 4;
  } while (in_x9 != 0);
  puVar7 = (undefined8 *)FUN_031c0d08();
LAB_04e20d70:
  uVar1 = (*(code *)*puVar7)();
  lVar8 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000024 = *(undefined4 *)(unaff_x21 + 0x18);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),&stack0x00000024);
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x29) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_04e20e04;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_031c0d08();
LAB_04e20e04:
  uVar2 = (*(code *)*puVar7)();
  lVar8 = *(long *)(unaff_x22 + 0x20);
  in_stack_00000018 = *(undefined8 *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x30),&stack0x00000018);
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x29) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_04e20e98;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_031c0d08();
LAB_04e20e98:
  uVar3 = (*(code *)*puVar7)();
  lVar8 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000014 = *(undefined4 *)(unaff_x21 + 0x28);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38),&stack0x00000014);
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x29) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_04e20f2c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_031c0d08();
LAB_04e20f2c:
  uVar4 = (*(code *)*puVar7)();
  lVar8 = *(long *)(unaff_x22 + 0x20);
  in_stack_00000010 = *(undefined1 *)(unaff_x21 + 0x2c);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40),&stack0x00000010);
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x29) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_04e20fc0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_031c0d08();
LAB_04e20fc0:
  uVar5 = (*(code *)*puVar7)();
  lVar8 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_070f5978) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04e2099c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_031c0d08();
LAB_04e2099c:
  uVar6 = (*(code *)*puVar7)();
  FUN_0594e7e4(unaff_w23,unaff_w24,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}


