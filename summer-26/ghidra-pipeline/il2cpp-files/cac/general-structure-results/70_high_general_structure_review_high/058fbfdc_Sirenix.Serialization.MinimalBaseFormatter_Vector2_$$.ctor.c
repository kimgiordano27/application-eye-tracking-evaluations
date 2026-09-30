/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector2>$$.ctor
ENTRY_POINT: 058fbfdc
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_MinimalBaseFormatter<Vector2>___ctor
               (long param_1,undefined1 param_2 [16])

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  uVar9 = param_2._8_8_;
  uVar8 = param_2._0_8_;
  do {
    *(undefined8 *)(param_1 + 0x28) = uVar9;
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    *(undefined8 *)(param_1 + 0x30) = in_stack_00000010;
    thunk_FUN_03f86000(param_1 + 0x20,0);
    plVar7 = in_stack_00000058;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar2 = *in_stack_00000058;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_058fbeb8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f4b594(in_stack_00000058,*unaff_x22,0);
LAB_058fbeb8:
    uVar5 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    plVar7 = in_stack_00000058;
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)*in_stack_00000038;
      if (plVar7 == (long *)0x0) goto LAB_058fc0bc;
      lVar2 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 == 0)
      goto Sirenix_Serialization_MinimalBaseFormatter<Vector2Int>__get_SerializedType;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f4b260(lVar2);
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_058fbf3c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f4b594(plVar7,lVar2,0);
LAB_058fbf3c:
    (*(code *)*puVar1)(&stack0x00000018,plVar7,puVar1[1]);
    param_1 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    if (uVar4 == *(uint *)(param_1 + 0x18)) {
      FUN_058fa4f8();
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      param_1 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    param_1 = param_1 + (long)(int)uVar4 * (long)unaff_w23;
    uVar8 = in_stack_00000040;
    uVar9 = in_stack_00000048;
    in_stack_00000010 = in_stack_00000050;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0910bb38) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_058fc0b0;
    }
  }
Sirenix_Serialization_MinimalBaseFormatter<Vector2Int>__get_SerializedType:
  puVar1 = (undefined8 *)FUN_03f4b594(plVar7,*(long *)PTR_DAT_0910bb38,0);
LAB_058fc0b0:
  (*(code *)*puVar1)(plVar7,puVar1[1]);
LAB_058fc0bc:
  if (in_stack_00000030 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f13624();
}


