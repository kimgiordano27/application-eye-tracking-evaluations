/*
FUNCTION_NAME: FUN_05c9caa4
ENTRY_POINT: 05c9caa4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05c9caa4(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 05c9caac to 05d9cacb has its CatchHandler @ 05c9d208 */
  if ((DAT_066d8df4 & 1) == 0) {
    FUN_02b3c81c(Method_OVRVirtualKeyboardSampleControls_MoveKeyboardNear__);
                    /* try { // try from 05c9cad8 to 05d9cadf has its CatchHandler @ 05c9d1e0 */
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_066d8df4 = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
                    /* try { // try from 05c9caf4 to 05d9caff has its CatchHandler @ 05c9d214 */
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05ca2828(param_1,0);
    }
                    /* try { // try from 05c9cb0c to 05d9cb0f has its CatchHandler @ 05c9d210 */
    if (*(long *)(*(long *)
                   Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                 + 0x38) == 0) {
      FUN_02b76274();
    }
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
    }
                    /* try { // try from 05c9cb28 to 05d9cb2f has its CatchHandler @ 05c9d1fc */
    if (DAT_066d8e68 == (code *)0x0) {
      DAT_066d8e68 = (code *)FUN_02b3c7e0(
                                         "UnityEngine.Transform::SetParent_Injected(System.IntPtr,System.IntPtr,System.Boolean)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x05c9cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 05c9cb58 to 05d9cb5f has its CatchHandler @ 05c9d0d8 */
    (*DAT_066d8e68)(lVar1,uVar2,param_3 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


