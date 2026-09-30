/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ConstructorHandling
ENTRY_POINT: 027546a8
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ConstructorHandling(uint param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  int in_w8;
  uint in_w9;
  uint in_w10;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long *unaff_x22;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
  if (((in_w9 & in_w10) == 0) && ((in_w8 == 0xd || ((param_1 & 0xfffe) == 0x16)))) {
    if (*(int *)(*(long *)PTR_DAT_03cf6080 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_00000000 = FUN_026f3e30(0);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc4b20);
  }
  uVar4 = FUN_02786588();
  if ((uVar4 & 1) == 0) {
    if (bVar2) {
      lVar7 = *(long *)PTR_DAT_03cfa5c8;
    }
    else {
      if (in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar7 = FUN_026f4d88(in_stack_00000000,0);
    }
  }
  else {
    plVar1 = (long *)PTR_DAT_03cc28c8;
    if (!bVar2) {
      plVar1 = (long *)PTR_DAT_03cd0450;
    }
    lVar7 = *plVar1;
  }
  if (DAT_041221cf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    DAT_041221cf = '\x01';
  }
  if (lVar7 != 0) {
    uVar5 = FUN_025bb98c(lVar7,0);
    iVar6 = *(int *)(lVar7 + 0x10);
    if (iVar6 != 1) goto LAB_0275481c;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar7 = FUN_02753930(uVar5,1,&stack0x00000018);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar7 != 0) {
      uVar5 = FUN_025bb98c(lVar7,0);
      iVar6 = *(int *)(lVar7 + 0x10);
      goto LAB_0275481c;
    }
  }
  iVar6 = 0;
  uVar5 = 0;
LAB_0275481c:
  uVar3 = in_stack_00000018;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02751efc(uVar3,uVar5,iVar6,in_stack_00000000);
  return;
}


