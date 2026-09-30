/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfDeserializer$$__colliders_ITEM_Deserialize_Shape
ENTRY_POINT: 07c6abe8
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


void UniGLTF_Extensions_VRMC_springBone_GltfDeserializer____colliders_ITEM_Deserialize_Shape(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = FUN_03398188(DAT_083c7e20,4);
  **(undefined8 **)(DAT_083d0578 + 0xb8) = uVar4;
  if (DAT_08908cd0 != 0) {
    uVar5 = *(ulong *)(DAT_083d0578 + 0xb8);
    puVar1 = &DAT_0873ccb0 + (uVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (uVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


