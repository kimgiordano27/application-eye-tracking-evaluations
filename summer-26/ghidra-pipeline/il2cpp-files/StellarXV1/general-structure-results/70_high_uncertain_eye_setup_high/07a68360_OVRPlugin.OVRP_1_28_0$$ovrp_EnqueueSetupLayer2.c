/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_EnqueueSetupLayer2
ENTRY_POINT: 07a68360
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_EnqueueSetupLayer2(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar1 = FUN_089ca704();
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x40);
      FUN_08968864(*(long *)(unaff_x19 + 0x20),0);
      if (lVar3 != 0) {
        uVar2 = FUN_07a683d0(lVar3);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_07a66d84(*(long *)(unaff_x19 + 0x30),uVar2);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  return;
}


