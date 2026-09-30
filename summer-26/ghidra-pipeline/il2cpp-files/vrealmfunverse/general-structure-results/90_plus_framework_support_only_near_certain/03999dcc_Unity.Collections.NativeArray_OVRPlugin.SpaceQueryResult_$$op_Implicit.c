/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 03999dcc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Implicit
               (long param_1,uint param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  for (; (long)unaff_x22 < param_1; unaff_x22 = unaff_x22 + 1) {
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 == 0) {
LAB_03999df0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar1 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (unaff_x19 == 0) goto LAB_03999df0;
    lVar1 = lVar1 + unaff_x21;
    param_2 = (**(code **)(unaff_x19 + 0x18))
                        (*(undefined4 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x24),
                         *(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
                         *(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x19 + 0x28));
    if ((param_2 & 1) == 0) break;
    param_1 = (long)*(int *)(unaff_x20 + 0x18);
    unaff_x21 = unaff_x21 + 0x10;
  }
  return param_2 & 1;
}


