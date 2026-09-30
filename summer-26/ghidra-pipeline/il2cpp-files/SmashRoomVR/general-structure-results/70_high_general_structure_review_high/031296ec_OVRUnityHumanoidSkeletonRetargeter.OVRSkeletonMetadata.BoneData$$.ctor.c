/*
FUNCTION_NAME: OVRUnityHumanoidSkeletonRetargeter.OVRSkeletonMetadata.BoneData$$.ctor
ENTRY_POINT: 031296ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData___ctor(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  if (*(char *)(unaff_x20 + 0x256) == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    *(undefined1 *)(unaff_x20 + 0x256) = 1;
  }
  uVar1 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  *(undefined8 *)(param_1 + 0x44) =
       (*(undefined8 **)
         (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8))
       [1];
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  FUN_039211e4(param_1,0);
  return;
}


