/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<FixedList64Bytes<short>>$$Deserialize
ENTRY_POINT: 04f660fc
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint MagicaCloth2_ExSimpleNativeArray<FixedList64Bytes<short>>__Deserialize
               (long *param_1,long param_2,undefined8 *param_3,uint param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar3 = param_2 + (long)(int)param_4 * 0x28;
      in_stack_000000b0 = *(undefined8 *)(lVar3 + 0x40);
      in_stack_00000098 = *(undefined8 *)(lVar3 + 0x28);
      in_stack_00000090 = *(undefined8 *)(lVar3 + 0x20);
      in_stack_000000a8 = *(undefined8 *)(lVar3 + 0x38);
      in_stack_000000a0 = *(undefined8 *)(lVar3 + 0x30);
      in_stack_00000080 = param_3[4];
      in_stack_00000068 = param_3[1];
      in_stack_00000060 = *param_3;
      in_stack_00000078 = param_3[3];
      in_stack_00000070 = param_3[2];
      uVar2 = (**(code **)(*param_1 + 0x1b8))
                        (param_1,&stack0x00000090,&stack0x00000060,*(undefined8 *)(*param_1 + 0x1c0)
                        );
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  return 0xffffffff;
}


