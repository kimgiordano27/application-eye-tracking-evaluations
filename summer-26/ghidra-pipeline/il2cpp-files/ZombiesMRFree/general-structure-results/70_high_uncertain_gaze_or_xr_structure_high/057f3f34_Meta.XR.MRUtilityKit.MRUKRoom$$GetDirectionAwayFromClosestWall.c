/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetDirectionAwayFromClosestWall
ENTRY_POINT: 057f3f34
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetDirectionAwayFromClosestWall(void)

{
  bool in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x21;
  
  if (in_ZR) {
    if (*(char *)(unaff_x19 + 0x70) == '\0') {
      pcVar4 = FUN_02c763d8;
    }
    else {
      uVar1 = thunk_FUN_02fc078c();
      uVar2 = FUN_02fe98dc();
      if ((uVar1 & 1) == 0) {
        if ((uVar2 & 1) == 0) {
          pcVar4 = FUN_02c7643c;
        }
        else {
          pcVar4 = FUN_02c764ac;
        }
      }
      else if ((uVar2 & 1) == 0) {
        pcVar4 = FUN_02c765b0;
      }
      else {
        pcVar4 = FUN_02c76670;
      }
    }
  }
  else {
    if (unaff_x21 == 0) {
      uVar3 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar3,0);
    }
    pcVar4 = FUN_02c76378;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar4;
  *(code **)(unaff_x19 + 0x38) = FUN_02c761d4;
  return;
}


