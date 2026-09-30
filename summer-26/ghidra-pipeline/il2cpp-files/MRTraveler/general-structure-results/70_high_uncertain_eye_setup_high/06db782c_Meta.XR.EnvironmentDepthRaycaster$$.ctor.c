/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.ctor
ENTRY_POINT: 06db782c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_EnvironmentDepthRaycaster___ctor(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined2 uStack000000000000000c;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e90420);
  *(undefined1 *)(unaff_x20 + 0xbbc) = 1;
  uVar1 = FUN_06f74e14();
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_08e6b418 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar3 = FUN_07bccc8c();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uStack000000000000000c = FUN_06f6fafc(lVar3,0,0);
    if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e6b4b0);
    }
    uVar2 = FUN_07059e90(&stack0x0000000c,0);
    uVar1 = FUN_07bcc214(uVar2,*(undefined8 *)PTR_DAT_08e90418,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e90420,lVar3,0);
    }
  }
  else {
    lVar3 = **(long **)(*(long *)PTR_DAT_08e69d78 + 0xb8);
  }
  return lVar3;
}


