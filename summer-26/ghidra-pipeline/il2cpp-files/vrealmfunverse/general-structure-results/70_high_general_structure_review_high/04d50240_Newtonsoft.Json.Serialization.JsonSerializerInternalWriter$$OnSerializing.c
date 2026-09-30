/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerializing
ENTRY_POINT: 04d50240
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iStack000000000000000c;
  
  puVar1 = PTR_DAT_06329c90;
  if ((DAT_066c8700 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06329c90);
    DAT_066c8700 = 1;
  }
  iStack000000000000000c = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_04d5212c(param_2,param_3,param_4,param_5,&stack0x0000000c);
  if (iStack000000000000000c == 0) {
    if ((int)uVar3 == -1) {
      thunk_FUN_02ba3594(PTR_DAT_0631d070);
      uVar3 = thunk_FUN_02b79644();
      FUN_04d34534(uVar3,0);
      goto LAB_04d50344;
    }
  }
  else {
    if (iStack000000000000000c != 0x6d) {
      uVar3 = FUN_04d4ed8c(param_1,*(undefined8 *)(param_1 + 0x30));
      iVar2 = iStack000000000000000c;
      thunk_FUN_02ba3594(PTR_DAT_06329c90);
      FUN_0275e12c();
      uVar3 = FUN_04d4ee10(uVar3,iVar2);
LAB_04d50344:
      uVar4 = thunk_FUN_02ba3594(PTR_DAT_063329e0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar3,uVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}


