/*
FUNCTION_NAME: OVRManager$$get_runtimeSettings
ENTRY_POINT: 03663344
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
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
  long *plVar4;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x18) = 1;
  if (*(char *)(unaff_x21 + 0x40) != '\0') {
    *(undefined1 *)(unaff_x21 + 0x40) = 0;
    *(undefined1 *)(unaff_x21 + 0x42) = 1;
  }
  lVar2 = *(long *)(unaff_x20 + 0x88);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = unaff_x21;
        thunk_FUN_01f51358(plVar4);
        return;
      }
      FUN_030f2bb4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


