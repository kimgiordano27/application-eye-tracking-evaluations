/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 055dbe44
PROGRAM: beastcraft-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary(code *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  
  lVar1 = (*param_1)();
  puVar2 = PTR_DAT_06a7aba8;
  lVar1 = lVar1 + unaff_x20;
  if (lVar1 < 0) {
    thunk_FUN_02ea289c(PTR_DAT_06a33d30);
    uVar4 = thunk_FUN_02e78ab8();
    puVar2 = PTR_DAT_06a83720;
  }
  else {
    if (*(long *)(unaff_x19 + 0x48) <= lVar1) {
      FUN_055da33c();
      uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar4 = FUN_055d9cf0(uVar4,lVar1,0,(long)&stack0x00000008 + 4);
      *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
      if (in_stack_00000008._4_4_ == 0) {
        return;
      }
      uVar4 = FUN_055d9144();
      thunk_FUN_02ea289c(PTR_DAT_06a7aba8);
      FUN_02a73238();
      uVar4 = FUN_055d91c8(uVar4,in_stack_00000008._4_4_);
      goto LAB_055dbff4;
    }
    thunk_FUN_02ea289c(PTR_DAT_06a33d30);
    uVar4 = thunk_FUN_02e78ab8();
    puVar2 = PTR_DAT_06a83728;
  }
  uVar3 = thunk_FUN_02ea289c(puVar2);
  FUN_055b9f00(uVar4,uVar3,0);
LAB_055dbff4:
  uVar3 = thunk_FUN_02ea289c(PTR_DAT_06a83738);
                    /* WARNING: Subroutine does not return */
  FUN_02e3cb88(uVar4,uVar3);
}


