/*
FUNCTION_NAME: Unity.Mathematics.int4x2$$op_Subtraction
ENTRY_POINT: 06543f08
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_int4x2__op_Subtraction(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  
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
  *(undefined1 *)(unaff_x21 + 0xad4) = 1;
  uVar2 = FUN_057ab1f0();
  if ((uVar2 & 1) != 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar4 = thunk_FUN_032a56a0();
    uVar5 = thunk_FUN_032e1da0(PTR_DAT_07280168);
    FUN_05897d14(uVar4,uVar5,0);
    uVar5 = thunk_FUN_032e1da0(
                              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float3>_OnEnable__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar4,uVar5);
  }
  FUN_064cfea8();
  if (0 < *(int *)(unaff_x20 + 0x70)) {
    uVar2 = 0;
    do {
      if (*(long *)(unaff_x20 + 0x78) == 0) goto LAB_065440a4;
      if (*(uint *)(*(long *)(unaff_x20 + 0x78) + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      uVar3 = FUN_06542970();
      if ((uVar3 & 1) == 0) {
        iVar1 = *(int *)(unaff_x20 + 0x70);
        uVar2 = uVar2 + 1;
      }
      else {
        FUN_0653af80();
        iVar1 = *(int *)(unaff_x20 + 0x70);
      }
    } while ((long)uVar2 < (long)iVar1);
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    FUN_050bb3b4(*(long *)(unaff_x20 + 0x18),0,0,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                );
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      FUN_050bb3b4(*(long *)(unaff_x20 + 0x20),0,0,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float>_OnEnable__
                  );
      if (*(long *)(unaff_x20 + 0x28) != 0) {
        FUN_050bb3b4(*(long *)(unaff_x20 + 0x28),0,0,
                     *(undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float3>_Awake__
                    );
        if (*(long *)(unaff_x20 + 0x30) != 0) {
          FUN_050b80c0(*(long *)(unaff_x20 + 0x30),0,0,
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float>_Awake__
                      );
          *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x20 + 0x10) + 1;
          FUN_0396c300(unaff_x20 + 0x220);
          return;
        }
      }
    }
  }
LAB_065440a4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


