/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Quaternion>$$Sirenix.Serialization.IFormatter.Deserialize
ENTRY_POINT: 02b2fd3c
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
Sirenix_Serialization_MinimalBaseFormatter<Quaternion>__Sirenix_Serialization_IFormatter_Deserialize
          (code *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
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
  
  lVar2 = (*param_1)();
  unaff_x19[7] = lVar2;
  thunk_FUN_01656ef8(unaff_x19 + 7,lVar2);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  do {
                    /* try { // try from 02b2fd5c to 02c2fd63 has its CatchHandler @ 02b2ffe4 */
    plVar7 = (long *)unaff_x19[7];
    if (plVar7 == (long *)0x0) goto LAB_02b2ff24;
    lVar2 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 02b2fd7c to 02c2fd7f has its CatchHandler @ 02b2ffe0 */
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02b2fdb0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar7,*unaff_x22,0);
LAB_02b2fdb0:
    uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto LAB_02b2ff24;
    }
    plVar7 = (long *)unaff_x19[7];
    if (plVar7 == (long *)0x0) goto LAB_02b2ff24;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_015c2790(lVar2);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02b2fe30;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar7,lVar2,0);
LAB_02b2fe30:
    (*(code *)*puVar3)(&stack0x00000080,plVar7,puVar3[1]);
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
    uVar5 = (**(code **)(*(long *)(lVar2 + 0x50) + 8))
                      (unaff_x19[5],&stack0x00000040,*(undefined8 *)(lVar2 + 0x50));
  } while ((uVar5 & 1) == 0);
  in_stack_00000088 = in_stack_000000c8;
  in_stack_00000080 = in_stack_000000c0;
  in_stack_00000098 = in_stack_000000d8;
  in_stack_00000090 = in_stack_000000d0;
  in_stack_000000a8 = in_stack_000000e8;
  in_stack_000000a0 = in_stack_000000e0;
  in_stack_000000b0 = in_stack_000000f0;
  if (unaff_x19[6] != 0) {
    uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 8))();
    *(undefined4 *)(unaff_x19 + 3) = uVar1;
    return 1;
  }
LAB_02b2ff24:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


