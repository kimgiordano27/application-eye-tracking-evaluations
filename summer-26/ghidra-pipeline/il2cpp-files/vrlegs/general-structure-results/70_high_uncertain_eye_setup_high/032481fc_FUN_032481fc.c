/*
FUNCTION_NAME: FUN_032481fc
ENTRY_POINT: 032481fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_032481fc(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_0412c770 & 1) == 0) {
    FUN_01ab69ac(OVROverlay_LayerTexture___TypeInfo);
    FUN_01ab69ac(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
    FUN_01ab69ac(OVRPlugin_AppPerfFrameStats___TypeInfo);
    DAT_0412c770 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    local_28 = param_2;
    uVar2 = FUN_01f284bc(lVar1,&local_28,*(undefined8 *)OVROverlay_LayerTexture___TypeInfo);
    if ((uVar2 & 1) != 0) {
      local_24 = param_2;
      FUN_01f289e4((long *)(param_1 + 0x28),&local_24,
                   *(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
      lVar1 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_AppPerfFrameStats___TypeInfo);
      FUN_036ebe80(lVar1,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(undefined4 *)(lVar1 + 0x10) = param_2;
      FUN_032480cc(param_1,1,lVar1);
    }
  }
  return;
}


