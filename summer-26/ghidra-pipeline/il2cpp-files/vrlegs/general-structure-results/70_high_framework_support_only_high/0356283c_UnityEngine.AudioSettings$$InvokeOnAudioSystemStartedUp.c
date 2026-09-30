/*
FUNCTION_NAME: UnityEngine.AudioSettings$$InvokeOnAudioSystemStartedUp
ENTRY_POINT: 0356283c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_AudioSettings__InvokeOnAudioSystemStartedUp(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x20 + 0x28),param_1);
  if (2 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x21 + 0x30) = *(undefined8 *)OVRPlugin_Posef_TypeInfo;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar1 = FUN_036cbbbc();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar2 = FUN_036d3824(lVar1,0);
    if (3 < *(uint *)(unaff_x21 + 0x18)) {
      *(undefined8 *)(unaff_x21 + 0x38) = uVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x21 + 0x38),uVar2);
      if (4 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined8 *)(unaff_x21 + 0x40) = *(undefined8 *)OVRPlugin_OVRP_1_97_0_TypeInfo;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar2 = FUN_025be564();
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar2);
        FUN_035914e0();
        uVar3 = (**(code **)(*unaff_x19 + 0x778))();
        *(undefined4 *)(unaff_x19 + 0xc3) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x03562a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x308))();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


