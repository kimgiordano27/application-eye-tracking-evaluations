/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ContractResolver
ENTRY_POINT: 0325dcd0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ContractResolver(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_01c496e0();
  uVar2 = thunk_FUN_01c273e8(
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<IList<AsyncOperationHandle>>_IsValid__
                            );
  FUN_032467a0(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01c273e8(
                            Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<IList<AsyncOperationHandle>>_Release__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar1,uVar2);
}


