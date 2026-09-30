/*
FUNCTION_NAME: FUN_0685be64
ENTRY_POINT: 0685be64
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0685be64(float param_1,undefined8 param_2)

{
  float fVar1;
  undefined *puVar2;
  double dVar3;
  double __x;
  double local_18;
  
  if ((DAT_071d6b5f & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_63_0_TypeInfo);
    DAT_071d6b5f = 1;
  }
  if (DAT_071bb833 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071bb833 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar2 = OVRPlugin_OVRP_1_63_0_TypeInfo;
  __x = (double)param_1;
  dVar3 = modf(__x,&local_18);
  if (0.0 <= param_1) {
    if (dVar3 != 0.5) {
      local_18 = (double)(long)(__x + 0.5);
      goto LAB_0685bf44;
    }
    dVar3 = 1.0;
  }
  else {
    if (dVar3 != -0.5) {
      local_18 = (double)(long)(__x + -0.5);
      goto LAB_0685bf44;
    }
    dVar3 = -1.0;
  }
  if (((long)local_18 & 1U) != 0) {
    local_18 = local_18 + dVar3;
  }
LAB_0685bf44:
  fVar1 = -2.1474836e+09;
  if (local_18 != INFINITY) {
    fVar1 = (float)(int)local_18;
  }
  FUN_0470c794(fVar1,param_2,*(undefined8 *)puVar2);
  return;
}


