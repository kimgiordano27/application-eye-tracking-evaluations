/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_NullValueHandling
ENTRY_POINT: 0275456c
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling
               (undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000018;
  
  lStack0000000000000000 = param_4;
  uStack0000000000000008 = param_5;
  if ((DAT_04124aa0 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf6080);
    FUN_01ab69ac(PTR_DAT_03cf7b88);
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(PTR_DAT_03cef9c0);
    FUN_01ab69ac(PTR_DAT_03cc4b20);
    FUN_01ab69ac(PTR_DAT_03cfa5c8);
    FUN_01ab69ac(PTR_DAT_03cd0450);
    FUN_01ab69ac(PTR_DAT_03cc28c8);
    DAT_04124aa0 = 1;
  }
  puVar3 = PTR_DAT_03cf7b88;
  if ((int)param_3 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_0274322c(&stack0x00000018);
    if (lVar6 < 864000000000) {
      if ((lStack0000000000000000 == 0) ||
         (plVar5 = *(long **)(lStack0000000000000000 + 0x78), plVar5 == (long *)0x0))
      goto LAB_02754884;
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
      lStack0000000000000000 = FUN_026f3e30(0);
      bVar2 = true;
    }
    else {
LAB_027546b0:
      bVar2 = false;
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar3;
    }
    uVar7 = **(undefined8 **)(lVar6 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc4b20);
    }
    uVar8 = FUN_02786588(param_5,uVar7,0);
    if ((uVar8 & 1) == 0) {
      if (bVar2) {
        lVar6 = *(long *)PTR_DAT_03cfa5c8;
      }
      else {
        if (lStack0000000000000000 == 0) {
LAB_02754884:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar6 = FUN_026f4d88(lStack0000000000000000,0);
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
      param_2 = FUN_025bb98c(lVar6,0);
      param_3 = (ulong)*(uint *)(lVar6 + 0x10);
      uVar8 = 0;
      goto LAB_02754794;
    }
  }
  else {
    uVar8 = param_3 >> 0x20;
LAB_02754794:
    if ((int)param_3 != 1) goto LAB_0275481c;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_02753930(param_2,uVar8 << 0x20 | 1,&stack0x00000018);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    if (lVar6 != 0) {
      param_2 = FUN_025bb98c(lVar6,0);
      param_3 = (ulong)*(uint *)(lVar6 + 0x10);
      uVar8 = 0;
      goto LAB_0275481c;
    }
  }
  param_3 = 0;
  uVar8 = 0;
  param_2 = 0;
LAB_0275481c:
  uVar7 = in_stack_00000018;
  lVar6 = lStack0000000000000000;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02751efc(uVar7,param_2,param_3 & 0xffffffff | uVar8 << 0x20,lVar6,param_5,0);
  return;
}


