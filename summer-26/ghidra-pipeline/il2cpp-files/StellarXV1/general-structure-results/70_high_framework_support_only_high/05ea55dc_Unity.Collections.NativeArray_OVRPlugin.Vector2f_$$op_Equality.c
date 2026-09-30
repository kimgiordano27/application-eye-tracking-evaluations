/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$op_Equality
ENTRY_POINT: 05ea55dc
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__op_Equality(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  void *unaff_x19;
  size_t unaff_x21;
  void *__src;
  long unaff_x23;
  undefined8 *__s;
  long unaff_x25;
  undefined8 uVar5;
  long unaff_x27;
  ushort unaff_w28;
  long unaff_x29;
  
  uVar4 = unaff_x21 + 0xf & 0x1fffffff0;
  __s = (undefined8 *)(&stack0x00000000 + -uVar4);
  __src = (void *)((long)__s - uVar4);
  memset(__s,0,unaff_x21);
  lVar1 = unaff_x23;
  if ((unaff_w28 & 1) == 0) {
    unaff_x23 = FUN_040b1acc();
    unaff_w28 = *(ushort *)(*(long *)(unaff_x25 + 0x20) + 0x135);
    lVar1 = *(long *)(unaff_x25 + 0x20);
  }
  uVar5 = **(undefined8 **)(*(long *)(unaff_x23 + 0xc0) + 0xd8);
  lVar2 = lVar1;
  if ((unaff_w28 & 1) == 0) {
    lVar1 = FUN_040b1acc(lVar1);
    unaff_w28 = *(ushort *)(*(long *)(unaff_x25 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x25 + 0x20);
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0xd8);
  if ((unaff_w28 & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x28)) {
    __s = (undefined8 *)*__s;
  }
  pcVar3 = *(code **)(lVar1 + 0x10);
  *(undefined8 **)(unaff_x29 + -0x18) = __s;
  *(void **)(unaff_x29 + -0x10) = __src;
  (*pcVar3)(uVar5,lVar1);
  memcpy(unaff_x19,__src,unaff_x21);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


