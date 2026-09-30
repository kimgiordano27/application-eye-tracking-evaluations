/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 051acdc0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon__get_TelemetryAnnotation(void)

{
  ushort uVar1;
  long lVar2;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  undefined1 uStack000000000000000c;
  
  if (in_w8 != 0) {
    if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (in_w8 != *(int *)(*unaff_x19 + 0x20) + 1) goto LAB_051acde4;
  }
  FUN_05509628(0);
LAB_051acde4:
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_02dcfd18();
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  uStack000000000000000c = (undefined1)unaff_x19[2];
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28),&stack0x0000000c);
  return;
}


