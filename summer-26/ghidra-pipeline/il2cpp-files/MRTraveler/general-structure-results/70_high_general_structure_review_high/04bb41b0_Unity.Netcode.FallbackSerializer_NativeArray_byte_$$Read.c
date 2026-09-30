/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<byte>>$$Read
ENTRY_POINT: 04bb41b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint Unity_Netcode_FallbackSerializer<NativeArray<byte>>__Read
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined4 *unaff_x23;
  
  while( true ) {
    uVar1 = (**(code **)(param_1 + 0x1b8))(param_2,param_3,param_4,param_5);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x22 = unaff_x22 + -1;
    if (unaff_x22 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    param_1 = *unaff_x21;
    param_2 = unaff_x23[1];
    param_3 = unaff_x23[2];
    param_4 = unaff_x23[3];
    param_5 = unaff_x23[4];
    unaff_x23 = unaff_x23 + 4;
  }
  return 0xffffffff;
}


