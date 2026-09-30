/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameHandling
ENTRY_POINT: 02754620
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling(void)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  long *unaff_x22;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
  lVar5 = FUN_0274322c(&stack0x00000018);
  if (lVar5 < 864000000000) {
    if ((in_stack_00000000 == 0) ||
       (plVar6 = *(long **)(in_stack_00000000 + 0x78), plVar6 == (long *)0x0)) goto LAB_02754884;
    uVar4 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    if ((uVar4 & 0xffff) < 9) {
      uVar1 = 1 << (ulong)(uVar4 & 0x1f);
      if ((uVar1 & 0x158) == 0) {
        if ((uVar1 & 0xa0) != 0) goto LAB_027546b0;
        goto LAB_0275486c;
      }
    }
    else {
LAB_0275486c:
      if (((uVar4 & 0xffff) != 0xd) && ((uVar4 & 0xfffe) != 0x16)) goto LAB_027546b0;
    }
    if (*(int *)(*(long *)PTR_DAT_03cf6080 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_00000000 = FUN_026f3e30(0);
    bVar2 = true;
  }
  else {
LAB_027546b0:
    bVar2 = false;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc4b20);
  }
  uVar7 = FUN_02786588();
  if ((uVar7 & 1) == 0) {
    if (bVar2) {
      lVar5 = *(long *)PTR_DAT_03cfa5c8;
    }
    else {
      if (in_stack_00000000 == 0) {
LAB_02754884:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = FUN_026f4d88(in_stack_00000000,0);
    }
  }
  else {
    plVar6 = (long *)PTR_DAT_03cc28c8;
    if (!bVar2) {
      plVar6 = (long *)PTR_DAT_03cd0450;
    }
    lVar5 = *plVar6;
  }
  if (DAT_041221cf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    DAT_041221cf = '\x01';
  }
  if (lVar5 != 0) {
    uVar8 = FUN_025bb98c(lVar5,0);
    iVar9 = *(int *)(lVar5 + 0x10);
    if (iVar9 != 1) goto LAB_0275481c;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = FUN_02753930(uVar8,1,&stack0x00000018);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar5 != 0) {
      uVar8 = FUN_025bb98c(lVar5,0);
      iVar9 = *(int *)(lVar5 + 0x10);
      goto LAB_0275481c;
    }
  }
  iVar9 = 0;
  uVar8 = 0;
LAB_0275481c:
  uVar3 = in_stack_00000018;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02751efc(uVar3,uVar8,iVar9,in_stack_00000000);
  return;
}


