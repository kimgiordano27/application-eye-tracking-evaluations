/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 05f40398
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation
               (undefined1 *param_1,undefined1 *param_2,size_t param_3)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  code *unaff_x26;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    uVar1 = (*unaff_x26)();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x24 = unaff_x24 + -1;
    unaff_x23 = (void *)((long)unaff_x23 + 0x90);
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    memcpy(&stack0x00000090,unaff_x23,0x90);
    memcpy(&stack0x00000000,unaff_x20,0x90);
    unaff_x26 = *(code **)(*unaff_x22 + 0x1b8);
    memcpy(&stack0x000001b0,&stack0x00000090,0x90);
    param_1 = &stack0x00000120;
    param_3 = 0x90;
    param_2 = (undefined1 *)register0x00000008;
  }
  return 0xffffffff;
}


