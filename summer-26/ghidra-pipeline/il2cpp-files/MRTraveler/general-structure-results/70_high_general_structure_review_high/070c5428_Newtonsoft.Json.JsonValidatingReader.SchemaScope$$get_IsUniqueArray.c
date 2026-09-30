/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 070c5428
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray(void)

{
  bool in_ZR;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((in_ZR) && (uVar1 = thunk_FUN_06f73d88(), (uVar1 & 1) != 0)) {
    uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e693f0);
    FUN_070c3b5c(uVar2,0x46e,1,0);
    return uVar2;
  }
  thunk_FUN_03ce5214(PTR_DAT_08ea4630);
  uVar2 = FUN_06f683f8();
  thunk_FUN_03ce5214(PTR_DAT_08e69f78);
  uVar3 = thunk_FUN_03cf5234();
  FUN_07103620(uVar3,uVar2,0);
  uVar2 = thunk_FUN_03ce5214(PTR_DAT_08ea4638);
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar3,uVar2);
}


