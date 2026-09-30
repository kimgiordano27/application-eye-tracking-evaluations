/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 05e1e584
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXmlNode(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  ulong unaff_x19;
  ulong uVar11;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  short *unaff_x24;
  ulong unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    param_1 = *unaff_x23;
    iVar9 = (int)unaff_x19;
    if (unaff_x19 >> 0x20 == 0) break;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      param_1 = *unaff_x23;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_x19 >> 9;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = unaff_x25;
    unaff_x19 = SUB168(auVar3 * auVar4,8) >> 0xb;
    uVar11 = (ulong)(uint)(iVar9 - (int)unaff_x19 * unaff_w26);
    iVar9 = 7;
    do {
      do {
        uVar5 = uVar11 * (unaff_w27 & 0xffff | 0xcccc0000);
        uVar6 = uVar5 >> 0x23;
        uVar10 = (uint)uVar11;
        unaff_x24 = unaff_x24 + -1;
        *unaff_x24 = (short)uVar11 + (short)(uint)(uVar5 >> 0x23) * -10 + 0x30;
        iVar2 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        uVar11 = uVar6;
        iVar9 = iVar2;
      } while (bVar1);
    } while (9 < uVar10);
    unaff_w22 = unaff_w22 + -9;
    unaff_w21 = unaff_w21 + -9;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if ((iVar9 != 0) || (-1 < unaff_w22 + -1)) {
    psVar7 = unaff_x24 + -1;
    do {
      do {
        uVar10 = (uint)unaff_x19;
        iVar9 = unaff_w21 + -1;
        uVar11 = (unaff_x19 & 0xffffffff) / 10;
        psVar8 = psVar7 + -1;
        *psVar7 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < unaff_w21;
        psVar7 = psVar8;
        unaff_x19 = uVar11;
        unaff_w21 = iVar9;
      } while (bVar1);
    } while (9 < uVar10);
  }
  return;
}


