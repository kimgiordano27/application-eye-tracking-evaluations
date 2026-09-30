/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MetadataPropertyHandling
ENTRY_POINT: 02754664
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MetadataPropertyHandling(uint param_1)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint in_w8;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long *unaff_x22;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
  uVar2 = 1 << (ulong)(in_w8 & 0x1f);
  if (((uVar2 & 0x158) == 0) &&
     (((uVar2 & 0xa0) != 0 || ((in_w8 != 0xd && ((param_1 & 0xfffe) != 0x16)))))) {
    bVar3 = false;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03cf6080 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_00000000 = FUN_026f3e30(0);
    bVar3 = true;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc4b20);
  }
  uVar5 = FUN_02786588();
  if ((uVar5 & 1) == 0) {
    if (bVar3) {
      lVar8 = *(long *)PTR_DAT_03cfa5c8;
    }
    else {
      if (in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar8 = FUN_026f4d88(in_stack_00000000,0);
    }
  }
  else {
    plVar1 = (long *)PTR_DAT_03cc28c8;
    if (!bVar3) {
      plVar1 = (long *)PTR_DAT_03cd0450;
    }
    lVar8 = *plVar1;
  }
  if (DAT_041221cf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    DAT_041221cf = '\x01';
  }
  if (lVar8 != 0) {
    uVar6 = FUN_025bb98c(lVar8,0);
    iVar7 = *(int *)(lVar8 + 0x10);
    if (iVar7 != 1) goto LAB_0275481c;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar8 = FUN_02753930(uVar6,1,&stack0x00000018);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar8 != 0) {
      uVar6 = FUN_025bb98c(lVar8,0);
      iVar7 = *(int *)(lVar8 + 0x10);
      goto LAB_0275481c;
    }
  }
  iVar7 = 0;
  uVar6 = 0;
LAB_0275481c:
  uVar4 = in_stack_00000018;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02751efc(uVar4,uVar6,iVar7,in_stack_00000000);
  return;
}


