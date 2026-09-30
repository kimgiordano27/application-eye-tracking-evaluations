/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TryDeserialize
ENTRY_POINT: 0453eee0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TryDeserialize(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined1 in_stack_00000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000034;
  
  thunk_FUN_02d9d164();
  puVar1 = PTR_DAT_06767c18;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06767c18) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_0453f04c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f04c:
  uVar2 = (*(code *)*puVar9)();
  uStack0000000000000034 = *(undefined4 *)(unaff_x22 + 8);
  lVar10 = *unaff_x21;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d9a2e0(lVar10);
  }
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18),&stack0x00000034);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_0453f0e4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f0e4:
  uVar3 = (*(code *)*puVar9)();
  in_stack_00000028 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar10 = *unaff_x21;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d9a2e0(lVar10);
  }
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20),&stack0x00000028);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_0453f17c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f17c:
  uVar4 = (*(code *)*puVar9)();
  uStack0000000000000024 = *(undefined4 *)(unaff_x22 + 0x18);
  lVar10 = *unaff_x21;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d9a2e0(lVar10);
  }
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28),&stack0x00000024);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_0453f214;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f214:
  uVar5 = (*(code *)*puVar9)();
  in_stack_00000018 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar10 = *unaff_x21;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d9a2e0(lVar10);
  }
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x30),&stack0x00000018);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_0453f2ac;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f2ac:
  uVar6 = (*(code *)*puVar9)();
  uStack0000000000000014 = *(undefined4 *)(unaff_x22 + 0x28);
  lVar10 = *unaff_x21;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d9a2e0(lVar10);
  }
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x38),&stack0x00000014);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_0453f344;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f344:
  uVar7 = (*(code *)*puVar9)();
  in_stack_00000010 = *(undefined1 *)(unaff_x22 + 0x2c);
  lVar10 = *unaff_x21;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02d9a2e0(lVar10);
  }
  thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x40),&stack0x00000010);
  lVar10 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_0453f3dc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_02d9a5d4();
LAB_0453f3dc:
  uVar8 = (*(code *)*puVar9)();
  FUN_050259a0(uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,0);
  return;
}


