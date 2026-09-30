/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<SessionPlayerData>$$.cctor
ENTRY_POINT: 06ac3774
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<SessionPlayerData>___cctor(long param_1)

{
  ulong in_x9;
  ulong in_x10;
  long *in_x11;
  
  while( true ) {
    if (in_x10 <= in_x9) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if ((-1 < (int)in_x11[-2]) && (*in_x11 == 0)) break;
    in_x9 = in_x9 + 1;
    in_x11 = in_x11 + 3;
    if (param_1 <= (long)in_x9) {
      return 0;
    }
  }
  return 1;
}


