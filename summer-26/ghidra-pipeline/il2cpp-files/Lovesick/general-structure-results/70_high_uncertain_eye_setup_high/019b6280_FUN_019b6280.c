/*
FUNCTION_NAME: FUN_019b6280
ENTRY_POINT: 019b6280
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_019b6280(long param_1)

{
  ulong uVar1;
  long lVar2;
  long local_18;
  
  if ((DAT_0377a64b & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_VirtualKeyboardModelAnimationState_var);
    thunk_FUN_00d48444(Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_13__);
    DAT_0377a64b = 1;
  }
  local_18 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_010c3738(param_1,&local_18,
                         *(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationState_var);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_0268fd4c(param_1,0);
      if (lVar2 == 0) goto LAB_019b6320;
      local_18 = FUN_010e5800(lVar2,*(undefined8 *)
                                     Method_SuperTextMeshData_<>c_<RebuildDictionaries>b__45_13__);
    }
    if (local_18 != 0) {
      FUN_019bb170();
      return;
    }
  }
LAB_019b6320:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


