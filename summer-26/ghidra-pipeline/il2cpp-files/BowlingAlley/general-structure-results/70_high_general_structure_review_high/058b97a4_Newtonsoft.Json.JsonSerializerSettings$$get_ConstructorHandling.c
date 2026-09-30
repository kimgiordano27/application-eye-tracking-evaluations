/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ConstructorHandling
ENTRY_POINT: 058b97a4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_ConstructorHandling(void)

{
  uint uVar1;
  undefined *puVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int in_w8;
  undefined8 *in_x9;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  ushort *puVar8;
  uint unaff_w24;
  
  uVar1 = unaff_w24 & 0xffff | 0x10000000;
  lVar5 = FUN_032d5d3c(*in_x9,in_w8 << 1);
  iVar4 = thunk_FUN_032f8ab8(0);
  puVar2 = PTR_DAT_07290a18;
  if (lVar5 == 0) {
    if ((unaff_w19 & uVar1) == 0) {
LAB_058b99bc:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)0x0;
    if (*(int *)(lVar5 + 0x18) != 0) {
      puVar8 = (ushort *)(lVar5 + 0x20);
    }
    if ((unaff_w19 & uVar1) == 0) {
      if (lVar5 == 0) goto LAB_058b99bc;
      FUN_05950414(unaff_x20 + iVar4,puVar8,(long)*(int *)(lVar5 + 0x18),
                   (long)*(int *)(lVar5 + 0x18),0);
      goto LAB_058b98cc;
    }
  }
  if (0 < *(int *)(unaff_x20 + 0x10)) {
    lVar5 = 0;
    do {
      uVar3 = FUN_057a62b4();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)puVar2);
      }
      if (uVar3 - 0x61 < 0x1a) {
        uVar3 = uVar3 - 0x20;
      }
      *puVar8 = uVar3;
      lVar5 = lVar5 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar5 < *(int *)(unaff_x20 + 0x10));
  }
LAB_058b98cc:
  puVar2 = PTR_DAT_072906b8;
  uVar6 = (**(code **)(*unaff_x21 + 0x188))();
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_058dab6c(uVar7,uVar6);
  return uVar7;
}


