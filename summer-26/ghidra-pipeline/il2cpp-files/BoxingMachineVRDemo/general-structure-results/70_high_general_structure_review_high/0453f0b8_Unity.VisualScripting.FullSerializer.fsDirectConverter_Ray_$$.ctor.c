/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$.ctor
ENTRY_POINT: 0453f0b8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  long *unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x28;
  undefined1 in_stack_00000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  
  do {
    in_x9 = in_x9 + -1;
    piVar11 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar8 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_0453f0e4;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar11;
  } while (*plVar1 != param_3);
  puVar8 = (undefined8 *)(param_1 + (long)(*piVar11 + 1) * 0x10 + 0x138);
LAB_0453f0e4:
  uVar2 = (*(code *)*puVar8)();
  in_stack_00000028 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar9 = *unaff_x21;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
  }
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20),&stack0x00000028);
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_0453f17c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f17c:
  uVar3 = (*(code *)*puVar8)();
  uStack0000000000000024 = *(undefined4 *)(unaff_x22 + 0x18);
  lVar9 = *unaff_x21;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
  }
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28),&stack0x00000024);
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_0453f214;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f214:
  uVar4 = (*(code *)*puVar8)();
  in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar9 = *unaff_x21;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
  }
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x30),&stack0x00000018);
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_0453f2ac;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f2ac:
  uVar5 = (*(code *)*puVar8)();
  uStack0000000000000014 = *(undefined4 *)(unaff_x22 + 0x28);
  lVar9 = *unaff_x21;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
  }
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x38),&stack0x00000014);
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_0453f344;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f344:
  uVar6 = (*(code *)*puVar8)();
  in_stack_00000010 = *(undefined1 *)(unaff_x22 + 0x2c);
  lVar9 = *unaff_x21;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d9a2e0(lVar9);
  }
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x40),&stack0x00000010);
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_0453f3dc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f3dc:
  uVar7 = (*(code *)*puVar8)();
  FUN_050259a0(unaff_w20,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,0);
  return;
}


