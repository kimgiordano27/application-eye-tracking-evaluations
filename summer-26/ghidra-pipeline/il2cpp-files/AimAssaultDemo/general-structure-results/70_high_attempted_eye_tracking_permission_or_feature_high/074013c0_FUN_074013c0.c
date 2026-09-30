/*
FUNCTION_NAME: FUN_074013c0
ENTRY_POINT: 074013c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_2
*/


void FUN_074013c0(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  
  if ((DAT_082698dc & 1) == 0) {
    FUN_0373b518(OVRGLTFLoader_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRGLTFType_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    DAT_082698dc = 1;
  }
  FUN_07446774(param_1,param_2,0);
  if ((param_2 != 1) || (*(char *)(param_1 + 0x18c) == '\0')) {
    return;
  }
  lVar3 = FUN_07445224(param_1,0);
  puVar2 = OVRGLTFType_TypeInfo;
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        lVar3 = FUN_07445224(param_1,0);
        if (lVar3 == 0) goto LAB_07401518;
        uVar4 = FUN_049cec24(lVar3,iVar6,*(undefined8 *)puVar2);
        FUN_0740151c(param_1,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    lVar3 = FUN_07445304(param_1,0);
    puVar2 = OVRFaceExpressions_TypeInfo;
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      if (iVar1 < 1) {
        return;
      }
      iVar6 = 0;
      while (lVar3 = FUN_07445304(param_1,0), lVar3 != 0) {
        uVar4 = FUN_049cec24(lVar3,iVar6,*(undefined8 *)puVar2);
        uVar5 = FUN_07445de0(param_1,uVar4,0);
        if ((uVar5 & 1) == 0) {
          FUN_0740151c(param_1,uVar4);
        }
        iVar6 = iVar6 + 1;
        if (iVar1 == iVar6) {
          return;
        }
      }
    }
  }
LAB_07401518:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


