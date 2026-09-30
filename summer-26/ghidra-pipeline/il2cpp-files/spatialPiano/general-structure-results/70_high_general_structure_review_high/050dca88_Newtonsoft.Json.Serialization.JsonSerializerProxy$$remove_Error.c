/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$remove_Error
ENTRY_POINT: 050dca88
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__remove_Error(short *param_1,long param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  short *psVar5;
  short sVar6;
  ulong in_x9;
  ulong uVar7;
  int iVar8;
  ulong in_x11;
  int in_w13;
  short unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int iVar9;
  int unaff_w23;
  int iVar10;
  ulong unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  ulong unaff_x27;
  int unaff_w28;
  ulong unaff_x29;
  int in_stack_00000008;
  
  do {
    uVar7 = in_x9 >> 0x23;
    *param_1 = (short)in_x11 + (short)(uint)(in_x9 >> 0x23) * unaff_w19 + 0x30;
    iVar8 = in_w13 + -1;
    iVar9 = unaff_w23;
    if ((in_w13 < 0) && ((uint)in_x11 < 10)) {
      iVar9 = unaff_w23 + -9;
      unaff_w21 = unaff_w21 + -9;
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      param_2 = *unaff_x26;
      iVar10 = (int)unaff_x24;
      if (unaff_x24 >> 0x20 == 0) {
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if ((iVar10 != 0) || (-1 < unaff_w23 + -10)) {
          psVar5 = param_1 + -1;
          do {
            do {
              param_1 = psVar5;
              uVar4 = (uint)unaff_x24;
              iVar8 = unaff_w21 + -1;
              uVar7 = (unaff_x24 & 0xffffffff) / 10;
              *param_1 = (short)unaff_x24 + (short)((unaff_x24 & 0xffffffff) / 10) * -10 + 0x30;
              bVar1 = -1 < unaff_w21;
              psVar5 = param_1 + -1;
              unaff_x24 = uVar7;
              unaff_w21 = iVar8;
            } while (bVar1);
          } while (9 < uVar4);
        }
        iVar8 = *(int *)(unaff_x20 + 0x10) + -1;
        if (-1 < iVar8) {
          do {
            param_1 = param_1 + -1;
            sVar6 = FUN_04f69818();
            iVar8 = iVar8 + -1;
            *param_1 = sVar6;
          } while (iVar8 != -1);
        }
        return unaff_w25 <= in_stack_00000008;
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        param_2 = *unaff_x26;
      }
      iVar8 = 7;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = unaff_x24 >> 9;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = unaff_x27;
      unaff_x24 = SUB168(auVar2 * auVar3,8) >> 0xb;
      uVar7 = (ulong)(uint)(iVar10 - (int)unaff_x24 * unaff_w28);
    }
    param_1 = param_1 + -1;
    in_x9 = uVar7 * (unaff_x29 & 0xffffffff);
    in_x11 = uVar7;
    in_w13 = iVar8;
    unaff_w23 = iVar9;
  } while( true );
}


