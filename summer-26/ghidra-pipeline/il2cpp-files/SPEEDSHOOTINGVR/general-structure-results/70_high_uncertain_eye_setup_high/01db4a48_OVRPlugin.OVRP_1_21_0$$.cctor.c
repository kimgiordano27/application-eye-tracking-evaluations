/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$.cctor
ENTRY_POINT: 01db4a48
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db4b78) */
/* WARNING: Removing unreachable block (ram,0x01db4c34) */
/* WARNING: Removing unreachable block (ram,0x01db4ad4) */

void OVRPlugin_OVRP_1_21_0___cctor(undefined8 param_1,int param_2)

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
    puVar1 = (undefined8 *)__cxa_begin_catch();
    uVar2 = thunk_FUN_010303a8(PTR_DAT_0234bcc0);
    uVar3 = thunk_FUN_0102bfdc(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) == 0) {
      puVar5 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&PTR_PTR_0220e3b8,0);
    }
    __cxa_end_catch();
    FUN_01da75d8();
    *(undefined1 *)(unaff_x19 + 0x4d) = 1;
    if ((*(int *)(unaff_x19 + 0x48) == 0) && (plVar6 = (long *)(unaff_x19 + 0x30), *plVar6 != 0)) {
      FUN_01db3820();
      FUN_01dad828();
      *plVar6 = 0;
      thunk_FUN_0106e12c(plVar6,0);
    }
    lVar7 = 0;
  }
  else {
    if (param_2 == 1) {
      puVar1 = (undefined8 *)__cxa_begin_catch();
      uVar2 = thunk_FUN_010303a8(PTR_DAT_0234c5c8);
      uVar3 = thunk_FUN_0102bfdc(uVar2,*(undefined8 *)*puVar1);
      if ((uVar3 & 1) == 0) {
        puVar5 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar5 = *puVar1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar5,&PTR_PTR_0220e3b8,0);
      }
      uVar2 = *puVar1;
      __cxa_end_catch();
      if (in_stack_00000028._4_1_ == '\0') {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fdc52c(uVar2);
    }
    if (param_2 != 1) {
      if (in_stack_00000028._4_1_ != '\0') {
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        lVar7 = FUN_01db3820();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        FUN_01cb97fc(lVar7,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_010dc9f4();
    }
    plVar6 = (long *)__cxa_begin_catch();
    lVar7 = *plVar6;
    __cxa_end_catch();
  }
  if (in_stack_00000028._4_1_ != '\0') {
    if ((*(long *)(unaff_x19 + 0x18) == 0) || (lVar4 = FUN_01db3820(), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01cb97fc(lVar4,0);
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc52c(lVar7);
}


