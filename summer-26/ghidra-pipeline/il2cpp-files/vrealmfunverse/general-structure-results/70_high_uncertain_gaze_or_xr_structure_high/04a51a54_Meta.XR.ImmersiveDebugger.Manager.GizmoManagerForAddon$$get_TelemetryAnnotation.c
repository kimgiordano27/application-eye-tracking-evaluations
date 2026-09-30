/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 04a51a54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


int Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon__get_TelemetryAnnotation(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x25;
  ulong unaff_x26;
  
  while( true ) {
    lVar3 = *(long *)(unaff_x21 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x26) break;
    lVar3 = lVar3 + unaff_x25;
    if (-1 < *(int *)(lVar3 + 0x20)) {
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + 0x28),
                         *(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) != 0) {
        uVar1 = FUN_04a4ff00();
        unaff_w22 = unaff_w22 + (uVar1 & 1);
      }
    }
    unaff_x26 = unaff_x26 + 1;
    unaff_x25 = unaff_x25 + 0x18;
    if ((long)*(int *)(unaff_x21 + 0x24) <= (long)unaff_x26) {
      return unaff_w22;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


