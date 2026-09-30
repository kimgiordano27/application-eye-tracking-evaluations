/*
FUNCTION_NAME: OVRManager$$set_cpuLevel
ENTRY_POINT: 06926e28
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_cpuLevel(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar2;
  undefined8 *unaff_x24;
  
  lVar2 = *(long *)(param_1 + 0x50);
  uVar1 = thunk_FUN_03ac74bc(*unaff_x24);
  FUN_07cb26a0();
  if (lVar2 != 0) {
    FUN_07cb2770(lVar2,uVar1,0);
    if (*unaff_x20 != 0) {
      lVar2 = *(long *)(*unaff_x20 + 0x48);
      uVar1 = thunk_FUN_03ac74bc(*unaff_x24);
      FUN_07cb26a0();
      if (lVar2 != 0) {
        FUN_07cb2770(lVar2,uVar1,0);
        if (*unaff_x21 != 0) {
          FUN_07c4e050(*unaff_x21,1,0);
          if (*(char *)(unaff_x19 + 0x28) == '\0') {
            return;
          }
          if (*unaff_x21 != 0) {
            FUN_07c4e400(*unaff_x21,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


