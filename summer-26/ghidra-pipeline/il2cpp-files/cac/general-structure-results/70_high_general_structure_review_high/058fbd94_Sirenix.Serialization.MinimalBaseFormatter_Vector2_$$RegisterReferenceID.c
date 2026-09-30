/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector2>$$RegisterReferenceID
ENTRY_POINT: 058fbd94
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_MinimalBaseFormatter<Vector2>__RegisterReferenceID
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  if ((param_1 & 1) == 0) {
    FUN_03f13384(PTR_DAT_0910bb38);
    FUN_03f13384(PTR_DAT_0910d218);
    *(undefined1 *)(unaff_x22 + 0x943) = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = (long *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f4b260(lVar4);
  }
  lVar5 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_058fbe40;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f4b594();
LAB_058fbe40:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_0910d218;
  in_stack_00000038 = &stack0x00000058;
  in_stack_00000030 = 0;
  do {
    in_stack_00000058 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar4 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_058fbeb8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f4b594(plVar3,*(long *)puVar1,0);
LAB_058fbeb8:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = in_stack_00000058;
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)*in_stack_00000038;
      if (plVar3 == (long *)0x0) goto LAB_058fc0bc;
      lVar4 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0)
      goto Sirenix_Serialization_MinimalBaseFormatter<Vector2Int>__get_SerializedType;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f4b260(lVar4);
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_058fbf3c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f4b594(plVar3,lVar4,0);
LAB_058fbf3c:
    (*(code *)*puVar2)(&stack0x00000018,plVar3,puVar2[1]);
    lVar4 = *(long *)(param_2 + 0x10);
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar6 = *(uint *)(param_2 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_058fa4f8(param_2,uVar6 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
      uVar6 = *(uint *)(param_2 + 0x18);
      lVar4 = *(long *)(param_2 + 0x10);
      *(uint *)(param_2 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
    }
    else {
      *(uint *)(param_2 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    lVar4 = lVar4 + (long)(int)uVar6 * 0x18;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000040;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000050;
    thunk_FUN_03f86000(lVar4 + 0x20,0);
    plVar3 = in_stack_00000058;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0910bb38) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_058fc0b0;
    }
  }
Sirenix_Serialization_MinimalBaseFormatter<Vector2Int>__get_SerializedType:
  puVar2 = (undefined8 *)FUN_03f4b594(plVar3,*(long *)PTR_DAT_0910bb38,0);
LAB_058fc0b0:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_058fc0bc:
  if (in_stack_00000030 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f13624();
}


