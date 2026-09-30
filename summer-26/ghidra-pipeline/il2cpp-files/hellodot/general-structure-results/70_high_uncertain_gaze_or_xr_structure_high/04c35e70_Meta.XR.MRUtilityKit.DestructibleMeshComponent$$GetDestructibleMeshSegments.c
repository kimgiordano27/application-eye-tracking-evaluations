/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleMeshComponent$$GetDestructibleMeshSegments
ENTRY_POINT: 04c35e70
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_DestructibleMeshComponent__GetDestructibleMeshSegments(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *unaff_x19;
  long *unaff_x23;
  
  lVar1 = FUN_054d80d0();
  uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5f18);
  System_Xml_XmlEncodedRawTextWriter__FlushBuffer(uVar2,*(undefined8 *)PTR_DAT_065e6560,0);
  if (lVar1 != 0) {
    FUN_054db260(lVar1,uVar2,0);
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


