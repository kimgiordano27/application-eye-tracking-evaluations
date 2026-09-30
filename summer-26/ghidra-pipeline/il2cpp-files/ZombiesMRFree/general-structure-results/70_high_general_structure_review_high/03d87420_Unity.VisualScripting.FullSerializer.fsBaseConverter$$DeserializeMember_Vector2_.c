/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector2>
ENTRY_POINT: 03d87420
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector2>
               (long param_1,undefined8 param_2)

{
  long in_x9;
  uint in_w10;
  undefined4 in_register_00004054;
  uint in_w11;
  
  if (in_w11 < in_w10) {
    param_2 = 0;
  }
  else if (*(long *)(*(long *)(in_x9 + 200) + CONCAT44(in_register_00004054,in_w10) * 8 + -8) !=
           param_1) {
    param_2 = 0;
  }
  thunk_FUN_02ff69f4(param_2,0);
  return;
}


