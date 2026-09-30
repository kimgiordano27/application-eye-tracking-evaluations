/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost
ENTRY_POINT: 04d0d95c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnFocusLost
               (undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long lStack0000000000000048;
  
  lVar1 = tpidr_el0;
  lStack0000000000000048 = *(long *)(lVar1 + 0x28);
  uStack0000000000000008 = param_2[1];
  uStack0000000000000000 = *param_2;
  uStack0000000000000018 = param_2[3];
  uStack0000000000000010 = param_2[2];
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0(lVar3);
  }
  in_stack_00000028 = uStack0000000000000008;
  in_stack_00000020 = uStack0000000000000000;
  in_stack_00000038 = uStack0000000000000018;
  in_stack_00000030 = uStack0000000000000010;
  iVar2 = FUN_04d0d774(param_1,&stack0x00000020,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x150));
  if (*(long *)(lVar1 + 0x28) == lStack0000000000000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}


