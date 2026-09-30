/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ReferenceResolver
ENTRY_POINT: 050dcaa4
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


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ReferenceResolver
               (short *param_1,long param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  short *psVar5;
  short sVar6;
  ulong uVar7;
  ulong in_x9;
  int iVar8;
  int in_w10;
  ulong in_x11;
  short unaff_w19;
  long unaff_x20;
  int unaff_w21;
  short *unaff_x22;
  int iVar9;
  int unaff_w23;
  ulong unaff_x24;
  ulong uVar10;
  int unaff_w25;
  long *unaff_x26;
  ulong unaff_x27;
  int unaff_w28;
  ulong unaff_x29;
  int in_stack_00000008;
  
  do {
    uVar10 = in_x9;
    iVar8 = in_w10;
    iVar9 = unaff_w23;
    if ((uint)in_x11 < 10) {
      iVar9 = unaff_w23 + -9;
      unaff_w21 = unaff_w21 + -9;
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      param_2 = *unaff_x26;
      iVar8 = (int)unaff_x24;
      if (unaff_x24 >> 0x20 == 0) {
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if ((iVar8 != 0) || (-1 < unaff_w23 + -10)) {
          psVar5 = unaff_x22 + -1;
          do {
            do {
              unaff_x22 = psVar5;
              uVar4 = (uint)unaff_x24;
              iVar9 = unaff_w21 + -1;
              uVar10 = (unaff_x24 & 0xffffffff) / 10;
              *unaff_x22 = (short)unaff_x24 + (short)((unaff_x24 & 0xffffffff) / 10) * -10 + 0x30;
              bVar1 = -1 < unaff_w21;
              psVar5 = unaff_x22 + -1;
              unaff_x24 = uVar10;
              unaff_w21 = iVar9;
            } while (bVar1);
          } while (9 < uVar4);
        }
        iVar9 = *(int *)(unaff_x20 + 0x10) + -1;
        if (-1 < iVar9) {
          do {
            unaff_x22 = unaff_x22 + -1;
            sVar6 = FUN_04f69818();
            iVar9 = iVar9 + -1;
            *unaff_x22 = sVar6;
          } while (iVar9 != -1);
        }
        return unaff_w25 <= in_stack_00000008;
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        param_2 = *unaff_x26;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = unaff_x24 >> 9;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = unaff_x27;
      unaff_x24 = SUB168(auVar2 * auVar3,8) >> 0xb;
      param_1 = unaff_x22 + -1;
      uVar10 = (ulong)(uint)(iVar8 - (int)unaff_x24 * unaff_w28);
      iVar8 = 7;
    }
    do {
      unaff_x22 = param_1;
      in_x11 = uVar10 & 0xffffffff;
      uVar7 = (uVar10 & 0xffffffff) * (unaff_x29 & 0xffffffff);
      in_x9 = uVar7 >> 0x23;
      param_1 = unaff_x22 + -1;
      *unaff_x22 = (short)uVar10 + (short)(uint)(uVar7 >> 0x23) * unaff_w19 + 0x30;
      in_w10 = iVar8 + -1;
      bVar1 = -1 < iVar8;
      uVar10 = in_x9;
      iVar8 = in_w10;
      unaff_w23 = iVar9;
    } while (bVar1);
  } while( true );
}


