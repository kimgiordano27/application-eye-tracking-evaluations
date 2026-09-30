/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 074aba2c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  
  while (unaff_x23 < param_1) {
    unaff_x24 = unaff_x24 + 4;
    FUN_074ab2a4();
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
      *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar1 = FUN_079d4544(0);
      if (lVar1 != 0) {
        FUN_0713765c();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
    if (param_1 <= unaff_x23) break;
    if (*unaff_x24 == 0) {
      FUN_07a5f5a0(0x11,0);
      param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


