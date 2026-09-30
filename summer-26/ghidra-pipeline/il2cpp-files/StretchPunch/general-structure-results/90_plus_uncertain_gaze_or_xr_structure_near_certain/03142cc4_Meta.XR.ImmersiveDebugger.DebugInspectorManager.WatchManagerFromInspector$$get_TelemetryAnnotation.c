/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.WatchManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 03142cc4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_WatchManagerFromInspector__get_TelemetryAnnotation
               (void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  if (!in_ZR && in_NG == in_OV) {
    FUN_033b3224(0xf,0x15,0);
  }
  plVar2 = (long *)(unaff_x20 + 0x10);
  if (*plVar2 != 0) {
    if (*(int *)(*plVar2 + 0x18) == unaff_w22) {
      return;
    }
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    if (unaff_w22 < 1) {
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01dde7f8();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01dde7f8();
      }
      lVar1 = **(long **)(lVar1 + 0xb8);
      *plVar2 = lVar1;
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x18);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01dde7f8();
      }
      lVar1 = FUN_01d7d9bc(lVar1,unaff_w22);
      if (0 < *(int *)(unaff_x20 + 0x18)) {
        FUN_033b4f38(*plVar2,0,lVar1,0,*(int *)(unaff_x20 + 0x18),0);
      }
      *plVar2 = lVar1;
    }
    thunk_FUN_01e10808(plVar2,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


