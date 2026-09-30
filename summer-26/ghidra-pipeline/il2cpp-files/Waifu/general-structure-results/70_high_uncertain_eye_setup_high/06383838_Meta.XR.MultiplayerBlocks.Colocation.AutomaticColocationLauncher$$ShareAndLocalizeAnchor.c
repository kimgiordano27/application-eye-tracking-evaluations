/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$ShareAndLocalizeAnchor
ENTRY_POINT: 06383838
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ShareAndLocalizeAnchor
               (code *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar5;
  long unaff_x27;
  long unaff_x29;
  
  while( true ) {
    if (param_1 == (code *)0x0) {
      param_1 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      *(code **)(unaff_x23 + 0x188) = param_1;
    }
    uVar1 = (*param_1)(unaff_x27);
    if (param_2 == 0) break;
    pcVar3 = *(code **)(unaff_x24 + 0x840);
    if (pcVar3 == (code *)0x0) {
      pcVar3 = (code *)FUN_033d1b68(
                                   "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                   );
      *(code **)(unaff_x24 + 0x840) = pcVar3;
    }
    (*pcVar3)(param_2,uVar1,1);
    pcVar3 = *(code **)(unaff_x22 + 0x250);
    if (pcVar3 == (code *)0x0) {
      pcVar3 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
      *(code **)(unaff_x22 + 0x250) = pcVar3;
    }
    lVar2 = (*pcVar3)(unaff_x25);
    if (*(char *)(unaff_x21 + 0xc54) == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x21 + 0xc54) = 1;
    }
    if (lVar2 == 0) break;
    lVar4 = *(long *)(*(long *)(unaff_x29 + 0xc90) + 0xb8);
    FUN_07a19820(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                 *(undefined4 *)(lVar4 + 0x14),lVar2,0);
    FUN_06383bdc();
    lVar2 = *(long *)(unaff_x19 + 0x38);
    unaff_w20 = unaff_w20 + 1;
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) <= unaff_w20) {
      return;
    }
    lVar2 = FUN_04ab0b48(lVar2,unaff_w20,DAT_083f6528);
    if (lVar2 == 0) break;
    *(int *)(lVar2 + 0x20) = unaff_w20;
    uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    unaff_x25 = FUN_04085ecc(uVar1,DAT_08413e20);
    if (unaff_x25 == 0) break;
    lVar4 = FUN_03fa1bc8(unaff_x25,DAT_0840cdb0);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    uVar1 = FUN_03398a84(DAT_083be5d8);
    FUN_060f0664();
    if (lVar4 == 0) break;
    FUN_06383a00(lVar4,uVar5,unaff_w20,uVar1);
    pcVar3 = *(code **)(unaff_x22 + 0x250);
    if (pcVar3 == (code *)0x0) {
      pcVar3 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
      *(code **)(unaff_x22 + 0x250) = pcVar3;
    }
    param_2 = (*pcVar3)(unaff_x25);
    unaff_x27 = *(long *)(unaff_x19 + 0x28);
    if (unaff_x27 == 0) break;
    param_1 = *(code **)(unaff_x23 + 0x188);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


