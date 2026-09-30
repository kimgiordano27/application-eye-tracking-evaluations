/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 01e935a8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void System_Array__IndexOfImpl<OVRPassthroughLayer_SerializedSurfaceGeometry>(int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (0 < param_1) {
    iVar3 = 0;
    do {
      lVar2 = System_Collections_Generic_Dictionary<int,_Pose>__System_Collections_IDictionary_Remove
                        ();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
      iVar3 = iVar3 + 1;
      iVar1 = FUN_02460344();
    } while (iVar3 < iVar1);
  }
  FUN_02460700();
  return;
}


