/*
FUNCTION_NAME: OVRInput$$get_pluginSupportsActiveController
ENTRY_POINT: 0312a97c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void OVRInput__get_pluginSupportsActiveController(void)

{
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
  *(undefined1 *)(unaff_x21 + 0x256) = 1;
  uVar1 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  *(undefined8 *)(unaff_x19 + 0x44) =
       (*(undefined8 **)
         (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8))
       [1];
  *(undefined8 *)(unaff_x19 + 0x3c) = uVar1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03927648(0);
  *(undefined8 *)(unaff_x19 + 0x54) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x4c) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x60) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x58) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  FUN_039211e4();
  return;
}


