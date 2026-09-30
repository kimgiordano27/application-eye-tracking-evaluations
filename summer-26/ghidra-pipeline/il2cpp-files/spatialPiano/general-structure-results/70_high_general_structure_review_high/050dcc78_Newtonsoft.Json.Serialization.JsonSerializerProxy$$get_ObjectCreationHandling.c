/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ObjectCreationHandling
ENTRY_POINT: 050dcc78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ObjectCreationHandling(long param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  short unaff_w22;
  uint unaff_w25;
  uint unaff_w26;
  uint uVar7;
  long *unaff_x27;
  long *unaff_x28;
  
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x28);
  }
  if (unaff_w26 == 0) {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (unaff_w21 < 2) {
      unaff_w21 = 1;
    }
    psVar5 = (short *)(param_1 + (ulong)unaff_w25 * 2 + -2);
    iVar6 = unaff_w21 + -2;
    do {
      uVar7 = unaff_w20;
      sVar2 = 0x30;
      if (9 < (uVar7 & 0xe)) {
        sVar2 = unaff_w22;
      }
      psVar4 = psVar5 + -1;
      *psVar5 = sVar2 + ((ushort)uVar7 & 0xf);
      iVar3 = iVar6 + -1;
      bVar1 = -1 < iVar6;
      psVar5 = psVar4;
      unaff_w20 = uVar7 >> 4;
      iVar6 = iVar3;
    } while ((bVar1) || (0xf < uVar7));
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    psVar5 = (short *)(param_1 + (ulong)unaff_w25 * 2 + -2);
    iVar6 = 6;
    do {
      uVar7 = unaff_w20;
      sVar2 = 0x30;
      if (9 < (uVar7 & 0xe)) {
        sVar2 = unaff_w22;
      }
      psVar4 = psVar5 + -1;
      *psVar5 = sVar2 + ((ushort)uVar7 & 0xf);
      iVar3 = iVar6 + -1;
      bVar1 = -1 < iVar6;
      psVar5 = psVar4;
      unaff_w20 = uVar7 >> 4;
      iVar6 = iVar3;
    } while ((bVar1) || (0xf < uVar7));
    iVar6 = unaff_w21 + -10;
    do {
      uVar7 = unaff_w26;
      sVar2 = 0x30;
      if (9 < (uVar7 & 0xe)) {
        sVar2 = unaff_w22;
      }
      psVar5 = psVar4 + -1;
      *psVar4 = sVar2 + ((ushort)uVar7 & 0xf);
      iVar3 = iVar6 + -1;
      bVar1 = -1 < iVar6;
      psVar4 = psVar5;
      unaff_w26 = uVar7 >> 4;
      iVar6 = iVar3;
    } while ((bVar1) || (0xf < uVar7));
  }
  return (int)unaff_w25 <= unaff_w19;
}


