/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 0693ccfc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_useIPDInPositionTracking(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x178))();
    (**(code **)(*unaff_x19 + 0x188))();
    (**(code **)(*unaff_x19 + 0x218))();
    lVar2 = *(long *)(unaff_x20 + 0x28);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          *(long **)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x19;
          thunk_FUN_03afed3c();
          return;
        }
        FUN_04de85b0(lVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


