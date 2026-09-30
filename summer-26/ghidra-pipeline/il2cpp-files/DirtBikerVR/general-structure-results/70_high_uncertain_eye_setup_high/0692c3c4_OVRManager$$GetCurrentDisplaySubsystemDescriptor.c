/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystemDescriptor
ENTRY_POINT: 0692c3c4
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


void OVRManager__GetCurrentDisplaySubsystemDescriptor(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      plVar3 = (long *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
      *plVar3 = unaff_x19;
      thunk_FUN_03afed3c(plVar3);
    }
    else {
      FUN_04de85b0();
    }
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      if (*(int *)(unaff_x20 + 0x20) == *(int *)(*(long *)(unaff_x20 + 0x28) + 0x18) + -1) {
        return;
      }
      if (unaff_x19 != 0) {
        FUN_07c9877c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


