/*
FUNCTION_NAME: OVRManager$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 07a22504
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__SetEyeTrackedFoveatedRenderingEnabled
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  *(undefined8 *)(param_7 + 0x20) = param_8;
  thunk_FUN_040ec700();
  *(undefined8 *)(param_7 + 0x28) = param_9;
  thunk_FUN_040ec700((undefined8 *)(param_7 + 0x28),param_9);
  *(undefined8 *)(param_7 + 0x30) = param_10;
  thunk_FUN_040ec700((undefined8 *)(param_7 + 0x30),param_10);
  *(undefined8 *)(param_7 + 0x38) = param_11;
  thunk_FUN_040ec700((undefined8 *)(param_7 + 0x38),param_11);
  *(undefined8 *)(param_7 + 0x40) = param_12;
  thunk_FUN_040ec700((undefined8 *)(param_7 + 0x40),param_12);
  *(undefined8 *)(param_7 + 0x48) = param_13;
  thunk_FUN_040ec700((undefined8 *)(param_7 + 0x48),param_13);
  *(undefined8 *)(param_7 + 0x50) = param_14;
  thunk_FUN_040ec700((undefined8 *)(param_7 + 0x50),param_14);
  *(undefined8 *)(param_7 + 0x58) = param_15;
  thunk_FUN_040ec700((undefined8 *)(param_7 + 0x58),param_15);
  *(undefined4 *)(param_7 + 0x60) = param_1;
  *(undefined4 *)(param_7 + 100) = param_2;
  *(undefined4 *)(param_7 + 0x68) = param_3;
  *(undefined4 *)(param_7 + 0x6c) = param_4;
  *(undefined4 *)(param_7 + 0x70) = param_5;
  *(undefined4 *)(param_7 + 0x74) = param_6;
  return;
}


