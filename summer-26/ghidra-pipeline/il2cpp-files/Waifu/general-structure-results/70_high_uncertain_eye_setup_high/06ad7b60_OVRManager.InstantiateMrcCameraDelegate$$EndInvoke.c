/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$EndInvoke
ENTRY_POINT: 06ad7b60
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__EndInvoke(ulong *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 in_x4;
  ulong in_x9;
  ulong in_x10;
  long unaff_x19;
  int unaff_w20;
  
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = in_x10;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
    in_x10 = *param_1 | in_x9;
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    FUN_06ad7a04(*(long *)(unaff_x19 + 0x18),in_x4);
    iVar1 = (uint)(unaff_w20 == 3) << 1;
    if (unaff_w20 == 2) {
      iVar1 = 1;
    }
    *(int *)(unaff_x19 + 0x24) = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


