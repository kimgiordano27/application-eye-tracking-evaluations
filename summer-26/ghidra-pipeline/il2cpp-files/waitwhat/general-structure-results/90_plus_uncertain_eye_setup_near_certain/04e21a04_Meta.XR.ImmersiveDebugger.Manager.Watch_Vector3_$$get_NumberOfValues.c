/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_NumberOfValues
ENTRY_POINT: 04e21a04
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_NumberOfValues(code *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x27;
  undefined4 in_stack_00000018;
  undefined1 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000034;
  
  uVar1 = (*param_1)();
  lVar7 = *(long *)(unaff_x22 + 0x20);
  in_stack_00000018 = *(undefined4 *)(unaff_x21 + 0x18);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),&stack0x00000018);
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x27) {
        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_04e21a94;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_031c0d08();
LAB_04e21a94:
  uVar2 = (*(code *)*puVar8)();
  lVar7 = *(long *)(unaff_x22 + 0x20);
  in_stack_00000028 = *(undefined8 *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x30),&stack0x00000028);
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x27) {
        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_04e21b28;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_031c0d08();
LAB_04e21b28:
  uVar3 = (*(code *)*puVar8)();
  lVar7 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000034 = *(undefined4 *)(unaff_x21 + 0x28);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38),&stack0x00000034);
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x27) {
        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_04e21bbc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_031c0d08();
LAB_04e21bbc:
  uVar4 = (*(code *)*puVar8)();
  lVar7 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000024 = *(undefined1 *)(unaff_x21 + 0x2c);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x40),&stack0x00000024);
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x27) {
        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_04e21c50;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_031c0d08();
LAB_04e21c50:
  uVar5 = (*(code *)*puVar8)();
  lVar7 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_070f5978) {
        puVar8 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04e2099c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_031c0d08();
LAB_04e2099c:
  uVar6 = (*(code *)*puVar8)();
  FUN_0594e68c(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,0);
  return;
}


