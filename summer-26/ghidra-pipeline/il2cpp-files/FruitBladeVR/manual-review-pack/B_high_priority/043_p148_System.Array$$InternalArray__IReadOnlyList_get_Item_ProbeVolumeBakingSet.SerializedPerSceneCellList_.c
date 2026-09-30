/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 0209767c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0209794c) */

void System_Array__InternalArray__IReadOnlyList_get_Item<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  uint uVar7;
  long *unaff_x22;
  long *in_stack_00000150;
  long in_stack_00000218;
  
  while (uVar1 = thunk_FUN_02f7970c(param_1,param_2,param_3), (uVar1 & 1) == 0) {
    uVar1 = FUN_027ac51c(&stack0x000000f0,
                         *(undefined8 *)(*(long *)(in_stack_00000218 + 0x38) + 0x78));
    unaff_x20 = in_stack_00000150;
    if ((uVar1 & 1) == 0) {
      uVar7 = 0x10;
      goto LAB_020978fc;
    }
    if (in_stack_00000150 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar5 = *in_stack_00000150;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02097654;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c8cb54(in_stack_00000150,*unaff_x22,0);
LAB_02097654:
    param_1 = (*(code *)*puVar2)(unaff_x20,puVar2[1]);
    param_2 = FUN_037e7db4(&stack0x000001f0,0);
    param_3 = 0;
  }
  lVar5 = *unaff_x20;
  uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar1 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x22) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_0209783c;
      }
      uVar1 = uVar1 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_01c8cb54(unaff_x20,*unaff_x22,1);
LAB_0209783c:
  uVar3 = (*(code *)*puVar2)(unaff_x20,puVar2[1]);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
  thunk_FUN_01cc8040((undefined8 *)(unaff_x19 + 0xb0),uVar3);
  plVar4 = (long *)FUN_037eb3f0(uVar3,0);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03cb7210) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_020978e4;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c8cb54(plVar4,*(long *)PTR_DAT_03cb7210,0);
LAB_020978e4:
    (*(code *)*puVar2)(plVar4);
  }
  uVar7 = 0xf;
LAB_020978fc:
  FUN_027ac970(&stack0x000000f0,*(undefined8 *)(*(long *)(in_stack_00000218 + 0x38) + 0x80));
  if ((uVar7 | 0x10) == 0x10) {
    *(undefined4 *)(unaff_x19 + 0xa8) = 4;
  }
  return;
}


