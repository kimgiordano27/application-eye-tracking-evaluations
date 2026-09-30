/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Duplicate
ENTRY_POINT: 04bb4ce8
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


uint Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Duplicate(void)

{
  ulong uVar1;
  uint in_w8;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w23;
  
  while( true ) {
    if (in_w8 <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar1 = (**(code **)(*unaff_x21 + 0x1b8))();
    if ((uVar1 & 1) != 0) break;
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) {
      return 0xffffffff;
    }
    in_w8 = *(uint *)(unaff_x20 + 0x18);
  }
  return unaff_w19;
}


