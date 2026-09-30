/*
FUNCTION_NAME: FUN_05d1b620
ENTRY_POINT: 05d1b620
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


void FUN_05d1b620(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__;
  if ((DAT_06dc2f03 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__);
    FUN_02d965b8(PTR_DAT_06a132d8);
    FUN_02d965b8(OVRPlugin_OVRP_1_119_0_TypeInfo);
    DAT_06dc2f03 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_119_0_TypeInfo;
  puVar1 = PTR_DAT_06a132d8;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05d164d0(uVar4,*(undefined8 *)puVar2,*(undefined8 *)puVar1,5);
  return;
}


