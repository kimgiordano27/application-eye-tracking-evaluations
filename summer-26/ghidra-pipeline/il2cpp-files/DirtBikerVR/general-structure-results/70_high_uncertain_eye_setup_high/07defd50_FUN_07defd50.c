/*
FUNCTION_NAME: FUN_07defd50
ENTRY_POINT: 07defd50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07defd50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  if ((DAT_0899a1ec & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    DAT_0899a1ec = 1;
  }
  local_28 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    local_28 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x268);
    lVar1 = FUN_07e13e44(&local_28,0);
    if (lVar1 == 0) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_07ea20f8(0);
    }
    else {
      FUN_07dfdfd8(lVar1,0);
      uVar2 = FUN_07dfdfd8(lVar1,0);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
      FUN_07f71834(uVar3,param_2,param_3,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


