/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfSerializer$$__colliders_ITEM__shape__capsule_Serialize_Offset
ENTRY_POINT: 07c6f93c
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


void UniGLTF_Extensions_VRMC_springBone_GltfSerializer____colliders_ITEM__shape__capsule_Serialize_Offset
               (code *param_1)

{
  int iVar1;
  code *pcVar2;
  long *unaff_x19;
  long lVar3;
  long unaff_x22;
  
  (*param_1)();
  FUN_07c6caf0();
  lVar3 = unaff_x19[0x20];
  if (lVar3 != 0) {
    pcVar2 = *(code **)(unaff_x22 + 0x770);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
      *(code **)(unaff_x22 + 0x770) = pcVar2;
    }
    iVar1 = (*pcVar2)(lVar3);
    if (iVar1 == 2) {
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
    }
    else {
      lVar3 = unaff_x19[0x20];
      if (lVar3 == 0) goto LAB_07c6fecc;
      pcVar2 = *(code **)(unaff_x22 + 0x770);
      if (pcVar2 == (code *)0x0) {
        pcVar2 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
        *(code **)(unaff_x22 + 0x770) = pcVar2;
      }
      iVar1 = (*pcVar2)(lVar3);
      if (iVar1 == 1) {
        FUN_07c708e0();
      }
    }
    (**(code **)(*unaff_x19 + 0x388))();
    return;
  }
LAB_07c6fecc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


