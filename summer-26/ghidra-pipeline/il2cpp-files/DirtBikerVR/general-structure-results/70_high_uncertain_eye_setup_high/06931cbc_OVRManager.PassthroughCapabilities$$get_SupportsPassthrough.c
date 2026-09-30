/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$get_SupportsPassthrough
ENTRY_POINT: 06931cbc
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


void OVRManager_PassthroughCapabilities__get_SupportsPassthrough
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  int in_w8;
  long unaff_x19;
  undefined4 uVar3;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_07c9c218();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar2 = FUN_07c98f88(*(long *)(unaff_x19 + 0x20),0);
      FUN_07d2fd90(unaff_x19 + 0x44,0);
      if (lVar2 != 0) {
        uVar3 = FUN_07cadf5c(lVar2,0);
        *(undefined4 *)(unaff_x19 + 0x70) = uVar3;
        *(undefined4 *)(unaff_x19 + 0x74) = param_2;
        *(undefined4 *)(unaff_x19 + 0x78) = param_3;
        goto LAB_06931d20;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
LAB_06931d20:
  if (*(char *)(unaff_x19 + 0xd1) != '\0') {
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
  }
  return;
}


