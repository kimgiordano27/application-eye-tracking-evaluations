/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 033f0c5c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack0000000000000018;
  
  puVar3 = StringLiteral_1209;
  puVar2 = StringLiteral_1060;
  lVar1 = tpidr_el0;
  lStack0000000000000018 = *(long *)(lVar1 + 0x28);
  if ((DAT_044a6b6d & 1) == 0) {
    FUN_01d7d918(StringLiteral_1060);
    FUN_01d7d918(StringLiteral_1209);
    DAT_044a6b6d = 1;
  }
  uVar4 = thunk_FUN_01de23e8(*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)puVar2);
  }
  FUN_032912b8(uVar4,param_2,param_3,0);
  if (*(long *)(lVar1 + 0x28) == lStack0000000000000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


