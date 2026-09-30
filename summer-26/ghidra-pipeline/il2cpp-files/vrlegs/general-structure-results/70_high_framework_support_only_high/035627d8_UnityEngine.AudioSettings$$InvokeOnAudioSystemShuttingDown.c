/*
FUNCTION_NAME: UnityEngine.AudioSettings$$InvokeOnAudioSystemShuttingDown
ENTRY_POINT: 035627d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_AudioSettings__InvokeOnAudioSystemShuttingDown(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 uVar5;
  
  uVar1 = FUN_036d35a8();
  if ((uVar1 & 1) == 0) {
    if (*unaff_x20 != 0) {
      *unaff_x21 = *(undefined8 *)(*unaff_x20 + 0x20);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
LAB_03562a50:
      FUN_035914e0();
      uVar5 = (**(code **)(*unaff_x19 + 0x778))();
      *(undefined4 *)(unaff_x19 + 0xc3) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x03562a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x308))();
      return;
    }
  }
  else {
    lVar2 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,5);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if (*unaff_x20 == 0) goto LAB_03562a9c;
        uVar3 = FUN_036d3824(*unaff_x20,0);
        if (1 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x28) = uVar3;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar2 + 0x28),uVar3);
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)OVRPlugin_Posef_TypeInfo;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar4 = FUN_036cbbbc();
            if (lVar4 == 0) goto LAB_03562a9c;
            uVar3 = FUN_036d3824(lVar4,0);
            if (3 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x38) = uVar3;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar2 + 0x38),uVar3);
              if (4 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)OVRPlugin_OVRP_1_97_0_TypeInfo;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                uVar3 = FUN_025be564(lVar2,0);
                if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                }
                FUN_0367b470(uVar3);
                goto LAB_03562a50;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
LAB_03562a9c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


