/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling
ENTRY_POINT: 05067598
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializerSettings__get_MetadataPropertyHandling(uint param_1)

{
  long lVar1;
  long in_x9;
  long unaff_x19;
  
  if ((param_1 & 1) == 0) {
    lVar1 = FUN_02f0880c(**(undefined8 **)(in_x9 + 0x890),1);
    if (lVar1 == 0) goto LAB_0506761c;
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_05067618;
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(unaff_x19 + 100);
  }
  else {
    lVar1 = FUN_02f0880c(**(undefined8 **)(in_x9 + 0x890),2);
    if (lVar1 == 0) {
LAB_0506761c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((*(int *)(lVar1 + 0x18) == 0) ||
       (*(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(unaff_x19 + 100),
       *(int *)(lVar1 + 0x18) == 1)) {
LAB_05067618:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    *(undefined4 *)(lVar1 + 0x24) = 8;
  }
  thunk_FUN_02f168c4();
  *(long *)(unaff_x19 + 0x40) = lVar1;
  thunk_FUN_02f168c4();
  return lVar1;
}


