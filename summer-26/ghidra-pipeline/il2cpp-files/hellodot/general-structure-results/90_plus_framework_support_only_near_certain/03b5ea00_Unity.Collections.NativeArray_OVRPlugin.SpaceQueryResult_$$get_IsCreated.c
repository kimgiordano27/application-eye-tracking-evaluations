/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 03b5ea00
PROGRAM: hellodot-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated
               (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  while (uVar1 = (*in_x9)(param_2,param_3,*(undefined4 *)(param_1 + 0x28),
                          *(undefined4 *)(param_1 + 0x2c),param_4,*(undefined8 *)(unaff_x19 + 0x28))
        , (uVar1 & 1) != 0) {
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x10;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x22) break;
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) {
LAB_03b5ea40:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    if (unaff_x19 == 0) goto LAB_03b5ea40;
    param_1 = param_1 + unaff_x21;
    in_x9 = *(code **)(unaff_x19 + 0x18);
    param_4 = *(undefined8 *)(unaff_x19 + 0x40);
    param_2 = *(undefined4 *)(param_1 + 0x20);
    param_3 = *(undefined4 *)(param_1 + 0x24);
  }
  return uVar1 & 1;
}


