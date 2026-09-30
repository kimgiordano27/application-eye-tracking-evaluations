/*
FUNCTION_NAME: UniGLTF.AnimationImporterUtil.<>c__DisplayClass10_0$$.ctor
ENTRY_POINT: 02f738ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f73944) */

int UniGLTF_AnimationImporterUtil_<>c__DisplayClass10_0___ctor(undefined8 param_1)

{
  int unaff_w20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  long *in_stack_00000048;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  
  OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  if (unaff_x21 == 0) {
    if ((unaff_w22 == 0xb) || (unaff_w22 == 0)) {
      in_stack_00000020 = (long)&stack0x00000060 + 4;
      in_stack_00000028 = &stack0x00000050;
      in_stack_00000030 = &stack0x00000068;
      in_stack_00000018 = 0;
      in_stack_00000038 = &stack0x00000058;
      if ((unaff_w23 == 4 || in_stack_00000060._4_4_ == 4) && (in_stack_00000048 != (long *)0x0)) {
        if (*(long *)(in_stack_00000068 + 0xa8) != 0) {
          (**(code **)(*in_stack_00000048 + 1000))
                    (in_stack_00000048,*(long *)(in_stack_00000068 + 0xa8),
                     *(undefined8 *)(*in_stack_00000048 + 0x3f0));
        }
        FUN_019c4920();
      }
      FUN_019c4a58(&stack0x00000018);
      unaff_w20 = unaff_w23;
    }
    return unaff_w20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


