/*
FUNCTION_NAME: Animancer.WeightedMaskLayers.Fade$$.ctor
ENTRY_POINT: 0221c8a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Animancer_WeightedMaskLayers_Fade___ctor(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  iVar1 = *(int *)(unaff_x19 + 0x18);
  if (iVar1 < 8) {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    if ((**(char **)(lVar4 + 0xb8) != '\0') && (*(int *)(unaff_x19 + 0x18) == 0)) {
      uVar3 = thunk_FUN_01a4a380(0);
      *(undefined4 *)(unaff_x19 + 0x1c) = uVar3;
    }
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((unaff_x20 != 0) && (lVar5 = thunk_FUN_01a89d6c(), lVar5 == 0)) {
      uVar6 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar6,0);
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) = unaff_x20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  OVRManager_<>c__<InitOVRManager>b__424_0();
  return iVar1 < 8;
}


