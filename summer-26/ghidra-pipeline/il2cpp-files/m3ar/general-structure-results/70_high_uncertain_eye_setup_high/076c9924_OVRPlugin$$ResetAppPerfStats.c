/*
FUNCTION_NAME: OVRPlugin$$ResetAppPerfStats
ENTRY_POINT: 076c9924
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__ResetAppPerfStats(double param_1,double *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  double dVar3;
  float unaff_s8;
  float unaff_s9;
  double __x;
  double unaff_d10;
  double dVar4;
  double in_stack_00000008;
  
  dVar3 = modf(param_1,param_2);
                    /* try { // try from 076c9928 to 077c99cb has its CatchHandler @ 076c97bc */
  if (0.0 <= unaff_s9) {
    if (dVar3 == 0.5) {
      dVar3 = 1.0;
      goto LAB_076c995c;
    }
    dVar4 = (double)(long)(unaff_d10 + 0.5);
  }
  else if (dVar3 == -0.5) {
    dVar3 = -1.0;
LAB_076c995c:
    dVar4 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar4 = in_stack_00000008 + dVar3;
    }
  }
  else {
    dVar4 = (double)(long)(unaff_d10 + -0.5);
  }
  if (*(char *)(unaff_x19 + 0xd22) == '\0') {
    FUN_0403162c(&DAT_09154a08);
    *(undefined1 *)(unaff_x19 + 0xd22) = 1;
  }
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  __x = (double)unaff_s8;
  dVar3 = modf(__x,&stack0x00000008);
  if (0.0 <= unaff_s8) {
    if (dVar3 != 0.5) {
      in_stack_00000008 = (double)(long)(__x + 0.5);
      goto LAB_076c9a1c;
    }
    dVar3 = 1.0;
                    /* try { // try from 076c99f0 to 077c9a07 has its CatchHandler @ 076c9ac8 */
  }
  else {
                    /* try { // try from 076c99cc to 077c99cf has its CatchHandler @ 076c99d8 */
                    /* try { // try from 076c99d0 to 077c99ef has its CatchHandler @ 076c97bc */
    if (dVar3 != -0.5) {
                    /* try { // try from 076c9a08 to 077c9ab7 has its CatchHandler @ 076c97bc */
      in_stack_00000008 = (double)(long)(__x + -0.5);
      goto LAB_076c9a1c;
    }
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076c98f8 with catch @ 076c99d4
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076c9920 with catch @ 076c99d8
                       catch(type#1 @ 08931438) { ... } // from try @ 076c99cc with catch @ 076c99d8
                        */
    dVar3 = -1.0;
  }
  if (((long)in_stack_00000008 & 1U) != 0) {
    in_stack_00000008 = in_stack_00000008 + dVar3;
  }
LAB_076c9a1c:
  uVar1 = 0x8000000000000000;
  if (in_stack_00000008 != INFINITY) {
    uVar1 = (ulong)(uint)(int)in_stack_00000008 << 0x20;
  }
  uVar2 = 0x80000000;
  if (dVar4 != INFINITY) {
    uVar2 = (ulong)(uint)(int)dVar4;
  }
  return uVar1 | uVar2;
}


