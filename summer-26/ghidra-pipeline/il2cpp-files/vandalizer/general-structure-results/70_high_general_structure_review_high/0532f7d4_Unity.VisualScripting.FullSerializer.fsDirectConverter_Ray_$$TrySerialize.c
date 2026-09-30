/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TrySerialize
ENTRY_POINT: 0532f7d4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TrySerialize(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x26;
  undefined1 in_stack_00000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 uStack000000000000001c;
  
  if (in_x9 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(param_1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0532f81c;
      }
      in_x9 = in_x9 + -1;
      piVar9 = piVar9 + 4;
    } while (in_x9 != 0);
  }
  puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_0532f81c:
  uVar1 = (*(code *)*puVar6)();
  uStack000000000000001c = *(undefined4 *)(unaff_x21 + 8);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4(lVar7);
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10),&stack0x0000001c);
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0532f8b4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_0532f8b4:
  uVar2 = (*(code *)*puVar6)();
  in_stack_00000010 = *(undefined8 *)(unaff_x21 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4(lVar7);
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18),&stack0x00000010);
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0532f94c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_0532f94c:
  uVar3 = (*(code *)*puVar6)();
  uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4(lVar7);
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20),&stack0x0000000c);
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0532f9e4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_0532f9e4:
  uVar4 = (*(code *)*puVar6)();
  in_stack_00000008 = *(undefined1 *)(unaff_x21 + 0x1c);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4(lVar7);
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),&stack0x00000008);
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0532fa7c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_0322c1e8();
LAB_0532fa7c:
  uVar5 = (*(code *)*puVar6)();
  FUN_05e205d8(uVar1,uVar2,uVar3,uVar4,uVar5,0);
  return;
}


