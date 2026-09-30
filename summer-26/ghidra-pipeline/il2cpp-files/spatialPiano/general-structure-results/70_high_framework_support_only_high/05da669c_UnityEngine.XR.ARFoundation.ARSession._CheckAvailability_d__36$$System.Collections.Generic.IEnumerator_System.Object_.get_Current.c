/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARSession.<CheckAvailability>d__36$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
ENTRY_POINT: 05da669c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_ARFoundation_ARSession_<CheckAvailability>d__36__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (ulong param_1,long param_2)

{
  int iVar1;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_System_Security_Cryptography_RSACryptoServiceProvider_Common__);
    *(undefined1 *)(unaff_x22 + 0xaf3) = 1;
  }
  iVar1 = *(int *)(*unaff_x21 + 0xe4);
  *(undefined4 *)(unaff_x19 + 8) = 1;
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05daf224(0,param_2 + 200);
  return;
}


