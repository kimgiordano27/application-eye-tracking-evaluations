/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 015da3b4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  code *in_x9;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 *unaff_x22;
  long unaff_x23;
  
  while( true ) {
    uVar1 = (*in_x9)(param_1,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x23 = unaff_x23 + -1;
    if (unaff_x23 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    param_1 = unaff_x22[1];
    param_2 = unaff_x22[2];
    param_3 = unaff_x22[3];
    in_x9 = *(code **)(*unaff_x21 + 0x1b8);
    unaff_x22 = unaff_x22 + 3;
  }
  return 0xffffffff;
}


