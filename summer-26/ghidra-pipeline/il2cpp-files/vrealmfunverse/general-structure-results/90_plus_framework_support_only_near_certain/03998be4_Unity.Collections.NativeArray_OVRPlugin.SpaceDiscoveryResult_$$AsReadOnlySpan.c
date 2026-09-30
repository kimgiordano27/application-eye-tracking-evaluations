/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnlySpan
ENTRY_POINT: 03998be4
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnlySpan
               (long param_1,undefined8 param_2)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  
  while( true ) {
    (**(code **)(unaff_x20 + 0x18))
              (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
               *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_2,
               *(undefined8 *)(unaff_x20 + 0x28));
    unaff_x23 = unaff_x23 + 1;
    unaff_x22 = unaff_x22 + 0x10;
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x23) break;
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    if (unaff_w21 != iVar1) goto LAB_03998c10;
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_03998c3c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (unaff_x20 == 0) goto LAB_03998c3c;
    param_1 = param_1 + unaff_x22;
    param_2 = *(undefined8 *)(unaff_x20 + 0x40);
  }
  iVar1 = *(int *)(unaff_x19 + 0x1c);
LAB_03998c10:
  if (unaff_w21 == iVar1) {
    return;
  }
  FUN_04d9c6d8(0);
  return;
}


