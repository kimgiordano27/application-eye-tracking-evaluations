/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 057af340
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_02fe925c(PTR_DAT_06f9cf80);
  *(undefined1 *)(unaff_x21 + 0x1dc) = 1;
  lVar1 = thunk_FUN_0301080c(*unaff_x22);
  FUN_05fc1350(lVar1,0);
  if ((lVar1 != 0) && (lVar1 = FUN_05fc15b0(lVar1), lVar1 != 0)) {
    lVar1 = FUN_05fcf7d0(lVar1,0);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_03010710(lVar1,lVar3);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(lVar1,lVar3);
      }
    }
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


