/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 058c9bec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


undefined8 Newtonsoft_Json_JsonTextWriter__WriteStartArray(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  
  if ((param_1 == in_w8) &&
     (uVar1 = System_Globalization_UmAlQuraCalendar__GetDayOfMonth(), (uVar1 & 1) != 0)) {
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c2058);
    FUN_058c7320(uVar2,0x468,1,0);
    return uVar2;
  }
  thunk_FUN_031edd38(PTR_DAT_07103ac0);
  uVar2 = FUN_057b27f0();
  thunk_FUN_031edd38(PTR_DAT_070c28b0);
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  FUN_05931f6c(uVar3,uVar2,0);
  uVar2 = thunk_FUN_031edd38(PTR_DAT_07103ac8);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar3,uVar2);
}


