/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 05ac2d08
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon__get_TelemetryAnnotation(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  lVar3 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar3 + 0x40)) {
    plVar4 = (long *)thunk_FUN_0322f29c();
    lVar3 = *plVar4;
    lVar1 = plVar4[1];
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    if ((lVar3 == *unaff_x19) && ((int)unaff_x19[1] == (int)lVar1)) {
      bVar2 = *(int *)((long)unaff_x19 + 0xc) == (int)((ulong)lVar1 >> 0x20);
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2730();
}


