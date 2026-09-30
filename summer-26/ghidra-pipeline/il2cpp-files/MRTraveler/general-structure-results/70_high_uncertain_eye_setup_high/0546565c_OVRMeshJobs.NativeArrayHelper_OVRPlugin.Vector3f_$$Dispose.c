/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 0546565c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose(undefined8 param_1,long param_2)

{
  undefined1 auStack_d0 [96];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  local_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_04a1fa74(&local_70,param_1,
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x138));
  memcpy(auStack_d0,&local_70,0x60);
  thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x130),auStack_d0
                    );
  return;
}


