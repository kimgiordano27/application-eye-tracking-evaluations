/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystem
ENTRY_POINT: 0692c228
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentDisplaySubsystem(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  
  lVar1 = FUN_07c98f88();
  if ((lVar1 != 0) && (FUN_07cac7a8(lVar1,0), param_1 != 0)) {
    FUN_07cac9a0(param_1,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      lVar1 = FUN_07c9c69c(*(long *)(unaff_x19 + 0x38),0);
      if (DAT_08974d89 == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d89 = '\x01';
      }
      if (lVar1 != 0) {
        lVar2 = *(long *)(*(long *)PTR_DAT_084868a0 + 0xb8);
        FUN_07cac8a0(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                     *(undefined4 *)(lVar2 + 0x20),lVar1,0);
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_07c9c8e4(*(long *)(unaff_x19 + 0x38),1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


