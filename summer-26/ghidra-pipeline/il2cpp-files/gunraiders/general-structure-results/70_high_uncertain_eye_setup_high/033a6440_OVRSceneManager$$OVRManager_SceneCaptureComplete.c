/*
FUNCTION_NAME: OVRSceneManager$$OVRManager_SceneCaptureComplete
ENTRY_POINT: 033a6440
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRSceneManager__OVRManager_SceneCaptureComplete(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x19;
  long unaff_x21;
  uint unaff_w24;
  long unaff_x25;
  int unaff_w26;
  
  do {
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(int *)(param_1 + 0x20) = unaff_w26;
    iVar1 = thunk_FUN_01c5c828();
    if (iVar1 == *(int *)(unaff_x25 + 0x18)) {
      lVar2 = thunk_FUN_01c5c834();
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if ((*(long *)(unaff_x21 + 0x98) == 0) && (lVar2 != 0)) {
        FUN_033a0ed4();
      }
      uVar3 = FUN_033a0388();
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_033a41a0();
        if ((uVar3 & 1) != 0) {
          FUN_033a0798();
        }
      }
      else {
        FUN_033a051c();
      }
    }
    else {
      FUN_033a6300();
    }
    unaff_w26 = unaff_w26 + 1;
    iVar1 = FUN_032f6f30();
  } while (unaff_w26 <= iVar1);
  (**(code **)(*unaff_x19 + 0x1d8))();
  return;
}


