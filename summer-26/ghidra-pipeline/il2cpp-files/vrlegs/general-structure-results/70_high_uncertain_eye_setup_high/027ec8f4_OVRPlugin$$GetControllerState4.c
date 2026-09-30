/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 027ec8f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 != 0) {
    uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03cfd418);
    lVar2 = FUN_01f919f4(lVar2 + 0x28,uVar1);
    if (lVar2 != 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cfd420);
      FUN_02187b5c(lVar2);
      lVar2 = *(long *)(unaff_x19 + 0x10);
      if (lVar2 != 0) {
        if (*(char *)(lVar2 + 0x18) != '\0') {
          *(undefined1 *)(lVar2 + 0x30) = 1;
        }
        thunk_FUN_01a4b338();
        *(undefined8 *)(unaff_x19 + 0x20) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(unaff_x19 + 0x20),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


