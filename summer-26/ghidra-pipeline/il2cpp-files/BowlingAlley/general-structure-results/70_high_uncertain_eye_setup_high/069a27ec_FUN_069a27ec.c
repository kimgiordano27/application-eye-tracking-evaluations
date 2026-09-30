/*
FUNCTION_NAME: FUN_069a27ec
ENTRY_POINT: 069a27ec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_069a27ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__;
  puVar1 = PTR_DAT_07279510;
  if ((DAT_076e1e65 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__ctor__);
    DAT_076e1e65 = 1;
  }
  uVar3 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_059324dc(uVar3,0);
  return;
}


