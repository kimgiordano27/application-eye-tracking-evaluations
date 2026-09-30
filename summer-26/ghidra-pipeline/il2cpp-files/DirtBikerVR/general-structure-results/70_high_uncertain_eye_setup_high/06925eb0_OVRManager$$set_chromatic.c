/*
FUNCTION_NAME: OVRManager$$set_chromatic
ENTRY_POINT: 06925eb0
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


void OVRManager__set_chromatic(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 *unaff_x23;
  
  lVar3 = *(long *)(param_1 + 0x50);
  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
  FUN_07cb26a0();
  if (lVar3 != 0) {
    FUN_07cb2770(lVar3,uVar1,0);
    if (*unaff_x20 != 0) {
      lVar3 = *(long *)(*unaff_x20 + 0x48);
      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
      FUN_07cb26a0();
      if (lVar3 != 0) {
        FUN_07cb2770(lVar3,uVar1,0);
        if (*unaff_x20 != 0) {
          uVar2 = FUN_07c986c8(*unaff_x20,0);
          if ((uVar2 & 1) != 0) {
            FUN_06925f6c();
            return;
          }
          FUN_06925f90();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


