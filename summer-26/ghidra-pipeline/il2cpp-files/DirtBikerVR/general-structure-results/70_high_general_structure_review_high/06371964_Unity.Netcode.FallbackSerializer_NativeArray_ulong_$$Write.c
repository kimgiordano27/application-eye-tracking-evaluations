/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Write
ENTRY_POINT: 06371964
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8
Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Write
          (long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (param_2 != (long *)0x0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090(lVar3);
    }
    lVar3 = thunk_FUN_03ac73c0(param_2,lVar3);
    if (lVar3 != 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090(lVar3);
      }
      if (*(long *)(*param_2 + 0x40) == *(long *)(lVar3 + 0x40)) {
        puVar1 = (undefined8 *)thunk_FUN_03ac7604();
        in_stack_00000048 = puVar1[3];
        in_stack_00000040 = puVar1[2];
        in_stack_00000058 = puVar1[5];
        in_stack_00000050 = puVar1[4];
        in_stack_00000038 = puVar1[1];
        in_stack_00000030 = *puVar1;
        uVar2 = (**(code **)(*param_1 + 0x1c8))
                          (param_1,&stack0x00000030,*(undefined8 *)(*param_1 + 0x1d0));
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(param_2);
    }
    FUN_0677195c(2,0);
  }
  return 0;
}


