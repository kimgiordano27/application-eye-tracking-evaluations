/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$.cctor
ENTRY_POINT: 04fd7388
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___cctor(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long in_x9;
  long in_x10;
  long in_x11;
  long in_x12;
  long in_x13;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 unaff_x23;
  long unaff_x24;
  
  while( true ) {
    param_1 = param_1 + 1;
    *(int *)(in_x13 + 4) = *(int *)(in_x12 + 0x20) + -1;
    *(int *)(in_x12 + 0x20) = (int)param_1;
    while( true ) {
      if (param_1 == unaff_x24) {
        *(long *)(unaff_x19 + 0x10) = unaff_x21;
        LeanTween__value((long *)(unaff_x19 + 0x10));
        *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
        LeanTween__value();
        return;
      }
      if (param_1 == in_x9) goto LAB_04fd73dc;
      iVar1 = *(int *)(in_x10 + param_1 * in_x11);
      if (-1 < iVar1) break;
      param_1 = param_1 + 1;
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar3 = 0;
    if (unaff_w20 != 0) {
      iVar3 = iVar1 / unaff_w20;
    }
    uVar2 = iVar1 - iVar3 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar2) break;
    in_x12 = unaff_x21 + (ulong)uVar2 * 4;
    in_x13 = in_x10 + param_1 * in_x11;
  }
LAB_04fd73dc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


