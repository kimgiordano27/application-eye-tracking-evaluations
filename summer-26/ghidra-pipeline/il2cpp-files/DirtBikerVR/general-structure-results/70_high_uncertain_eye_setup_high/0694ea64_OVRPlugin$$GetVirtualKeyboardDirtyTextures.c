/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardDirtyTextures
ENTRY_POINT: 0694ea64
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


void OVRPlugin__GetVirtualKeyboardDirtyTextures(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  
  if ((((*(long *)(param_1 + 0x10) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 200), lVar2 != 0)) &&
      (*(long *)(unaff_x19 + 0x10) != 0)) &&
     ((lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 200), lVar3 != 0 &&
      (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)))) {
    lVar2 = *(long *)(lVar2 + 0x40);
    uVar1 = FUN_06967528(lVar3,0);
    if (lVar2 != 0) {
      FUN_069675f8(lVar2,uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


