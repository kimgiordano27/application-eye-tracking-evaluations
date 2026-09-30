/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$get_Length
ENTRY_POINT: 062f02f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__get_Length
               (long param_1,undefined8 param_2)

{
  void *__src;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 *__dest;
  void *unaff_x21;
  ulong __n;
  long unaff_x23;
  long lVar5;
  long unaff_x25;
  long lVar6;
  long unaff_x29;
  undefined1 auVar7 [16];
  
  __n = (ulong)*(uint *)((*(long **)(param_1 + 0xc0))[4] + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  auVar7 = thunk_FUN_044a5a9c(param_2,*(long *)(**(long **)(param_1 + 0xc0) + 0x80) + 0x40);
  lVar5 = *auVar7._0_8_;
  if (lVar5 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar6 = *(long *)(unaff_x23 + 0x20);
    __src = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x20) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(__dest,__src,__n);
    lVar6 = *(long *)(lVar6 + 0xc0);
    puVar2 = *(undefined8 **)(lVar6 + 0x50);
    uVar1 = *puVar2;
    puVar4 = __dest;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x20) + 0x28)) {
      puVar4 = (undefined8 *)*__dest;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    auVar7 = (*(code *)puVar2[2])(uVar1,puVar2,lVar5,unaff_x29 + -0x18,unaff_x29 + -0xc);
    uVar3 = *(undefined4 *)(unaff_x29 + -0xc);
  }
  if (unaff_x19 != 0) {
    FUN_03dc1ed8();
    lVar5 = *(long *)(unaff_x23 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x20) + 0x28)) {
      unaff_x21 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(__dest,unaff_x21,__n);
    lVar5 = *(long *)(lVar5 + 0xc0);
    puVar4 = *(undefined8 **)(lVar5 + 0x78);
    uVar1 = *puVar4;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x20) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = __dest;
    (*(code *)puVar4[2])(uVar1);
    if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44(auVar7._0_8_,auVar7._8_8_,uVar3);
}


