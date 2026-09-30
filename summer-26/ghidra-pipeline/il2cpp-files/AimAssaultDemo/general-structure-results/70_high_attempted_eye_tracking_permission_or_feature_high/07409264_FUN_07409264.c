/*
FUNCTION_NAME: FUN_07409264
ENTRY_POINT: 07409264
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_2
*/


void FUN_07409264(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_08269934 & 1) == 0) {
    FUN_0373b518(System_Xml_Schema_SequenceNode_TypeInfo);
    FUN_0373b518(Mono_Math_Prime_Generator_SequentialSearchPrimeGeneratorBase_TypeInfo);
    FUN_0373b518(Mono_Math_Prime_Generator_SequentialSearchPrimeGeneratorBase_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    FUN_0373b518(System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache_TypeInfo);
    DAT_08269934 = 1;
  }
  if (*(long *)(param_1 + 0x80) == 0) goto LAB_074093bc;
  iVar1 = FUN_049cfab8(*(long *)(param_1 + 0x80),param_2,
                       *(undefined8 *)System_Xml_Schema_SequenceNode_TypeInfo);
  if (iVar1 < 0) {
    return;
  }
  if (iVar1 != 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_074093bc;
    if (iVar1 == *(int *)(*(long *)(param_1 + 0x80) + 0x18) + -1) {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_074093bc;
      uVar2 = FUN_049cec24(*(long *)(param_1 + 0x88),iVar1 + -1,
                           *(undefined8 *)
                            System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache_TypeInfo
                          );
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_074093bc;
      uVar3 = FUN_049cec24(*(long *)(param_1 + 0x80),iVar1 + -1,
                           *(undefined8 *)OVRFaceExpressions_TypeInfo);
      FUN_074097e4(param_1,uVar2,uVar3);
    }
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_049d05ec(*(long *)(param_1 + 0x80),iVar1,
                 *(undefined8 *)
                  Mono_Math_Prime_Generator_SequentialSearchPrimeGeneratorBase_TypeInfo);
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_049d05ec(*(long *)(param_1 + 0x88),iVar1,
                   *(undefined8 *)
                    Mono_Math_Prime_Generator_SequentialSearchPrimeGeneratorBase_TypeInfo);
      return;
    }
  }
LAB_074093bc:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


