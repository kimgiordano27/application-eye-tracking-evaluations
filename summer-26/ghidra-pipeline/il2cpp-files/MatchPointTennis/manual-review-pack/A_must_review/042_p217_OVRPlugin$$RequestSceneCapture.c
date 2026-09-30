/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 07c8ac88
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void OVRPlugin__RequestSceneCapture(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint in_w8;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  if (3 < in_w8) {
    unaff_x21[7] = unaff_x22;
    thunk_FUN_044bb4b4();
    lVar2 = thunk_FUN_0448520c(*unaff_x23);
    FUN_07c8ad64(lVar2,4);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar4,0);
    }
    puVar1 = PTR_DAT_09f4e7d0;
    if (4 < *(uint *)(unaff_x21 + 3)) {
      unaff_x21[8] = lVar2;
      thunk_FUN_044bb4b4(unaff_x21 + 8,lVar2);
      *(long **)(unaff_x20 + 0x30) = unaff_x21;
      thunk_FUN_044bb4b4();
      uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
      OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(uVar4,0);
      *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
      thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x40),uVar4);
      FUN_07a80df4();
      *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
      thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x38));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


