/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<SessionPlayerData>$$.ctor
ENTRY_POINT: 06ac376c
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


undefined8 System_Array_EmptyInternalEnumerator<SessionPlayerData>___ctor(long param_1)

{
  ulong uVar1;
  ulong in_x10;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = 0;
  plVar2 = (long *)(unaff_x22 + 0x30);
  while( true ) {
    if (in_x10 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if ((-1 < (int)plVar2[-2]) && (*plVar2 == 0)) break;
    uVar1 = uVar1 + 1;
    plVar2 = plVar2 + 3;
    if (param_1 <= (long)uVar1) {
      return 0;
    }
  }
  return 1;
}


