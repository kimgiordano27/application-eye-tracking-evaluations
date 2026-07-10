/*
FUNCTION_NAME: FUN_01c362bc
ENTRY_POINT: 01c362bc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


void FUN_01c362bc(long *param_1)

{
  System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
            (param_1[1],
             *(undefined8 *)
              PTR_Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OpenXRInput_SerializedBinding>>_Dispose___03ce7488
            );
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbcc();
}


