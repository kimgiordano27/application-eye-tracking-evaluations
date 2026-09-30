/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_sessiongroup_t_current_recording_filename_set
ENTRY_POINT: 078f98c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x078f9948) */
/* WARNING: Removing unreachable block (ram,0x078f9a34) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_sessiongroup_t_current_recording_filename_set
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 *unaff_x19;
  long unaff_x21;
  long *unaff_x24;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  char cStack0000000000000058;
  int iStack000000000000005c;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 078f98d4 to 079f98df has its CatchHandler @ 078f9a0c */
  if (*(int *)(unaff_x21 + 0x18) < *(int *)(param_1 + 0x98)) {
    in_stack_00000048 = *(undefined8 *)(unaff_x21 + 0x48);
    cStack0000000000000058 = '\0';
                    /* try { // try from 078f98f0 to 079f98f3 has its CatchHandler @ 078f99f4 */
    FUN_067b43ac(in_stack_00000048,&stack0x00000058,0);
                    /* try { // try from 078f9904 to 079f990b has its CatchHandler @ 078f99f0 */
    *(int *)(unaff_x21 + 0x18) = (int)*(undefined8 *)(param_1 + 0x98);
                    /* try { // try from 078f991c to 079f9923 has its CatchHandler @ 078f9a14 */
                    /* try { // try from 078f9924 to 079f998b has its CatchHandler @ 078f9498 */
    if ((iStack000000000000005c < 0) && (cStack0000000000000058 != '\0')) {
      thunk_FUN_03a98474(in_stack_00000048,0);
    }
  }
  lVar1 = FUN_078f855c();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000040 = FUN_067c4bec(lVar1,0);
  uVar2 = FUN_0666e8e0(&stack0x00000040,0);
  if ((uVar2 & 1) == 0) {
    iStack000000000000005c = 0;
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000040;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043e5a0c(unaff_x19 + 2,&stack0x00000040);
  }
  else {
    FUN_0666e9a8(&stack0x00000040,0);
    lVar1 = *unaff_x24;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
  }
  return;
}


