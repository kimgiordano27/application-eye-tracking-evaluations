/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$Setup
ENTRY_POINT: 07292658
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__Setup(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 *unaff_x19;
  long *plVar6;
  int iVar7;
  int unaff_w21;
  long *unaff_x22;
  long lVar8;
  long in_stack_00000028;
  int *in_stack_00000030;
  long *in_stack_00000038;
  int in_stack_00000050;
  long in_stack_000000b0;
  
  if (unaff_w21 == 1) {
    puVar2 = (undefined8 *)__cxa_begin_catch();
    uVar3 = thunk_FUN_040dedf8(PTR_DAT_09285a20);
    uVar4 = thunk_FUN_040daa88(uVar3,*(undefined8 *)*puVar2);
    iVar1 = in_stack_00000050;
    if ((uVar4 & 1) == 0) {
      puVar5 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar5 = *puVar2;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&PTR_PTR_08d635d8,0);
    }
    plVar6 = (long *)*puVar2;
    *(long **)(&stack0x00000040 + (long)in_stack_00000050 * 8) = plVar6;
    in_stack_00000050 = in_stack_00000050 + 1;
    __cxa_end_catch();
    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *(long *)(in_stack_000000b0 + 0x80);
    if (lVar8 != 0) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),uVar3,*(undefined8 *)(lVar8 + 0x28))
      ;
      if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    lVar8 = *(long *)(in_stack_000000b0 + 0x88);
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),0x3ee,*(undefined8 *)(lVar8 + 0x28))
      ;
    }
    iVar7 = 0x15;
    in_stack_00000050 = iVar1;
  }
  else {
    if (unaff_w21 != 1) {
      FUN_03f9b45c(&stack0x00000028);
      if (unaff_w21 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_041676cc();
      }
      puVar2 = (undefined8 *)__cxa_begin_catch();
      uVar3 = thunk_FUN_040dedf8(PTR_DAT_09285a20);
      uVar4 = thunk_FUN_040daa88(uVar3,*(undefined8 *)*puVar2);
      if ((uVar4 & 1) != 0) {
        uVar3 = *puVar2;
        *(undefined8 *)(&stack0x00000040 + (long)in_stack_00000050 * 8) = uVar3;
        in_stack_00000050 = in_stack_00000050 + 1;
        __cxa_end_catch();
        *unaff_x19 = 0xfffffffe;
        lVar8 = thunk_FUN_040dedf8(PTR_DAT_09285a68);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_07590860(unaff_x19 + 2,uVar3,0);
        return;
      }
      puVar5 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar5 = *puVar2;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&PTR_PTR_08d635d8,0);
    }
    plVar6 = (long *)__cxa_begin_catch();
    in_stack_00000028 = *plVar6;
    __cxa_end_catch();
    iVar7 = 0;
  }
  plVar6 = in_stack_00000038;
  if (-1 < *in_stack_00000030) {
LAB_072924bc:
    if (in_stack_00000028 == 0) {
      if ((iVar7 == 0) || (iVar7 == 0x15)) {
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0759053c(unaff_x19 + 2,0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  lVar8 = *in_stack_00000038;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x40) == 0) goto LAB_072924bc;
    if (*(long *)(lVar8 + 0x48) != 0) {
      FUN_076e11d4(*(long *)(lVar8 + 0x48),0);
      if ((*plVar6 != 0) && (plVar6 = *(long **)(*plVar6 + 0x40), plVar6 != (long *)0x0)) {
        (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        goto LAB_072924bc;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


