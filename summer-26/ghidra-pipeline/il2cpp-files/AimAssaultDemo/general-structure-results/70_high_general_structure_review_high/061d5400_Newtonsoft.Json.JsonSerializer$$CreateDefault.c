/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 061d5400
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__CreateDefault(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int in_w8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if (in_w8 == 0) {
    FUN_0373b518(PTR_DAT_07daa388);
    *(undefined1 *)(unaff_x21 + 0x386) = 1;
  }
  lVar2 = *unaff_x19;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar2 = *unaff_x19;
  }
  cVar1 = **(char **)(lVar2 + 0xb8);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x20);
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


