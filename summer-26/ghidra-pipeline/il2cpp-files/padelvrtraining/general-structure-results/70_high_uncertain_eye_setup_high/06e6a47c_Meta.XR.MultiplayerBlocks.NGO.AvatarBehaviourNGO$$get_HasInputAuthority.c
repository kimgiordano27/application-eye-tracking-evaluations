/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.AvatarBehaviourNGO$$get_HasInputAuthority
ENTRY_POINT: 06e6a47c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MultiplayerBlocks_NGO_AvatarBehaviourNGO__get_HasInputAuthority(long param_1)

{
  uint in_w9;
  uint in_w10;
  uint uVar1;
  long lVar2;
  uint in_w12;
  long in_x13;
  int in_w14;
  long unaff_x19;
  undefined8 uVar3;
  
  do {
    uVar1 = in_w12 + 1;
    if (-1 < in_w14) {
      uVar3 = *(undefined8 *)(in_x13 + 0x30);
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(in_x13 + 0x38);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
      uVar1 = in_w10;
Meta_XR_MultiplayerBlocks_NGO_NetworkAvatarDataStream__set_Value:
      return uVar1 < in_w9;
    }
    if (in_w9 <= uVar1) {
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      goto Meta_XR_MultiplayerBlocks_NGO_NetworkAvatarDataStream__set_Value;
    }
    lVar2 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = in_w12 + 2;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_w12 = in_w12 + 1;
    if (*(uint *)(lVar2 + 0x18) <= in_w12) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    in_x13 = lVar2 + (long)(int)uVar1 * 0x20;
    in_w14 = *(int *)(in_x13 + 0x20);
    in_w10 = uVar1;
  } while( true );
}


