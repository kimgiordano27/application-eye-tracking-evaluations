/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 04d46330
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xb10));
  FUN_02b3c81c(PTR_DAT_063325b0);
  FUN_02b3c81c(PTR_DAT_06332540);
  *(undefined1 *)(unaff_x22 + 0x6b0) = 1;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = Oculus_Interaction_HandDebugGizmos__set_ForceOffVisibility();
  puVar1 = PTR_DAT_06332540;
  if ((uVar2 & 1) != 0) {
    FUN_04d46484();
    return;
  }
  lVar3 = *(long *)PTR_DAT_06332540;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  if (puVar5[7] == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *puVar5;
    uVar4 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063325a8);
    FUN_043813ac(uVar4,uVar6,*(undefined8 *)PTR_DAT_063325b0,0);
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
    *puVar5 = uVar4;
    thunk_FUN_02bb0e9c(puVar5,uVar4);
  }
  puVar1 = PTR_DAT_0631eb10;
  if (*(int *)(*(long *)PTR_DAT_0631eb10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c354d == '\0') {
    FUN_02b3c81c(PTR_DAT_0631eb10);
    DAT_066c354d = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04df6710();
  return;
}


