/*
FUNCTION_NAME: QFSW.QC.Internal.CustomParameter$$get_Member
ENTRY_POINT: 02961a94
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02961d38) */
/* WARNING: Removing unreachable block (ram,0x02961d00) */

void QFSW_QC_Internal_CustomParameter__get_Member(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *plVar8;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000038;
  
  if (param_2 == 1) {
    puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cdc860);
    uVar3 = thunk_FUN_01a6848c(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) == 0) {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&PTR_PTR_03abd138,0);
    }
    plVar8 = (long *)*puVar1;
    __cxa_end_catch();
    uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cbeb18);
    plVar4 = (long *)FUN_01ab6a94(uVar2,1);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar2 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar2,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[4] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar5);
    lVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cbe438);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03d06198);
    FUN_0367b588(uVar2,plVar4,0);
    plVar4 = (long *)FUN_02ecd1cc();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(*plVar4 + 0x280));
    FUN_02ecd310();
    while (uVar3 = FUN_021b51c8(&stack0x00000020,*unaff_x22), (uVar3 & 1) != 0) {
      FUN_01b7a454(&stack0x00000020,&stack0x00000008,*unaff_x23);
      lVar5 = in_stack_00000008;
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar3 = FUN_02ecc7e0(in_stack_00000008,0);
      if ((uVar3 & 1) != 0) {
        plVar4 = (long *)FUN_02ecd1cc(lVar5,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        thunk_FUN_01a89e68(*unaff_x24);
        FUN_026b4574();
        FUN_02ecd1cc(lVar5,0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar4 + 0x308))(plVar4);
      }
    }
    lVar6 = 0;
  }
  else {
    if (param_2 != 1) {
      FUN_021b51c4(&stack0x00000020,*unaff_x29);
      if (param_2 != 1) {
        if (in_stack_00000038._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b3fef0(param_1);
      }
      plVar4 = (long *)__cxa_begin_catch(param_1);
      lVar5 = *plVar4;
      __cxa_end_catch();
      goto LAB_02961bac;
    }
    plVar4 = (long *)__cxa_begin_catch(param_1);
    lVar6 = *plVar4;
    __cxa_end_catch();
  }
  FUN_021b51c4(&stack0x00000020,*unaff_x29);
  lVar5 = 0;
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar6);
  }
LAB_02961bac:
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar5);
  }
  return;
}


