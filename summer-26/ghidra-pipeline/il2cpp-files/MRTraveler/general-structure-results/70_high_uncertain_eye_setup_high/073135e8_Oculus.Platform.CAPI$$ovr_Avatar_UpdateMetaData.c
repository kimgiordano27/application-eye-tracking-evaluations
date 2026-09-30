/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Avatar_UpdateMetaData
ENTRY_POINT: 073135e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Platform_CAPI__ovr_Avatar_UpdateMetaData(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  if (in_w8 != 0) {
    unaff_x20[4] = unaff_x21;
    thunk_FUN_03d233cc();
    lVar1 = thunk_FUN_03cf5234(*unaff_x22);
    OVRPlugin_Media__GetMrcActivationMode(lVar1,0);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_03cf5138(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar3,0);
    }
    if (1 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[5] = lVar1;
      thunk_FUN_03d233cc(unaff_x20 + 5,lVar1);
      *(long **)(unaff_x19 + 0x20) = unaff_x20;
      thunk_FUN_03d233cc();
      thunk_FUN_085db0ec();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


