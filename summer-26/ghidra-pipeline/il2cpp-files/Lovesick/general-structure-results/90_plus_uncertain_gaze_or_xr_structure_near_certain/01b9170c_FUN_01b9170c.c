/*
FUNCTION_NAME: FUN_01b9170c
ENTRY_POINT: 01b9170c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_01b9170c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = Method_System_ReadOnlySpan<int>_get_Length__;
  puVar2 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if ((DAT_0377e609 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteIntegerValueAsync>d__24>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f2f58);
    thunk_FUN_00d48444(Method_System_ReadOnlySpan<int>_get_Length__);
    thunk_FUN_00d48444(System_Collections_Generic_List_Enumerator<BsonToken>_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_31_0_TypeInfo);
    thunk_FUN_00d48444(GoogleSheetsToUnity_SpreadsheetManager_TypeInfo);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_0377e609 = 1;
  }
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = *(undefined8 *)puVar2;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteIntegerValueAsync>d__24>__
  ;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar1;
  }
  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_033f2f58;
  if (lVar4 != 0) {
    FUN_01b90b98(lVar4,uVar6,
                 *(undefined8 *)System_Collections_Generic_List_Enumerator<BsonToken>_TypeInfo);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      FUN_01b90c54(0x3f000000,lVar5,*(undefined8 *)GoogleSheetsToUnity_SpreadsheetManager_TypeInfo,
                   lVar4);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


