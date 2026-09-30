/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 0366e1b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticUpdateMixedRealityCapture(long param_1)

{
  long lVar1;
  
  if ((DAT_04833d7a & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<int>>_System_IDisposable_Dispose__
                      );
    DAT_04833d7a = 1;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


