/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 073f335c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBoundaryVisibility(void)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  long *plVar5;
  
  plVar5 = *(long **)(unaff_x22 + 0xe98);
  lVar4 = *(long *)(unaff_x20 + 0x70);
  while ((plVar2 = (long *)FUN_07148944(lVar4), plVar2 == (long *)0x0 || (*plVar2 == *plVar5))) {
    lVar3 = FUN_03cab820((long *)(unaff_x20 + 0x70),plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fecc(plVar2);
}


