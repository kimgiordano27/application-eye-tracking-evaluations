/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.AvatarBehaviourNGO$$get_LocalAvatarIndex
ENTRY_POINT: 06e6a434
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MultiplayerBlocks_NGO_AvatarBehaviourNGO__get_LocalAvatarIndex(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x19;
  
  lVar3 = *unaff_x19;
  if (lVar3 == 0) {
LAB_06e6a4ac:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = *(uint *)(lVar3 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 1);
  do {
    uVar4 = uVar2;
    if (uVar1 <= uVar4) {
      *(uint *)(unaff_x19 + 1) = uVar1 + 1;
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      goto Meta_XR_MultiplayerBlocks_NGO_NetworkAvatarDataStream__set_Value;
    }
    lVar5 = *(long *)(lVar3 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar4 + 1;
    if (lVar5 == 0) goto LAB_06e6a4ac;
    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar5 = lVar5 + (long)(int)uVar4 * 0x20;
    uVar2 = uVar4 + 1;
  } while (*(int *)(lVar5 + 0x20) < 0);
  lVar3 = *(long *)(lVar5 + 0x30);
  unaff_x19[3] = *(long *)(lVar5 + 0x38);
  unaff_x19[2] = lVar3;
Meta_XR_MultiplayerBlocks_NGO_NetworkAvatarDataStream__set_Value:
  return uVar4 < uVar1;
}


