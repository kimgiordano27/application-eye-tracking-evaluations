/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$UnsafeElementAt
ENTRY_POINT: 062f05f4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__UnsafeElementAt
               (long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 in_x9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x25;
  long unaff_x29;
  
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x88);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_x29 + -0xc) = *param_2;
  *(undefined8 *)(unaff_x29 + -0x20) = in_x9;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
  (*(code *)puVar2[2])(uVar1);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20) + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  lVar3 = *unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
  (**(code **)(*(long *)(lVar3 + 0xa40) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 0xa40) + 8));
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04481fb8();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1) == 0)
  {
    FUN_04481fb8();
  }
  FUN_097b65b8();
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


