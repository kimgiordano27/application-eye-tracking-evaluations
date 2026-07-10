/*
FUNCTION_NAME: System.Array.InternalEnumerator<OpenXRInput.SerializedBinding>$$MoveNext
ENTRY_POINT: 02a7c520
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


bool System_Array_InternalEnumerator<OpenXRInput_SerializedBinding>__MoveNext(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == -2) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    iVar1 = System_Array__get_Length(*param_1,0);
    *(int *)(param_1 + 1) = iVar1;
  }
  if (iVar1 != -1) {
    *(int *)(param_1 + 1) = iVar1 + -1;
  }
  return iVar1 != -1 && iVar1 != 0;
}


