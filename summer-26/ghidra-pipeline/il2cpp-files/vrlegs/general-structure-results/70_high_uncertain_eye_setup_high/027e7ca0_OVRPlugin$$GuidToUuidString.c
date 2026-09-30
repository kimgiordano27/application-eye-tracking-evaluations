/*
FUNCTION_NAME: OVRPlugin$$GuidToUuidString
ENTRY_POINT: 027e7ca0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027e7de0) */
/* WARNING: Removing unreachable block (ram,0x027e7e9c) */
/* WARNING: Removing unreachable block (ram,0x027e7d3c) */

void OVRPlugin__GuidToUuidString(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  long lVar7;
  undefined8 in_stack_00000028;
  
  if (param_2 == 1) {
    puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cbfd60);
    uVar3 = thunk_FUN_01a6848c(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) == 0) {
      puVar5 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&PTR_PTR_03abd138,0);
    }
    __cxa_end_catch();
    FUN_027e0bd8();
    *(undefined1 *)(unaff_x19 + 0x4d) = 1;
    if ((*(int *)(unaff_x19 + 0x48) == 0) && (plVar6 = (long *)(unaff_x19 + 0x30), *plVar6 != 0)) {
      FUN_027e6178();
      FUN_027de998();
      *plVar6 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,0);
    }
    lVar7 = 0;
  }
  else {
    if (param_2 == 1) {
      puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
      uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cc17e0);
      uVar3 = thunk_FUN_01a6848c(uVar2,*(undefined8 *)*puVar1);
      if ((uVar3 & 1) == 0) {
        puVar5 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar5,&PTR_PTR_03abd138,0);
      }
      uVar2 = *puVar1;
      __cxa_end_catch();
      if (in_stack_00000028._4_1_ == '\0') {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(uVar2);
    }
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
  }
  if (in_stack_00000028._4_1_ != '\0') {
    if ((*(long *)(unaff_x19 + 0x18) == 0) || (lVar4 = FUN_027e6178(), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_026706bc(lVar4,0);
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c(lVar7);
}


