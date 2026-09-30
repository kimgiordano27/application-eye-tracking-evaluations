/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_Values
ENTRY_POINT: 01ac314c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_Values
          (long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 0x408);
  if (lVar1 != 0) {
    auVar2 = (**(code **)(lVar1 + 0x18))
                       (*(undefined8 *)(lVar1 + 0x40),param_2,param_3 & 0xffffffff,
                        *(undefined8 *)(lVar1 + 0x28));
    param_2 = auVar2._0_8_;
    param_3 = auVar2._8_8_ & 0xffffffff;
  }
  auVar2._8_8_ = param_3 & 0xffffffff;
  auVar2._0_8_ = param_2;
  return auVar2;
}


