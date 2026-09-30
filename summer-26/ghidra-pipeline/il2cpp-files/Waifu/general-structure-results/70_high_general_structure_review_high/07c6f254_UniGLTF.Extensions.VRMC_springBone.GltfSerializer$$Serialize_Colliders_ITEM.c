/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfSerializer$$Serialize_Colliders_ITEM
ENTRY_POINT: 07c6f254
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


ulong UniGLTF_Extensions_VRMC_springBone_GltfSerializer__Serialize_Colliders_ITEM(ulong param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long unaff_x19;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083c89c0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cd920,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x19 + 0xc1b) = 1;
  }
  if (*(int *)(DAT_083c89c0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (DAT_086ed3c8 == (code *)0x0) {
    DAT_086ed3c8 = (code *)FUN_033d1b68("UnityEngine.Application::get_platform()");
  }
  iVar1 = (*DAT_086ed3c8)();
  if (iVar1 != 0x11) {
    if (iVar1 == 0xb) {
      if (*(int *)(DAT_083cd920 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (*(char *)(*(long *)(DAT_083cd920 + 0xb8) + 9) == '\0') goto LAB_07c6f304;
    }
    uVar3 = FUN_07a15ad4(0);
    return uVar3;
  }
LAB_07c6f304:
  uVar2 = FUN_07a15bec(0);
  return (ulong)((uVar2 ^ 1) & 1);
}


