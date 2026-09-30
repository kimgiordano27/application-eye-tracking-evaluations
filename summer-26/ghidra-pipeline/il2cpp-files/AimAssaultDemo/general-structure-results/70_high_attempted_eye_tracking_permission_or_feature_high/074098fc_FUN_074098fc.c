/*
FUNCTION_NAME: FUN_074098fc
ENTRY_POINT: 074098fc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_2
*/


void FUN_074098fc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_08269936 & 1) == 0) {
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    FUN_0373b518(System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86398);
    DAT_08269936 = 1;
  }
  uVar2 = FUN_073fd688(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x80) + 0x18) < 1) {
LAB_07409a0c:
      FUN_07409a44(param_1);
      return;
    }
    iVar1 = FUN_073fd600(param_1,0);
    if (iVar1 == 1) {
      FUN_073fdde0(param_1,0);
    }
    lVar3 = *(long *)(param_1 + 0x80);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18) + -1;
      lVar3 = FUN_049cec24(lVar3,iVar1,*(undefined8 *)OVRFaceExpressions_TypeInfo);
      if (*(long *)(param_1 + 0x88) != 0) {
        uVar4 = FUN_049cec24(*(long *)(param_1 + 0x88),iVar1,
                             *(undefined8 *)
                              System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache_TypeInfo
                            );
        if (lVar3 != 0) {
          if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar2 = FUN_075ac5e0(uVar4,0,0);
          if ((uVar2 & 1) == 0) {
            FUN_07409af8(param_1,uVar4,lVar3);
            return;
          }
        }
        goto LAB_07409a0c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


