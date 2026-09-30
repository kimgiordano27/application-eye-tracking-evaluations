/*
FUNCTION_NAME: _Common.LIVCameraExt.Scripts.LIVCameraController$$ToggleMicrophoneRecording
ENTRY_POINT: 02251e94
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


long _Common_LIVCameraExt_Scripts_LIVCameraController__ToggleMicrophoneRecording(void)

{
  uint uVar1;
  long *plVar2;
  uint in_w8;
  long lVar3;
  long lVar4;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  
  do {
    if (in_w8 <= unaff_w23) {
LAB_02251f48:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar4 = *(long *)(unaff_x21 + (long)(int)unaff_w23 * 8 + 0x20);
    if (lVar4 == 0) {
LAB_02251f44:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_01a4ad9c(lVar4,0);
    if (*(int *)(lVar4 + 0x18) < 1) {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar4,0);
    }
    else {
      lVar3 = *(long *)(lVar4 + 0x10);
      uVar1 = *(int *)(lVar4 + 0x18) - 1;
      *(uint *)(lVar4 + 0x18) = uVar1;
      if (lVar3 == 0) goto LAB_02251f44;
      if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_02251f48;
      plVar2 = (long *)(lVar3 + (ulong)uVar1 * 8 + 0x20);
      lVar3 = *plVar2;
      *plVar2 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,0);
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar4,0);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    in_w8 = *(uint *)(unaff_x21 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    uVar1 = 0;
    if (unaff_w23 + 1 != in_w8) {
      uVar1 = unaff_w23 + 1;
    }
    unaff_w23 = uVar1;
    if ((int)in_w8 <= unaff_w22) {
      return 0;
    }
  } while( true );
}


