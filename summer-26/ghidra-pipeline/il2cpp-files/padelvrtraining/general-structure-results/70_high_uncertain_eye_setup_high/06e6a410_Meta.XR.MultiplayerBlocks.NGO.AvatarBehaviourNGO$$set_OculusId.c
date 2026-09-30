/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.AvatarBehaviourNGO$$set_OculusId
ENTRY_POINT: 06e6a410
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MultiplayerBlocks_NGO_AvatarBehaviourNGO__set_OculusId(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar3 + 0x2c)) {
      FUN_07199bdc(0);
      lVar3 = *param_1;
      if (lVar3 == 0) goto LAB_06e6a4ac;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar4 = uVar2;
      if (uVar1 <= uVar4) {
        *(uint *)(param_1 + 1) = uVar1 + 1;
        param_1[2] = 0;
        param_1[3] = 0;
        goto Meta_XR_MultiplayerBlocks_NGO_NetworkAvatarDataStream__set_Value;
      }
      lVar5 = *(long *)(lVar3 + 0x18);
      *(uint *)(param_1 + 1) = uVar4 + 1;
      if (lVar5 == 0) goto LAB_06e6a4ac;
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar5 = lVar5 + (long)(int)uVar4 * 0x20;
      uVar2 = uVar4 + 1;
    } while (*(int *)(lVar5 + 0x20) < 0);
    lVar3 = *(long *)(lVar5 + 0x30);
    param_1[3] = *(long *)(lVar5 + 0x38);
    param_1[2] = lVar3;
Meta_XR_MultiplayerBlocks_NGO_NetworkAvatarDataStream__set_Value:
    return uVar4 < uVar1;
  }
LAB_06e6a4ac:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


