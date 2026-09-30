/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadExtensionDataValue
ENTRY_POINT: 05009828
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadExtensionDataValue(void)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  ulong unaff_x19;
  ulong uVar12;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  short *unaff_x24;
  ulong unaff_x25;
  int unaff_w26;
  ulong unaff_x27;
  short unaff_w28;
  
  while( true ) {
    lVar5 = *unaff_x23;
    iVar10 = (int)unaff_x19;
    if (unaff_x19 >> 0x20 == 0) break;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar5 = *unaff_x23;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_x19 >> 9;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = unaff_x25;
    unaff_x19 = SUB168(auVar3 * auVar4,8) >> 0xb;
    uVar12 = (ulong)(uint)(iVar10 - (int)unaff_x19 * unaff_w26);
    iVar10 = 7;
    do {
      do {
        uVar6 = uVar12 * (unaff_x27 & 0xffffffff);
        uVar7 = uVar6 >> 0x23;
        uVar11 = (uint)uVar12;
        unaff_x24 = unaff_x24 + -1;
        *unaff_x24 = (short)uVar12 + (short)(uint)(uVar6 >> 0x23) * unaff_w28 + 0x30;
        iVar2 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        uVar12 = uVar7;
        iVar10 = iVar2;
      } while (bVar1);
    } while (9 < uVar11);
    unaff_w22 = unaff_w22 + -9;
    unaff_w21 = unaff_w21 + -9;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if ((iVar10 != 0) || (-1 < unaff_w22 + -1)) {
    psVar8 = unaff_x24 + -1;
    do {
      do {
        uVar11 = (uint)unaff_x19;
        iVar10 = unaff_w21 + -1;
        uVar12 = (unaff_x19 & 0xffffffff) / 10;
        psVar9 = psVar8 + -1;
        *psVar8 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < unaff_w21;
        psVar8 = psVar9;
        unaff_x19 = uVar12;
        unaff_w21 = iVar10;
      } while (bVar1);
    } while (9 < uVar11);
  }
  return;
}


