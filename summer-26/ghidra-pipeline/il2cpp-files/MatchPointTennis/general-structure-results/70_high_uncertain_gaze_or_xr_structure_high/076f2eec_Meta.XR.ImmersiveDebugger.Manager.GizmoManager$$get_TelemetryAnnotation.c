/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 076f2eec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  do {
    if ((bool)in_ZR) {
      return;
    }
    lVar1 = FUN_07a84204(unaff_x20);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      uVar3 = *unaff_x25;
      lVar2 = thunk_FUN_04485110(lVar1,uVar3);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(lVar1,uVar3);
      }
    }
    lVar1 = *unaff_x24;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar1 = *unaff_x24;
    }
    lVar1 = FUN_044819d0(*(long *)(lVar1 + 0xb8) + 0x20,lVar2,unaff_x20);
    in_ZR = unaff_x20 == lVar1;
    unaff_x20 = lVar1;
  } while( true );
}


