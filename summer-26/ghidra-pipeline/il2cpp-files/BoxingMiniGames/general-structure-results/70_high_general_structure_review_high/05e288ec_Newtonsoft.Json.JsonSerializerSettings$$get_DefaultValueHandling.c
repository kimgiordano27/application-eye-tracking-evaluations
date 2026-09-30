/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DefaultValueHandling
ENTRY_POINT: 05e288ec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializerSettings__get_DefaultValueHandling
               (undefined8 param_1,undefined8 param_2)

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
  uint unaff_w22;
  long unaff_x26;
  long unaff_x29;
  
  uVar2 = FUN_05e18a84(param_1,param_2,0);
  lVar3 = thunk_FUN_0367d828(uVar2,0);
  if (lVar3 == 0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    iVar1 = thunk_FUN_0364e8d0(0);
    puVar5 = (undefined2 *)(lVar3 + iVar1);
    iVar1 = *(int *)(lVar3 + 0x10) - unaff_w22;
    if ((unaff_x21 & 1) == 0) {
      if (0 < (int)unaff_w22) {
        uVar6 = (ulong)unaff_w22;
        puVar4 = puVar5;
        do {
          if (0x43 < unaff_w22) goto LAB_05e289c0;
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
      if (0 < (int)unaff_w22) {
        uVar6 = (ulong)unaff_w22;
        do {
          if (0x43 < unaff_w22) goto LAB_05e289c0;
          uVar6 = uVar6 - 1;
          *puVar5 = *(undefined2 *)(unaff_x20 + (uVar6 & 0xffffffff) * 2);
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
    }
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return lVar3;
    }
  }
LAB_05e28a54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_05e289c0:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  goto LAB_05e28a54;
}


