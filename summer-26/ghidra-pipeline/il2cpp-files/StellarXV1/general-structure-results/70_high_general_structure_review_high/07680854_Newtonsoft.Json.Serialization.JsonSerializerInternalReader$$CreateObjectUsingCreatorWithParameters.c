/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 07680854
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
               (long *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  short *psVar8;
  short *psVar9;
  uint in_w9;
  int iVar10;
  uint uVar11;
  int unaff_w19;
  ulong unaff_x20;
  ulong uVar12;
  int *unaff_x21;
  int unaff_w23;
  int unaff_w24;
  int iVar13;
  
  if (in_w9 < 1000) {
    iVar13 = unaff_w24 + 2;
  }
  else if (in_w9 >> 4 < 0x271) {
    iVar13 = unaff_w24 + 3;
  }
  else if (in_w9 >> 5 < 0xc35) {
    iVar13 = unaff_w24 + 4;
  }
  else if (in_w9 < 1000000) {
    iVar13 = unaff_w24 + 5;
  }
  else {
    iVar13 = unaff_w24 + 6;
  }
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar4 = PTR_DAT_092d6630;
  iVar2 = unaff_w23;
  if (unaff_w23 <= iVar13) {
    iVar2 = iVar13;
  }
  if (unaff_w19 < iVar2) {
    *unaff_x21 = 0;
  }
  else {
    *unaff_x21 = iVar2;
    lVar5 = FUN_050aefdc();
    lVar6 = *(long *)puVar4;
    iVar13 = unaff_w23 + -2;
    psVar8 = (short *)(lVar5 + (ulong)(uint)(iVar2 << 1));
    while( true ) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar6 = *(long *)puVar4;
      iVar10 = (int)unaff_x20;
      if (unaff_x20 >> 0x20 == 0) break;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar6 = *(long *)puVar4;
      }
      unaff_x20 = unaff_x20 / 1000000000;
      uVar12 = (ulong)(uint)(iVar10 + (int)unaff_x20 * -1000000000);
      iVar10 = 7;
      do {
        do {
          uVar7 = uVar12 / 10;
          uVar11 = (uint)uVar12;
          psVar8 = psVar8 + -1;
          *psVar8 = (short)uVar12 + (short)(uVar12 / 10) * -10 + 0x30;
          iVar3 = iVar10 + -1;
          bVar1 = -1 < iVar10;
          uVar12 = uVar7;
          iVar10 = iVar3;
        } while (bVar1);
      } while (9 < uVar11);
      unaff_w23 = unaff_w23 + -9;
      iVar13 = iVar13 + -9;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((iVar10 != 0) || (-1 < unaff_w23 + -1)) {
      psVar8 = psVar8 + -1;
      do {
        do {
          uVar11 = (uint)unaff_x20;
          iVar10 = iVar13 + -1;
          uVar12 = (unaff_x20 & 0xffffffff) / 10;
          psVar9 = psVar8 + -1;
          *psVar8 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
          bVar1 = -1 < iVar13;
          psVar8 = psVar9;
          unaff_x20 = uVar12;
          iVar13 = iVar10;
        } while (bVar1);
      } while (9 < uVar11);
    }
  }
  return iVar2 <= unaff_w19;
}


