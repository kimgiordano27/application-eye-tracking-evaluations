/*
FUNCTION_NAME: Animancer.WeightedMaskLayers.Fade$$Start
ENTRY_POINT: 0221c8b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Animancer_WeightedMaskLayers_Fade__Start(void)

{
  uint uVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  if (in_ZR || in_NG != in_OV) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01a46ff8();
    }
    if ((**(char **)(lVar3 + 0xb8) != '\0') && (*(int *)(unaff_x19 + 0x18) == 0)) {
      uVar2 = thunk_FUN_01a4a380(0);
      *(undefined4 *)(unaff_x19 + 0x1c) = uVar2;
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    lVar3 = *(long *)(unaff_x19 + 0x10);
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((unaff_x20 != 0) && (lVar4 = thunk_FUN_01a89d6c(), lVar4 == 0)) {
      uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,0);
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  OVRManager_<>c__<InitOVRManager>b__424_0();
  return unaff_w22 < 8;
}


