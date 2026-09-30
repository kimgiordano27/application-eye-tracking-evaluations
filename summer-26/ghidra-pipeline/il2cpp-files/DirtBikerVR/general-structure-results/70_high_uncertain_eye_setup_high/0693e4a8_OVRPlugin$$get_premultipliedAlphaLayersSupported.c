/*
FUNCTION_NAME: OVRPlugin$$get_premultipliedAlphaLayersSupported
ENTRY_POINT: 0693e4a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_premultipliedAlphaLayersSupported(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  uint unaff_w20;
  long lVar3;
  undefined8 *unaff_x23;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0xb8);
    uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
    FUN_07cb26a0();
    if (lVar3 != 0) {
      FUN_07cb2770(lVar3,uVar2,0);
      if (((unaff_x19[2] != 0) && (lVar3 = *(long *)(unaff_x19[2] + 0xe8), lVar3 != 0)) &&
         (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
        lVar1 = 0x328;
        if (*(char *)(lVar3 + 0x138) != '\0') {
          lVar1 = 0x2e8;
        }
        (**(code **)(*unaff_x19 + lVar1))();
        return unaff_w20 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


