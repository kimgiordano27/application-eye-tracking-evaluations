/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 062f0484
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (long *param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *__dest;
  ulong __n;
  void *__s;
  long lVar10;
  long unaff_x29;
  undefined8 auStack_20 [4];
  
  lVar2 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar2 + 0x28);
  lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar10 + 0x20) + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)auStack_20 - uVar9);
  __s = (void *)((long)__dest - uVar9);
  memset(__s,0,__n);
  piVar4 = (int *)thunk_FUN_044a5a9c(param_1,*(long *)(*(long *)(lVar10 + 0x48) + 0x80) + 0x20);
  if (*piVar4 == param_2) goto LAB_062f06c8;
  FUN_03dc1ed8(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48) +
                                0x80) + 0x20,param_2);
  piVar4 = (int *)thunk_FUN_044a5a9c(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20)
                                                                          + 0xc0) + 0x48) + 0x80) +
                                             0x20);
  if (*piVar4 < 0) {
LAB_062f0620:
    memset(__s,0,__n);
    memcpy(__dest,__s,__n);
  }
  else {
    piVar4 = (int *)thunk_FUN_044a5a9c(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_3 +
                                                                                      0x20) + 0xc0)
                                                                  + 0x48) + 0x80) + 0x20);
    iVar1 = *piVar4;
    plVar5 = (long *)thunk_FUN_044a5a9c(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) +
                                                                     0xc0) + 0x80) + 0x40);
    if (*plVar5 == 0) goto LAB_062f061c;
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80))();
    if (iVar3 <= iVar1) goto LAB_062f0620;
    plVar5 = (long *)thunk_FUN_044a5a9c(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) +
                                                                     0xc0) + 0x80) + 0x40);
    lVar10 = *plVar5;
    puVar6 = (undefined4 *)
             thunk_FUN_044a5a9c(param_1,*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) +
                                                                     0xc0) + 0x48) + 0x80) + 0x20);
    if (lVar10 == 0) goto LAB_062f061c;
    puVar8 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
    uVar7 = *puVar8;
    *(undefined4 *)(unaff_x29 + -0xc) = *puVar6;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(undefined8 **)(unaff_x29 + -0x18) = __dest;
    (*(code *)puVar8[2])(uVar7,puVar8,lVar10,unaff_x29 + -0x20,__dest);
  }
  if (param_1 == (long *)0x0) {
LAB_062f061c:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  lVar10 = *param_1;
  *(undefined8 **)(unaff_x29 + -0x20) = __dest;
  lVar10 = *(long *)(lVar10 + 0xa40);
  (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,param_1,unaff_x29 + -0x20,__dest);
  lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_04481fb8();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_04481fb8();
  }
  FUN_097b65b8(param_1,*(undefined8 *)(lVar10 + 0xb8),0);
LAB_062f06c8:
  if (*(long *)(lVar2 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


