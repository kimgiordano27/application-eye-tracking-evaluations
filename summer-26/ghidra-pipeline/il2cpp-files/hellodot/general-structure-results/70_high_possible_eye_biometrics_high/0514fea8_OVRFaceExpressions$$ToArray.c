/*
FUNCTION_NAME: OVRFaceExpressions$$ToArray
ENTRY_POINT: 0514fea8
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRFaceExpressions__ToArray(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long in_x9;
  undefined4 *puVar5;
  int *in_x10;
  long unaff_x19;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02ce0a7c();
      goto LAB_0514fed8;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 6) * 0x10 + 0x138);
LAB_0514fed8:
  uVar1 = (*(code *)*puVar2)();
  switch(uVar1) {
  case 0:
    lVar3 = *(long *)(unaff_x19 + 0x78);
    if (lVar3 == 0) {
LAB_0514ff90:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    puVar4 = (undefined4 *)(unaff_x19 + 0x3c);
    puVar5 = (undefined4 *)(unaff_x19 + 0x30);
    puVar2 = (undefined8 *)(unaff_x19 + 0x34);
    break;
  case 1:
    lVar3 = *(long *)(unaff_x19 + 0x78);
    if (lVar3 == 0) goto LAB_0514ff90;
    puVar4 = (undefined4 *)(unaff_x19 + 0x4c);
    puVar5 = (undefined4 *)(unaff_x19 + 0x40);
    puVar2 = (undefined8 *)(unaff_x19 + 0x44);
    break;
  case 2:
    lVar3 = *(long *)(unaff_x19 + 0x78);
    if (lVar3 == 0) goto LAB_0514ff90;
    puVar4 = (undefined4 *)(unaff_x19 + 0x5c);
    puVar5 = (undefined4 *)(unaff_x19 + 0x50);
    puVar2 = (undefined8 *)(unaff_x19 + 0x54);
    break;
  case 3:
    lVar3 = *(long *)(unaff_x19 + 0x78);
    if (lVar3 == 0) goto LAB_0514ff90;
    puVar4 = (undefined4 *)(unaff_x19 + 0x6c);
    puVar5 = (undefined4 *)(unaff_x19 + 0x60);
    puVar2 = (undefined8 *)(unaff_x19 + 100);
    break;
  default:
    return;
  }
  FUN_05ec71d0(*puVar5,*puVar2,(int)((ulong)*puVar2 >> 0x20),*puVar4,lVar3,0);
  return;
}


