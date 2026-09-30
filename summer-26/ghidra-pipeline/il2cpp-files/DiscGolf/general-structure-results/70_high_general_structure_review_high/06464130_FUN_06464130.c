/*
FUNCTION_NAME: FUN_06464130
ENTRY_POINT: 06464130
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_20;telemetry_or_network_hits_3
*/


void FUN_06464130(long param_1,undefined8 param_2,int param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_06dcce7b & 1) == 0) {
    FUN_02d965b8(Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<float>__);
    FUN_02d965b8(Method_TMPro_KerningTable_<>c__DisplayClass4_0_<AddGlyphPairAdjustmentRecord>b__0__
                );
    FUN_02d965b8(Method_TMPro_KerningTable_<>c__DisplayClass5_0_<RemoveKerningPair>b__0__);
    DAT_06dcce7b = 1;
  }
  lVar7 = FUN_06463dc4(param_1);
  if (lVar7 == 0) goto LAB_064644c8;
  iVar5 = FUN_0645ce98(lVar7,0);
  if (iVar5 == 0) {
    lVar7 = FUN_06463dc4(param_1);
    if (lVar7 == 0) goto LAB_064644c8;
    iVar5 = FUN_0645c588(lVar7,0);
    if (iVar5 == 0) {
      return;
    }
  }
  puVar4 = Method_TMPro_KerningTable_<>c__DisplayClass5_0_<RemoveKerningPair>b__0__;
  puVar3 = Method_TMPro_KerningTable_<>c__DisplayClass4_0_<AddGlyphPairAdjustmentRecord>b__0__;
  puVar2 = Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<float>__;
  puVar1 = Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__;
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_06464334;
    if (param_3 != 1) goto LAB_0646436c;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_064644c8;
    FUN_03c232ec(*(long *)(param_1 + 0x38),param_2,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<float>__);
    lVar7 = *(long *)(param_1 + 0x40);
joined_r0x0646432c:
    if (lVar7 == 0) goto LAB_064644c8;
    FUN_03c23c0c(lVar7,param_2,
                 *(undefined8 *)
                  Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
  }
  else {
    if (param_3 == 2) {
LAB_06464334:
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_064644c8;
      FUN_03c232ec(*(long *)(param_1 + 0x40),param_2,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<float>__);
      lVar7 = *(long *)(param_1 + 0x38);
      goto joined_r0x0646432c;
    }
    if (param_3 == 4) {
      if (param_4 != (long *)0x0) {
        iVar5 = 0;
        do {
          lVar10 = *param_4;
          lVar7 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_06464408;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_02dd004c(param_4,lVar7,0);
LAB_06464408:
          iVar6 = (*(code *)*puVar8)(param_4,puVar8[1]);
          if (iVar6 <= iVar5) goto LAB_0646436c;
          lVar10 = *param_4;
          lVar7 = *(long *)puVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_06464468;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_02dd004c(param_4,lVar7,0);
LAB_06464468:
          uVar9 = (*(code *)*puVar8)(param_4,iVar5,puVar8[1]);
          if (*(long *)(param_1 + 0x38) == 0) break;
          FUN_03c232ec(*(long *)(param_1 + 0x38),param_2,*(undefined8 *)puVar2);
          if (*(long *)(param_1 + 0x40) == 0) break;
          FUN_03c23c0c(*(long *)(param_1 + 0x40),uVar9,*(undefined8 *)puVar1);
          iVar5 = iVar5 + 1;
        } while( true );
      }
      goto LAB_064644c8;
    }
    if (param_3 == 3) {
      if (param_4 != (long *)0x0) {
        iVar5 = 0;
        do {
          lVar10 = *param_4;
          lVar7 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0646425c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_02dd004c(param_4,lVar7,0);
LAB_0646425c:
          iVar6 = (*(code *)*puVar8)(param_4,puVar8[1]);
          if (iVar6 <= iVar5) goto LAB_0646436c;
          lVar10 = *param_4;
          lVar7 = *(long *)puVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_064642bc;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_02dd004c(param_4,lVar7,0);
LAB_064642bc:
          uVar9 = (*(code *)*puVar8)(param_4,iVar5,puVar8[1]);
          if (*(long *)(param_1 + 0x40) == 0) break;
          FUN_03c232ec(*(long *)(param_1 + 0x40),uVar9,*(undefined8 *)puVar2);
          if (*(long *)(param_1 + 0x38) == 0) break;
          FUN_03c23c0c(*(long *)(param_1 + 0x38),param_2,*(undefined8 *)puVar1);
          iVar5 = iVar5 + 1;
        } while( true );
      }
      goto LAB_064644c8;
    }
  }
LAB_0646436c:
  lVar7 = FUN_06463dc4(param_1);
  if (lVar7 != 0) {
    FUN_0645fce8(lVar7,0);
    return;
  }
LAB_064644c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


