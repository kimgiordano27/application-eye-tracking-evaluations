/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 055da610
PROGRAM: beastcraft-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x24;
  long *plVar4;
  long unaff_x25;
  int iStack000000000000000c;
  
  plVar4 = *(long **)(unaff_x24 + 0xba8);
  if ((*(byte *)(unaff_x25 + 0x612) & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a7aba8);
    *(undefined1 *)(unaff_x25 + 0x612) = 1;
  }
  iStack000000000000000c = 0;
  if (*(int *)(*plVar4 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar2 = FUN_055dc83c(param_2,param_3,param_4,param_5,&stack0x0000000c);
  if (iStack000000000000000c == 0) {
    if ((int)uVar2 == -1) {
      thunk_FUN_02ea289c(PTR_DAT_06a33d30);
      uVar2 = thunk_FUN_02e78ab8();
      FUN_055bbab4(uVar2,0);
      goto LAB_055da6fc;
    }
  }
  else {
    if (iStack000000000000000c != 0x6d) {
      uVar2 = FUN_055d9144(param_1,*(undefined8 *)(param_1 + 0x30));
      iVar1 = iStack000000000000000c;
      thunk_FUN_02ea289c(PTR_DAT_06a7aba8);
      FUN_02a73238();
      uVar2 = FUN_055d91c8(uVar2,iVar1);
LAB_055da6fc:
      uVar3 = thunk_FUN_02ea289c(PTR_DAT_06a83660);
                    /* WARNING: Subroutine does not return */
      FUN_02e3cb88(uVar2,uVar3);
    }
    uVar2 = 0;
  }
  return uVar2;
}


