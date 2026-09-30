/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetHashCode
ENTRY_POINT: 05ea55c4
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode(ushort *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  void *unaff_x19;
  ulong __n;
  void *__src;
  long unaff_x23;
  undefined8 *__s;
  long unaff_x25;
  undefined8 uVar6;
  long unaff_x27;
  long unaff_x29;
  
  uVar1 = *param_1;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_2 + 0xc0) + 8) + 0xfc);
  uVar5 = __n + 0xf & 0x1fffffff0;
  __s = (undefined8 *)(&stack0x00000000 + -uVar5);
  __src = (void *)((long)__s - uVar5);
  memset(__s,0,__n);
  lVar2 = unaff_x23;
  if ((uVar1 & 1) == 0) {
    unaff_x23 = FUN_040b1acc();
    uVar1 = *(ushort *)(*(long *)(unaff_x25 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x25 + 0x20);
  }
  uVar6 = **(undefined8 **)(*(long *)(unaff_x23 + 0xc0) + 0xd8);
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
    uVar1 = *(ushort *)(*(long *)(unaff_x25 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x25 + 0x20);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xd8);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x28)) {
    __s = (undefined8 *)*__s;
  }
  pcVar4 = *(code **)(lVar2 + 0x10);
  *(undefined8 **)(unaff_x29 + -0x18) = __s;
  *(void **)(unaff_x29 + -0x10) = __src;
  (*pcVar4)(uVar6,lVar2);
  memcpy(unaff_x19,__src,__n);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


