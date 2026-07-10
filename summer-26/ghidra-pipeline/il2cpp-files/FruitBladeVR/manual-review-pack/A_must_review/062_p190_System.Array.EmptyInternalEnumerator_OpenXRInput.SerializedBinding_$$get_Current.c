/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OpenXRInput.SerializedBinding>$$get_Current
ENTRY_POINT: 0276cabc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>__get_Current
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_01cb9718(PTR_System_InvalidOperationException_TypeInfo_03cb65f0);
  uVar1 = thunk_FUN_01c8fc48();
  uVar2 = thunk_FUN_01cb9718(PTR_StringLiteral_2604_03cb8e20);
  System_InvalidOperationException___ctor(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar1,param_2);
}


