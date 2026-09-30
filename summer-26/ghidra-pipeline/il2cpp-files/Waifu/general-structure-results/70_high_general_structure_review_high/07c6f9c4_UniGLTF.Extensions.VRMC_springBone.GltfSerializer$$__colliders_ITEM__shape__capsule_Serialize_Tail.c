/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfSerializer$$__colliders_ITEM__shape__capsule_Serialize_Tail
ENTRY_POINT: 07c6f9c4
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_5;telemetry_or_network_hits_10
*/


void UniGLTF_Extensions_VRMC_springBone_GltfSerializer____colliders_ITEM__shape__capsule_Serialize_Tail
               (code *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *unaff_x19;
  long lVar5;
  long unaff_x21;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x21 + 0x788) = param_2;
  uVar2 = (*param_1)();
  if ((uVar2 & 1) == 0) {
UniGLTF_Extensions_VRMC_springBone_GltfSerializer__Serialize_ColliderGroups_ITEM:
    lVar5 = unaff_x19[0x20];
    if (lVar5 == 0) goto LAB_07c6fecc;
    if (DAT_086ef780 == (code *)0x0) {
      DAT_086ef780 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_canGetSelection()");
    }
    uVar2 = (*DAT_086ef780)(lVar5);
    if ((uVar2 & 1) != 0) {
      FUN_07c6f59c();
    }
  }
  else {
    if (*(int *)(DAT_083c89c0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (DAT_086ed3c8 == (code *)0x0) {
      DAT_086ed3c8 = (code *)FUN_033d1b68("UnityEngine.Application::get_platform()");
    }
    iVar1 = (*DAT_086ed3c8)();
    if (iVar1 == 8)
    goto UniGLTF_Extensions_VRMC_springBone_GltfSerializer__Serialize_ColliderGroups_ITEM;
    if (*(int *)(DAT_083c89c0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (DAT_086ed3c8 == (code *)0x0) {
      DAT_086ed3c8 = (code *)FUN_033d1b68("UnityEngine.Application::get_platform()");
    }
    iVar1 = (*DAT_086ed3c8)();
    if (iVar1 == 0x1f)
    goto UniGLTF_Extensions_VRMC_springBone_GltfSerializer__Serialize_ColliderGroups_ITEM;
    lVar5 = unaff_x19[0x20];
    uVar3 = FUN_07c6f3d4();
    if (lVar5 == 0) goto LAB_07c6fecc;
    FUN_07a1616c(lVar5,uVar3,0);
  }
  lVar5 = unaff_x19[0x20];
  if (lVar5 != 0) {
    pcVar4 = *(code **)(unaff_x22 + 0x770);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
      *(code **)(unaff_x22 + 0x770) = pcVar4;
    }
    iVar1 = (*pcVar4)(lVar5);
    if (iVar1 != 0) {
      lVar5 = unaff_x19[0x20];
      if (lVar5 == 0) goto LAB_07c6fecc;
      pcVar4 = *(code **)(unaff_x22 + 0x770);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
        *(code **)(unaff_x22 + 0x770) = pcVar4;
      }
      iVar1 = (*pcVar4)(lVar5);
      if (iVar1 == 2) {
        *(undefined1 *)(unaff_x19 + 0x40) = 1;
      }
      else {
        lVar5 = unaff_x19[0x20];
        if (lVar5 == 0) goto LAB_07c6fecc;
        pcVar4 = *(code **)(unaff_x22 + 0x770);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68("UnityEngine.TouchScreenKeyboard::get_status()");
          *(code **)(unaff_x22 + 0x770) = pcVar4;
        }
        iVar1 = (*pcVar4)(lVar5);
        if (iVar1 == 1) {
          FUN_07c708e0();
        }
      }
      (**(code **)(*unaff_x19 + 0x388))();
    }
    return;
  }
LAB_07c6fecc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


