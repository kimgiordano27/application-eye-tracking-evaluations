/*
FUNCTION_NAME: OVRPlugin.Media$$Update
ENTRY_POINT: 02c448b4
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__Update(void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x21;
  long *plVar4;
  
  thunk_FUN_0181f594();
  if (unaff_x21 != 0) {
    plVar4 = (long *)(unaff_x21 + 0x18);
    lVar3 = *plVar4;
    thunk_FUN_0181f594();
    if (lVar3 != 0) {
      thunk_FUN_0181f594();
      *plVar4 = 0;
      thunk_FUN_0188fd20(plVar4,0);
      uVar2 = FUN_02c31238(lVar3,0);
      if ((uVar2 & 1) == 0) {
        FUN_02c31860(lVar3,0);
      }
      FUN_02c320ac(lVar3,0);
    }
  }
  uVar1 = *(uint *)(unaff_x19 + 0x38);
  thunk_FUN_0181f594();
  thunk_FUN_0181f594();
  *(uint *)(unaff_x19 + 0x38) = uVar1 | 0x40000;
  return;
}


