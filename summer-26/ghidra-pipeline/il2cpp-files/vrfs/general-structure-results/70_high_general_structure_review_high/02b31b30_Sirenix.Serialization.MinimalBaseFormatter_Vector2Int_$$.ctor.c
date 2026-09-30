/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector2Int>$$.ctor
ENTRY_POINT: 02b31b30
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 Sirenix_Serialization_MinimalBaseFormatter<Vector2Int>___ctor(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar7;
  undefined4 uVar8;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  thunk_FUN_0159f088(PTR_DAT_06ddc938);
  *(undefined1 *)(unaff_x21 + 0x65c) = 1;
  puVar1 = PTR_DAT_06ddc938;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  if (*(int *)((long)unaff_x19 + 0x14) != 2) {
    if (*(int *)((long)unaff_x19 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)unaff_x19[5];
    if (plVar7 == (long *)0x0) goto LAB_02b31dd4;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_015c2790(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02b31be0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar7,lVar3,0);
LAB_02b31be0:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    unaff_x19[8] = lVar3;
    thunk_FUN_01656ef8(unaff_x19 + 8,lVar3);
    *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)unaff_x19[8];
    if (plVar7 == (long *)0x0) goto LAB_02b31dd4;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Deserialize;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar1,0);
Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Deserialize:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto LAB_02b31dd4;
    }
    plVar7 = (long *)unaff_x19[8];
    if (plVar7 == (long *)0x0) goto LAB_02b31dd4;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_015c2790(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02b31cdc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar7,lVar3,0);
LAB_02b31cdc:
    (*(code *)*puVar2)(&stack0x00000080,plVar7,puVar2[1]);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f0 = in_stack_000000b0;
    if (unaff_x19[6] == 0) break;
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    in_stack_00000048 = in_stack_00000088;
    in_stack_00000040 = in_stack_00000080;
    in_stack_00000058 = in_stack_00000098;
    in_stack_00000050 = in_stack_00000090;
    in_stack_00000068 = in_stack_000000a8;
    in_stack_00000060 = in_stack_000000a0;
    in_stack_00000070 = in_stack_000000b0;
    uVar5 = (**(code **)(*(long *)(lVar3 + 0x50) + 8))
                      (unaff_x19[6],&stack0x00000040,*(undefined8 *)(lVar3 + 0x50));
  } while ((uVar5 & 1) == 0);
  in_stack_00000088 = in_stack_000000c8;
  in_stack_00000080 = in_stack_000000c0;
  in_stack_00000098 = in_stack_000000d8;
  in_stack_00000090 = in_stack_000000d0;
  in_stack_000000a8 = in_stack_000000e8;
  in_stack_000000a0 = in_stack_000000e0;
  in_stack_000000b0 = in_stack_000000f0;
  if (unaff_x19[7] != 0) {
    uVar8 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 8))();
    *(undefined4 *)(unaff_x19 + 3) = uVar8;
    *(int *)((long)unaff_x19 + 0x1c) = (int)in_stack_000000e0;
    *(int *)(unaff_x19 + 4) = (int)in_stack_000000d0;
    return 1;
  }
LAB_02b31dd4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


