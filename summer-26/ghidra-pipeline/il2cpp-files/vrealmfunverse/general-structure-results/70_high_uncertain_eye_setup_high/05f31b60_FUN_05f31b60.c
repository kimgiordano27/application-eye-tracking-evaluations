/*
FUNCTION_NAME: FUN_05f31b60
ENTRY_POINT: 05f31b60
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05f31b60(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_066dceb6 & 1) == 0) {
    FUN_02b3c81c(StringLiteral_247);
    FUN_02b3c81c(StringLiteral_248);
    FUN_02b3c81c(StringLiteral_217);
    FUN_02b3c81c(StringLiteral_249);
    FUN_02b3c81c(StringLiteral_250);
    FUN_02b3c81c(StringLiteral_251);
    FUN_02b3c81c(StringLiteral_223);
    FUN_02b3c81c(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    FUN_02b3c81c(OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo);
    DAT_066dceb6 = 1;
  }
  puVar2 = StringLiteral_223;
  uVar3 = FUN_05f32090(param_1);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)puVar2;
    lVar8 = *(long *)(param_1 + 0x50);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar4 = *(long *)puVar2;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
    lVar9 = puVar6[7];
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar6;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)StringLiteral_248);
      FUN_049c10fc(lVar9,uVar10,*(undefined8 *)StringLiteral_249,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
      *plVar5 = lVar9;
      thunk_FUN_02bb0e9c(plVar5,lVar9);
    }
    if (lVar8 == 0) goto LAB_05f31f00;
    Unity_Properties_PathVisitor__Unity_Properties_IPropertyVisitor_Visit<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>
              (lVar8,lVar9,param_1,*(undefined8 *)StringLiteral_247);
  }
  plVar5 = (long *)FUN_05f30018(param_1);
  puVar1 = StringLiteral_217;
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar10 = *(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo;
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_217) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05f31d14;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)StringLiteral_217,0);
LAB_05f31d14:
    uVar3 = (*(code *)*puVar6)(plVar5,uVar10,puVar6[1]);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)puVar2;
      lVar8 = *(long *)(param_1 + 0x50);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *(long *)puVar2;
      }
      puVar6 = *(undefined8 **)(lVar4 + 0xb8);
      lVar9 = puVar6[8];
      if (lVar9 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar10 = *puVar6;
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)StringLiteral_248);
        FUN_049c10fc(lVar9,uVar10,*(undefined8 *)StringLiteral_250,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
        *plVar5 = lVar9;
        thunk_FUN_02bb0e9c(plVar5,lVar9);
      }
      if (lVar8 == 0) goto LAB_05f31f00;
      Unity_Properties_PathVisitor__Unity_Properties_IPropertyVisitor_Visit<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>
                (lVar8,lVar9,param_1,*(undefined8 *)StringLiteral_247);
    }
    plVar5 = (long *)FUN_05f30018(param_1);
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      uVar10 = *(undefined8 *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo;
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05f31e2c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)puVar1,0);
LAB_05f31e2c:
      uVar3 = (*(code *)*puVar6)(plVar5,uVar10,puVar6[1]);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar4 = *(long *)puVar2;
      lVar8 = *(long *)(param_1 + 0x50);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *(long *)puVar2;
      }
      puVar6 = *(undefined8 **)(lVar4 + 0xb8);
      lVar9 = puVar6[9];
      if (lVar9 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar10 = *puVar6;
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)StringLiteral_248);
        FUN_049c10fc(lVar9,uVar10,*(undefined8 *)StringLiteral_251,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
        *plVar5 = lVar9;
        thunk_FUN_02bb0e9c(plVar5,lVar9);
      }
      if (lVar8 != 0) {
        Unity_Properties_PathVisitor__Unity_Properties_IPropertyVisitor_Visit<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>
                  (lVar8,lVar9,param_1,*(undefined8 *)StringLiteral_247);
        return;
      }
    }
  }
LAB_05f31f00:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


