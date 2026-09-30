/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04fd737c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined1 in_CY;
  long in_x9;
  long in_x10;
  long in_x11;
  uint in_w12;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 unaff_x23;
  long unaff_x24;
  
  while (!(bool)in_CY) {
    lVar1 = unaff_x21 + (ulong)in_w12 * 4;
    lVar3 = param_1 * in_x11;
    param_1 = param_1 + 1;
    *(int *)(in_x10 + lVar3 + 4) = *(int *)(lVar1 + 0x20) + -1;
    *(int *)(lVar1 + 0x20) = (int)param_1;
    while( true ) {
      if (param_1 == unaff_x24) {
        *(long *)(unaff_x19 + 0x10) = unaff_x21;
        LeanTween__value((long *)(unaff_x19 + 0x10));
        *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
        LeanTween__value();
        return;
      }
      if (param_1 == in_x9) goto LAB_04fd73dc;
      iVar2 = *(int *)(in_x10 + param_1 * in_x11);
      if (-1 < iVar2) break;
      param_1 = param_1 + 1;
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar4 = 0;
    if (unaff_w20 != 0) {
      iVar4 = iVar2 / unaff_w20;
    }
    in_w12 = iVar2 - iVar4 * unaff_w20;
    in_CY = *(uint *)(unaff_x21 + 0x18) <= in_w12;
  }
LAB_04fd73dc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


