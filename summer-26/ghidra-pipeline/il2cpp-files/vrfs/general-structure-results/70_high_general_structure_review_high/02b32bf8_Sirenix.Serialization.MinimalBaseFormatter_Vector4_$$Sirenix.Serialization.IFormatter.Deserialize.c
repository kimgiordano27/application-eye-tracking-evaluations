/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector4>$$Sirenix.Serialization.IFormatter.Deserialize
ENTRY_POINT: 02b32bf8
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
Sirenix_Serialization_MinimalBaseFormatter<Vector4>__Sirenix_Serialization_IFormatter_Deserialize
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong in_x9;
  int *piVar4;
  long in_x10;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  do {
    piVar4 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_02b32c30;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_015c2a80(unaff_x21,param_3,0);
LAB_02b32c30:
      (*(code *)*puVar1)(&stack0x00000040,unaff_x21,puVar1[1]);
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000078 = in_stack_00000058;
      in_stack_00000070 = in_stack_00000050;
      if (unaff_x19[6] == 0) {
LAB_02b32c78:
        in_stack_00000048 = in_stack_00000068;
        in_stack_00000040 = in_stack_00000060;
        in_stack_00000058 = in_stack_00000078;
        in_stack_00000050 = in_stack_00000070;
        if (unaff_x19[7] != 0) {
          auVar6 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 8)
                   )();
          *(undefined1 (*) [16])(unaff_x19 + 3) = auVar6;
          thunk_FUN_01656ef8((undefined1 (*) [16])(unaff_x19 + 3),0);
          return 1;
        }
LAB_02b32cf4:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      in_stack_00000028 = in_stack_00000048;
      in_stack_00000020 = in_stack_00000040;
      in_stack_00000038 = in_stack_00000058;
      in_stack_00000030 = in_stack_00000050;
      uVar2 = (**(code **)(*(long *)(lVar3 + 0x50) + 8))
                        (unaff_x19[6],&stack0x00000020,*(undefined8 *)(lVar3 + 0x50));
      if ((uVar2 & 1) != 0) goto LAB_02b32c78;
      plVar5 = (long *)unaff_x19[8];
      if (plVar5 == (long *)0x0) goto LAB_02b32cf4;
      lVar3 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_02b32bb0;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_015c2a80(plVar5,*unaff_x22,0);
LAB_02b32bb0:
      uVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
      if ((uVar2 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x1f8))();
          return 0;
        }
        goto LAB_02b32cf4;
      }
      unaff_x21 = (long *)unaff_x19[8];
      if (unaff_x21 == (long *)0x0) goto LAB_02b32cf4;
      param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(param_3 + 0x132) & 1) == 0) {
        param_3 = FUN_015c2790(param_3);
      }
      param_1 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
}


