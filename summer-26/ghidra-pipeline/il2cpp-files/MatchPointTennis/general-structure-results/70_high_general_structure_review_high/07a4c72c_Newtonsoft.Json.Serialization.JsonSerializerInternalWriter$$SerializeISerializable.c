/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
ENTRY_POINT: 07a4c72c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  short *psVar5;
  short *psVar6;
  undefined4 in_w8;
  int iVar7;
  undefined4 *unaff_x19;
  ulong unaff_x20;
  ulong uVar8;
  short *psVar9;
  
  *unaff_x19 = in_w8;
  FUN_07a4cb94();
  lVar4 = FUN_07a4cba0();
  if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f40bf0);
  }
  psVar6 = (short *)(lVar4 + 0x14);
  psVar9 = psVar6;
  if ((int)unaff_x20 != 0) {
    iVar7 = -2;
    do {
      do {
        uVar3 = (uint)unaff_x20;
        uVar8 = (unaff_x20 & 0xffffffff) / 10;
        psVar9 = psVar9 + -1;
        *psVar9 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        unaff_x20 = uVar8;
        iVar7 = iVar2;
      } while (bVar1);
    } while (9 < uVar3);
  }
  uVar8 = (long)psVar6 - (long)psVar9;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
  unaff_x19[1] = (int)uVar8;
  psVar5 = (short *)FUN_07a4cba0();
  psVar6 = psVar5;
  if (-1 < (int)uVar8 + -1) {
    do {
      uVar3 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar3;
      psVar5 = psVar6 + 1;
                    /* try { // try from 07a4c7ec to 07b4c7ff has its CatchHandler @ 07a4c9a4 */
      *psVar6 = *psVar9;
      psVar6 = psVar5;
      psVar9 = psVar9 + 1;
    } while (0 < (int)uVar3);
  }
  *psVar5 = 0;
                    /* try { // try from 07a4c800 to 07b4c807 has its CatchHandler @ 07a4c9a0 */
  return;
}


