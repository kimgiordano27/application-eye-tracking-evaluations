/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_NullValueHandling
ENTRY_POINT: 0170ea74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
  if ((DAT_037789f6 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__);
    DAT_037789f6 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  thunk_FUN_00d8e500();
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      FUN_0170e590();
      if (*(long *)(lVar2 + 0x78) != 0) {
        *(undefined1 *)(*(long *)(lVar2 + 0x78) + 0x14) = 1;
        *(undefined1 *)(lVar2 + 0x140) = 1;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        thunk_FUN_00d8e500();
        **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
        goto LAB_0170eb0c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_0170eb0c:
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = **(undefined8 **)(lVar2 + 0xb8);
  thunk_FUN_00d8e500();
  return uVar3;
}


