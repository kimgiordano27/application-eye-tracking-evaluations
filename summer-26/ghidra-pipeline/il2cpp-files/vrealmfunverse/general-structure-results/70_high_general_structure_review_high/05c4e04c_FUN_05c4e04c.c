/*
FUNCTION_NAME: FUN_05c4e04c
ENTRY_POINT: 05c4e04c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


void FUN_05c4e04c(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((DAT_066d7222 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313cc8);
    FUN_02b3c81c(Method_PXR_PermissionRequest_PermissionCallbacks_PermissionDeniedAndDontAskAgain__)
    ;
    FUN_02b3c81c(Oculus_Platform_Request<ChallengeEntryList>_TypeInfo);
    DAT_066d7222 = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05c9ef80(param_1,*(undefined8 *)Oculus_Platform_Request<ChallengeEntryList>_TypeInfo,0);
    }
    if (*(int *)(*(long *)PTR_DAT_06313cc8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d7288 == (code *)0x0) {
      DAT_066d7288 = (code *)FUN_02b3c7e0(
                                         "UnityEngine.Graphics::Internal_DrawMeshNow2_Injected(System.IntPtr,System.Int32,UnityEngine.Matrix4x4&)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x05c4e110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_066d7288)(lVar1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_05c9ef80(0,*(undefined8 *)Oculus_Platform_Request<ChallengeEntryList>_TypeInfo,0);
}


