/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Vector2f>
ENTRY_POINT: 020b8b28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_Vector2f>(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = FUN_020c2664(param_1,0);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_0407d3c8(*(long *)(unaff_x19 + 0x30),0);
    uVar1 = FUN_020c3d40(uVar1,0);
    FUN_020c26f8(uVar1,0,0);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ea2c(*(undefined8 *)Method_UnityEngine_Events_UnityEvent<string,_string>_AddListener__,0
                );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


