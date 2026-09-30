/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MaxDepth
ENTRY_POINT: 050dd168
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MaxDepth(short *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short *psVar5;
  short *psVar6;
  ulong in_x9;
  ulong uVar7;
  int iVar8;
  ulong in_x11;
  int in_w13;
  long unaff_x19;
  int iVar9;
  ulong unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  ulong unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  short unaff_w27;
  
  do {
    uVar7 = in_x9 >> 0x23;
    *param_1 = (short)in_x11 + (short)(uint)(in_x9 >> 0x23) * unaff_w27 + 0x30;
    iVar8 = in_w13 + -1;
    if ((in_w13 < 0) && ((uint)in_x11 < 10)) {
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      param_2 = *unaff_x23;
      iVar9 = (int)unaff_x20;
      if (unaff_x20 >> 0x20 == 0) {
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (iVar9 != 0) {
          psVar6 = param_1 + -1;
          iVar8 = -2;
          do {
            do {
              param_1 = psVar6;
              uVar2 = (uint)unaff_x20;
              uVar7 = (unaff_x20 & 0xffffffff) / 10;
              *param_1 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
              iVar9 = iVar8 + -1;
              bVar1 = -1 < iVar8;
              psVar6 = param_1 + -1;
              unaff_x20 = uVar7;
              iVar8 = iVar9;
            } while (bVar1);
          } while (9 < uVar2);
        }
        uVar7 = unaff_x21 - (long)param_1;
        if ((long)uVar7 < 0) {
          uVar7 = uVar7 + 1;
        }
        uVar7 = uVar7 >> 1;
        *(int *)(unaff_x19 + 4) = (int)uVar7;
        psVar5 = (short *)FUN_050e41e0();
        psVar6 = psVar5;
        if (-1 < (int)uVar7 + -1) {
          do {
            uVar2 = (int)uVar7 - 1;
            uVar7 = (ulong)uVar2;
            psVar5 = psVar6 + 1;
            *psVar6 = *param_1;
            psVar6 = psVar5;
            param_1 = param_1 + 1;
          } while (uVar2 != 0);
        }
        *psVar5 = 0;
        return;
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        param_2 = *unaff_x23;
      }
      iVar8 = 7;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = unaff_x20 >> 9;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = unaff_x24;
      unaff_x20 = SUB168(auVar3 * auVar4,8) >> 0xb;
      uVar7 = (ulong)(uint)(iVar9 - (int)unaff_x20 * unaff_w25);
    }
    param_1 = param_1 + -1;
    in_x9 = uVar7 * (unaff_x26 & 0xffffffff);
    in_x11 = uVar7;
    in_w13 = iVar8;
  } while( true );
}


