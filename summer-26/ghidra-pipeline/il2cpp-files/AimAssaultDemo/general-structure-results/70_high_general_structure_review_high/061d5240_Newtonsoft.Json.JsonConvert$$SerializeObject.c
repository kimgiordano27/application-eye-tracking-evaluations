/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 061d5240
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  FUN_0373b518();
  *(undefined1 *)(unaff_x19 + 0x5bd) = 1;
  lVar1 = *unaff_x21;
  if (unaff_x20 == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x21;
    }
    uVar2 = 0;
    puVar3 = (undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x38);
    *puVar3 = 0;
  }
  else {
    uVar2 = thunk_FUN_037788cc();
    FUN_061d6f54();
    lVar1 = *unaff_x21;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar1 = *unaff_x21;
    }
    puVar3 = (undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x38);
    *puVar3 = uVar2;
  }
  thunk_FUN_037aeb94(puVar3,uVar2);
  return;
}


