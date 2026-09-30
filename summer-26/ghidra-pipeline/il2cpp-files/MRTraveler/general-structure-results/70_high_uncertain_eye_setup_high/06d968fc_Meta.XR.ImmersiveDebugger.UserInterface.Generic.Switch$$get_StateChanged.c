/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Switch$$get_StateChanged
ENTRY_POINT: 06d968fc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d96b64) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__get_StateChanged
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int unaff_w24;
  
  if (unaff_w24 < 0) {
    FUN_049dc4cc(&stack0x00000030,*(undefined8 *)PTR_DAT_08e752d8);
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28();
  }
  if (param_2 == 1) {
    puVar1 = (undefined8 *)__cxa_begin_catch();
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
    uVar3 = thunk_FUN_03ce0d60(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&PTR_PTR_088de0a8,0);
    }
    plVar5 = (long *)*puVar1;
    __cxa_end_catch();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *(long *)(unaff_x20 + 0x80);
    if (lVar6 != 0) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),uVar2,*(undefined8 *)(lVar6 + 0x28))
      ;
    }
    lVar6 = *(long *)(unaff_x20 + 0x88);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),0x3ee,*(undefined8 *)(lVar6 + 0x28))
      ;
    }
    lVar6 = 0;
    iVar8 = 0x15;
    iVar7 = 0x15;
  }
  else {
    if (param_2 != 1) {
      if (unaff_w24 < 0) {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(long *)(unaff_x20 + 0x40) != 0) {
          if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_07169138(*(long *)(unaff_x20 + 0x48),0);
          plVar5 = *(long **)(unaff_x20 + 0x40);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        }
      }
      if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_03d91ca0();
      }
      puVar1 = (undefined8 *)__cxa_begin_catch();
      uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
      uVar3 = thunk_FUN_03ce0d60(uVar2,*(undefined8 *)*puVar1);
      if ((uVar3 & 1) != 0) {
        uVar2 = *puVar1;
        __cxa_end_catch();
        *unaff_x19 = 0xfffffffe;
        lVar6 = thunk_FUN_03ce5214(PTR_DAT_08e69550);
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_0701e11c(unaff_x19 + 2,uVar2,0);
        return;
      }
      puVar4 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&PTR_PTR_088de0a8,0);
    }
    plVar5 = (long *)__cxa_begin_catch();
    lVar6 = *plVar5;
    __cxa_end_catch();
    iVar8 = 0;
    iVar7 = 0;
  }
  if (unaff_w24 < 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    iVar7 = iVar8;
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_07169138(*(long *)(unaff_x20 + 0x48),0);
      plVar5 = *(long **)(unaff_x20 + 0x40);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    }
  }
  if (lVar6 == 0) {
    if ((iVar7 == 0) || (iVar7 == 0x15)) {
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)PTR_DAT_08e69550 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0701e078(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb28(lVar6);
}


