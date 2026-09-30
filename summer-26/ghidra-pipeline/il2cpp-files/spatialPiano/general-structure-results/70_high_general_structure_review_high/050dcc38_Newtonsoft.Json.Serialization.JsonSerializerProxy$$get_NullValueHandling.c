/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_NullValueHandling
ENTRY_POINT: 050dcc38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__get_NullValueHandling(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  bool in_ZR;
  bool in_CY;
  long lVar6;
  long lVar7;
  uint in_w9;
  short *psVar8;
  short *psVar9;
  int in_w11;
  int iVar10;
  int unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  short unaff_w22;
  uint *unaff_x23;
  uint unaff_w26;
  uint uVar11;
  long *unaff_x27;
  
  if (in_CY && !in_ZR) {
    in_w9 = in_w9 + 1;
  }
  if (in_w11 == 0) {
    thunk_FUN_02f6670c();
  }
  puVar5 = PTR_DAT_067dbd90;
  uVar3 = unaff_w21;
  if ((int)unaff_w21 <= (int)in_w9) {
    uVar3 = in_w9;
  }
  if (unaff_w19 < (int)uVar3) {
    *unaff_x23 = 0;
  }
  else {
    *unaff_x23 = uVar3;
    lVar6 = FUN_034702c8();
    lVar7 = *(long *)puVar5;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar7);
    }
    iVar10 = *(int *)(*(long *)puVar5 + 0xe4);
    if (unaff_w26 == 0) {
      if (iVar10 == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((int)unaff_w21 < 2) {
        unaff_w21 = 1;
      }
      psVar9 = (short *)(lVar6 + (ulong)uVar3 * 2 + -2);
      iVar10 = unaff_w21 - 2;
      do {
        uVar11 = unaff_w20;
        sVar2 = 0x30;
        if (9 < (uVar11 & 0xe)) {
          sVar2 = unaff_w22;
        }
        psVar8 = psVar9 + -1;
        *psVar9 = sVar2 + ((ushort)uVar11 & 0xf);
        iVar4 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        psVar9 = psVar8;
        unaff_w20 = uVar11 >> 4;
        iVar10 = iVar4;
      } while ((bVar1) || (0xf < uVar11));
    }
    else {
      if (iVar10 == 0) {
        thunk_FUN_02f6670c();
      }
      psVar9 = (short *)(lVar6 + (ulong)uVar3 * 2 + -2);
      iVar10 = 6;
      do {
        uVar11 = unaff_w20;
        sVar2 = 0x30;
        if (9 < (uVar11 & 0xe)) {
          sVar2 = unaff_w22;
        }
        psVar8 = psVar9 + -1;
        *psVar9 = sVar2 + ((ushort)uVar11 & 0xf);
        iVar4 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        psVar9 = psVar8;
        unaff_w20 = uVar11 >> 4;
        iVar10 = iVar4;
      } while ((bVar1) || (0xf < uVar11));
      iVar10 = unaff_w21 - 10;
      do {
        uVar11 = unaff_w26;
        sVar2 = 0x30;
        if (9 < (uVar11 & 0xe)) {
          sVar2 = unaff_w22;
        }
        psVar9 = psVar8 + -1;
        *psVar8 = sVar2 + ((ushort)uVar11 & 0xf);
        iVar4 = iVar10 + -1;
        bVar1 = -1 < iVar10;
        psVar8 = psVar9;
        unaff_w26 = uVar11 >> 4;
        iVar10 = iVar4;
      } while ((bVar1) || (0xf < uVar11));
    }
  }
  return (int)uVar3 <= unaff_w19;
}


