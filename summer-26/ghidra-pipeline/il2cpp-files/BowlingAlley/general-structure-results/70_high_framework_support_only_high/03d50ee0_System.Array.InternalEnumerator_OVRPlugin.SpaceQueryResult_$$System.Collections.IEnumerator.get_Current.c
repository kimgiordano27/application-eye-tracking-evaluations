/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03d50ee0
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


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,undefined8 param_2,void *param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong __n;
  long unaff_x25;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(void **)(unaff_x29 + -0x10) = param_3;
  lVar3 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_032934b8(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_032934b8(lVar2);
  }
  FUN_02d9fe48(param_2,*(undefined8 *)(**(long **)(lVar2 + 0xc0) + 0x80),1);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8(lVar3);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
    param_3 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0),param_3,__n);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8(lVar2);
  }
  FUN_032d5cbc(param_2,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x20,
               &stack0x00000000 + -(__n + 0xf & 0x1fffffff0),__n);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8();
  }
  FUN_02da0a44(param_2,*(long *)(**(long **)(lVar2 + 0xc0) + 0x80) + 0x40,0);
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


