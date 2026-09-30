/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 05e1dc58
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeObject(long *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  int unaff_w20;
  ulong unaff_x22;
  ulong uVar8;
  int unaff_w23;
  short *psVar9;
  short *psVar10;
  long lVar11;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar3 = PTR_DAT_07a115a8;
  if (unaff_x19 != 0) {
    iVar7 = unaff_w23;
    if (unaff_w23 <= unaff_w20 + 4) {
      iVar7 = unaff_w20 + 4;
    }
    iVar7 = *(int *)(unaff_x19 + 0x10) + iVar7;
    lVar6 = thunk_FUN_0367d828(iVar7,0);
    if (lVar6 == 0) {
      lVar11 = 0;
    }
    else {
      iVar5 = thunk_FUN_0364e8d0(0);
      lVar11 = lVar6 + iVar5;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    psVar9 = (short *)(lVar11 + (long)iVar7 * 2 + -2);
    iVar7 = unaff_w23 + -2;
    do {
      do {
        uVar2 = (uint)unaff_x22;
        uVar8 = (unaff_x22 & 0xffffffff) / 10;
        psVar10 = psVar9 + -1;
        *psVar9 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
        iVar5 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        unaff_x22 = uVar8;
        psVar9 = psVar10;
        iVar7 = iVar5;
      } while (bVar1);
    } while (9 < uVar2);
    iVar7 = *(int *)(unaff_x19 + 0x10) + -1;
    if (-1 < iVar7) {
      do {
        sVar4 = FUN_05c91ffc();
        iVar7 = iVar7 + -1;
        *psVar10 = sVar4;
        psVar10 = psVar10 + -1;
      } while (iVar7 != -1);
    }
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


