/*
FUNCTION_NAME: FUN_05ee96e4
ENTRY_POINT: 05ee96e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05ee96e4(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_06dc3fc5 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(PTR_DAT_069fc208);
    FUN_02d965b8(Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__);
    DAT_06dc3fc5 = 1;
  }
  if (*(char *)(param_1 + 0x27) == '\0') {
    uVar1 = thunk_FUN_06354368(param_1,0);
    uVar1 = FUN_0536d554(*(undefined8 *)PTR_DAT_069fc208,uVar1,
                         *(undefined8 *)Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__,0);
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
    }
    FUN_0630bbe4(uVar1,0);
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    if (*(int *)(param_1 + 0xbc) == 1) {
      FUN_05eead4c(param_1,0);
      return;
    }
    FUN_05eeaea4(param_1,0);
    return;
  }
  return;
}


