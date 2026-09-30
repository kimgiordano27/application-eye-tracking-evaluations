/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetDirectionAwayFromClosestWall
ENTRY_POINT: 06de8760
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetDirectionAwayFromClosestWall(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 *unaff_x24;
  
  do {
    lVar2 = FUN_07148944(unaff_x21);
    if (lVar2 != 0) {
      uVar4 = *unaff_x24;
      lVar3 = thunk_FUN_03cf5138(lVar2,uVar4);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(lVar2,uVar4);
      }
    }
    lVar2 = FUN_03cab820();
    bVar1 = unaff_x21 != lVar2;
    unaff_x21 = lVar2;
  } while (bVar1);
  return;
}


