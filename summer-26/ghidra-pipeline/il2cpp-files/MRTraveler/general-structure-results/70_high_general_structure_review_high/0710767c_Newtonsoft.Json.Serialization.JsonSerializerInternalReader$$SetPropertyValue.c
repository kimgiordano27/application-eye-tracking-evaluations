/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 0710767c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long in_x9;
  uint uVar8;
  ulong unaff_x19;
  ulong uVar9;
  short *psVar10;
  int unaff_w22;
  int iVar11;
  long *unaff_x24;
  uint unaff_w25;
  uint unaff_w26;
  
  uVar2 = unaff_w25 & 0xffff | 0x3b9a0000;
  iVar11 = unaff_w22 + -2;
  psVar10 = (short *)(param_1 + in_x9);
  while( true ) {
    iVar7 = *(int *)(*unaff_x24 + 0xe0);
    if (iVar7 == 0) {
      thunk_FUN_03cd7500();
      iVar7 = *(int *)(*unaff_x24 + 0xe0);
    }
    if (unaff_x19 >> 0x20 == 0) break;
    if (iVar7 == 0) {
      thunk_FUN_03cd7500();
    }
    uVar9 = 0;
    if ((ulong)uVar2 != 0) {
      uVar9 = unaff_x19 / uVar2;
    }
    uVar4 = (ulong)((int)unaff_x19 - (int)uVar9 * uVar2);
    iVar7 = 7;
    do {
      do {
        uVar5 = uVar4 * (unaff_w26 & 0xffff | 0xcccc0000);
        uVar6 = uVar5 >> 0x23;
        uVar8 = (uint)uVar4;
        psVar10 = psVar10 + -1;
        *psVar10 = (short)uVar4 + (short)(uint)(uVar5 >> 0x23) * -10 + 0x30;
        iVar3 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        uVar4 = uVar6;
        iVar7 = iVar3;
      } while (bVar1);
    } while (9 < uVar8);
    unaff_w22 = unaff_w22 + -9;
    iVar11 = iVar11 + -9;
    unaff_x19 = uVar9;
  }
  if (iVar7 == 0) {
    thunk_FUN_03cd7500();
  }
  if (((int)unaff_x19 != 0) || (-1 < unaff_w22 + -1)) {
    do {
      do {
        uVar2 = (uint)unaff_x19;
        uVar9 = (unaff_x19 & 0xffffffff) / 10;
        psVar10 = psVar10 + -1;
        *psVar10 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        iVar7 = iVar11 + -1;
        bVar1 = -1 < iVar11;
        unaff_x19 = uVar9;
        iVar11 = iVar7;
      } while (bVar1);
    } while (9 < uVar2);
  }
  return;
}


