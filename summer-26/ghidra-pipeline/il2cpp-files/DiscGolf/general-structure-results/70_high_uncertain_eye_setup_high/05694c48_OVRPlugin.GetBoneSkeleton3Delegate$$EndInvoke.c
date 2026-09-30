/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$EndInvoke
ENTRY_POINT: 05694c48
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_GetBoneSkeleton3Delegate__EndInvoke(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_04e8c914();
    if ((uVar1 & 1) == 0) {
      return 999;
    }
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *unaff_x20;
    }
    if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x20) != 0) {
      uVar3 = FUN_04e8c6a0();
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


