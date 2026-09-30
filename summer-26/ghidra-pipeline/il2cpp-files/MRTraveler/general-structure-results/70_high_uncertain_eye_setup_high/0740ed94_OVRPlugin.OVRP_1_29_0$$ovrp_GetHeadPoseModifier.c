/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetHeadPoseModifier
ENTRY_POINT: 0740ed94
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_29_0__ovrp_GetHeadPoseModifier(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  int iVar3;
  long *unaff_x24;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_0740ee34();
  iVar1 = FUN_0715d340(uVar2,0);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0740eeb0();
      FUN_0740ef18();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_06a4e36c();
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}


