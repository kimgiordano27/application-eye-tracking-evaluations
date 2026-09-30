/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 033d0844
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__GetNativeOpenXRSession(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *in_x9;
  uint unaff_w22;
  int unaff_w26;
  long in_stack_00000058;
  
  bVar1 = *(byte *)(*in_x9 + 0x130);
  if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *in_x9)) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7df0c();
  }
  if (unaff_w26 != 0) {
    uVar2 = thunk_FUN_01dff4ec();
    return uVar2;
  }
  if (in_stack_00000058 != 0) {
    if (*(uint *)(in_stack_00000058 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (param_1 != (long *)0x0) {
      thunk_FUN_01dff68c(param_1,*(undefined8 *)
                                  (in_stack_00000058 + (long)(int)unaff_w22 * 8 + 0x20));
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


