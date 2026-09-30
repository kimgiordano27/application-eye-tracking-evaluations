/*
FUNCTION_NAME: ~ios_base
ENTRY_POINT: 03349cd0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* std::__ndk1::ios_base::~ios_base() */

void __thiscall std::__ndk1::ios_base::~ios_base(ios_base *this)

{
  long lVar1;
  
  *(undefined **)this = Method_OVRTask_SetResult<OVRPlugin_Result>__ + 0x10;
  if (*(long *)(this + 0x48) != 0) {
    lVar1 = *(long *)(this + 0x48) + -1;
    do {
      (**(code **)(*(long *)(this + 0x38) + lVar1 * 8))
                (0,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar1 * 4));
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  locale::~locale((locale *)(this + 0x30));
  free(*(void **)(this + 0x38));
  free(*(void **)(this + 0x40));
  free(*(void **)(this + 0x58));
  free(*(void **)(this + 0x70));
  return;
}


