/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MissingMemberHandling
ENTRY_POINT: 050dcc18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling
               (ulong param_1,long param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  bool in_ZR;
  long lVar7;
  long lVar8;
  uint in_w9;
  short *psVar9;
  short *psVar10;
  uint in_w10;
  int iVar11;
  int unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  short unaff_w22;
  uint *unaff_x23;
  uint unaff_w26;
  uint uVar12;
  long *unaff_x27;
  
  if (in_ZR) {
    in_w9 = in_w10;
  }
  uVar4 = param_1 >> 8;
  if (param_1 < 0x100) {
    uVar4 = param_1;
  }
  uVar12 = in_w9 | 2;
  if (param_1 < 0x100) {
    uVar12 = in_w9;
  }
  if (0xf < uVar4) {
    uVar12 = uVar12 + 1;
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar6 = PTR_DAT_067dbd90;
  uVar3 = unaff_w21;
  if ((int)unaff_w21 <= (int)uVar12) {
    uVar3 = uVar12;
  }
  if (unaff_w19 < (int)uVar3) {
    *unaff_x23 = 0;
  }
  else {
    *unaff_x23 = uVar3;
    lVar7 = FUN_034702c8();
    lVar8 = *(long *)puVar6;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar8);
    }
    iVar11 = *(int *)(*(long *)puVar6 + 0xe4);
    if (unaff_w26 == 0) {
      if (iVar11 == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((int)unaff_w21 < 2) {
        unaff_w21 = 1;
      }
      psVar10 = (short *)(lVar7 + (ulong)uVar3 * 2 + -2);
      iVar11 = unaff_w21 - 2;
      do {
        uVar12 = unaff_w20;
        sVar2 = 0x30;
        if (9 < (uVar12 & 0xe)) {
          sVar2 = unaff_w22;
        }
        psVar9 = psVar10 + -1;
        *psVar10 = sVar2 + ((ushort)uVar12 & 0xf);
        iVar5 = iVar11 + -1;
        bVar1 = -1 < iVar11;
        psVar10 = psVar9;
        unaff_w20 = uVar12 >> 4;
        iVar11 = iVar5;
      } while ((bVar1) || (0xf < uVar12));
    }
    else {
      if (iVar11 == 0) {
        thunk_FUN_02f6670c();
      }
      psVar10 = (short *)(lVar7 + (ulong)uVar3 * 2 + -2);
      iVar11 = 6;
      do {
        uVar12 = unaff_w20;
        sVar2 = 0x30;
        if (9 < (uVar12 & 0xe)) {
          sVar2 = unaff_w22;
        }
        psVar9 = psVar10 + -1;
        *psVar10 = sVar2 + ((ushort)uVar12 & 0xf);
        iVar5 = iVar11 + -1;
        bVar1 = -1 < iVar11;
        psVar10 = psVar9;
        unaff_w20 = uVar12 >> 4;
        iVar11 = iVar5;
      } while ((bVar1) || (0xf < uVar12));
      iVar11 = unaff_w21 - 10;
      do {
        uVar12 = unaff_w26;
        sVar2 = 0x30;
        if (9 < (uVar12 & 0xe)) {
          sVar2 = unaff_w22;
        }
        psVar10 = psVar9 + -1;
        *psVar9 = sVar2 + ((ushort)uVar12 & 0xf);
        iVar5 = iVar11 + -1;
        bVar1 = -1 < iVar11;
        psVar9 = psVar10;
        unaff_w26 = uVar12 >> 4;
        iVar11 = iVar5;
      } while ((bVar1) || (0xf < uVar12));
    }
  }
  return (int)uVar3 <= unaff_w19;
}


