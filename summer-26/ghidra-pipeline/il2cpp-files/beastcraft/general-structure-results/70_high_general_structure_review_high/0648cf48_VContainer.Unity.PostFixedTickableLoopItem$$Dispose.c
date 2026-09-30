/*
FUNCTION_NAME: VContainer.Unity.PostFixedTickableLoopItem$$Dispose
ENTRY_POINT: 0648cf48
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void VContainer_Unity_PostFixedTickableLoopItem__Dispose
               (long param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5)

{
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  fVar2 = **(float **)(param_1 + 0xb8) * 8.0;
  fVar1 = param_2 * param_5;
  if (param_2 * param_5 <= fVar2) {
    fVar1 = fVar2;
  }
  if (fVar1 <= ABS(unaff_s9 - unaff_s8)) {
    if (*(int *)(*(long *)Method_Cysharp_Threading_Tasks_AsyncReactiveProperty<bool>_op_Implicit__ +
                0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_064d8a2c();
    return;
  }
  return;
}


