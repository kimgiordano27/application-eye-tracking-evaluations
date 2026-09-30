/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_account_t_state_sessiongroups_count_set
ENTRY_POINT: 084aa0ac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_account_t_state_sessiongroups_count_set
               (undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x25;
  
  if (param_2 != 1) {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03e223b0(param_1);
    }
    puVar3 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_091a4f90);
    uVar5 = thunk_FUN_03d19be4(uVar4,*(undefined8 *)*puVar3);
    if ((uVar5 & 1) != 0) {
      uVar4 = *puVar3;
      __cxa_end_catch();
      *unaff_x19 = 0xfffffffe;
      lVar6 = thunk_FUN_03d1e194(PTR_StringLiteral_52121_0927f5b0);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar8 = thunk_FUN_03d1e194(PTR_DAT_0927f7b0);
      FUN_06228820(unaff_x19 + 2,uVar4,uVar8);
      return;
    }
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *puVar3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&PTR_PTR_08cb6798,0);
  }
  puVar3 = (undefined8 *)__cxa_begin_catch(param_1);
  puVar2 = PTR_DAT_091a84b0;
  uVar4 = thunk_FUN_03d1e194(PTR_DAT_091a84b0);
  uVar5 = thunk_FUN_03d19be4(uVar4,*(undefined8 *)*puVar3);
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *puVar3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&PTR_PTR_08cb6798,0);
  }
  uVar4 = *puVar3;
  __cxa_end_catch();
  puVar3 = (undefined8 *)(unaff_x19 + 0xe);
  *puVar3 = uVar4;
  uVar4 = thunk_FUN_03d1023c(puVar3,uVar4);
  plVar9 = (long *)*puVar3;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4(plVar9);
  }
  if ((int)plVar9[0x12] == 0x3e83) {
    if (*(long *)(unaff_x19 + 10) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x10);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar4,uVar8);
    }
    lVar6 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_participant_t_is_text_muted_for_me_get
                      ();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar4 = FUN_0636bf40(lVar6,*(undefined8 *)PTR_DAT_091a8450);
    uVar5 = FUN_062f9900();
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x12) = uVar4;
      thunk_FUN_03d1023c(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04b8f2dc(unaff_x19 + 2);
      return;
    }
    lVar6 = FUN_062f9944();
    if (lVar6 != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_084a760c();
      goto LAB_084a9f44;
    }
    plVar9 = *(long **)(unaff_x19 + 0xe);
    if (plVar9 == (long *)0x0) goto LAB_084a9fdc;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_091a4f90 + 0x130);
  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_091a4f90)) {
LAB_084a9fdc:
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_0927f8d8);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(plVar9,uVar4);
  }
  lVar6 = FUN_0708b084(plVar9,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_0708b144(lVar6,0);
  *(undefined8 *)(unaff_x19 + 0xe) = 0;
  thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
  lVar6 = 0;
LAB_084a9f44:
  *unaff_x19 = 0xfffffffe;
  puVar2 = PTR_DAT_0927f748;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_062285f0(unaff_x19 + 2,lVar6,*(undefined8 *)puVar2);
  return;
}


