/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContractSafe
ENTRY_POINT: 0500a204
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContractSafe
               (ulong param_1,long param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  int in_w9;
  uint uVar8;
  ulong in_x10;
  int unaff_w19;
  ulong unaff_x20;
  int unaff_w21;
  short *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long *unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  short unaff_w29;
  
  while( true ) {
    do {
      do {
        psVar5 = unaff_x22;
        uVar4 = (param_1 & 0xffffffff) * (unaff_x28 & 0xffffffff);
        param_1 = uVar4 >> 0x23;
        uVar8 = (uint)in_x10;
        unaff_x22 = psVar5 + -1;
        *unaff_x22 = (short)in_x10 + (short)(uint)(uVar4 >> 0x23) * unaff_w29 + 0x30;
        iVar7 = in_w9 + -1;
        bVar1 = -1 < in_w9;
        in_x10 = param_1;
        in_w9 = iVar7;
      } while (bVar1);
    } while (9 < uVar8);
    unaff_w21 = unaff_w21 + -9;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    param_2 = *unaff_x25;
    iVar7 = (int)unaff_x20;
    if (unaff_x20 >> 0x20 == 0) break;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      param_2 = *unaff_x25;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = unaff_x20 >> 9;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_x26;
    unaff_x20 = SUB168(auVar2 * auVar3,8) >> 0xb;
    param_1 = (ulong)(uint)(iVar7 - (int)unaff_x20 * unaff_w27);
    in_w9 = 7;
    in_x10 = param_1;
    unaff_w23 = unaff_w23 + -9;
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if ((iVar7 != 0) || (-1 < unaff_w23 + -10)) {
    psVar5 = psVar5 + -2;
    do {
      do {
        uVar8 = (uint)unaff_x20;
        iVar7 = unaff_w21 + -1;
        uVar4 = (unaff_x20 & 0xffffffff) / 10;
        psVar6 = psVar5 + -1;
        *psVar5 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        bVar1 = -1 < unaff_w21;
        psVar5 = psVar6;
        unaff_x20 = uVar4;
        unaff_w21 = iVar7;
      } while (bVar1);
    } while (9 < uVar8);
  }
  return unaff_w24 <= unaff_w19;
}


