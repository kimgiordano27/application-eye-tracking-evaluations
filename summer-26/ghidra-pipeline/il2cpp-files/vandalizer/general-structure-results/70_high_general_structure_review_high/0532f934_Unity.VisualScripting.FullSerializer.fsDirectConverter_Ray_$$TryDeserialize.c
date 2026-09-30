/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TryDeserialize
ENTRY_POINT: 0532f934
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TryDeserialize(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long *unaff_x26;
  undefined1 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  puVar4 = (undefined8 *)FUN_0322c1e8();
  uVar1 = (*(code *)*puVar4)();
  uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20),&stack0x0000000c);
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_0532f9e4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_0532f9e4:
  uVar2 = (*(code *)*puVar4)();
  in_stack_00000008 = *(undefined1 *)(unaff_x21 + 0x1c);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28),&stack0x00000008);
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_0532fa7c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0322c1e8();
LAB_0532fa7c:
  uVar3 = (*(code *)*puVar4)();
  FUN_05e205d8(unaff_w22,unaff_w23,uVar1,uVar2,uVar3,0);
  return;
}


