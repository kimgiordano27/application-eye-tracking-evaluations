/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$get_ModelType
ENTRY_POINT: 0532f79c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__get_ModelType(void)

{
  undefined *puVar1;
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
  long unaff_x20;
  long unaff_x21;
  undefined1 in_stack_00000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 uStack000000000000001c;
  
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  thunk_FUN_0322ed78(**(undefined8 **)(lVar7 + 0xc0),&stack0x00000028);
  puVar1 = PTR_DAT_075d6ae8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_075d6ae8) {
        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_0532f81c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_0322c1e8();
LAB_0532f81c:
  uVar2 = (*(code *)*puVar8)();
  uStack000000000000001c = *(undefined4 *)(unaff_x21 + 8);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4(lVar7);
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10),&stack0x0000001c);
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_0532f8b4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_0322c1e8();
LAB_0532f8b4:
  uVar3 = (*(code *)*puVar8)();
  in_stack_00000010 = *(undefined8 *)(unaff_x21 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4(lVar7);
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18),&stack0x00000010);
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_0532f94c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_0322c1e8();
LAB_0532f94c:
  uVar4 = (*(code *)*puVar8)();
  uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4(lVar7);
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20),&stack0x0000000c);
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_0532f9e4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_0322c1e8();
LAB_0532f9e4:
  uVar5 = (*(code *)*puVar8)();
  in_stack_00000008 = *(undefined1 *)(unaff_x21 + 0x1c);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4(lVar7);
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28),&stack0x00000008);
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_0532fa7c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar8 = (undefined8 *)FUN_0322c1e8();
LAB_0532fa7c:
  uVar6 = (*(code *)*puVar8)();
  FUN_05e205d8(uVar2,uVar3,uVar4,uVar5,uVar6,0);
  return;
}


