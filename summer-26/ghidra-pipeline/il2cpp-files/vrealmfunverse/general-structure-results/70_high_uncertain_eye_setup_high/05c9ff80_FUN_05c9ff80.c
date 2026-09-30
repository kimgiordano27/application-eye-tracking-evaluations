/*
FUNCTION_NAME: FUN_05c9ff80
ENTRY_POINT: 05c9ff80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05c9ff80(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if ((DAT_066d8fb0 & 1) == 0) {
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_066d8fb0 = 1;
  }
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_02b76274();
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
  }
  if (DAT_066d8fe0 == (code *)0x0) {
    DAT_066d8fe0 = (code *)FUN_02b3c7e0(
                                       "UnityEngine.Jobs.TransformAccessArray::Add_Injected(System.IntPtr,System.IntPtr)"
                                       );
  }
                    /* WARNING: Could not recover jumptable at 0x05ca0008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_066d8fe0)(param_1,uVar2);
  return;
}


