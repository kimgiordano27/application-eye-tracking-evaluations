/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeValue
ENTRY_POINT: 0500f9c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeValue(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined2 uVar7;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  short *unaff_x26;
  int unaff_w27;
  long lVar8;
  
  FUN_02d6084c(PTR_DAT_067714a8);
  *(undefined1 *)(unaff_x24 + 0x233) = 1;
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)(unaff_x23 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
LAB_0500fb28:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar8 = *(long *)(unaff_x21 + 8);
      uVar7 = FUN_04e87a5c();
      *(undefined2 *)(lVar8 + (long)(int)uVar2 * 2) = uVar7;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      puVar4 = PTR_DAT_067714a8;
      plVar5 = (long *)PTR_DAT_06777060;
      goto joined_r0x0500fa34;
    }
  }
  FUN_04ea5974();
  puVar4 = PTR_DAT_067714a8;
  plVar5 = (long *)PTR_DAT_06777060;
joined_r0x0500fa34:
  do {
    puVar6 = PTR_DAT_067714a8;
    PTR_DAT_067714a8 = puVar4;
    PTR_DAT_06777060 = (undefined *)plVar5;
    if (unaff_w27 < 1) {
      FUN_05015994();
      if (*(int *)(*plVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0501029c();
      return;
    }
    sVar1 = *unaff_x26;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x26 = unaff_x26 + 1;
      sVar3 = sVar1;
    }
    if (*(char *)(unaff_x25 + 0x666) == '\0') {
      FUN_02d6084c(puVar6);
      *(undefined1 *)(unaff_x25 + 0x666) = 1;
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_0500fb28;
      *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar3;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_04ea5848();
    }
    unaff_w27 = unaff_w27 + -1;
    puVar4 = PTR_DAT_067714a8;
    plVar5 = (long *)PTR_DAT_06777060;
    PTR_DAT_067714a8 = puVar6;
  } while( true );
}


