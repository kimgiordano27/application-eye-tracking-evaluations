/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Vector3>
ENTRY_POINT: 03469a80
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


bool Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Vector3>
               (long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long unaff_x20;
  
  if (param_1 == 0) {
    FUN_02ce09d4();
    param_1 = *(long *)(unaff_x20 + 0x38);
  }
  (*(code *)**(undefined8 **)(param_1 + 8))(param_2,param_3 + 1);
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x10))();
                    /* try { // try from 03469acc to 03569adb has its CatchHandler @ 03469b0c */
  return iVar1 <= param_3;
}


