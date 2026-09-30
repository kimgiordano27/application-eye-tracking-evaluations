/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_MetadataPropertyHandling
ENTRY_POINT: 0325dc08
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__set_MetadataPropertyHandling(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_04532b43 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fc80);
    DAT_04532b43 = 1;
  }
  puVar1 = PTR_DAT_0422fc80;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    lVar3 = *(long *)PTR_DAT_0422fc80;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar3 = *(long *)puVar1;
    }
    iVar2 = FUN_031573a0(param_1,**(undefined8 **)(lVar3 + 0xb8),0);
    if (iVar2 != -1) {
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar4 = thunk_FUN_01c496e0();
      uVar5 = thunk_FUN_01c273e8(
                                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<IList<AsyncOperationHandle>>_IsValid__
                                );
      FUN_032467a0(uVar4,uVar5,0);
      uVar5 = thunk_FUN_01c273e8(
                                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<IList<AsyncOperationHandle>>_Release__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar4,uVar5);
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar3 = *(long *)puVar1;
    }
    iVar2 = FUN_03157c78(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20),0);
    if (-1 < iVar2) {
      lVar3 = System_IO_BufferedStream_<DisposeAsync>d__34__MoveNext(param_1,iVar2 + 1,0);
      return lVar3;
    }
  }
  return param_1;
}


