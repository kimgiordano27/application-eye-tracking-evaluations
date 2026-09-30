/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CheckForCircularReference
ENTRY_POINT: 04d4faf8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long lVar5;
  undefined8 in_stack_00000008;
  
  uVar2 = FUN_04ca52fc();
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
    puVar1 = PTR_DAT_06329c90;
    if ((uVar2 & 1) == 0) {
      thunk_FUN_02ba3594(PTR_DAT_06312c98);
      uVar4 = thunk_FUN_02b79644();
      uVar3 = thunk_FUN_02ba3594(PTR_DAT_063329a8);
      FUN_04d76a30(uVar4,uVar3,0);
    }
    else {
      if ((char)unaff_x19[0xb] != '\0') {
        FUN_04d4ff84();
      }
      lVar5 = unaff_x19[7];
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_04d4fc28(lVar5,(long)&stack0x00000008 + 4);
      if (in_stack_00000008._4_4_ == 0) {
        return;
      }
      uVar3 = FUN_04d4ed8c();
      thunk_FUN_02ba3594(PTR_DAT_06329c90);
      FUN_0275e12c();
      uVar4 = FUN_04d4ee10(uVar3,in_stack_00000008._4_4_);
    }
  }
  else {
    thunk_FUN_02ba3594(PTR_DAT_06320050);
    uVar4 = thunk_FUN_02b79644();
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_063329a0);
    FUN_04d8a5cc(uVar4,uVar3,0);
  }
  uVar3 = thunk_FUN_02ba3594(PTR_DAT_063329b0);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar4,uVar3);
}


