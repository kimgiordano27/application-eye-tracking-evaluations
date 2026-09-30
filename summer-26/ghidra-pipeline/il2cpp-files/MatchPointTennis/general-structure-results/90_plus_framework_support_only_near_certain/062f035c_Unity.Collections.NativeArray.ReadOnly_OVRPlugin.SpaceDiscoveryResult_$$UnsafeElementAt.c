/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$UnsafeElementAt
ENTRY_POINT: 062f035c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__UnsafeElementAt
               (undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  long unaff_x23;
  long lVar3;
  long unaff_x25;
  long unaff_x29;
  undefined1 auVar4 [16];
  
  uVar1 = *param_2;
  puVar2 = unaff_x20;
  if (-1 < *(int *)(in_x9 + 0x28)) {
    puVar2 = (undefined8 *)*unaff_x20;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
  auVar4 = (*(code *)param_2[2])(uVar1);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44(auVar4._0_8_,auVar4._8_8_,*(undefined4 *)(unaff_x29 + -0xc));
  }
  FUN_03dc1ed8();
  lVar3 = *(long *)(unaff_x23 + 0x20);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x20) + 0x28)) {
    unaff_x21 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(unaff_x20,unaff_x21,unaff_x22);
  lVar3 = *(long *)(lVar3 + 0xc0);
  puVar2 = *(undefined8 **)(lVar3 + 0x78);
  uVar1 = *puVar2;
  if (-1 < *(int *)(*(long *)(lVar3 + 0x20) + 0x28)) {
    unaff_x20 = (undefined8 *)*unaff_x20;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x20;
  (*(code *)puVar2[2])(uVar1);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


