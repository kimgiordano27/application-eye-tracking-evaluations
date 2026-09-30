/*
FUNCTION_NAME: FUN_05f6c104
ENTRY_POINT: 05f6c104
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_05f6c104(undefined4 param_1,undefined4 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  local_28 = param_1;
  uStack_24 = param_2;
  if ((DAT_066dd278 & 1) == 0) {
    FUN_02b3c81c(StringLiteral_634);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02b3c81c(PTR_DAT_06312b00);
    DAT_066dd278 = 1;
  }
  local_38 = 0;
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    FUN_02b76274();
  }
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x10);
  }
  if (*(long *)(*(long *)StringLiteral_634 + 0x38) == 0) {
    FUN_02b76274();
  }
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_4 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_06312b00 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066dd288 == (code *)0x0) {
    DAT_066dd288 = (code *)FUN_02b3c7e0(
                                       "UnityEngine.RectTransformUtility::PixelAdjustPoint_Injected(UnityEngine.Vector2&,System.IntPtr,System.IntPtr,UnityEngine.Vector2&)"
                                       );
  }
  (*DAT_066dd288)(&local_28,uVar3,uVar2,&local_38);
  return (undefined4)local_38;
}


