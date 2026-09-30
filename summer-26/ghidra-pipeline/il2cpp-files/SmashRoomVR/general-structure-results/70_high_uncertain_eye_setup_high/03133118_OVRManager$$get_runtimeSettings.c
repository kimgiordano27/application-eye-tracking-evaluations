/*
FUNCTION_NAME: OVRManager$$get_runtimeSettings
ENTRY_POINT: 03133118
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_runtimeSettings(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 unaff_x21;
  
  FUN_0313506c();
  lVar2 = *(long *)(unaff_x20 + 0x88);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = unaff_x21;
        thunk_FUN_01b4f09c(puVar4);
        return;
      }
      FUN_02b599e4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


