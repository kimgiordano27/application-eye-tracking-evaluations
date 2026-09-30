/*
FUNCTION_NAME: OVRPlugin$$GetHeadPoseModifier
ENTRY_POINT: 01d851dc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetHeadPoseModifier(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *in_x9;
  uint unaff_w22;
  int unaff_w26;
  long in_stack_00000058;
  
  bVar1 = *(byte *)(*in_x9 + 0x130);
  if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *in_x9)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  if (unaff_w26 != 0) {
    uVar2 = thunk_FUN_0105ce10();
                    /* try { // try from 01d85278 to 01e8534f has its CatchHandler @ 01d8506c */
    return uVar2;
  }
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d8519c with catch @ 01d85248
                        */
  if (in_stack_00000058 != 0) {
    if (*(uint *)(in_stack_00000058 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (param_1 != (long *)0x0) {
                    /* try { // try from 01d85260 to 01e85277 has its CatchHandler @ 01d8536c */
      thunk_FUN_0105cfb0(param_1,*(undefined8 *)
                                  (in_stack_00000058 + (long)(int)unaff_w22 * 8 + 0x20));
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


