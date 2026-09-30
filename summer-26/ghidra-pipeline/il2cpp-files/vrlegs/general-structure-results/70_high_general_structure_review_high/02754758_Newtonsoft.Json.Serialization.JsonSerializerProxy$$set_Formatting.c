/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Formatting
ENTRY_POINT: 02754758
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Formatting(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000018;
  
  if (DAT_041221cf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    DAT_041221cf = '\x01';
  }
  if (unaff_x21 != 0) {
    uVar2 = FUN_025bb98c();
    iVar4 = *(int *)(unaff_x21 + 0x10);
    if (iVar4 != 1) goto LAB_0275481c;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar3 = FUN_02753930(uVar2,1,&stack0x00000018);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar3 != 0) {
      uVar2 = FUN_025bb98c(lVar3,0);
      iVar4 = *(int *)(lVar3 + 0x10);
      goto LAB_0275481c;
    }
  }
  iVar4 = 0;
  uVar2 = 0;
LAB_0275481c:
  uVar1 = in_stack_00000018;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02751efc(uVar1,uVar2,iVar4,in_stack_00000000);
  return;
}


