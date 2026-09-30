/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03d50ed4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_Reset
               (undefined8 param_1,void *param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong __n;
  long unaff_x29;
  
  lVar2 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar2 + 0x28);
  *(void **)(unaff_x29 + -0x10) = param_2;
  lVar4 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar3 = *(long *)(param_3 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_032934b8(lVar3);
  }
  FUN_02d9fe48(param_1,*(undefined8 *)(**(long **)(lVar3 + 0xc0) + 0x80),1);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar3 = lVar4;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
    lVar3 = *(long *)(param_3 + 0x20);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
    param_2 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0),param_2,__n);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8(lVar3);
  }
  FUN_032d5cbc(param_1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x20,
               &stack0x00000000 + -(__n + 0xf & 0x1fffffff0),__n);
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  FUN_02da0a44(param_1,*(long *)(**(long **)(lVar3 + 0xc0) + 0x80) + 0x40,0);
  if (*(long *)(lVar2 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


