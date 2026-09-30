/*
FUNCTION_NAME: FUN_03e32f90
ENTRY_POINT: 03e32f90
PROGRAM: gunraiders-libil2cpp.so
SCORE: 106
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void FUN_03e32f90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_38;
  
  puVar4 = StringLiteral_9853;
  puVar3 = StringLiteral_9852;
  puVar2 = OVRSkeletonRenderer_TypeInfo;
  puVar1 = UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo;
  if ((DAT_045428e0 & 1) == 0) {
    FUN_01c5d288(OVRExternalComposition_TypeInfo);
    FUN_01c5d288(OVREyeGaze_TypeInfo);
    FUN_01c5d288(OVRFaceExpressions_TypeInfo);
    FUN_01c5d288(OVRGLTFAccessor_TypeInfo);
    FUN_01c5d288(StringLiteral_9854);
    FUN_01c5d288(StringLiteral_9855);
    FUN_01c5d288(OVRSkeletonRenderer_TypeInfo);
    FUN_01c5d288(StringLiteral_9853);
    FUN_01c5d288(StringLiteral_9852);
    FUN_01c5d288(MQTTnet_Formatter_MqttPacketBuffer_TypeInfo);
    FUN_01c5d288(UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo);
    DAT_045428e0 = 1;
  }
  local_38 = 0;
  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_02d4f880(uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  FUN_03313b6c(param_1,0);
  lVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_03f15048(lVar6,0);
  *(long *)(param_1 + 0x18) = lVar6;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (lVar6 != 0) {
    FUN_03f17740(lVar6,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    lVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_03f15048(lVar6,0);
    *(long *)(param_1 + 0x20) = lVar6;
    if (lVar6 != 0) {
      FUN_03f17740(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20),0);
      puVar1 = MQTTnet_Formatter_MqttPacketBuffer_TypeInfo;
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_03f1bbb8(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0);
        lVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
        FUN_03ea4da8(lVar6,0);
        *(long *)(param_1 + 0x28) = lVar6;
        if (lVar6 != 0) {
          FUN_03f17740(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),0);
          if (*(long *)(param_1 + 0x28) != 0) {
            FUN_03f14d08(*(long *)(param_1 + 0x28),0,0);
            plVar7 = *(long **)(param_1 + 0x28);
            if (plVar7 != (long *)0x0) {
              lVar6 = (**(code **)(*plVar7 + 0x768))(plVar7,*(undefined8 *)(*plVar7 + 0x770));
              if (lVar6 != 0) {
                *(undefined1 *)(lVar6 + 0x20) = 1;
                if (*(long *)(param_1 + 0x28) != 0) {
                  FUN_03ea4550(*(long *)(param_1 + 0x28),2,0);
                  puVar2 = StringLiteral_9854;
                  puVar1 = OVRFaceExpressions_TypeInfo;
                  if (*(long *)(param_1 + 0x20) != 0) {
                    local_38 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x378);
                    FUN_03f1e3ec(&local_38,*(undefined8 *)(param_1 + 0x28),0);
                    lVar6 = *(long *)(param_1 + 0x18);
                    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                    FUN_02b1ee9c(uVar5,param_1,*(undefined8 *)puVar2,0);
                    puVar2 = StringLiteral_9855;
                    puVar1 = OVRGLTFAccessor_TypeInfo;
                    if (lVar6 != 0) {
                      FUN_02305eac(lVar6,uVar5,0,*(undefined8 *)OVRExternalComposition_TypeInfo);
                      lVar6 = *(long *)(param_1 + 0x18);
                      uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                      FUN_02b1ee9c(uVar5,param_1,*(undefined8 *)puVar2,0);
                      if (lVar6 != 0) {
                        FUN_02305eac(lVar6,uVar5,0,*(undefined8 *)OVREyeGaze_TypeInfo);
                        *(undefined2 *)(param_1 + 0x58) = 0x101;
                        return;
                      }
                    }
                  }
                }
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


