/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ApplySerializerSettings
ENTRY_POINT: 04f9c048
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializer__ApplySerializerSettings(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  
  puVar2 = PTR_DAT_0675eef8;
  if ((*(byte *)(unaff_x19 + 0xddc) & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675eef8);
    FUN_02d6084c(PTR_DAT_06775f20);
    *(undefined1 *)(unaff_x19 + 0xddc) = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_06775f20;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar6 != 0) {
    if (*(int *)(lVar4 + 0xe4) != 0) {
      return lVar6;
    }
    thunk_FUN_02dbd7b4();
    return *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_06775f20 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b78ba0 == '\0') {
    FUN_02d6084c(PTR_DAT_06775f20);
    DAT_06b78ba0 = '\x01';
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *(long *)puVar3;
  }
  cVar1 = **(char **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar2);
  }
  if (cVar1 != '\0') {
    lVar4 = FUN_04f8e414();
    return lVar4;
  }
  lVar4 = FUN_02d66f98();
  if (lVar4 != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar4 = FUN_04f9c22c(lVar4);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x10) = 1;
      *(undefined1 *)(lVar4 + 0x28) = 1;
      goto LAB_04f9c1c0;
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar4 = FUN_04f8e414();
LAB_04f9c1c0:
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar2;
  }
  plVar5 = (long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  *plVar5 = lVar4;
  thunk_FUN_02dd37b4(plVar5,lVar4);
  return lVar4;
}


