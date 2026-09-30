/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeList
ENTRY_POINT: 06861610
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeList
              (long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *in_x9;
  long *unaff_x19;
  long *unaff_x20;
  
  (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x3f0));
  if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
    FUN_033b9870(DAT_083ca578);
  }
  iVar1 = FUN_06862f20();
  if (iVar1 == 0) {
    if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar4 = FUN_06863e70();
    if ((uVar4 & 1) != 0) {
      uVar5 = (**(code **)(*unaff_x20 + 0x1c8))();
      if (*(int *)(DAT_083ca578 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca578);
      }
      iVar2 = FUN_06863fcc(uVar5);
      (**(code **)(*unaff_x19 + 0x1c8))();
      iVar3 = FUN_06863fcc();
      if ((iVar2 != iVar3) && (iVar1 = 1, iVar2 < iVar3)) {
        iVar1 = 2;
      }
    }
  }
  return iVar1;
}


