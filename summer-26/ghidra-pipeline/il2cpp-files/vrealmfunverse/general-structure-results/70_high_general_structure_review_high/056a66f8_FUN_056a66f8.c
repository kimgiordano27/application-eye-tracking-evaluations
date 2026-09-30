/*
FUNCTION_NAME: FUN_056a66f8
ENTRY_POINT: 056a66f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_2;telemetry_or_network_hits_11;eye_or_gaze_keyword_boost_only
*/


void FUN_056a66f8(undefined8 *param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined4 local_48;
  uint local_44;
  
  if ((DAT_066d1f3b & 1) == 0) {
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_DegreesBetween_0000018C_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(PTR_DAT_063207d0);
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_LocalizeTo_0000018B_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRGazeAssistance_GetAssistedVelocityInternal_0000101E_PostfixBurstDelegate>_get_Value__
                );
    DAT_066d1f3b = 1;
  }
  puVar3 = 
  Method_Unity_Burst_FunctionPointer<XRGazeAssistance_GetAssistedVelocityInternal_0000101E_PostfixBurstDelegate>_get_Value__
  ;
  puVar2 = PTR_DAT_063207d0;
  if (param_3 == (long *)0x0) goto LAB_056a6b8c;
  uVar4 = (**(code **)(*param_3 + 0x228))(param_3,*(undefined8 *)(*param_3 + 0x230));
  if (((uVar4 == 0x191) && (*(char *)(param_2 + 0x171) == '\0')) && (*(long *)(param_2 + 0x80) != 0)
     ) {
LAB_056a6864:
    if ((*(char *)(param_2 + 0xba) == '\0') &&
       (uVar8 = FUN_056a61c8(param_2,param_3,uVar4), (uVar8 & 1) != 0)) {
      uVar8 = FUN_056a2b50(param_2);
      if ((uVar8 & 1) == 0) {
        param_1[1] = 0;
        uVar6 = 0;
        puVar12 = (undefined8 *)
                  Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_DegreesBetween_0000018C_PostfixBurstDelegate>_get_Value__
        ;
LAB_056a6b38:
        uVar9 = *puVar12;
        uVar7 = 1;
        *param_1 = 0;
      }
      else {
        auVar15 = FUN_056a6500(param_2,param_3,0);
        puVar12 = (undefined8 *)
                  Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_DegreesBetween_0000018C_PostfixBurstDelegate>_get_Value__
        ;
        lVar11 = auVar15._8_8_;
        uVar6 = auVar15._0_8_;
        if (lVar11 == 0) {
          param_1[1] = 0;
          goto LAB_056a6b38;
        }
        if (*(char *)(param_2 + 400) != '\0') {
          plVar13 = (long *)(param_2 + 0xf8);
          if (*plVar13 == 0) {
LAB_056a6b8c:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          *(undefined1 *)(*plVar13 + 0x29) = 1;
          *plVar13 = 0;
          thunk_FUN_02bb0e9c(plVar13,0);
          (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
          param_1[1] = 0;
          puVar2 = 
          Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_DegreesBetween_0000018C_PostfixBurstDelegate>_get_Value__
          ;
          uVar7 = 0;
          uVar6 = 0;
          *param_1 = 0;
          uVar9 = *(undefined8 *)puVar2;
          goto LAB_056a6b4c;
        }
        uVar7 = 0;
        uVar6 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        uVar9 = *puVar12;
      }
      lVar11 = 0;
LAB_056a6b4c:
      param_1[2] = 0;
      FUN_041b064c(param_1,uVar7,1,uVar6,lVar11,uVar9);
      return;
    }
LAB_056a6908:
    local_44 = uVar4;
    uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_44);
    uVar7 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
    uVar6 = FUN_04c0af28(*(undefined8 *)puVar3,uVar6,uVar7,0);
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
LAB_056a6968:
    FUN_05684f48(lVar11,uVar6,0,7,param_3,0);
    bVar14 = 1;
    if (lVar11 != 0) goto LAB_056a69e0;
LAB_056a6984:
    bVar10 = 0;
    if (*(char *)(param_2 + 0x49) == '\0') {
LAB_056a6a94:
      uVar6 = 0;
      bVar1 = 0;
      if (uVar4 != 0x130) {
        bVar1 = bVar10 ^ 1;
      }
      uVar5 = 0;
      bVar14 = bVar14 | bVar1;
    }
    else {
LAB_056a698c:
      uVar5 = FUN_056a4c4c(param_2,uVar4,param_3);
      auVar15 = FUN_056a6500(param_2,param_3,1);
      lVar11 = auVar15._8_8_;
      uVar6 = auVar15._0_8_;
      if (((uVar5 & 1) != 0) && (*(char *)(param_2 + 0x191) == '\0')) {
        FUN_056a6b9c(param_2 + 0x168);
        FUN_056a6b9c(param_2 + 0x178);
      }
      if (uVar4 != 0x130) {
        bVar14 = 1;
      }
      if (lVar11 != 0) goto LAB_056a69e0;
    }
    puVar2 = 
    Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_DegreesBetween_0000018C_PostfixBurstDelegate>_get_Value__
    ;
    uVar5 = uVar5 & 1;
    *param_1 = 0;
    param_1[1] = 0;
    uVar7 = *(undefined8 *)puVar2;
    param_1[2] = 0;
  }
  else {
    lVar11 = *(long *)(param_2 + 0xe8);
    if (lVar11 == 0) goto LAB_056a6b8c;
    if (((*(char *)(lVar11 + 0x30) != '\0') && (*(char *)(lVar11 + 0x32) == '\0')) &&
       ((uVar4 == 0x197 && (*(char *)(param_2 + 0x181) == '\0')))) goto LAB_056a6864;
    if (399 < (int)uVar4) goto LAB_056a6908;
    if (uVar4 != 0x130) {
      if ((int)uVar4 < 300) {
        bVar14 = 0;
        bVar10 = 1;
        goto LAB_056a6a94;
      }
      if (*(char *)(param_2 + 0x49) == '\0') goto LAB_056a6a90;
      if (*(int *)(param_2 + 0x9c) <= *(int *)(param_2 + 0x120)) {
        lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
        uVar6 = *(undefined8 *)
                 Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_LocalizeTo_0000018B_PostfixBurstDelegate>_get_Value__
        ;
        goto LAB_056a6968;
      }
      bVar14 = 0;
      goto LAB_056a698c;
    }
    if (*(char *)(param_2 + 0x49) == '\0') {
LAB_056a6a90:
      bVar10 = 0;
      bVar14 = 0;
      goto LAB_056a6a94;
    }
    local_48 = 0x130;
    uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_48);
    uVar7 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
    uVar6 = FUN_04c0af28(*(undefined8 *)puVar3,uVar6,uVar7,0);
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_05684f48(lVar11,uVar6,0,7,param_3,0);
    bVar14 = 0;
    if (lVar11 == 0) goto LAB_056a6984;
LAB_056a69e0:
    puVar2 = 
    Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_DegreesBetween_0000018C_PostfixBurstDelegate>_get_Value__
    ;
    if (*(char *)(param_2 + 400) != '\0') {
      plVar13 = (long *)(param_2 + 0xf8);
      if (*plVar13 != 0) {
        *(undefined1 *)(*plVar13 + 0x29) = 1;
        *plVar13 = 0;
        thunk_FUN_02bb0e9c(plVar13,0);
      }
      puVar2 = 
      Method_Unity_Burst_FunctionPointer<XRFingerShapeMath_DegreesBetween_0000018C_PostfixBurstDelegate>_get_Value__
      ;
      uVar5 = 0;
      uVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      uVar7 = *(undefined8 *)puVar2;
      param_1[2] = 0;
      goto LAB_056a6ad4;
    }
    uVar5 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar6 = 0;
    uVar7 = *(undefined8 *)puVar2;
  }
  lVar11 = 0;
LAB_056a6ad4:
  FUN_041b064c(param_1,uVar5,bVar14,uVar6,lVar11,uVar7);
  return;
}


