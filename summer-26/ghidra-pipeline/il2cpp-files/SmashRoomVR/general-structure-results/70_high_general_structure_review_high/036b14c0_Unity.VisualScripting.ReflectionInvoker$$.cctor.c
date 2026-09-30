/*
FUNCTION_NAME: Unity.VisualScripting.ReflectionInvoker$$.cctor
ENTRY_POINT: 036b14c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 Unity_VisualScripting_ReflectionInvoker___cctor(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((*(byte *)(unaff_x20 + 0x495) & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x20 + 0x495) = 1;
  }
  puVar3 = (undefined8 *)(param_1 + 0x70);
  uVar4 = *puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = FUN_01e8a9f8(param_1,*(undefined8 *)
                                  Field_<PrivateImplementationDetails>_B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C
                        );
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    thunk_FUN_01b4f09c(puVar3,uVar4);
  }
  return *puVar3;
}


