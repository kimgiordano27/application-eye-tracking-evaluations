/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 027d77e4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetDynamicFoveatedRenderingEnabled(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long lVar3;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x210));
  *(undefined1 *)(unaff_x25 + 0x2e) = 1;
                    /* try { // try from 027d77f4 to 028d786f has its CatchHandler @ 027d7798 */
  if (unaff_x21 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar1 = thunk_FUN_01a89e68();
    uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cea430);
    FUN_026a44fc(uVar1,uVar2,0);
    uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cfcb88);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar1,uVar2);
  }
  lVar3 = *unaff_x22;
  if (lVar3 == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  else {
    if ((unaff_x24 & 1) != 0) {
      FUN_027e155c(0);
    }
    if ((unaff_x23 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_03cd7210 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027e063c(0);
    }
    FUN_027d7ab8(&stack0x00000008,lVar3);
    unaff_x19[2] = in_stack_00000018;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
  }
  return;
}


