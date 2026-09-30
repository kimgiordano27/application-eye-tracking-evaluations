/*
FUNCTION_NAME: Unity.Entities.ArchetypeChunk$$GetNativeArray<PostTransformMatrix>
ENTRY_POINT: 03c5a09c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c5a220) */
/* WARNING: Removing unreachable block (ram,0x03c5a234) */
/* WARNING: Removing unreachable block (ram,0x03c5a240) */
/* WARNING: Removing unreachable block (ram,0x03c5a24c) */
/* WARNING: Removing unreachable block (ram,0x03c5a250) */
/* WARNING: Removing unreachable block (ram,0x03c5a258) */
/* WARNING: Removing unreachable block (ram,0x03c5a25c) */
/* WARNING: Removing unreachable block (ram,0x03c5a26c) */
/* WARNING: Removing unreachable block (ram,0x03c5a270) */
/* WARNING: Removing unreachable block (ram,0x03c5a2a8) */

long Unity_Entities_ArchetypeChunk__GetNativeArray<PostTransformMatrix>(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  int *in_x10;
  int *piVar8;
  uint *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  uint uVar9;
  undefined1 auVar10 [16];
  long in_stack_00000008;
  
code_r0x03c5a09c:
  puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  uVar9 = unaff_w24;
  while (uVar3 = (*(code *)*puVar4)(), lVar2 = in_stack_00000008, (uVar3 & 1) != 0) {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (uVar9 == *(uint *)(in_stack_00000008 + 0x18)) {
      uVar1 = unaff_w22;
      if ((int)unaff_w22 <= (int)uVar9) {
        uVar1 = uVar9 + 1;
      }
      if (uVar9 << 1 <= unaff_w22) {
        uVar1 = uVar9 << 1;
      }
      FUN_03b0ebec(&stack0x00000008,uVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x50));
    }
    lVar2 = in_stack_00000008;
    unaff_w24 = uVar9 + 1;
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    lVar6 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03c5a15c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8();
LAB_03c5a15c:
    auVar10 = (*(code *)*puVar4)();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    pauVar7 = (undefined1 (*) [16])(lVar2 + (long)(int)uVar9 * 0x10 + 0x20);
    *pauVar7 = auVar10;
    thunk_FUN_03048534(pauVar7,0);
    param_1 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x23) goto code_r0x03c5a09c;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8();
    uVar9 = unaff_w24;
  }
  *unaff_x19 = uVar9;
  if (unaff_x21 != (long *)0x0) {
    lVar5 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06f70b30) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03c5a204;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8();
LAB_03c5a204:
    (*(code *)*puVar4)();
  }
  return lVar2;
}


