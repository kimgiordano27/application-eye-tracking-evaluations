/*
FUNCTION_NAME: FUN_05c5fe6c
ENTRY_POINT: 05c5fe6c
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


void FUN_05c5fe6c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_066d7b1a & 1) == 0) {
    FUN_02b3c81c(Method_PlacePointEventDebugger_<OnDisable>b__2_2__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_066d7b1a = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05ca2828(param_1,0);
    }
    if (*(long *)(*(long *)
                   Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                 + 0x38) == 0) {
      FUN_02b76274();
    }
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
    }
    if (DAT_066d7b38 == (code *)0x0) {
      DAT_066d7b38 = (code *)FUN_02b3c7e0(
                                         "UnityEngine.SkinnedMeshRenderer::set_rootBone_Injected(System.IntPtr,System.IntPtr)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x05c5ff18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_066d7b38)(lVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


