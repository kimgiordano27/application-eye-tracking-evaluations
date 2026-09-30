/*
FUNCTION_NAME: OVRPlugin$$IsOrientationValid
ENTRY_POINT: 027e7c88
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x027e7e9c) */

void OVRPlugin__IsOrientationValid(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x19;
  long lVar7;
  undefined8 in_stack_00000028;
  
  if (param_2 == 1) {
    puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cc17e0);
    uVar4 = thunk_FUN_01a6848c(uVar3,*(undefined8 *)*puVar2);
    if ((uVar4 & 1) == 0) {
      puVar5 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar5 = *puVar2;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&PTR_PTR_03abd138,0);
    }
    uVar3 = *puVar2;
    __cxa_end_catch();
    if (in_stack_00000028._4_1_ != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(uVar3);
    }
  }
  else {
    if (param_2 != 1) {
      if (in_stack_00000028._4_1_ != '\0') {
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar7 = FUN_027e6178();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_026706bc(lVar7,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar6 = (long *)__cxa_begin_catch(param_1);
    lVar7 = *plVar6;
    __cxa_end_catch();
    if (in_stack_00000028._4_1_ != '\0') {
      if ((*(long *)(unaff_x19 + 0x18) == 0) || (lVar1 = FUN_027e6178(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_026706bc(lVar1,0);
    }
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar7);
    }
  }
  return;
}


