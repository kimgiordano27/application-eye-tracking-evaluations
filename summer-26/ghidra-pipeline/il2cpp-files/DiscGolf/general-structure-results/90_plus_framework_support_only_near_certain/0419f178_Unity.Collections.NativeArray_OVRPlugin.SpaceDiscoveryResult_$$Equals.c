/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 0419f178
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals(void)

{
  int iVar1;
  int iVar2;
  int in_w8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  
  if (0 < in_w8) {
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    lVar4 = 0;
    uVar5 = 0;
    do {
      iVar2 = *(int *)(unaff_x19 + 0x1c);
      if (iVar1 != iVar2) goto LAB_0419f1e0;
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) {
LAB_0419f20c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (unaff_x20 == 0) goto LAB_0419f20c;
      (**(code **)(unaff_x20 + 0x18))
                (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + lVar4 + 0x20),
                 *(undefined8 *)(lVar3 + lVar4 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((long)uVar5 < (long)*(int *)(unaff_x19 + 0x18));
    iVar2 = *(int *)(unaff_x19 + 0x1c);
LAB_0419f1e0:
    if (iVar1 != iVar2) {
      FUN_055095dc(0);
      return;
    }
  }
  return;
}


