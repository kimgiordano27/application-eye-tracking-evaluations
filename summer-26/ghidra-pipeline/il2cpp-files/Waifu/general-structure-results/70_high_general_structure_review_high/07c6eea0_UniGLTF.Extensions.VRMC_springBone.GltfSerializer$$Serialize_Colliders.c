/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfSerializer$$Serialize_Colliders
ENTRY_POINT: 07c6eea0
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void UniGLTF_Extensions_VRMC_springBone_GltfSerializer__Serialize_Colliders(long param_1)

{
  int in_w8;
  undefined4 uVar1;
  
  if (in_w8 != 0) {
    *(undefined1 *)(param_1 + 0x1d4) = 1;
    if (DAT_086ef6a8 == (code *)0x0) {
      DAT_086ef6a8 = (code *)FUN_033d1b68("UnityEngine.Time::get_unscaledTime()");
    }
    uVar1 = (*DAT_086ef6a8)();
    *(undefined4 *)(param_1 + 0x1e0) = uVar1;
    FUN_07c6d59c(param_1);
    return;
  }
  return;
}


