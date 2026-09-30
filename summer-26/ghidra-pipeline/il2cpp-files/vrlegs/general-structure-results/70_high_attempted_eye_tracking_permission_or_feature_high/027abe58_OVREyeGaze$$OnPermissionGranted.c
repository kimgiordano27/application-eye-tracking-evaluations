/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 027abe58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(long param_1)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
                    /* try { // try from 027abe74 to 028abeab has its CatchHandler @ 027abeac */
    uVar1 = FUN_027aa028(unaff_x22,unaff_w20,unaff_x24,unaff_w27 != 0,unaff_x23);
    if ((uVar1 & 1) != 0) {
      FUN_02213244(&stack0x00000008,unaff_x22,*unaff_x28);
    }
    unaff_x26 = unaff_x26 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x26) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    param_1 = *unaff_x25;
    unaff_x22 = *(undefined8 *)(unaff_x29 + unaff_x26 * 8);
    unaff_x23 = in_stack_00000028;
    unaff_x24 = in_stack_00000030;
  }
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027abe74 with catch @ 027abeac
                       try { // try from 027abeac to 028abecb has its CatchHandler @ 027abdb8 */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027abe44 with catch @ 027abeb0
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027abe0c with catch @ 027abeb4
                        */
  unaff_x19[2] = in_stack_00000018;
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  return;
}


