/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnDeserializedCallbacks
ENTRY_POINT: 074a722c
PROGRAM: cac-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonContract__get_OnDeserializedCallbacks(void)

{
  undefined *puVar1;
  uint in_w8;
  long unaff_x19;
  uint unaff_w20;
  undefined8 uVar2;
  long *unaff_x23;
  
  puVar1 = PTR_DAT_09118150;
  if ((unaff_w20 >> 4 & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0910b600 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar2 = FUN_07494908(uVar2,2);
  }
  else {
    *(uint *)(unaff_x19 + 0x24) = in_w8 | 0x100;
    uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar2 = FUN_07412434(uVar2,2,0);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
    if (((unaff_w20 >> 7 & 1) == 0) || ((*(byte *)(unaff_x19 + 0x25) >> 1 & 1) == 0)) {
      if ((unaff_w20 >> 4 & 1) == 0) {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        uVar2 = FUN_074a769c();
        return uVar2;
      }
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar2 = FUN_074a7588();
      return uVar2;
    }
    uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0910b600 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar2 = FUN_07494908(uVar2,1);
  }
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  return 1;
}


