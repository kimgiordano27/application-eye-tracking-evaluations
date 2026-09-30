/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObjectInternal
ENTRY_POINT: 061d5434
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeObjectInternal(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char *in_x9;
  long *unaff_x20;
  
  cVar1 = *in_x9;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70(param_1);
  }
  if (cVar1 != '\0') {
    lVar2 = FUN_061d52c8();
    return lVar2;
  }
  lVar2 = FUN_03741c68();
  if (lVar2 != 0) {
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar2 = FUN_061d5558(lVar2);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x10) = 1;
      *(undefined1 *)(lVar2 + 0x28) = 1;
      goto LAB_061d54ec;
    }
  }
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar2 = FUN_061d52c8();
LAB_061d54ec:
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x20;
  }
  plVar4 = (long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  *plVar4 = lVar2;
  thunk_FUN_037aeb94(plVar4,lVar2);
  return lVar2;
}


