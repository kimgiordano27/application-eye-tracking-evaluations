/*
FUNCTION_NAME: FUN_034eea24
ENTRY_POINT: 034eea24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void FUN_034eea24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = Method_System_Net_WebRequest_BeginGetResponse__;
  if ((DAT_04832e2a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Seek__);
    thunk_FUN_01efb3a4(Method_System_Net_WebConnectionStream_set_WriteTimeout__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequestStream_Close_internal__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_BeginGetResponse__);
    DAT_04832e2a = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = Method_System_Net_WebConnectionStream_set_WriteTimeout__;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar2;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_Compression_DeflateStream_Seek__);
    FUN_02e670b4(lVar5,uVar6,*(undefined8 *)Method_System_Net_WebRequestStream_Close_internal__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar4 = lVar5;
    thunk_FUN_01f51358(plVar4,lVar5);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_034ee878(param_1,param_2,lVar5);
  return;
}


