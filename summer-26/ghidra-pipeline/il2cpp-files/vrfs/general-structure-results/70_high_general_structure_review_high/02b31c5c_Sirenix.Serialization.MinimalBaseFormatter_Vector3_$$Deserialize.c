/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector3>$$Deserialize
ENTRY_POINT: 02b31c5c
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


undefined8 Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Deserialize(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar6;
  long *unaff_x22;
  undefined4 uVar7;
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
  
code_r0x02b31c5c:
  do {
    uVar1 = (*(code *)*param_1)(unaff_x21,param_1[1]);
    if ((uVar1 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
LAB_02b31dd4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar6 = (long *)unaff_x19[8];
    if (plVar6 == (long *)0x0) goto LAB_02b31dd4;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_015c2790(lVar3);
    }
    lVar4 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02b31cdc;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar6,lVar3,0);
LAB_02b31cdc:
    (*(code *)*puVar2)(&stack0x00000080,plVar6,puVar2[1]);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f0 = in_stack_000000b0;
    if (unaff_x19[6] == 0) {
LAB_02b31d44:
      in_stack_00000088 = in_stack_000000c8;
      in_stack_00000080 = in_stack_000000c0;
      in_stack_00000098 = in_stack_000000d8;
      in_stack_00000090 = in_stack_000000d0;
      in_stack_000000a8 = in_stack_000000e8;
      in_stack_000000a0 = in_stack_000000e0;
      in_stack_000000b0 = in_stack_000000f0;
      if (unaff_x19[7] != 0) {
        uVar7 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 8))()
        ;
        *(undefined4 *)(unaff_x19 + 3) = uVar7;
        *(int *)((long)unaff_x19 + 0x1c) = (int)in_stack_000000e0;
        *(int *)(unaff_x19 + 4) = (int)in_stack_000000d0;
        return 1;
      }
      goto LAB_02b31dd4;
    }
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    in_stack_00000048 = in_stack_00000088;
    in_stack_00000040 = in_stack_00000080;
    in_stack_00000058 = in_stack_00000098;
    in_stack_00000050 = in_stack_00000090;
    in_stack_00000068 = in_stack_000000a8;
    in_stack_00000060 = in_stack_000000a0;
    in_stack_00000070 = in_stack_000000b0;
    uVar1 = (**(code **)(*(long *)(lVar3 + 0x50) + 8))
                      (unaff_x19[6],&stack0x00000040,*(undefined8 *)(lVar3 + 0x50));
    if ((uVar1 & 1) != 0) goto LAB_02b31d44;
    unaff_x21 = (long *)unaff_x19[8];
    if (unaff_x21 == (long *)0x0) goto LAB_02b31dd4;
    lVar3 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          param_1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x02b31c5c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_015c2a80(unaff_x21,*unaff_x22,0);
  } while( true );
}


