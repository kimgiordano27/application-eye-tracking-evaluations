/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 02754640
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long *unaff_x22;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
  if ((param_1 == 0) || (plVar5 = *(long **)(param_1 + 0x78), plVar5 == (long *)0x0))
  goto LAB_02754884;
  uVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
  if ((uVar4 & 0xffff) < 9) {
    uVar1 = 1 << (ulong)(uVar4 & 0x1f);
    if ((uVar1 & 0x158) != 0) goto LAB_02754678;
    if ((uVar1 & 0xa0) == 0) goto LAB_0275486c;
LAB_027546b0:
    bVar2 = false;
  }
  else {
LAB_0275486c:
    if (((uVar4 & 0xffff) != 0xd) && ((uVar4 & 0xfffe) != 0x16)) goto LAB_027546b0;
LAB_02754678:
    if (*(int *)(*(long *)PTR_DAT_03cf6080 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_00000000 = FUN_026f3e30(0);
    bVar2 = true;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc4b20);
  }
  uVar6 = FUN_02786588();
  if ((uVar6 & 1) == 0) {
    if (bVar2) {
      lVar9 = *(long *)PTR_DAT_03cfa5c8;
    }
    else {
      if (in_stack_00000000 == 0) {
LAB_02754884:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar9 = FUN_026f4d88(in_stack_00000000,0);
    }
  }
  else {
    plVar5 = (long *)PTR_DAT_03cc28c8;
    if (!bVar2) {
      plVar5 = (long *)PTR_DAT_03cd0450;
    }
    lVar9 = *plVar5;
  }
  if (DAT_041221cf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    DAT_041221cf = '\x01';
  }
  if (lVar9 != 0) {
    uVar7 = FUN_025bb98c(lVar9,0);
    iVar8 = *(int *)(lVar9 + 0x10);
    if (iVar8 != 1) goto LAB_0275481c;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar9 = FUN_02753930(uVar7,1,&stack0x00000018);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar9 != 0) {
      uVar7 = FUN_025bb98c(lVar9,0);
      iVar8 = *(int *)(lVar9 + 0x10);
      goto LAB_0275481c;
    }
  }
  iVar8 = 0;
  uVar7 = 0;
LAB_0275481c:
  uVar3 = in_stack_00000018;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02751efc(uVar3,uVar7,iVar8,in_stack_00000000);
  return;
}


