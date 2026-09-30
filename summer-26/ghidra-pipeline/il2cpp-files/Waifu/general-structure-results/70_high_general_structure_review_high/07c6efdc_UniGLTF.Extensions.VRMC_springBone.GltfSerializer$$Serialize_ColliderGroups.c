/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfSerializer$$Serialize_ColliderGroups
ENTRY_POINT: 07c6efdc
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void UniGLTF_Extensions_VRMC_springBone_GltfSerializer__Serialize_ColliderGroups(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x21;
  
  pcVar1 = (code *)FUN_033d1b68("UnityEngine.Texture2D::get_whiteTexture()");
  *(code **)(unaff_x21 + 0x9c0) = pcVar1;
  (*pcVar1)();
  if (unaff_x20 != 0) {
    FUN_07c69474();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


