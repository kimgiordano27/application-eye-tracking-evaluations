/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Unity.Netcode.INetworkVariableSerializer<T>.ReadWithAllocator
ENTRY_POINT: 04bb4cb4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


uint Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Unity_Netcode_INetworkVariableSerializer<T>_ReadWithAllocator
               (long *param_1,long param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      uVar2 = (**(code **)(*param_1 + 0x1b8))
                        (param_1,*(undefined4 *)(param_2 + (long)(int)param_4 * 4 + 0x20),param_3,
                         *(undefined8 *)(*param_1 + 0x1c0));
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  return 0xffffffff;
}


