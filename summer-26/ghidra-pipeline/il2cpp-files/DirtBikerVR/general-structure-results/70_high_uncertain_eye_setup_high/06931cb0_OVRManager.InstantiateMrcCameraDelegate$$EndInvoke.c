/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$EndInvoke
ENTRY_POINT: 06931cb0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__EndInvoke
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long *unaff_x21;
  undefined4 uVar4;
  
  uVar3 = *unaff_x20;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_07c9c218(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar2 = FUN_07c98f88(*(long *)(unaff_x19 + 0x20),0);
      FUN_07d2fd90(unaff_x19 + 0x44,0);
      if (lVar2 != 0) {
        uVar4 = FUN_07cadf5c(lVar2,0);
        *(undefined4 *)(unaff_x19 + 0x70) = uVar4;
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


