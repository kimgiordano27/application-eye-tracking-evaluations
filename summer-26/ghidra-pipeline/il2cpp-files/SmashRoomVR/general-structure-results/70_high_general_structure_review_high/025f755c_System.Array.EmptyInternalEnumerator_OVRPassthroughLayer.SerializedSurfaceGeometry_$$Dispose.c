/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 025f755c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose
               (long param_1,uint param_2,undefined1 param_3,undefined8 param_4)

{
  bool in_ZR;
  bool in_CY;
  long in_x9;
  long lVar1;
  
  if (in_CY && !in_ZR) {
    *(undefined1 *)(in_x9 + (int)param_2 + 0x20) = param_3;
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (param_2 < *(uint *)(lVar1 + 0x18)) {
      *(undefined8 *)(lVar1 + (long)(int)param_2 * 8 + 0x20) = param_4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


