/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfSerializer$$Serialize_ColliderGroups_ITEM
ENTRY_POINT: 07c6fa4c
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void UniGLTF_Extensions_VRMC_springBone_GltfSerializer__Serialize_ColliderGroups_ITEM(void)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  long *unaff_x19;
  long lVar4;
  long unaff_x22;
  
  lVar4 = unaff_x19[0x20];
  if (lVar4 != 0) {
    if (DAT_086ef780 == (code *)0x0) {
      DAT_086ef780 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_canGetSelection()");
    }
    uVar2 = (*DAT_086ef780)(lVar4);
    if ((uVar2 & 1) != 0) {
      FUN_07c6f59c();
    }
    lVar4 = unaff_x19[0x20];
    if (lVar4 != 0) {
      pcVar3 = *(code **)(unaff_x22 + 0x770);
      if (pcVar3 == (code *)0x0) {
        pcVar3 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
        *(code **)(unaff_x22 + 0x770) = pcVar3;
      }
      iVar1 = (*pcVar3)(lVar4);
      if (iVar1 != 0) {
        lVar4 = unaff_x19[0x20];
        if (lVar4 == 0) goto LAB_07c6fecc;
        pcVar3 = *(code **)(unaff_x22 + 0x770);
        if (pcVar3 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
          *(code **)(unaff_x22 + 0x770) = pcVar3;
        }
        iVar1 = (*pcVar3)(lVar4);
        if (iVar1 == 2) {
          *(undefined1 *)(unaff_x19 + 0x40) = 1;
        }
        else {
          lVar4 = unaff_x19[0x20];
          if (lVar4 == 0) goto LAB_07c6fecc;
          pcVar3 = *(code **)(unaff_x22 + 0x770);
          if (pcVar3 == (code *)0x0) {
            pcVar3 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
            *(code **)(unaff_x22 + 0x770) = pcVar3;
          }
          iVar1 = (*pcVar3)(lVar4);
          if (iVar1 == 1) {
            FUN_07c708e0();
          }
        }
        (**(code **)(*unaff_x19 + 0x388))();
      }
      return;
    }
  }
LAB_07c6fecc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


