/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserialized
ENTRY_POINT: 07108818
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized(ulong param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  ulong uVar6;
  ulong uVar7;
  int in_w9;
  int iVar8;
  long unaff_x19;
  ulong unaff_x20;
  short *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  short unaff_w26;
  
  while( true ) {
    do {
      do {
        uVar3 = (uint)param_1;
        uVar6 = (param_1 & 0xffffffff) * (unaff_x25 & 0xffffffff);
        uVar7 = uVar6 >> 0x23;
        unaff_x21 = unaff_x21 + -1;
        *unaff_x21 = (short)param_1 + (short)(uint)(uVar6 >> 0x23) * unaff_w26 + 0x30;
        iVar8 = in_w9 + -1;
        bVar1 = -1 < in_w9;
        param_1 = uVar7;
        in_w9 = iVar8;
      } while (bVar1);
    } while (9 < uVar3);
    iVar8 = *(int *)(*unaff_x23 + 0xe0);
    if (iVar8 == 0) {
      thunk_FUN_03cd7500();
      iVar8 = *(int *)(*unaff_x23 + 0xe0);
    }
    if (unaff_x20 >> 0x20 == 0) break;
    if (iVar8 == 0) {
      thunk_FUN_03cd7500();
    }
    uVar6 = 0;
    if (unaff_x24 != 0) {
      uVar6 = unaff_x20 / unaff_x24;
    }
    param_1 = (ulong)(uint)((int)unaff_x20 - (int)uVar6 * (int)unaff_x24);
    in_w9 = 7;
    unaff_x20 = uVar6;
  }
  if (iVar8 == 0) {
    thunk_FUN_03cd7500();
  }
  if ((int)unaff_x20 != 0) {
    iVar8 = -2;
    do {
      do {
        uVar3 = (uint)unaff_x20;
        uVar6 = (unaff_x20 & 0xffffffff) / 10;
        unaff_x21 = unaff_x21 + -1;
        *unaff_x21 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar8 + -1;
        bVar1 = -1 < iVar8;
        unaff_x20 = uVar6;
        iVar8 = iVar2;
      } while (bVar1);
    } while (9 < uVar3);
  }
  uVar6 = unaff_x22 - (long)unaff_x21;
  if ((long)uVar6 < 0) {
    uVar6 = uVar6 + 1;
  }
  uVar6 = uVar6 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar6;
  psVar4 = (short *)FUN_0710f9e0();
  psVar5 = psVar4;
  if (-1 < (int)uVar6 + -1) {
    do {
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
      psVar4 = psVar5 + 1;
      *psVar5 = *unaff_x21;
      psVar5 = psVar4;
      unaff_x21 = unaff_x21 + 1;
    } while (0 < (int)uVar3);
  }
  *psVar4 = 0;
  return;
}


