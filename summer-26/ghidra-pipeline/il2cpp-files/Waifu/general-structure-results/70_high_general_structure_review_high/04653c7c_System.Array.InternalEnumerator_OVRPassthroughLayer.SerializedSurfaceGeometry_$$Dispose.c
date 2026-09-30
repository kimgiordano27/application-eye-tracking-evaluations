/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 04653c7c
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose
               (long param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w22;
  ulong uVar1;
  uint unaff_w24;
  
  FUN_04653548(param_2,unaff_w22,*(undefined8 *)(param_1 + 0x28));
  if (0 < (int)unaff_w24) {
    uVar1 = 0;
    do {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0338f618();
      }
      FUN_04653ee4();
      uVar1 = uVar1 + 1;
    } while (unaff_w24 != uVar1);
  }
  return;
}


