/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 05ea562c
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1)

{
  long lVar1;
  code *pcVar2;
  void *unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long lVar3;
  undefined8 uVar4;
  long unaff_x27;
  ushort unaff_w28;
  long unaff_x29;
  
  uVar4 = **(undefined8 **)(*(long *)(param_1 + 0xc0) + 0xd8);
  lVar1 = unaff_x23;
  if ((unaff_w28 & 1) == 0) {
    unaff_x23 = FUN_040b1acc();
    unaff_w28 = *(ushort *)(*(long *)(unaff_x25 + 0x20) + 0x135);
    lVar1 = *(long *)(unaff_x25 + 0x20);
  }
  lVar3 = *(long *)(*(long *)(unaff_x23 + 0xc0) + 0xd8);
  if ((unaff_w28 & 1) == 0) {
    lVar1 = FUN_040b1acc(lVar1);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x28)) {
    unaff_x24 = (undefined8 *)*unaff_x24;
  }
  pcVar2 = *(code **)(lVar3 + 0x10);
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
  *(void **)(unaff_x29 + -0x10) = unaff_x22;
  (*pcVar2)(uVar4,lVar3);
  memcpy(unaff_x19,unaff_x22,unaff_x21);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


