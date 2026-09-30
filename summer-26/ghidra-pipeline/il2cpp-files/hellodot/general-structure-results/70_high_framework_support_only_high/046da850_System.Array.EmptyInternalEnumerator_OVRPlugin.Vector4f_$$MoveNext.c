/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$MoveNext
ENTRY_POINT: 046da850
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__MoveNext(ulong param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 in_CY;
  ulong in_x9;
  long in_x10;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  
  while (!(bool)in_CY) {
    iVar2 = *(int *)(unaff_x23 + param_1 * in_x10 + 0x20);
    if (-1 < iVar2) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      iVar4 = 0;
      if (unaff_w20 != 0) {
        iVar4 = iVar2 / unaff_w20;
      }
      uVar3 = iVar2 - iVar4 * unaff_w20;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
      lVar1 = unaff_x21 + (ulong)uVar3 * 4;
      *(int *)(unaff_x23 + param_1 * in_x10 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
      *(int *)(lVar1 + 0x20) = (int)param_1 + 1;
    }
    param_1 = param_1 + 1;
    if (param_1 == unaff_x22) {
      *(long *)(unaff_x19 + 0x10) = unaff_x21;
      *(long *)(unaff_x19 + 0x18) = unaff_x23;
      return;
    }
    in_CY = in_x9 <= param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


