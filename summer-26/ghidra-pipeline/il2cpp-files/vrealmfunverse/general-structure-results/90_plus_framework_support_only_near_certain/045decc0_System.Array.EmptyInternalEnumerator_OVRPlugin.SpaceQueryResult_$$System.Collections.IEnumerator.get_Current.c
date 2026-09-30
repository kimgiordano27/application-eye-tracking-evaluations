/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 045decc0
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long in_x9;
  long in_x10;
  long in_x11;
  int in_w12;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 unaff_x23;
  long unaff_x24;
  
  do {
    if (-1 < in_w12) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar3 = 0;
      if (unaff_w20 != 0) {
        iVar3 = in_w12 / unaff_w20;
      }
      uVar2 = in_w12 - iVar3 * unaff_w20;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar2) {
LAB_045ded38:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar1 = unaff_x21 + (ulong)uVar2 * 4;
      *(int *)(in_x10 + param_1 * in_x11 + 4) = *(int *)(lVar1 + 0x20) + -1;
      *(int *)(lVar1 + 0x20) = (int)param_1 + 1;
    }
    param_1 = param_1 + 1;
    if (param_1 == unaff_x24) {
      *(long *)(unaff_x19 + 0x10) = unaff_x21;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
      *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
      thunk_FUN_02bb0e9c();
      return;
    }
    if (param_1 == in_x9) goto LAB_045ded38;
    in_w12 = *(int *)(in_x10 + param_1 * in_x11);
  } while( true );
}


