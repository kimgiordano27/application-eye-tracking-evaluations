/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 044ed5a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar6;
  ulong uVar7;
  
  FUN_044ec5e8();
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = *(long *)(unaff_x21 + 0x10);
      if (lVar5 == 0) goto LAB_044ed690;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_044ed694:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (unaff_x20 == 0) goto LAB_044ed690;
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + lVar6 + 0x20),
                         *(undefined8 *)(lVar5 + lVar6 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(unaff_x21 + 0x10);
        if (lVar5 == 0) goto LAB_044ed690;
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_044ed694;
        if (unaff_x22 == 0) {
LAB_044ed690:
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar1 = *(undefined8 *)(lVar5 + lVar6 + 0x20);
        uVar2 = *(undefined8 *)(lVar5 + lVar6 + 0x28);
        lVar5 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_044ed690;
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        if (uVar3 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar3 * 0x10;
          *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar5 + 0x20) = uVar1;
          *(undefined8 *)(lVar5 + 0x28) = uVar2;
        }
        else {
          FUN_044ece24();
        }
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((long)uVar7 < (long)*(int *)(unaff_x21 + 0x18));
  }
                    /* try { // try from 044ed678 to 045ed69f has its CatchHandler @ 044ed840 */
  return;
}


