/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 04d4faec
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long lVar6;
  int iStack000000000000000c;
  
  iStack000000000000000c = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar3 = FUN_04ca52fc(param_1,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*unaff_x19 + 0x1b8))();
    puVar1 = PTR_DAT_06329c90;
    if ((uVar3 & 1) == 0) {
      thunk_FUN_02ba3594(PTR_DAT_06312c98);
      uVar5 = thunk_FUN_02b79644();
      uVar4 = thunk_FUN_02ba3594(PTR_DAT_063329a8);
      FUN_04d76a30(uVar5,uVar4,0);
    }
    else {
      if ((char)unaff_x19[0xb] != '\0') {
        FUN_04d4ff84();
      }
      lVar6 = unaff_x19[7];
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_04d4fc28(lVar6,&stack0x0000000c);
      if (iStack000000000000000c == 0) {
        return;
      }
      uVar4 = FUN_04d4ed8c();
      iVar2 = iStack000000000000000c;
      thunk_FUN_02ba3594(PTR_DAT_06329c90);
      FUN_0275e12c();
      uVar5 = FUN_04d4ee10(uVar4,iVar2);
    }
  }
  else {
    thunk_FUN_02ba3594(PTR_DAT_06320050);
    uVar5 = thunk_FUN_02b79644();
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_063329a0);
    FUN_04d8a5cc(uVar5,uVar4,0);
  }
  uVar4 = thunk_FUN_02ba3594(PTR_DAT_063329b0);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar5,uVar4);
}


