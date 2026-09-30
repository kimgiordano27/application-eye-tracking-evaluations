/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 050dca6c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error(ulong param_1,long param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short *psVar4;
  short sVar5;
  ulong in_x9;
  ulong uVar6;
  ulong uVar7;
  int in_w10;
  uint uVar8;
  short unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int iVar9;
  short *unaff_x22;
  int unaff_w23;
  ulong uVar10;
  ulong uVar11;
  int unaff_w25;
  long *unaff_x26;
  ulong unaff_x27;
  int unaff_w28;
  ulong unaff_x29;
  int in_stack_00000008;
  
  while( true ) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_x27;
    param_1 = SUB168(auVar2 * auVar3,8);
    uVar10 = param_1 >> 0xb;
    psVar4 = unaff_x22 + -1;
    uVar11 = (ulong)(uint)((int)in_x9 - (int)uVar10 * unaff_w28);
    do {
      do {
        unaff_x22 = psVar4;
        uVar6 = uVar11 * (unaff_x29 & 0xffffffff);
        uVar7 = uVar6 >> 0x23;
        uVar8 = (uint)uVar11;
        *unaff_x22 = (short)uVar11 + (short)(uint)(uVar6 >> 0x23) * unaff_w19 + 0x30;
        iVar9 = in_w10 + -1;
        bVar1 = -1 < in_w10;
        psVar4 = unaff_x22 + -1;
        uVar11 = uVar7;
        in_w10 = iVar9;
      } while (bVar1);
    } while (9 < uVar8);
    unaff_w21 = unaff_w21 + -9;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    param_2 = *unaff_x26;
    if (param_1 >> 0x2b == 0) break;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      param_2 = *unaff_x26;
    }
    param_1 = param_1 >> 0x14;
    in_w10 = 7;
    in_x9 = uVar10;
    unaff_w23 = unaff_w23 + -9;
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (((int)uVar10 != 0) || (-1 < unaff_w23 + -10)) {
    psVar4 = unaff_x22 + -1;
    do {
      do {
        unaff_x22 = psVar4;
        uVar8 = (uint)uVar10;
        iVar9 = unaff_w21 + -1;
        uVar11 = (uVar10 & 0xffffffff) / 10;
        *unaff_x22 = (short)uVar10 + (short)((uVar10 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < unaff_w21;
        psVar4 = unaff_x22 + -1;
        uVar10 = uVar11;
        unaff_w21 = iVar9;
      } while (bVar1);
    } while (9 < uVar8);
  }
  iVar9 = *(int *)(unaff_x20 + 0x10) + -1;
  if (-1 < iVar9) {
    do {
      unaff_x22 = unaff_x22 + -1;
      sVar5 = FUN_04f69818();
      iVar9 = iVar9 + -1;
      *unaff_x22 = sVar5;
    } while (iVar9 != -1);
  }
  return unaff_w25 <= in_stack_00000008;
}


