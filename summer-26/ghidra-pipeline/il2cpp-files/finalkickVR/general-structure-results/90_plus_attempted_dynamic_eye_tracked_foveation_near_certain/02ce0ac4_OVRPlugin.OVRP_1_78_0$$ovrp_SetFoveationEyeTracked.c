/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 02ce0ac4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long unaff_x29;
  undefined8 uStack0000000000000008;
  long lStack0000000000000010;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  uStack0000000000000008 = param_3;
  lStack0000000000000010 = param_2;
  if ((MessageWithSendInvitesResult__ctor_m3DBBFDDED3E0D94E629D6E0D821684FD85E678DC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_ListDictionaryInternal_NodeEnumerator_MoveNext__);
    MessageWithSendInvitesResult__ctor_m3DBBFDDED3E0D94E629D6E0D821684FD85E678DC::
    s_Il2CppMethodInitialized = 1;
  }
  Message_1__ctor_m20C688F6231C511A6029A1BA91C2A5BBDE215298
            (*(Message_1_tD1FD6F6CA5C3D0EDFD900D7F3229195BA28EDF47 **)(unaff_x29 + -8),
             lStack0000000000000010,
             *(MethodInfo **)
              Method_System_Collections_ListDictionaryInternal_NodeEnumerator_MoveNext__);
  return;
}


