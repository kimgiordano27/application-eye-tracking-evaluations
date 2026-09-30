/*
FUNCTION_NAME: OVRPlugin$$SetHandNodePoseStateLatency
ENTRY_POINT: 02cb1884
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SetHandNodePoseStateLatency
               (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8 *param_1,Il2CppObject *param_2,
               long param_3,MethodInfo *param_4)

{
  Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8 *in_stack_00000018;
  Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259 *in_stack_00000020;
  
  Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C(param_1,param_2,param_3,param_4);
  NullCheck(in_stack_00000020);
  Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E
            (in_stack_00000020,in_stack_00000018,
             *(MethodInfo **)Method_System_Collections_Generic_List<Vector4>_AddRange__);
  return;
}


