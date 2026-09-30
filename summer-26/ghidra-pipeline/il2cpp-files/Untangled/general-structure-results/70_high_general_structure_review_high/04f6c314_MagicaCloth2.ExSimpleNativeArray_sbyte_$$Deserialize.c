/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<sbyte>$$Deserialize
ENTRY_POINT: 04f6c314
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint MagicaCloth2_ExSimpleNativeArray<sbyte>__Deserialize
               (long *param_1,long param_2,undefined8 *param_3,uint param_4,int param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  if ((int)param_4 < (int)(param_5 + param_4)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    puVar2 = (undefined8 *)(param_2 + (long)(int)param_4 * 0x30 + 0x20);
    lVar3 = (long)(int)(param_5 + param_4) - (long)(int)param_4;
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      in_stack_000000a8 = puVar2[3];
      in_stack_000000a0 = puVar2[2];
      in_stack_000000b8 = puVar2[5];
      in_stack_000000b0 = puVar2[4];
      in_stack_00000098 = puVar2[1];
      in_stack_00000090 = *puVar2;
      in_stack_00000078 = param_3[3];
      in_stack_00000070 = param_3[2];
      in_stack_00000088 = param_3[5];
      in_stack_00000080 = param_3[4];
      in_stack_00000068 = param_3[1];
      in_stack_00000060 = *param_3;
      uVar1 = (**(code **)(*param_1 + 0x1b8))
                        (param_1,&stack0x00000090,&stack0x00000060,*(undefined8 *)(*param_1 + 0x1c0)
                        );
      if ((uVar1 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 + 1;
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + 6;
    } while (lVar3 != 0);
  }
  return 0xffffffff;
}


