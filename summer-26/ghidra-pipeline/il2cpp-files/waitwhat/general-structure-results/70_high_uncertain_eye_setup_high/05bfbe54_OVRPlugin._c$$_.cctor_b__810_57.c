/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_57
ENTRY_POINT: 05bfbe54
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_57(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  puVar1 = PTR_DAT_07117008;
  lVar3 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    uVar4 = *(undefined8 *)PTR_DAT_07117008;
    lVar2 = thunk_FUN_031c3cac(lVar3,uVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03189058(lVar3,uVar4);
    }
  }
  lVar3 = FUN_05974b90(lVar2);
  if (lVar3 == 0) {
    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = 0;
    return;
  }
  uVar4 = *(undefined8 *)puVar1;
  lVar2 = thunk_FUN_031c3cac(lVar3,uVar4);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)puVar1;
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar2;
    lVar2 = thunk_FUN_031c3cac(lVar3,uVar4);
    if (lVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03189058(lVar3,uVar4);
}


