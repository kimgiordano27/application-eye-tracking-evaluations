/*
FUNCTION_NAME: FUN_053a0dac
ENTRY_POINT: 053a0dac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void FUN_053a0dac(undefined8 param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  
  if ((DAT_066d0841 & 1) == 0) {
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftUInt16_TypeInfo);
    FUN_02b3c81c(
                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo);
    FUN_02b3c81c(PTR_DAT_063224b8);
    FUN_02b3c81c(PTR_DAT_063224c0);
    DAT_066d0841 = 1;
  }
  puVar2 = System_Linq_Expressions_Interpreter_LeftShiftInstruction_LeftShiftUInt16_TypeInfo;
  if (0 < (int)param_3) {
    if (param_2 == 0) {
LAB_053a115c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar9 = 0;
    do {
      if (*(uint *)(param_2 + 0x18) <= (uint)lVar9) goto LAB_053a1160;
      lVar13 = *(long *)(param_2 + lVar9 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_053a115c;
      if (*(int *)(lVar13 + 0x54) == 0) {
        if (*(long *)(lVar13 + 0x18) == 0) goto LAB_053a115c;
        if (*(int *)(*(long *)(lVar13 + 0x18) + 0x18) == 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (DAT_066d0899 == '\0') {
            FUN_02b3c81c(puVar2);
            DAT_066d0899 = '\x01';
          }
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar8 = *(long *)puVar2;
          }
          uVar3 = **(undefined8 **)(lVar8 + 0xb8);
        }
        else {
          uVar3 = FUN_053a0c18(param_1);
        }
        *(undefined8 *)(lVar13 + 0x30) = uVar3;
        thunk_FUN_02bb0e9c();
        if (*(long *)(lVar13 + 0x40) == 0) goto LAB_053a115c;
        *(undefined8 *)(*(long *)(lVar13 + 0x40) + 0x30) = *(undefined8 *)(lVar13 + 0x30);
        thunk_FUN_02bb0e9c();
      }
      puVar1 = 
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo;
      lVar9 = lVar9 + 1;
    } while (param_3 != (uint)lVar9);
    if (param_3 != 1) {
      if (0xb < param_3) {
        FUN_053a1164(param_1,param_2,param_3);
        return;
      }
      uVar12 = 0;
System_Xml_Schema_SchemaDeclBase__get_Name:
      uVar11 = (uint)uVar12;
      if (*(uint *)(param_2 + 0x18) <= uVar11) {
LAB_053a1160:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar9 = *(long *)(param_2 + (uVar12 & 0xffffffff) * 8 + 0x20);
      if (lVar9 == 0) goto LAB_053a115c;
      uVar10 = uVar12;
      if (*(int *)(lVar9 + 0x54) == 0) {
        do {
          if (*(uint *)(param_2 + 0x18) <= (int)uVar10 + 1U) goto LAB_053a1160;
          lVar13 = *(long *)(param_2 + 0x28 + uVar10 * 8);
          if (lVar13 == 0) goto LAB_053a115c;
          if (*(int *)(lVar13 + 0x54) == 0) {
            lVar8 = *(long *)(lVar9 + 0x20);
            uVar3 = *(undefined8 *)(lVar13 + 0x20);
            if (*(int *)(*(long *)UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo + 0xe4) == 0
               ) {
              thunk_FUN_02b9ad44();
            }
            if (lVar8 == 0) goto LAB_053a115c;
            uVar4 = FUN_053994f0(lVar8,uVar3);
            if ((uVar4 & 1) != 0) {
              if ((*(long *)(lVar9 + 0x30) == 0) || (*(long *)(lVar13 + 0x30) == 0))
              goto LAB_053a115c;
              lVar8 = *(long *)(*(long *)(lVar9 + 0x30) + 0x18);
              uVar3 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x18);
              if (*(int *)(*(long *)UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo + 0xe4) ==
                  0) {
                thunk_FUN_02b9ad44();
              }
              if (lVar8 == 0) goto LAB_053a115c;
              uVar4 = FUN_053994f0(lVar8,uVar3);
              if ((uVar4 & 1) != 0) {
                if (*(long *)(lVar9 + 0x18) == 0) goto LAB_053a115c;
                uVar3 = FUN_053981ec();
                if (*(long *)(lVar13 + 0x18) == 0) goto LAB_053a115c;
                uVar5 = FUN_053981ec(*(long *)(lVar13 + 0x18));
                if (*(long *)(lVar9 + 0x20) == 0) goto LAB_053a115c;
                uVar6 = FUN_05398f60(*(long *)(lVar9 + 0x20));
                if ((*(long *)(lVar9 + 0x30) == 0) ||
                   (*(long *)(*(long *)(lVar9 + 0x30) + 0x18) == 0)) goto LAB_053a115c;
                uVar7 = FUN_05398f60();
                FUN_053c7c1c(param_1,uVar3,uVar5,uVar6,uVar7,0);
              }
            }
          }
          uVar10 = uVar10 + 1;
        } while (param_3 - 1 != (int)uVar10);
      }
      else {
        do {
          if (*(uint *)(param_2 + 0x18) <= (int)uVar10 + 1U) goto LAB_053a1160;
          lVar13 = *(long *)(param_2 + 0x28 + uVar10 * 8);
          if (lVar13 == 0) goto LAB_053a115c;
          if (*(int *)(lVar13 + 0x54) == 1) {
            if ((*(long *)(lVar9 + 0x30) == 0) || (*(long *)(lVar13 + 0x30) == 0))
            goto LAB_053a115c;
            lVar8 = *(long *)(*(long *)(lVar9 + 0x30) + 0x10);
            uVar3 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x10);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (lVar8 == 0) goto LAB_053a115c;
            uVar4 = FUN_05398354(lVar8,uVar3);
            if ((uVar4 & 1) != 0) {
              if ((*(long *)(lVar9 + 0x30) == 0) || (*(long *)(*(long *)(lVar9 + 0x30) + 0x10) == 0)
                 ) goto LAB_053a115c;
              uVar3 = FUN_053981ec();
              FUN_053c7c1c(param_1,*(undefined8 *)PTR_DAT_063224c0,*(undefined8 *)PTR_DAT_063224c0,
                           uVar3,*(undefined8 *)PTR_DAT_063224b8,0);
            }
          }
          uVar10 = uVar10 + 1;
        } while (param_3 - 1 != (int)uVar10);
      }
      uVar12 = uVar12 + 1;
      if (uVar11 != param_3 - 2) goto System_Xml_Schema_SchemaDeclBase__get_Name;
    }
  }
  return;
}


