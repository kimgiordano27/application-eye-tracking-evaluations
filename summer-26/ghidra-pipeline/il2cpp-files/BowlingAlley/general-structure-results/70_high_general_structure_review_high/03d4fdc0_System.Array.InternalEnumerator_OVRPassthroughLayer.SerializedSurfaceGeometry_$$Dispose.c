/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 03d4fdc0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose
               (undefined4 *param_1)

{
  uint uVar1;
  ulong uVar2;
  int in_w10;
  long lVar3;
  
  if (0 < in_w10) {
    lVar3 = *(long *)(param_1 + 4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    uVar2 = 0;
    do {
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined8 *)(lVar3 + 0x20 + uVar2 * 8) = 0;
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)in_w10);
  }
  *param_1 = 0;
  return;
}


