/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_PreserveReferencesHandling
ENTRY_POINT: 027545fc
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_PreserveReferencesHandling(void)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  ulong uVar7;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
  if ((int)unaff_x21 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_0274322c(&stack0x00000018);
    if (lVar6 < 864000000000) {
      if ((in_stack_00000000 == 0) ||
         (plVar5 = *(long **)(in_stack_00000000 + 0x78), plVar5 == (long *)0x0)) goto LAB_02754884;
      uVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
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
        lVar6 = *(long *)PTR_DAT_03cfa5c8;
      }
      else {
        if (in_stack_00000000 == 0) {
LAB_02754884:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar6 = FUN_026f4d88(in_stack_00000000,0);
      }
    }
    else {
      plVar5 = (long *)PTR_DAT_03cc28c8;
      if (!bVar2) {
        plVar5 = (long *)PTR_DAT_03cd0450;
      }
      lVar6 = *plVar5;
    }
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar6 != 0) {
      unaff_x20 = FUN_025bb98c(lVar6,0);
      unaff_x21 = (ulong)*(uint *)(lVar6 + 0x10);
      uVar7 = 0;
      goto LAB_02754794;
    }
  }
  else {
    uVar7 = unaff_x21 >> 0x20;
LAB_02754794:
    if ((int)unaff_x21 != 1) goto LAB_0275481c;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_02753930(unaff_x20,uVar7 << 0x20 | 1,&stack0x00000018);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar6 != 0) {
      unaff_x20 = FUN_025bb98c(lVar6,0);
      unaff_x21 = (ulong)*(uint *)(lVar6 + 0x10);
      uVar7 = 0;
      goto LAB_0275481c;
    }
  }
  unaff_x21 = 0;
  uVar7 = 0;
  unaff_x20 = 0;
LAB_0275481c:
  uVar3 = in_stack_00000018;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02751efc(uVar3,unaff_x20,unaff_x21 & 0xffffffff | uVar7 << 0x20,in_stack_00000000);
  return;
}


