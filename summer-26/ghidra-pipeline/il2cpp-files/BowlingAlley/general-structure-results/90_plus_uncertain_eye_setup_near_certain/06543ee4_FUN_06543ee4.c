/*
FUNCTION_NAME: FUN_06543ee4
ENTRY_POINT: 06543ee4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06543ee4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_076dfad4 & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float>_Awake__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float>_OnEnable__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float3>_Awake__
                      );
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__);
    DAT_076dfad4 = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  uVar4 = FUN_057ab1f0(param_2,0);
  if ((uVar4 & 1) != 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar8 = thunk_FUN_032a56a0();
    uVar6 = thunk_FUN_032e1da0(PTR_DAT_07280168);
    FUN_05897d14(uVar8,uVar6,0);
    uVar6 = thunk_FUN_032e1da0(
                              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float3>_OnEnable__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar8,uVar6);
  }
  FUN_064cfea8(&local_40,param_2,0);
  if (0 < *(int *)(param_1 + 0x70)) {
    uVar4 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x78);
      if (lVar7 == 0) goto LAB_065440a4;
      if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      uVar8 = *(undefined8 *)(lVar7 + uVar4 * 8 + 0x20);
      uVar5 = FUN_06542970(param_1,uVar8,local_40,uStack_38);
      if ((uVar5 & 1) == 0) {
        iVar1 = *(int *)(param_1 + 0x70);
        uVar4 = uVar4 + 1;
      }
      else {
        FUN_0653af80(param_1,uVar8,1);
        iVar1 = *(int *)(param_1 + 0x70);
      }
    } while ((long)uVar4 < (long)iVar1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_050bb3b4(*(long *)(param_1 + 0x18),local_40,uStack_38,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                );
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_050bb3b4(*(long *)(param_1 + 0x20),local_40,uStack_38,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float>_OnEnable__
                  );
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_050bb3b4(*(long *)(param_1 + 0x28),local_40,uStack_38,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float3>_Awake__
                    );
        puVar3 = Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__;
        puVar2 = Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__;
        if (*(long *)(param_1 + 0x30) != 0) {
          FUN_050b80c0(*(long *)(param_1 + 0x30),local_40,uStack_38,
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float>_Awake__
                      );
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          FUN_0396c300(param_1 + 0x220,param_2,1,*(undefined8 *)puVar3,0,*(undefined8 *)puVar2);
          return;
        }
      }
    }
  }
LAB_065440a4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


