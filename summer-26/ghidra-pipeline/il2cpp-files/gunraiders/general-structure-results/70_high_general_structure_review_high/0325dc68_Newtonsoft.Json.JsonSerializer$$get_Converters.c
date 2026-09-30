/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Converters
ENTRY_POINT: 0325dc68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_Converters(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  if (param_1 != -1) {
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar2 = thunk_FUN_01c496e0();
    uVar3 = thunk_FUN_01c273e8(
                              Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<IList<AsyncOperationHandle>>_IsValid__
                              );
    FUN_032467a0(uVar2,uVar3,0);
    uVar3 = thunk_FUN_01c273e8(
                              Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<IList<AsyncOperationHandle>>_Release__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2,uVar3);
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  iVar1 = FUN_03157c78();
  if (-1 < iVar1) {
    System_IO_BufferedStream_<DisposeAsync>d__34__MoveNext();
    return;
  }
  return;
}


