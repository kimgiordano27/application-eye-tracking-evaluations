/*
FUNCTION_NAME: FUN_03ea14fc
ENTRY_POINT: 03ea14fc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void FUN_03ea14fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = StringLiteral_11622;
  if ((DAT_04542dc9 & 1) == 0) {
    FUN_01c5d288(StringLiteral_11623);
    FUN_01c5d288(StringLiteral_9416);
    FUN_01c5d288(OVRExternalComposition_TypeInfo);
    FUN_01c5d288(OVREyeGaze_TypeInfo);
    FUN_01c5d288(OVRFaceExpressions_TypeInfo);
    FUN_01c5d288(OVRGLTFAccessor_TypeInfo);
    FUN_01c5d288(StringLiteral_11624);
    FUN_01c5d288(StringLiteral_11625);
    FUN_01c5d288(StringLiteral_11622);
    FUN_01c5d288(UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo);
    DAT_04542dc9 = 1;
  }
  puVar3 = StringLiteral_9416;
  FUN_03e1efa4(param_1,param_2,0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar7 = *(long *)puVar2;
  }
  FUN_03f17740(param_1,**(undefined8 **)(lVar7 + 0xb8),0);
  lVar7 = FUN_0275e0f8(param_1,*(undefined8 *)puVar3);
  if (lVar7 != 0) {
    FUN_03f17740(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
    if (*(long *)(param_1 + 0x400) != 0) {
      FUN_03f17740(*(long *)(param_1 + 0x400),*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8)
                   ,0);
      puVar1 = UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo;
      if (*(long *)(param_1 + 0x448) != 0) {
        FUN_03f1c418(*(long *)(param_1 + 0x448),0);
        lVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
        FUN_03f15048(lVar7,0);
        if (lVar7 != 0) {
          FUN_03f14d08(lVar7,1,0);
          *(long *)(param_1 + 0x460) = lVar7;
          FUN_03f1bbb8(lVar7,*(undefined8 *)(param_1 + 0x448),0);
          if (*(long *)(param_1 + 0x460) != 0) {
            FUN_03f17740(*(long *)(param_1 + 0x460),
                         *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),0);
            if (*(long *)(param_1 + 0x448) != 0) {
              FUN_03f17740(*(long *)(param_1 + 0x448),
                           *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20),0);
              lVar7 = FUN_0275e0f8(param_1,*(undefined8 *)puVar3);
              puVar6 = StringLiteral_11625;
              puVar5 = StringLiteral_11624;
              puVar4 = OVRGLTFAccessor_TypeInfo;
              puVar1 = OVRFaceExpressions_TypeInfo;
              puVar3 = OVREyeGaze_TypeInfo;
              puVar2 = OVRExternalComposition_TypeInfo;
              if (lVar7 != 0) {
                FUN_03f1bbb8(lVar7,*(undefined8 *)(param_1 + 0x460),0);
                FUN_03ea1400(param_1);
                uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                FUN_02b1ee9c(uVar8,param_1,*(undefined8 *)puVar5,0);
                FUN_02305eac(param_1,uVar8,0,*(undefined8 *)puVar2);
                uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                FUN_02b1ee9c(uVar8,param_1,*(undefined8 *)puVar6,0);
                FUN_02305eac(param_1,uVar8,0,*(undefined8 *)puVar3);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


