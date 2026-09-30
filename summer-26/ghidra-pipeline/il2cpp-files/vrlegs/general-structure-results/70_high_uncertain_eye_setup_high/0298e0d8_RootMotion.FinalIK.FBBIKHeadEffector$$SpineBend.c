/*
FUNCTION_NAME: RootMotion.FinalIK.FBBIKHeadEffector$$SpineBend
ENTRY_POINT: 0298e0d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x0298dec4) */
/* WARNING: Removing unreachable block (ram,0x0298db60) */
/* WARNING: Removing unreachable block (ram,0x0298e1d8) */
/* WARNING: Removing unreachable block (ram,0x0298e0b8) */

void RootMotion_FinalIK_FBBIKHeadEffector__SpineBend(undefined8 param_1)

{
  long *plVar1;
  long unaff_x20;
  int unaff_w22;
  long lVar2;
  long unaff_x23;
  undefined1 unaff_w25;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000090;
  
  FUN_021b503c(&stack0x00000030,*(undefined8 *)PTR_DAT_03d079a0);
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (unaff_w22 == 1) {
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
    if (in_stack_00000058._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar2);
    }
    *(undefined1 *)(unaff_x20 + 0x10) = unaff_w25;
    if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027de7f8(*(long *)(unaff_x20 + 0x40),0);
    lVar2 = 0;
  }
  else {
    if (in_stack_00000058._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (unaff_w22 != 1) {
      if (in_stack_00000090._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
  }
  if (in_stack_00000090._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  return;
}


