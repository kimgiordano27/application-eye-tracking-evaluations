/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Context
ENTRY_POINT: 027546ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Context(void)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint unaff_w21;
  int iVar5;
  long lVar6;
  long *unaff_x22;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
  uVar3 = FUN_02786588();
  if ((uVar3 & 1) == 0) {
    if ((unaff_w21 & 1) == 0) {
      if (in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar6 = FUN_026f4d88(in_stack_00000000,0);
    }
    else {
      lVar6 = *(long *)PTR_DAT_03cfa5c8;
    }
  }
  else {
    plVar1 = (long *)PTR_DAT_03cc28c8;
    if (unaff_w21 == 0) {
      plVar1 = (long *)PTR_DAT_03cd0450;
    }
    lVar6 = *plVar1;
  }
  if (DAT_041221cf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    DAT_041221cf = '\x01';
  }
  if (lVar6 != 0) {
    uVar4 = FUN_025bb98c(lVar6,0);
    iVar5 = *(int *)(lVar6 + 0x10);
    if (iVar5 != 1) goto LAB_0275481c;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_02753930(uVar4,1,&stack0x00000018);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar6 != 0) {
      uVar4 = FUN_025bb98c(lVar6,0);
      iVar5 = *(int *)(lVar6 + 0x10);
      goto LAB_0275481c;
    }
  }
  iVar5 = 0;
  uVar4 = 0;
LAB_0275481c:
  uVar2 = in_stack_00000018;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02751efc(uVar2,uVar4,iVar5,in_stack_00000000);
  return;
}


