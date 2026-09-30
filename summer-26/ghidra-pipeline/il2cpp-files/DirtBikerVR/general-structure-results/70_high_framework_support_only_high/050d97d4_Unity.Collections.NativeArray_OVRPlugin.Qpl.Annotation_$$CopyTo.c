/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 050d97d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  if (param_2 < 0x40) {
    if (param_2 < 2) {
      *unaff_x20 = 0;
    }
    else {
      FUN_0458f268();
      *unaff_x20 = 0;
      *(undefined4 *)((long)unaff_x20 + 0xc) = 0;
    }
    return;
  }
  thunk_FUN_03af1434(&DAT_0861aac0);
  uVar1 = thunk_FUN_03ac74bc();
  uVar2 = thunk_FUN_03af1434(&DAT_0869ae98);
  FUN_06750b44(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1);
}


