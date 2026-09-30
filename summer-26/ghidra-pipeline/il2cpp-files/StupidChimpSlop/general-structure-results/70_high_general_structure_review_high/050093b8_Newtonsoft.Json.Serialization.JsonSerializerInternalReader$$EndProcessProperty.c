/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
ENTRY_POINT: 050093b8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty(long *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  int iVar7;
  int unaff_w19;
  long unaff_x20;
  int *unaff_x21;
  short *psVar8;
  short *psVar9;
  int unaff_w23;
  int unaff_w24;
  ulong unaff_x25;
  ulong uVar10;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  iVar1 = unaff_w24;
  if (unaff_w24 <= unaff_w23) {
    iVar1 = unaff_w23;
  }
  iVar1 = *(int *)(unaff_x20 + 0x10) + iVar1;
  if (unaff_w19 < iVar1) {
    *unaff_x21 = 0;
  }
  else {
    *unaff_x21 = iVar1;
    lVar6 = FUN_0329f288();
    if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)PTR_DAT_06656a10);
    }
    psVar8 = (short *)(lVar6 + (long)iVar1 * 2 + -2);
    iVar7 = unaff_w24 + -2;
    do {
      do {
        uVar4 = (uint)unaff_x25;
        uVar10 = (unaff_x25 & 0xffffffff) / 10;
        psVar9 = psVar8 + -1;
        *psVar8 = (short)unaff_x25 + (short)((unaff_x25 & 0xffffffff) / 10) * -10 + 0x30;
        iVar3 = iVar7 + -1;
        bVar2 = -1 < iVar7;
        psVar8 = psVar9;
        unaff_x25 = uVar10;
        iVar7 = iVar3;
      } while (bVar2);
    } while (9 < uVar4);
    iVar7 = *(int *)(unaff_x20 + 0x10) + -1;
    if (-1 < iVar7) {
      do {
        sVar5 = FUN_04e7a3d8();
        iVar7 = iVar7 + -1;
        *psVar9 = sVar5;
        psVar9 = psVar9 + -1;
      } while (iVar7 != -1);
    }
  }
  return iVar1 <= unaff_w19;
}


