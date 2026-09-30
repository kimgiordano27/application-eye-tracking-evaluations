/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteReference
ENTRY_POINT: 0500a214
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference
               (ulong param_1,long param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  ulong uVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  ulong in_x10;
  int in_w11;
  int in_w12;
  int unaff_w19;
  ulong unaff_x20;
  int unaff_w21;
  short *unaff_x22;
  int iVar9;
  int unaff_w23;
  int unaff_w24;
  long *unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  int unaff_w29;
  
  do {
    unaff_x22[-1] = (short)in_w11 + 0x30;
    iVar8 = in_w12 + -1;
    iVar9 = unaff_w23;
    if ((in_w12 < 0) && ((uint)in_x10 < 10)) {
      iVar9 = unaff_w23 + -9;
      unaff_w21 = unaff_w21 + -9;
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      param_2 = *unaff_x25;
      iVar8 = (int)unaff_x20;
      if (unaff_x20 >> 0x20 == 0) {
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if ((iVar8 != 0) || (-1 < unaff_w23 + -10)) {
          psVar6 = unaff_x22 + -2;
          do {
            do {
              uVar4 = (uint)unaff_x20;
              iVar8 = unaff_w21 + -1;
              uVar5 = (unaff_x20 & 0xffffffff) / 10;
              psVar7 = psVar6 + -1;
              *psVar6 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
              bVar1 = -1 < unaff_w21;
              psVar6 = psVar7;
              unaff_x20 = uVar5;
              unaff_w21 = iVar8;
            } while (bVar1);
          } while (9 < uVar4);
        }
        return unaff_w24 <= unaff_w19;
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        param_2 = *unaff_x25;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = unaff_x20 >> 9;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = unaff_x26;
      unaff_x20 = SUB168(auVar2 * auVar3,8) >> 0xb;
      param_1 = (ulong)(uint)(iVar8 - (int)unaff_x20 * unaff_w27);
      iVar8 = 7;
    }
    in_x10 = param_1 & 0xffffffff;
    uVar5 = (param_1 & 0xffffffff) * (unaff_x28 & 0xffffffff);
    in_w11 = (int)param_1 + (uint)(uVar5 >> 0x23) * unaff_w29;
    param_1 = uVar5 >> 0x23;
    unaff_x22 = unaff_x22 + -1;
    in_w12 = iVar8;
    unaff_w23 = iVar9;
  } while( true );
}


