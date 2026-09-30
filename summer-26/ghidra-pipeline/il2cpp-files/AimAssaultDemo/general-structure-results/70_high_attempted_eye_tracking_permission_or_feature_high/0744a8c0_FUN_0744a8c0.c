/*
FUNCTION_NAME: FUN_0744a8c0
ENTRY_POINT: 0744a8c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_3
*/


void FUN_0744a8c0(undefined8 param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_38;
  
  if ((DAT_08269b7d & 1) == 0) {
    FUN_0373b518(UnityEngine_TransformDispatchData_TypeInfo);
    FUN_0373b518(UnityEngine_UIElements_TransformOrigin_TypeInfo);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    DAT_08269b7d = 1;
  }
  local_38 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_68 = 0;
  local_70 = 0;
  if (((*(char *)((long)param_2 + 0x194) != '\0') && ((char)param_2[0x45] != '\0')) &&
     ((int)param_2[0x46] < *(int *)((long)param_2 + 0x22c))) {
    lVar3 = FUN_07445304(param_2);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 1) goto LAB_0744aa28;
      if (param_2[99] != 0) {
        iVar2 = FUN_05b0f3d0(param_2[99],
                             *(undefined8 *)UnityEngine_UIElements_TransformOrigin_TypeInfo);
        if (iVar2 < 1) goto LAB_0744aa28;
        lVar7 = param_2[99];
        lVar3 = FUN_07445304(param_2);
        puVar1 = OVRFaceExpressions_TypeInfo;
        if (lVar3 != 0) {
          uVar4 = FUN_049cec24(lVar3,0,*(undefined8 *)OVRFaceExpressions_TypeInfo);
          if (lVar7 != 0) {
            uVar5 = System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                              (lVar7,uVar4,&local_38,
                               *(undefined8 *)UnityEngine_TransformDispatchData_TypeInfo);
            if ((uVar5 & 1) != 0) {
              lVar3 = FUN_07445304(param_2);
              if (lVar3 == 0) goto LAB_0744aae8;
              uVar6 = FUN_049cec24(lVar3,0,*(undefined8 *)puVar1);
              uVar4 = local_38;
              FUN_0744e558(param_2,uVar6,local_38);
              (**(code **)(*param_2 + 0x8c8))(param_2,uVar6,uVar4,*(undefined8 *)(*param_2 + 0x8d0))
              ;
            }
            goto LAB_0744aa28;
          }
        }
      }
    }
LAB_0744aae8:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
LAB_0744aa28:
  local_60 = *(undefined8 *)((long)param_2 + 0x23c);
  uStack_4c = (undefined4)param_2[0x4a];
  uStack_48 = (undefined4)((ulong)param_2[0x4a] >> 0x20);
  uStack_50 = (undefined4)((ulong)param_2[0x49] >> 0x20);
  uStack_58 = (undefined4)*(undefined8 *)((long)param_2 + 0x244);
  uStack_54 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x244) >> 0x20);
  local_68 = (undefined4)param_2[0x4c];
  local_70 = param_2[0x4b];
  FUN_0744bfbc(param_2,param_3,&local_60,&local_70);
  uVar5 = FUN_07435e74(param_2);
  if ((uVar5 & 1) == 0) {
    param_2[0x4a] = CONCAT44(uStack_48,uStack_4c);
    param_2[0x49] = CONCAT44(uStack_50,uStack_54);
    *(ulong *)((long)param_2 + 0x244) = CONCAT44(uStack_54,uStack_58);
    *(undefined8 *)((long)param_2 + 0x23c) = local_60;
    *(undefined4 *)(param_2 + 0x4c) = local_68;
    param_2[0x4b] = local_70;
  }
  else {
    if (param_3 == 1) {
      uStack_7c = CONCAT44(uStack_48,uStack_4c);
      uStack_88 = uStack_58;
      local_90 = local_60;
      uStack_84 = uStack_54;
      uStack_80 = uStack_50;
      FUN_0744d598(param_1,param_2,&local_90);
    }
    FUN_0744d848(param_1,param_2,&local_60,&local_70);
  }
  return;
}


