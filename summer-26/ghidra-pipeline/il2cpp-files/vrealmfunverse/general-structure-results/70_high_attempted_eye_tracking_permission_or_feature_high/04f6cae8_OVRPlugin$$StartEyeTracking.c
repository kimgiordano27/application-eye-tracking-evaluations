/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 04f6cae8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined8
OVRPlugin__StartEyeTracking(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined8 *unaff_x19;
  long *unaff_x23;
  undefined4 unaff_s8;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
                    /* try { // try from 04f6cb08 to 0506ccf7 has its CatchHandler @ 04f6cb08
                       catch() { ... } // from try @ 04f6cb08 with catch @ 04f6cb08
                       catch() { ... } // from try @ 04f6ce08 with catch @ 04f6cb08
                       catch() { ... } // from try @ 04f6cee8 with catch @ 04f6cb08
                       catch() { ... } // from try @ 04f6cf5c with catch @ 04f6cb08 */
  FUN_05c99d80(unaff_s8,param_2,param_3,uStack00000000000000cc,uStack00000000000000c8,
               uStack0000000000000040,in_stack_00000038._4_4_,&stack0x00000060,0);
  FUN_04f6cb7c((undefined1 *)((long)&stack0x00000040 + 4));
  unaff_x19[1] = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  *unaff_x19 = uStack0000000000000044;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000058;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000054,uStack0000000000000050);
  return 1;
}


