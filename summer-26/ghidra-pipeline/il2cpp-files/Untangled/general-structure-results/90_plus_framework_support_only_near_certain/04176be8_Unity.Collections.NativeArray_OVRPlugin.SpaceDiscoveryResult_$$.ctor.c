/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 04176be8
PROGRAM: Untangled-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long unaff_x19;
  ulong uVar5;
  long lVar6;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_056138a8(0x21);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar5 = 0;
    lVar6 = 0x20;
    iVar3 = iVar2;
    do {
      if (iVar2 != iVar3) break;
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) {
LAB_04176ca8:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      puVar1 = (undefined8 *)(lVar4 + lVar6);
      if (unaff_x19 == 0) goto LAB_04176ca8;
      in_stack_00000020 = *puVar1;
      in_stack_00000028 = puVar1[1];
      in_stack_00000030 = puVar1[2];
      (**(code **)(unaff_x19 + 0x18))
                (*(undefined8 *)(unaff_x19 + 0x40),&stack0x00000020,
                 *(undefined8 *)(unaff_x19 + 0x28));
      iVar3 = *(int *)(param_1 + 0x1c);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x18));
    if (iVar2 != iVar3) {
      FUN_0562330c(0);
    }
  }
  return;
}


