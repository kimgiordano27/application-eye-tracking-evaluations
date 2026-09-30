/*
FUNCTION_NAME: FUN_024a9608
ENTRY_POINT: 024a9608
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_024a9608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
  if ((DAT_0378266a & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<float2>_Dispose__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__);
    DAT_0378266a = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    FUN_012c7fa4(**(long **)(lVar2 + 0xb8),param_1,param_2,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<float2>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


