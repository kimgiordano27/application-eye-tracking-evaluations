/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost
ENTRY_POINT: 0643ec7c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnFocusLost
               (long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  int in_w8;
  uint unaff_w19;
  long unaff_x21;
  long lVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  lVar3 = (long)in_w8 - (long)param_4;
  puVar1 = (undefined8 *)(unaff_x21 + (long)(int)unaff_w19 * 0x20);
  while( true ) {
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    in_stack_00000028 = puVar1[5];
    in_stack_00000020 = puVar1[4];
    in_stack_00000038 = puVar1[7];
    in_stack_00000030 = puVar1[6];
    uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,&stack0x00000020);
    if ((uVar2 & 1) != 0) break;
    lVar3 = lVar3 + -1;
    unaff_w19 = unaff_w19 + 1;
    puVar1 = puVar1 + 4;
    if (lVar3 == 0) {
      return 0xffffffff;
    }
  }
  return unaff_w19;
}


