/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfDeserializer$$__colliders_ITEM__shape__capsule_Deserialize_Offset
ENTRY_POINT: 07c6bf44
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


void UniGLTF_Extensions_VRMC_springBone_GltfDeserializer____colliders_ITEM__shape__capsule_Deserialize_Offset
               (long param_1)

{
  long lVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  
  FUN_0335b6c8(param_1 + 0x6e0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xbfa) = 1;
  lVar1 = *(long *)(*(long *)(DAT_083c96e0 + 0xb8) + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07c6bf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),unaff_w19,*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


