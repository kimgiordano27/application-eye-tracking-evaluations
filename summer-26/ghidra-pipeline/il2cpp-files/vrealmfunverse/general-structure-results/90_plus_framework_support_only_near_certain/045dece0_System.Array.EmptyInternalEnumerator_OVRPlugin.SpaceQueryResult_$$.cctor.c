/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 045dece0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long in_x9;
  long in_x10;
  long in_x11;
  long in_x12;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 unaff_x23;
  long unaff_x24;
  
  while( true ) {
    lVar2 = param_1 * in_x11;
    param_1 = param_1 + 1;
    *(int *)(in_x10 + lVar2 + 4) = *(int *)(in_x12 + 0x20) + -1;
    *(int *)(in_x12 + 0x20) = (int)param_1;
    while( true ) {
      if (param_1 == unaff_x24) {
        *(long *)(unaff_x19 + 0x10) = unaff_x21;
        thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
        *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
        thunk_FUN_02bb0e9c();
        return;
      }
      if (param_1 == in_x9) goto LAB_045ded38;
      iVar1 = *(int *)(in_x10 + param_1 * in_x11);
      if (-1 < iVar1) break;
      param_1 = param_1 + 1;
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar4 = 0;
    if (unaff_w20 != 0) {
      iVar4 = iVar1 / unaff_w20;
    }
    uVar3 = iVar1 - iVar4 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
    in_x12 = unaff_x21 + (ulong)uVar3 * 4;
  }
LAB_045ded38:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


