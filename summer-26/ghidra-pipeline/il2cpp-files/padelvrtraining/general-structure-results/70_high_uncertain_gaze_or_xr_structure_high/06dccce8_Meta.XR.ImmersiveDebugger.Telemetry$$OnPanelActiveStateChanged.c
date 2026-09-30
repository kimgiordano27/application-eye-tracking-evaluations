/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnPanelActiveStateChanged
ENTRY_POINT: 06dccce8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry__OnPanelActiveStateChanged(long param_1)

{
  long lVar1;
  long in_x9;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((uint)param_1 < *(uint *)(in_x9 + 0x18)) {
    lVar1 = in_x9 + param_1 * 0x18;
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
    thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
    *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


