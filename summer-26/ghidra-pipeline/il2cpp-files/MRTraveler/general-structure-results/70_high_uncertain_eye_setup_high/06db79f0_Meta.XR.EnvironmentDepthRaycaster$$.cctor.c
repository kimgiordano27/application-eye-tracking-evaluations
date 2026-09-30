/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.cctor
ENTRY_POINT: 06db79f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster___cctor(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  
  if (*(int *)(*(long *)PTR_DAT_08e81bd0 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar1 = FUN_06db77d0();
  if (lVar1 != 0) {
    in_stack_00000008._4_2_ = FUN_06f6fafc(lVar1,0,0);
    if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e6b4b0);
    }
    lVar2 = FUN_07059e90((long)&stack0x00000008 + 4,0);
    if (lVar2 != 0) {
      uVar3 = FUN_06f78a30(lVar2,0);
      uVar4 = FUN_06f78754(lVar1,1,0);
      FUN_06f683f8(uVar3,uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


