/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$get_Current
ENTRY_POINT: 06fd5d2c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__get_Current
               (undefined8 param_1)

{
  long lVar1;
  long *unaff_x21;
  
  FUN_076bca34(param_1,0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = Newtonsoft_Json_JsonSerializer__set_Culture(0);
  if (lVar1 != 0) {
    FUN_06c98994();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


