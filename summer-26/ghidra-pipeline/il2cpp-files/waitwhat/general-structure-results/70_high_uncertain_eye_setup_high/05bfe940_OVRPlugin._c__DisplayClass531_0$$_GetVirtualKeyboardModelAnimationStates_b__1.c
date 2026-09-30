/*
FUNCTION_NAME: OVRPlugin.<>c__DisplayClass531_0$$<GetVirtualKeyboardModelAnimationStates>b__1
ENTRY_POINT: 05bfe940
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__DisplayClass531_0__<GetVirtualKeyboardModelAnimationStates>b__1(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_070c1b68;
  if ((DAT_0754eeb8 & 1) == 0) {
    FUN_03188a78(PTR_DAT_071170e0);
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_0754eeb8 = 1;
  }
  puVar2 = PTR_DAT_071170e0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar4 = FUN_03b4ded0(*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x18) != 0) {
      if ((int)*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar5 = *(long *)puVar1;
      uVar6 = *(undefined8 *)(lVar4 + 0x20);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar5);
      }
      bVar3 = FUN_069dc0b0(uVar6,0);
      *(byte *)(param_1 + 0x48) = bVar3 & 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


