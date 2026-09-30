/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.VirtualBone$$.ctor
ENTRY_POINT: 029bc00c
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


/* WARNING: Removing unreachable block (ram,0x029bc108) */

undefined4 RootMotion_FinalIK_IKSolverVR_VirtualBone___ctor(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  byte unaff_w20;
  undefined4 uVar3;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  if ((int)(uint)unaff_w20 < *(int *)(param_1 + 0x18)) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = **(long **)(*unaff_x21 + 0xb8);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    puVar1 = PTR_DAT_03d08750;
    FUN_02215a88(param_1,unaff_w20,&stack0x00000018,*(undefined8 *)PTR_DAT_03d08750);
    if (in_stack_00000018 != 0) {
      lVar2 = *unaff_x21;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar2 = *unaff_x21;
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(**(long **)(lVar2 + 0xb8),unaff_w20,&stack0x00000018,*(undefined8 *)puVar1);
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027e3250(in_stack_00000018,0);
      if (**(long **)(*unaff_x21 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215b6c(**(long **)(*unaff_x21 + 0xb8),unaff_w20,0,*(undefined8 *)PTR_DAT_03d08758);
      uVar3 = 1;
      goto LAB_029bc0d8;
    }
  }
  uVar3 = 0;
LAB_029bc0d8:
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return uVar3;
}


