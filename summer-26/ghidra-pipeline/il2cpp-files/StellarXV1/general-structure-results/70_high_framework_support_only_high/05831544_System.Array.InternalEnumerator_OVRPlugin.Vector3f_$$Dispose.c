/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 05831544
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 System_Array_InternalEnumerator<OVRPlugin_Vector3f>__Dispose(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  long unaff_x24;
  long unaff_x26;
  long unaff_x29;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
  pcVar4 = *(code **)(unaff_x24 + 0x10);
  *(undefined4 *)(unaff_x29 + -0xc) = unaff_w22;
  *(undefined8 *)(unaff_x29 + -0x30) = param_1;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x3c;
  (*pcVar4)();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  puVar2 = (undefined4 *)thunk_FUN_040d6b00();
  uVar1 = *puVar2;
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  thunk_FUN_040d6b00();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_03b2ebac();
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


