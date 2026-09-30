/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 04eb9500
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializer__Deserialize(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint unaff_w21;
  ulong unaff_x26;
  long lVar6;
  undefined8 uVar7;
  
  uVar2 = (**(code **)(param_1 + 0x1b8))(param_2,*(undefined8 *)(param_1 + 0x1c0));
  if ((uVar2 & 1) == 0) {
    uVar7 = FUN_04e7fbcc(0);
    uVar5 = thunk_FUN_02c7737c(PTR_DAT_065f7a48);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar7,uVar5);
  }
  lVar3 = FUN_04eb8adc();
  puVar1 = PTR_DAT_065f79f0;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((unaff_x26 & 1) == 0) {
    FUN_04f982dc(lVar3,0);
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_04f98cd8();
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar4 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar4 = *(long *)puVar1;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065f6c70);
    FUN_04a56ab8(lVar6,uVar7,*(undefined8 *)PTR_DAT_065f7a40,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar6;
  }
  uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065f7a38);
  FUN_04eb966c(uVar7,1,unaff_w21 & 1,lVar6);
  if (lVar3 == 0) {
    FUN_04eb9930();
  }
  else {
    FUN_04eb97b0();
  }
  return uVar7;
}


