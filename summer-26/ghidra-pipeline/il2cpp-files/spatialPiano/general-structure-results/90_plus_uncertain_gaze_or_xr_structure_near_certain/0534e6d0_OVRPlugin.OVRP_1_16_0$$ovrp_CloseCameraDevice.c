/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 0534e6d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_067cc450;
  if ((DAT_06bbb543 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc450);
    FUN_02f08768(PTR_DAT_067cbf00);
    DAT_06bbb543 = 1;
  }
  FUN_05116b38(param_1,0);
  uVar2 = FUN_02f0880c(*(undefined8 *)puVar1,12000);
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  puVar1 = PTR_DAT_067cbf00;
  if (param_2 != 0) {
    FUN_06098b94(param_2,1,0);
    uVar2 = FUN_06097c60(*(undefined8 *)puVar1,12000,1,48000,0,0);
    thunk_FUN_060988b8(param_2,uVar2,0);
    FUN_0534e790(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


