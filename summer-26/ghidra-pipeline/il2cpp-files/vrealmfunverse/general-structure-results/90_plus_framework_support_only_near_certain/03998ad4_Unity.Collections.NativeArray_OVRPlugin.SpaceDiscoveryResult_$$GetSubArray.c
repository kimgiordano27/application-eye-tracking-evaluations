/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetSubArray
ENTRY_POINT: 03998ad4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 105
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetSubArray
          (long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Oculus_Interaction_ActiveStateTracker__InjectOptionalGameObjects(8);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar4 = uVar3;
  do {
    uVar4 = uVar4 - 1;
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) goto LAB_03998b78;
    if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_03998b7c;
    if (unaff_x20 == 0) goto LAB_03998b78;
    lVar2 = lVar2 + (ulong)uVar4 * 0x10;
    uVar1 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),
                       *(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c),
                       *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (uVar3 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined4 *)(lVar2 + (ulong)uVar4 * 0x10 + 0x20);
    }
LAB_03998b7c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_03998b78:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


