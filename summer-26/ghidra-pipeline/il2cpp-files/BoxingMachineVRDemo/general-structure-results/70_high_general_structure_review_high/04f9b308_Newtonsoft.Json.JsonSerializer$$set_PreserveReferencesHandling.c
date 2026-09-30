/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_PreserveReferencesHandling
ENTRY_POINT: 04f9b308
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined2 Newtonsoft_Json_JsonSerializer__set_PreserveReferencesHandling(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  uint unaff_w21;
  uint uVar6;
  uint unaff_w22;
  uint unaff_w23;
  long unaff_x24;
  
  while (iVar1 = FUN_04e8aaa4(), iVar1 != 0) {
    uVar6 = unaff_w22;
    if (iVar1 < 0) {
      uVar6 = unaff_w21;
      unaff_w23 = unaff_w22;
    }
    if ((int)(unaff_w23 - uVar6) < 4) goto LAB_04f9b38c;
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x20;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_04f9b428;
    unaff_w22 = uVar6 + (unaff_w23 - uVar6 >> 1);
    if (*(uint *)(**(long **)(lVar2 + 0xb8) + 0x18) <= unaff_w22) goto LAB_04f9b42c;
    unaff_x24 = (long)(int)unaff_w22;
    unaff_w21 = uVar6;
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x20;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 == 0) {
LAB_04f9b428:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(uint *)(lVar2 + 0x18) <= unaff_w22) {
LAB_04f9b42c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  lVar2 = lVar2 + unaff_x24 * 0x10;
LAB_04f9b410:
  return *(undefined2 *)(lVar2 + 0x28);
LAB_04f9b38c:
  if ((int)unaff_w23 < (int)uVar6) {
    thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    FUN_028f4b80();
    uVar3 = FUN_04f8dbc4();
    uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067781a8);
    uVar4 = FUN_05049204(uVar4,0);
    uVar3 = FUN_04e8e7d4(uVar3,uVar4);
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar4 = thunk_FUN_02d9d534();
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0676b5d0);
    FUN_04f77088(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_02dc61f4(PTR_DAT_067781b0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar3);
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x20;
  }
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_04f9b428;
  if (*(uint *)(**(long **)(lVar2 + 0xb8) + 0x18) <= uVar6) goto LAB_04f9b42c;
  iVar1 = FUN_04e8aaa4();
  if (iVar1 == 0) {
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x20;
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (lVar2 == 0) goto LAB_04f9b428;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_04f9b42c;
    lVar2 = lVar2 + (long)(int)uVar6 * 0x10;
    goto LAB_04f9b410;
  }
  uVar6 = uVar6 + 1;
  goto LAB_04f9b38c;
}


