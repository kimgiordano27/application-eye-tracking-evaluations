/*
FUNCTION_NAME: Unity.Baselib.LowLevel.Binding$$Baselib_RegisteredNetwork_Socket_UDP_ProcessRecv_Injected
ENTRY_POINT: 0744a8c4
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


void Unity_Baselib_LowLevel_Binding__Baselib_RegisteredNetwork_Socket_UDP_ProcessRecv_Injected
               (undefined8 param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000058;
  
  if ((DAT_08269b7d & 1) == 0) {
                    /* try { // try from 0744a8ec to 0754a8f3 has its CatchHandler @ 0744aa78 */
                    /* try { // try from 0744a8f4 to 0754a8ff has its CatchHandler @ 0744aa9c */
    FUN_0373b518(UnityEngine_TransformDispatchData_TypeInfo);
                    /* try { // try from 0744a900 to 0754a903 has its CatchHandler @ 0744aa30 */
    FUN_0373b518(UnityEngine_UIElements_TransformOrigin_TypeInfo);
                    /* try { // try from 0744a904 to 0754a907 has its CatchHandler @ 0744aa2c */
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    DAT_08269b7d = 1;
  }
  in_stack_00000058 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  uStack000000000000003c = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uStack0000000000000044 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
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
                              (lVar7,uVar4,&stack0x00000058,
                               *(undefined8 *)UnityEngine_TransformDispatchData_TypeInfo);
            if ((uVar5 & 1) != 0) {
              lVar3 = FUN_07445304(param_2);
              if (lVar3 == 0) goto LAB_0744aae8;
              uVar6 = FUN_049cec24(lVar3,0,*(undefined8 *)puVar1);
              uVar4 = in_stack_00000058;
              FUN_0744e558(param_2,uVar6,in_stack_00000058);
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
  in_stack_00000030 = *(undefined8 *)((long)param_2 + 0x23c);
  uStack0000000000000044 = (undefined4)param_2[0x4a];
  in_stack_00000048 = (undefined4)((ulong)param_2[0x4a] >> 0x20);
  in_stack_00000040 = (undefined4)((ulong)param_2[0x49] >> 0x20);
  in_stack_00000038 = (undefined4)*(undefined8 *)((long)param_2 + 0x244);
  uStack000000000000003c = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x244) >> 0x20);
  in_stack_00000028 = (undefined4)param_2[0x4c];
  in_stack_00000020 = param_2[0x4b];
  FUN_0744bfbc(param_2,param_3,&stack0x00000030,&stack0x00000020);
  uVar5 = FUN_07435e74(param_2);
  if ((uVar5 & 1) == 0) {
    param_2[0x4a] = CONCAT44(in_stack_00000048,uStack0000000000000044);
    param_2[0x49] = CONCAT44(in_stack_00000040,uStack000000000000003c);
    *(ulong *)((long)param_2 + 0x244) = CONCAT44(uStack000000000000003c,in_stack_00000038);
    *(undefined8 *)((long)param_2 + 0x23c) = in_stack_00000030;
    *(undefined4 *)(param_2 + 0x4c) = in_stack_00000028;
    param_2[0x4b] = in_stack_00000020;
  }
  else {
    if (param_3 == 1) {
      FUN_0744d598(param_1,param_2);
    }
    FUN_0744d848(param_1,param_2,&stack0x00000030,&stack0x00000020);
  }
  return;
}


