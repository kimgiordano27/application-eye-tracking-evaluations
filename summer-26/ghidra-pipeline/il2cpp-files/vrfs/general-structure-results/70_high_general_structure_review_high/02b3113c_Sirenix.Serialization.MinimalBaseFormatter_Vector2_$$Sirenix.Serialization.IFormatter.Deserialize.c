/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector2>$$Sirenix.Serialization.IFormatter.Deserialize
ENTRY_POINT: 02b3113c
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


undefined8
Sirenix_Serialization_MinimalBaseFormatter<Vector2>__Sirenix_Serialization_IFormatter_Deserialize
          (void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar6;
  long *unaff_x22;
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
  
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_015c2790(lVar2);
  }
  lVar3 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02b311a4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_015c2a80();
LAB_02b311a4:
  lVar2 = (*(code *)*puVar1)();
  unaff_x19[7] = lVar2;
  thunk_FUN_01656ef8(unaff_x19 + 7,lVar2);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  do {
    plVar6 = (long *)unaff_x19[7];
    if (plVar6 == (long *)0x0) goto LAB_02b313a0;
    lVar2 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02b31220;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x22,0);
LAB_02b31220:
    uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto LAB_02b313a0;
    }
    plVar6 = (long *)unaff_x19[7];
    if (plVar6 == (long *)0x0) goto LAB_02b313a0;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_015c2790(lVar2);
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02b312a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80(plVar6,lVar2,0);
LAB_02b312a0:
    (*(code *)*puVar1)(&stack0x00000080,plVar6,puVar1[1]);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f0 = in_stack_000000b0;
    if (unaff_x19[5] == 0) break;
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    in_stack_00000048 = in_stack_00000088;
    in_stack_00000040 = in_stack_00000080;
    in_stack_00000058 = in_stack_00000098;
    in_stack_00000050 = in_stack_00000090;
    in_stack_00000068 = in_stack_000000a8;
    in_stack_00000060 = in_stack_000000a0;
    in_stack_00000070 = in_stack_000000b0;
    uVar4 = (**(code **)(*(long *)(lVar2 + 0x50) + 8))
                      (unaff_x19[5],&stack0x00000040,*(undefined8 *)(lVar2 + 0x50));
  } while ((uVar4 & 1) == 0);
  in_stack_00000088 = in_stack_000000c8;
  in_stack_00000080 = in_stack_000000c0;
  in_stack_00000098 = in_stack_000000d8;
  in_stack_00000090 = in_stack_000000d0;
  in_stack_000000a8 = in_stack_000000e8;
  in_stack_000000a0 = in_stack_000000e0;
  in_stack_000000b0 = in_stack_000000f0;
  if (unaff_x19[6] != 0) {
    lVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 8))();
    unaff_x19[3] = lVar2;
    thunk_FUN_01656ef8(unaff_x19 + 3,lVar2);
    return 1;
  }
LAB_02b313a0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


