/*
FUNCTION_NAME: FUN_0521d8bc
ENTRY_POINT: 0521d8bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 114
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
FUN_0521d8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar4 = Oculus_Platform_Models_NetSyncConnection_TypeInfo;
  puVar3 = UnityEngine_UIElements_MouseCaptureOutEvent_TypeInfo;
  puVar2 = PTR_DAT_0631f8d0;
  puVar1 = PTR_DAT_0631eec8;
  if ((DAT_066cfacb & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631eec8);
    FUN_02b3c81c(OVREyeGaze_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Models_NetSyncConnection_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631f8d0);
    FUN_02b3c81c(UnityEngine_UIElements_MouseCaptureOutEvent_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_NetDataContractSerializer_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_MoveTowardsTarget_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_NegateInstruction_TypeInfo);
    DAT_066cfacb = 1;
  }
  FUN_05276e70(param_1,*(undefined8 *)puVar2,0);
  FUN_05276e70(param_2,*(undefined8 *)puVar3,0);
  FUN_05276e70(param_3,*(undefined8 *)Oculus_Interaction_MoveTowardsTarget_TypeInfo,0);
  FUN_05276e70(param_4,*(undefined8 *)System_Linq_Expressions_Interpreter_NegateInstruction_TypeInfo
               ,0);
  FUN_05276e70(param_5,*(undefined8 *)
                        System_Runtime_Serialization_NetDataContractSerializer_TypeInfo,0);
  FUN_05276e70(param_6,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar5 = FUN_0521d390(0,param_1);
  FUN_05279bfc(param_1,6,5,lVar5,0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      uVar6 = FUN_05279ca8(param_1,6,param_2,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)puVar2,
                           *(undefined8 *)puVar3,0xffffffff,0);
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        uVar7 = FUN_05279ca8(param_1,6,param_3,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)puVar2,
                             *(undefined8 *)Oculus_Interaction_MoveTowardsTarget_TypeInfo,0xffffffff
                             ,0);
        if (2 < *(uint *)(lVar5 + 0x18)) {
          uVar8 = FUN_05279ca8(param_1,6,param_4,*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)puVar2
                               ,*(undefined8 *)
                                 System_Linq_Expressions_Interpreter_NegateInstruction_TypeInfo,
                               0xffffffff,0);
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
            uVar9 = FUN_05279ca8(param_1,6,param_5,*(undefined8 *)(lVar5 + 0x38),
                                 *(undefined8 *)puVar2,
                                 *(undefined8 *)
                                  System_Runtime_Serialization_NetDataContractSerializer_TypeInfo,
                                 0xffffffff,0);
            puVar1 = OVREyeGaze_TypeInfo;
            if (4 < *(uint *)(lVar5 + 0x18)) {
              uVar10 = FUN_05279ca8(param_1,6,param_6,*(undefined8 *)(lVar5 + 0x40),
                                    *(undefined8 *)puVar2,*(undefined8 *)puVar4,0xffffffff,0);
              uVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
              FUN_0523263c(uVar11,param_1,uVar6,uVar7,uVar8,uVar9,uVar10,0);
              return uVar11;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


