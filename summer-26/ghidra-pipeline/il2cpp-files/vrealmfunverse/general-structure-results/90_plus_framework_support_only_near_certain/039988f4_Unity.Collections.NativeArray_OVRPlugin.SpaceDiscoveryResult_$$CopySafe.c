/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 039988f4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  do {
    param_1 = param_1 + unaff_x23;
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) break;
                    /* try { // try from 03998920 to 03a98967 has its CatchHandler @ 03998920
                       catch() { ... } // from try @ 03998920 with catch @ 03998920
                       catch() { ... } // from try @ 03998a1c with catch @ 03998920
                       catch() { ... } // from try @ 03998a4c with catch @ 03998920
                       catch() { ... } // from try @ 03998ac0 with catch @ 03998920 */
      if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto LAB_039989c4;
      if (unaff_x22 == 0) break;
      lVar3 = lVar3 + unaff_x23;
      uVar5 = *(undefined4 *)(lVar3 + 0x20);
      uVar6 = *(undefined4 *)(lVar3 + 0x24);
      lVar4 = *(long *)(unaff_x22 + 0x10);
      uVar7 = *(undefined4 *)(lVar3 + 0x28);
      uVar8 = *(undefined4 *)(lVar3 + 0x2c);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 == 0) break;
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    /* try { // try from 03998968 to 03a98a1b has its CatchHandler @ 03998a1c */
        lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar4 + 0x20) = uVar5;
        *(undefined4 *)(lVar4 + 0x24) = uVar6;
        *(undefined4 *)(lVar4 + 0x28) = uVar7;
        *(undefined4 *)(lVar4 + 0x2c) = uVar8;
      }
      else {
        FUN_03998124();
      }
    }
    unaff_x24 = unaff_x24 + 1;
    unaff_x23 = unaff_x23 + 0x10;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      return;
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x24) {
LAB_039989c4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
  } while (unaff_x20 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


