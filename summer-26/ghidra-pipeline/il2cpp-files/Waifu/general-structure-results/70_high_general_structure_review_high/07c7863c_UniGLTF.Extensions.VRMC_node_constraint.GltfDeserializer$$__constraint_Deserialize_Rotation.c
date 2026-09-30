/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_node_constraint.GltfDeserializer$$__constraint_Deserialize_Rotation
ENTRY_POINT: 07c7863c
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void UniGLTF_Extensions_VRMC_node_constraint_GltfDeserializer____constraint_Deserialize_Rotation
               (undefined1 param_1 [16],float param_2)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  fVar2 = (float)FUN_07c78734();
  param_2 = param_2 * *(float *)(unaff_x19 + 0x24);
  if (param_2 < fVar2 == (*(int *)(unaff_x19 + 0x20) == 3)) {
    unaff_d8 = FUN_07c7885c(param_2);
  }
  else {
    unaff_d9 = FUN_07c7885c(fVar2 / *(float *)(unaff_x19 + 0x24));
  }
  lVar1 = FUN_07c77b08();
  if (lVar1 != 0) {
    FUN_07a17ff0(unaff_d8,unaff_d9,lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


