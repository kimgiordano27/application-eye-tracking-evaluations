/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 07111854
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ulong uVar6;
  undefined2 unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  undefined4 unaff_w22;
  uint unaff_w23;
  long unaff_x26;
  long unaff_x29;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_071016f0(unaff_w22,unaff_w23,0);
  lVar3 = thunk_FUN_03cf1dbc(uVar2,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  iVar1 = thunk_FUN_03c8d9f4(0);
  puVar5 = (undefined2 *)(lVar3 + iVar1);
  iVar1 = *(int *)(lVar3 + 0x10) - unaff_w23;
  if ((unaff_x21 & 1) == 0) {
    if (0 < (int)unaff_w23) {
      uVar6 = (ulong)unaff_w23;
      puVar4 = puVar5;
      do {
        if (0x42 < unaff_w23 - 1) {
LAB_0711193c:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar6 = uVar6 - 1;
        puVar5 = puVar4 + 1;
        *puVar4 = *(undefined2 *)(unaff_x20 + (uVar6 & 0xffffffff) * 2);
        puVar4 = puVar5;
      } while (uVar6 != 0);
    }
    if (0 < iVar1) {
      do {
        iVar1 = iVar1 + -1;
        *puVar5 = unaff_w19;
        puVar5 = puVar5 + 1;
      } while (iVar1 != 0);
    }
  }
  else {
    puVar4 = puVar5;
    if (0 < iVar1) {
      do {
        iVar1 = iVar1 + -1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_w19;
        puVar4 = puVar5;
      } while (iVar1 != 0);
    }
    if (0 < (int)unaff_w23) {
      uVar6 = (ulong)unaff_w23;
      do {
        if (0x42 < unaff_w23 - 1) goto LAB_0711193c;
        uVar6 = uVar6 - 1;
        *puVar5 = *(undefined2 *)(unaff_x20 + (uVar6 & 0xffffffff) * 2);
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
    }
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}


