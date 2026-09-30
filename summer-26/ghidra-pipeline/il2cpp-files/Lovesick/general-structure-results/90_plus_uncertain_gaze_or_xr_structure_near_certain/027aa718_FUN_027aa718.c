/*
FUNCTION_NAME: FUN_027aa718
ENTRY_POINT: 027aa718
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_file_logging_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


bool FUN_027aa718(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_037887a7 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8098);
    thunk_FUN_00d48444(
                      Method_System_Text_RegularExpressions_MatchCollection_Enumerator_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_ComponentModel_TypeConverter_GetConvertFromException__);
    thunk_FUN_00d48444(StringLiteral_5072);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_3__);
    thunk_FUN_00d48444(PTR_DAT_033f2e30);
    thunk_FUN_00d48444(StringLiteral_8085);
    thunk_FUN_00d48444(PTR_DAT_033f0078);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_RhythmGameStarter_Track_<>c__DisplayClass11_0_<RecycleAllNotes>b__0__)
    ;
    thunk_FUN_00d48444(StringLiteral_3301);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<CloseBufferAndWriterAsync>d__9>__
                      );
    DAT_037887a7 = 1;
  }
  puVar2 = Method_System_Text_RegularExpressions_MatchCollection_Enumerator_get_Current__;
  puVar1 = PTR_DAT_033f0078;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar3 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  lVar4 = FUN_012c4efc(*(undefined8 *)puVar2);
  puVar1 = StringLiteral_5072;
  if (lVar3 != lVar4) {
    if (*(int *)(*(long *)StringLiteral_3301 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar4 = FUN_012c4efc(*(undefined8 *)puVar1);
    puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_3__;
    if (lVar3 != lVar4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<CloseBufferAndWriterAsync>d__9>__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar4 = FUN_012c4efc(*(undefined8 *)puVar1);
      puVar1 = StringLiteral_8098;
      if (lVar3 != lVar4) {
        if (*(int *)(*(long *)
                      Method_RhythmGameStarter_Track_<>c__DisplayClass11_0_<RecycleAllNotes>b__0__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar4 = FUN_012c4efc(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_033f2e30;
        if (lVar3 != lVar4) {
          if (*(int *)(*(long *)StringLiteral_8085 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar4 = FUN_012c4efc(*(undefined8 *)puVar1);
          puVar1 = Method_System_ComponentModel_TypeConverter_GetConvertFromException__;
          if (lVar3 != lVar4) {
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<IXRGrabTransformer>_MoveNext__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar4 = FUN_012c4efc(*(undefined8 *)puVar1);
            return lVar3 == lVar4;
          }
        }
      }
    }
  }
  return true;
}


