/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MaxDepth
ENTRY_POINT: 050dd188
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MaxDepth(short *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_ZR;
  undefined1 in_CY;
  short *psVar6;
  short *psVar7;
  ulong uVar8;
  ulong in_x9;
  int iVar9;
  int in_w10;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar10;
  long unaff_x21;
  short *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  short unaff_w27;
  
  do {
    uVar10 = in_x9;
    iVar9 = in_w10;
    if (!(bool)in_CY || (bool)in_ZR) {
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
          psVar7 = unaff_x22 + -1;
          iVar9 = -2;
          do {
            do {
              unaff_x22 = psVar7;
              uVar3 = (uint)unaff_x20;
              uVar10 = (unaff_x20 & 0xffffffff) / 10;
              *unaff_x22 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
              iVar2 = iVar9 + -1;
              bVar1 = -1 < iVar9;
              psVar7 = unaff_x22 + -1;
              unaff_x20 = uVar10;
              iVar9 = iVar2;
            } while (bVar1);
          } while (9 < uVar3);
        }
        uVar10 = unaff_x21 - (long)unaff_x22;
        if ((long)uVar10 < 0) {
          uVar10 = uVar10 + 1;
        }
        uVar10 = uVar10 >> 1;
        *(int *)(unaff_x19 + 4) = (int)uVar10;
        psVar6 = (short *)FUN_050e41e0();
        psVar7 = psVar6;
        if (-1 < (int)uVar10 + -1) {
          do {
            uVar3 = (int)uVar10 - 1;
            uVar10 = (ulong)uVar3;
            psVar6 = psVar7 + 1;
            *psVar7 = *unaff_x22;
            psVar7 = psVar6;
            unaff_x22 = unaff_x22 + 1;
          } while (uVar3 != 0);
        }
        *psVar6 = 0;
        return;
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        param_2 = *unaff_x23;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = unaff_x20 >> 9;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = unaff_x24;
      unaff_x20 = SUB168(auVar4 * auVar5,8) >> 0xb;
      param_1 = unaff_x22 + -1;
      uVar10 = (ulong)(uint)(iVar9 - (int)unaff_x20 * unaff_w25);
      iVar9 = 7;
    }
    do {
      unaff_x22 = param_1;
      uVar3 = (uint)uVar10;
      uVar8 = (uVar10 & 0xffffffff) * (unaff_x26 & 0xffffffff);
      in_x9 = uVar8 >> 0x23;
      param_1 = unaff_x22 + -1;
      *unaff_x22 = (short)uVar10 + (short)(uint)(uVar8 >> 0x23) * unaff_w27 + 0x30;
      in_w10 = iVar9 + -1;
      bVar1 = -1 < iVar9;
      uVar10 = in_x9;
      iVar9 = in_w10;
    } while (bVar1);
    in_CY = 8 < uVar3;
    in_ZR = uVar3 == 9;
  } while( true );
}


