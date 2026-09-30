/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_SetCameraDevicePreferredColorFrameSize
ENTRY_POINT: 02c4fe54
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c4fed8) */

void OVRPlugin_OVRP_1_16_0__ovrp_SetCameraDevicePreferredColorFrameSize(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x21;
  long *plVar4;
  char cStack000000000000000c;
  
  uVar1 = FUN_02c50028();
  cStack000000000000000c = '\0';
  FUN_02c317e4(uVar1,&stack0x0000000c,0);
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  plVar4 = (long *)(*unaff_x21 + 0x18);
  if (*plVar4 == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    plVar2 = *(long **)(unaff_x20 + 0x10);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar3 = (**(code **)(*plVar2 + 0x398))(plVar2,*(undefined8 *)(*plVar2 + 0x3a0));
    *plVar4 = lVar3;
    thunk_FUN_0188fd20(plVar4);
  }
  if (cStack000000000000000c != '\0') {
    thunk_FUN_0184c01c(uVar1,0);
  }
  return;
}


