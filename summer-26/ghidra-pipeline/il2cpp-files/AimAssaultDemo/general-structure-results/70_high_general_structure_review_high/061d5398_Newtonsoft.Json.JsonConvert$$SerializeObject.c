/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 061d5398
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


long Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  long *unaff_x20;
  
  FUN_0373b518();
  *(undefined1 *)(unaff_x19 + 0x5a3) = 1;
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *unaff_x20;
  }
  puVar2 = PTR_DAT_07daa388;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    if (*(int *)(lVar3 + 0xe4) != 0) {
      return lVar5;
    }
    thunk_FUN_03798b70();
    return *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_07daa388 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (DAT_0825b386 == '\0') {
    FUN_0373b518(PTR_DAT_07daa388);
    DAT_0825b386 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar3 = *(long *)puVar2;
  }
  cVar1 = **(char **)(lVar3 + 0xb8);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x20);
  }
  if (cVar1 != '\0') {
    lVar3 = FUN_061d52c8();
    return lVar3;
  }
  lVar3 = FUN_03741c68();
  if (lVar3 != 0) {
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar3 = FUN_061d5558(lVar3);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x10) = 1;
      *(undefined1 *)(lVar3 + 0x28) = 1;
      goto LAB_061d54ec;
    }
  }
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = FUN_061d52c8();
LAB_061d54ec:
  lVar5 = *unaff_x20;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar5 = *unaff_x20;
  }
  plVar4 = (long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  *plVar4 = lVar3;
  thunk_FUN_037aeb94(plVar4,lVar3);
  return lVar3;
}


