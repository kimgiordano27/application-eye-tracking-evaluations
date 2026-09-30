/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 057b1b6c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation(void)

{
  undefined8 uVar1;
  long lVar2;
  long in_x9;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x28;
  long unaff_x29;
  
  lVar2 = *(long *)(in_x9 + 0x30);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4(lVar2);
    in_x9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  uVar1 = *(undefined8 *)(in_x9 + 0x40);
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x19;
  FUN_02fe9dc8(lVar2,uVar1);
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


