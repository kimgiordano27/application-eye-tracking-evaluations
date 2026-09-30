/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_SetMultimodalHandsControllersSupported
ENTRY_POINT: 029104dc
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_86_0__ovrp_SetMultimodalHandsControllersSupported(void)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  lVar2 = thunk_FUN_015d0480();
  if (lVar2 == 0) {
    if (unaff_x20 == 0) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
        lVar2 = FUN_015c2790();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x60) + 0x132) & 1) == 0) {
        FUN_015c2790();
      }
      lVar2 = thunk_FUN_015d01b0();
      bVar1 = lVar2 == 0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


