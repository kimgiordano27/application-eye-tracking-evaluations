/*
FUNCTION_NAME: thunk_FUN_03e86254
ENTRY_POINT: 03e86ec0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_3
*/


void thunk_FUN_03e86254(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_04542ccb & 1) == 0) {
    FUN_01c5d288(StringLiteral_9313);
    FUN_01c5d288(StringLiteral_11220);
    FUN_01c5d288(MQTTnet_MqttFactory_TypeInfo);
    FUN_01c5d288(StringLiteral_11277);
    FUN_01c5d288(StringLiteral_11278);
    FUN_01c5d288(StringLiteral_11279);
    FUN_01c5d288(StringLiteral_11280);
    FUN_01c5d288(MQTTnet_Diagnostics_MqttNetNullLogger_TypeInfo);
    FUN_01c5d288(StringLiteral_11281);
    FUN_01c5d288(StringLiteral_11282);
    FUN_01c5d288(StringLiteral_11283);
    FUN_01c5d288(StringLiteral_11284);
    FUN_01c5d288(StringLiteral_11215);
    DAT_04542ccb = 1;
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    uVar2 = FUN_0290ca2c(*(long *)(param_1 + 0x400),param_2,*(undefined8 *)StringLiteral_11279);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_11215);
    UnityEngine_Networking_UnityWebRequest__Dispose(lVar3,param_2);
    lVar4 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_11284);
    FUN_03e87660();
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)MQTTnet_Diagnostics_MqttNetNullLogger_TypeInfo);
    FUN_02b1ee9c(uVar5,param_1,*(undefined8 *)StringLiteral_11282,0);
    if (lVar3 != 0) {
      FUN_02305eac(lVar3,uVar5,0,*(undefined8 *)MQTTnet_MqttFactory_TypeInfo);
      lVar6 = *(long *)(lVar3 + 1000);
      uVar5 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_9313);
      FUN_0285da04(uVar5,param_1,*(undefined8 *)StringLiteral_11281,0);
      if (lVar6 != 0) {
        FUN_03e12618(lVar6,uVar5,0);
        lVar6 = *(long *)(lVar3 + 0x3f0);
        uVar5 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_11220);
        FUN_0285da04(uVar5,param_1,*(undefined8 *)StringLiteral_11283,0);
        if ((lVar6 != 0) && (FUN_03e812b8(lVar6,uVar5), lVar4 != 0)) {
          uVar7 = *(undefined8 *)(lVar4 + 0x3c8);
          uVar5 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_11278);
          FUN_03e83ac4(uVar5,param_2);
          FUN_03e3c738(uVar7,uVar5,0);
          lVar8 = *(long *)(param_1 + 0x400);
          lVar6 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_11277);
          FUN_03313b6c(lVar6,0);
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x10) = lVar3;
            *(long *)(lVar6 + 0x18) = lVar4;
            if ((lVar8 != 0) &&
               (FUN_0290c824(lVar8,param_2,lVar6,*(undefined8 *)StringLiteral_11280), param_2 != 0))
            {
              if (*(char *)(param_2 + 0x40) == '\0') {
                FUN_03e8774c(param_1,param_2);
UnityEngine_Networking_UnityWebRequest__set_disposeDownloadHandlerOnDispose:
                FUN_03e86718(param_1);
                FUN_03e866a8(param_1);
                return;
              }
              lVar6 = *(long *)(param_1 + 0x410);
              uVar1 = FUN_03e952d8(param_2,0);
              if (lVar6 != 0) {
                FUN_03f1bc68(lVar6,uVar1,lVar3,0);
                lVar3 = *(long *)(param_1 + 0x418);
                uVar1 = FUN_03e952d8(param_2,0);
                if (lVar3 != 0) {
                  FUN_03f1bc68(lVar3,uVar1,lVar4,0);
                  goto UnityEngine_Networking_UnityWebRequest__set_disposeDownloadHandlerOnDispose;
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


