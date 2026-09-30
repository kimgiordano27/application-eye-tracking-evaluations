/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 04d8d534
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  int unaff_w22;
  
  uVar1 = FUN_02f08824();
  if ((uVar1 & 1) == 0) {
    if (unaff_w22 == 1) {
      if (*(char *)(unaff_x19 + 0x70) == '\0') {
        pcVar4 = FUN_02b81488;
      }
      else {
        uVar1 = thunk_FUN_02f59140();
        uVar2 = FUN_02f08da0();
        if ((uVar1 & 1) == 0) {
          if ((uVar2 & 1) == 0) {
            pcVar4 = FUN_02b814c0;
          }
          else {
            pcVar4 = FUN_02b81500;
          }
        }
        else if ((uVar2 & 1) == 0) {
          pcVar4 = FUN_02b815a4;
        }
        else {
          pcVar4 = FUN_02b815fc;
        }
      }
    }
    else {
      if (param_2 == 0) {
        uVar3 = thunk_FUN_02f523a8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar3,0);
      }
      pcVar4 = FUN_02b81450;
    }
  }
  else if (unaff_w22 == 2) {
    pcVar4 = FUN_02b813dc;
  }
  else {
    pcVar4 = FUN_02b81414;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar4;
  *(code **)(unaff_x19 + 0x38) = FUN_02b81384;
  return;
}


