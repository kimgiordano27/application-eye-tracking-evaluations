/*
FUNCTION_NAME: Unity.Baselib.LowLevel.Binding$$Baselib_RegisteredNetwork_Socket_UDP_Close
ENTRY_POINT: 0744acb0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 102
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;data_collection;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_file_logging_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


undefined8
Unity_Baselib_LowLevel_Binding__Baselib_RegisteredNetwork_Socket_UDP_Close
          (long param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  
  if ((DAT_08269b6b & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(DIVR_Glider_TransformParenter_TypeInfo);
    FUN_0373b518(UnityEngine_TransformDispatchData_TypeInfo);
                    /* try { // try from 0744acec to 0754acfb has its CatchHandler @ 0744acfc */
    FUN_0373b518(Unity_Netcode_NetworkLog_TypeInfo);
                    /* catch() { ... } // from try @ 0744aae0 with catch @ 0744acfc
                       catch() { ... } // from try @ 0744acec with catch @ 0744acfc */
                    /* try { // try from 0744ad00 to 0754ad03 has its CatchHandler @ 0744ad0c */
    FUN_0373b518(OVREyeGaze_TypeInfo);
                    /* try { // try from 0744ad04 to 0754ad0f has its CatchHandler @ 0744987c */
                    /* catch() { ... } // from try @ 0744ad00 with catch @ 0744ad0c */
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
                    /* try { // try from 0744ad10 to 0754ae8b has its CatchHandler @ 0744ad10
                       catch() { ... } // from try @ 0744ad10 with catch @ 0744ad10
                       catch() { ... } // from try @ 0744bb1c with catch @ 0744ad10
                       catch() { ... } // from try @ 0744bc10 with catch @ 0744ad10
                       catch() { ... } // from try @ 0744be1c with catch @ 0744ad10 */
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(TransformTweenBehaviour_TypeInfo);
    FUN_0373b518(UnityEngine_ProBuilder_TransformUtility_TypeInfo);
    DAT_08269b6b = 1;
  }
  in_stack_00000008 = 0;
  lVar3 = FUN_07445304(param_1);
  puVar1 = PTR_DAT_07d86398;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 2) {
      if (*(char *)(param_1 + 400) == '\0') goto LAB_0744aec8;
    }
    else {
      lVar3 = FUN_07445304(param_1);
      if (lVar3 == 0) goto LAB_0744af18;
      lVar3 = FUN_049cec24(lVar3,0,*(undefined8 *)OVRFaceExpressions_TypeInfo);
      bVar2 = *(byte *)(param_1 + 400);
      if ((lVar3 != param_2) && (bVar2 == 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x188);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        bVar2 = FUN_075ac5e0(uVar5,0,0);
        bVar2 = bVar2 & 1;
      }
      if (bVar2 == 0) {
        if (lVar3 != param_2) {
          return *(undefined8 *)(param_1 + 0x188);
        }
        goto LAB_0744aec8;
      }
    }
    lVar3 = thunk_FUN_037787d0(param_2,*(undefined8 *)Unity_Netcode_NetworkLog_TypeInfo);
    if (lVar3 != 0) {
      if (*(long *)(param_1 + 0x318) == 0) goto LAB_0744af18;
      uVar4 = System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                        (*(long *)(param_1 + 0x318),lVar3,&stack0x00000008,
                         *(undefined8 *)UnityEngine_TransformDispatchData_TypeInfo);
      uVar5 = in_stack_00000008;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar4 = FUN_075aa744(uVar5,0,0);
        if ((uVar4 & 1) != 0) {
          return in_stack_00000008;
        }
        if (*(long *)(param_1 + 0x318) == 0) goto LAB_0744af18;
        FUN_05b10be4(*(long *)(param_1 + 0x318),lVar3,
                     *(undefined8 *)DIVR_Glider_TransformParenter_TypeInfo);
        uVar5 = FUN_060c1fd4(*(undefined8 *)UnityEngine_ProBuilder_TransformUtility_TypeInfo,param_1
                             ,param_2,0);
        uVar5 = System_Convert__ToInt32(uVar5,*(undefined8 *)TransformTweenBehaviour_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)PTR_DAT_07d86440);
        }
        FUN_0755e310(uVar5,param_1,0);
      }
    }
LAB_0744aec8:
    uVar5 = *(undefined8 *)(param_1 + 0x180);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar4 = FUN_075aa744(uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_075a73b4(param_1,0);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x180);
    }
    return uVar5;
  }
LAB_0744af18:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


