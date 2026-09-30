/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 053aed3c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(ulong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong in_x9;
  long in_x10;
  long in_x11;
  int in_w12;
  long in_x13;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  
  while( true ) {
                    /* try { // try from 053aed3c to 054aed4b has its CatchHandler @ 053aed60 */
    *(int *)(in_x13 + 0x24) = in_w12;
    *(int *)(in_x11 + 0x20) = (int)param_1;
    while( true ) {
      if (param_1 == unaff_x24) {
        *(long *)(unaff_x19 + 0x10) = unaff_x21;
        thunk_FUN_03048534((long *)(unaff_x19 + 0x10));
        *(long *)(unaff_x19 + 0x18) = unaff_x23;
        thunk_FUN_03048534();
        return;
      }
      if (in_x9 <= param_1) goto LAB_053aed84;
      iVar1 = *(int *)(unaff_x23 + param_1 * in_x10 + 0x20);
      if (-1 < iVar1) break;
      param_1 = param_1 + 1;
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    iVar3 = 0;
    if (unaff_w20 != 0) {
      iVar3 = iVar1 / unaff_w20;
    }
    uVar2 = iVar1 - iVar3 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar2) break;
    in_x11 = unaff_x21 + (ulong)uVar2 * 4;
    in_x13 = unaff_x23 + param_1 * in_x10;
    param_1 = param_1 + 1;
    in_w12 = *(int *)(in_x11 + 0x20) + -1;
  }
LAB_053aed84:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


