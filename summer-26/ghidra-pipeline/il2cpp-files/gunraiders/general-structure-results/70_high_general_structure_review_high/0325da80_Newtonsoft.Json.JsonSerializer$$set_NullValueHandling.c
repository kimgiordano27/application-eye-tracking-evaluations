/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_NullValueHandling
ENTRY_POINT: 0325da80
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


long Newtonsoft_Json_JsonSerializer__set_NullValueHandling(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 in_w8;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xb03) = in_w8;
  uVar3 = FUN_031532a8();
  if ((uVar3 & 1) == 0) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (1 < *(int *)(unaff_x19 + 0x10)) {
      if (*(int *)(*(long *)Oculus_Platform_Models_ProductList_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03228540();
      if ((unaff_x20 & 1) != 0) {
        uVar2 = FUN_0314e438();
        puVar1 = PTR_DAT_0422fc80;
        if (*(int *)(*(long *)PTR_DAT_0422fc80 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fc80);
        }
        uVar3 = FUN_0325db74(uVar2);
        if ((uVar3 & 1) != 0) {
          lVar4 = FUN_03313b64(*(undefined8 *)
                                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<IList<AsyncOperationHandle>>_InternalGetDownloadStatus__
                               ,0);
          return lVar4;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar4 = Newtonsoft_Json_JsonSerializer__get_MetadataPropertyHandling();
        return lVar4;
      }
    }
  }
  else {
    unaff_x19 = **(long **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
  }
  return unaff_x19;
}


