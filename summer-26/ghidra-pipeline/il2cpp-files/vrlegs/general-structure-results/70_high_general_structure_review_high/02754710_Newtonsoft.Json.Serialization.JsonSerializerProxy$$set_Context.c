/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Context
ENTRY_POINT: 02754710
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Context(long *param_1)

{
  undefined8 uVar1;
  long *in_x9;
  undefined8 uVar2;
  int unaff_w21;
  int iVar3;
  long lVar4;
  long *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000018;
  
  if (unaff_w21 == 0) {
    param_1 = in_x9;
  }
  lVar4 = *param_1;
  if (DAT_041221cf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    DAT_041221cf = '\x01';
  }
  if (lVar4 != 0) {
    uVar2 = FUN_025bb98c(lVar4,0);
    iVar3 = *(int *)(lVar4 + 0x10);
    if (iVar3 != 1) goto LAB_0275481c;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = FUN_02753930(uVar2,1,&stack0x00000018);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar4 != 0) {
      uVar2 = FUN_025bb98c(lVar4,0);
      iVar3 = *(int *)(lVar4 + 0x10);
      goto LAB_0275481c;
    }
  }
  iVar3 = 0;
  uVar2 = 0;
LAB_0275481c:
  uVar1 = in_stack_00000018;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02751efc(uVar1,uVar2,iVar3,in_stack_00000000);
  return;
}


