/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 0624b7b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined2 uVar7;
  long unaff_x21;
  long unaff_x25;
  short *unaff_x26;
  int unaff_w27;
  long lVar8;
  
  uVar2 = *(uint *)(unaff_x21 + 0x18);
  if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
    if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
LAB_0624b8f4:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    lVar8 = *(long *)(unaff_x21 + 8);
    uVar7 = FUN_060bb390();
    *(undefined2 *)(lVar8 + (long)(int)uVar2 * 2) = uVar7;
    *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    puVar4 = PTR_DAT_07da5848;
    plVar5 = (long *)PTR_DAT_07daae20;
  }
  else {
    FUN_060dc110();
    puVar4 = PTR_DAT_07da5848;
    plVar5 = (long *)PTR_DAT_07daae20;
  }
  do {
    puVar6 = PTR_DAT_07da5848;
    PTR_DAT_07da5848 = puVar4;
    PTR_DAT_07daae20 = (undefined *)plVar5;
    if (unaff_w27 < 1) {
      FUN_06251760();
      if (*(int *)(*plVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0624c068();
      return;
    }
    sVar1 = *unaff_x26;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x26 = unaff_x26 + 1;
      sVar3 = sVar1;
    }
    if (*(char *)(unaff_x25 + 0xded) == '\0') {
      FUN_0373b518(puVar6);
      *(undefined1 *)(unaff_x25 + 0xded) = 1;
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_0624b8f4;
      *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar3;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_060dbfe4();
    }
    unaff_w27 = unaff_w27 + -1;
    puVar4 = PTR_DAT_07da5848;
    plVar5 = (long *)PTR_DAT_07daae20;
    PTR_DAT_07da5848 = puVar6;
  } while( true );
}


