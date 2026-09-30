/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 04f9b298
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined2 Newtonsoft_Json_JsonSerializer__get_TypeNameAssemblyFormatHandling(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  uint uVar6;
  uint uVar7;
  long unaff_x21;
  uint uVar8;
  uint uVar9;
  
  FUN_02d6084c(PTR_DAT_067718f8);
  *(undefined1 *)(unaff_x21 + 0xdd4) = 1;
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x20;
  }
  uVar9 = *(uint *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if ((int)uVar9 < 4) {
    uVar7 = 0;
  }
  else {
    uVar8 = uVar9;
    uVar6 = 0;
    while( true ) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar2 = *unaff_x20;
      }
      if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_04f9b428;
      uVar8 = uVar6 + (uVar8 >> 1);
      if (*(uint *)(**(long **)(lVar2 + 0xb8) + 0x18) <= uVar8) goto LAB_04f9b42c;
      iVar1 = FUN_04e8aaa4();
      if (iVar1 == 0) {
        lVar2 = *unaff_x20;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar2 = *unaff_x20;
        }
        lVar2 = **(long **)(lVar2 + 0xb8);
        if (lVar2 == 0) goto LAB_04f9b428;
        if (*(uint *)(lVar2 + 0x18) <= uVar8) goto LAB_04f9b42c;
        lVar2 = lVar2 + (long)(int)uVar8 * 0x10;
        goto LAB_04f9b410;
      }
      uVar7 = uVar8;
      if (iVar1 < 0) {
        uVar7 = uVar6;
        uVar9 = uVar8;
      }
      uVar8 = uVar9 - uVar7;
      if ((int)uVar8 < 4) break;
      lVar2 = *unaff_x20;
      uVar6 = uVar7;
    }
  }
  while( true ) {
    if ((int)uVar9 < (int)uVar7) {
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
    if (*(uint *)(**(long **)(lVar2 + 0xb8) + 0x18) <= uVar7) goto LAB_04f9b42c;
    iVar1 = FUN_04e8aaa4();
    if (iVar1 == 0) break;
    uVar7 = uVar7 + 1;
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x20;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 != 0) {
    if (uVar7 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)uVar7 * 0x10;
LAB_04f9b410:
      return *(undefined2 *)(lVar2 + 0x28);
    }
LAB_04f9b42c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
LAB_04f9b428:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


