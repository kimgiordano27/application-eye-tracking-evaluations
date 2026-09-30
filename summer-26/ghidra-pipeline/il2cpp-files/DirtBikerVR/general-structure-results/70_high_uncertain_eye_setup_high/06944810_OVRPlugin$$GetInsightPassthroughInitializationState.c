/*
FUNCTION_NAME: OVRPlugin$$GetInsightPassthroughInitializationState
ENTRY_POINT: 06944810
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetInsightPassthroughInitializationState(void)

{
  undefined8 uVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  
  if (in_w8 == 2) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (unaff_x20 != 0) {
      *(undefined1 *)(unaff_x20 + 0xe0) = 0;
      return 0;
    }
  }
  else {
    if (in_w8 == 1) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
      if (unaff_x20 == 0) goto LAB_06944900;
    }
    else {
      if (in_w8 != 0) {
        return 0;
      }
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
      if (unaff_x20 == 0) goto LAB_06944900;
      if (((*(char *)(unaff_x20 + 0xe0) != '\0') || (*(int *)(unaff_x20 + 0x80) == 1)) ||
         (*(float *)(unaff_x20 + 0xe4) == 0.0)) {
        *(undefined8 *)(unaff_x19 + 0x18) = 0;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),0);
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
    }
    *(undefined1 *)(unaff_x20 + 0xe0) = 1;
    if (*(long *)(unaff_x20 + 0xa8) != 0) {
      FUN_07cb2910(*(long *)(unaff_x20 + 0xa8),0);
      uVar2 = *(undefined4 *)(unaff_x20 + 0xe4);
      uVar1 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
      FUN_07ca4ee0(uVar2,uVar1,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar1);
      *(undefined4 *)(unaff_x19 + 0x10) = 2;
      return 1;
    }
  }
LAB_06944900:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


