/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_as_vx_evt_session_updated
ENTRY_POINT: 084a3fa4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_session_updated
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *unaff_x19;
  int iStack0000000000000004;
  
  if (param_2 != 1) {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03e223b0(param_1);
    }
    puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091a4f90);
    uVar3 = thunk_FUN_03d19be4(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) != 0) {
      uVar2 = *puVar1;
      __cxa_end_catch();
      *unaff_x19 = 0xfffffffe;
      lVar4 = thunk_FUN_03d1e194(PTR_DAT_091a4dd0);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_0708debc(unaff_x19 + 2,uVar2,0);
      return;
    }
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *puVar1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&PTR_PTR_08cb6798,0);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_03d1e194(PTR_DAT_091a6c28);
  uVar3 = thunk_FUN_03d19be4(uVar2,*(undefined8 *)*plVar5);
  if ((uVar3 & 1) == 0) {
    plVar7 = (long *)__cxa_allocate_exception(8);
    *plVar7 = *plVar5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar7,&PTR_PTR_08cb6798,0);
  }
  lVar4 = *plVar5;
  __cxa_end_catch();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iStack0000000000000004 = *(int *)(lVar4 + 0x8c);
  if (iStack0000000000000004 == 0x59da) {
    thunk_FUN_03d1e194(PTR_DAT_091a84b0);
    lVar8 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_0927f440);
    FUN_084608ac(lVar8,0x40db,uVar2,lVar4,0);
    *(undefined4 *)(lVar8 + 0x90) = 0x40db;
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_0927f438);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(lVar8,uVar2);
  }
  if (iStack0000000000000004 != 0x59db) {
    if (iStack0000000000000004 == 0x59e0) {
      thunk_FUN_03d1e194(PTR_DAT_091a84b0);
      lVar8 = thunk_FUN_03d2ef40();
      uVar2 = thunk_FUN_03d1e194(PTR_DAT_0927f430);
      FUN_084608ac(lVar8,0x40d9,uVar2,lVar4,0);
      *(undefined4 *)(lVar8 + 0x90) = 0x40d9;
      uVar2 = thunk_FUN_03d1e194(PTR_DAT_0927f438);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(lVar8,uVar2);
    }
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091a0d08);
    uVar2 = thunk_FUN_03d2eb70(uVar2,&stack0x00000004);
    uVar9 = thunk_FUN_03d1e194(PTR_DAT_0927f448);
    uVar2 = FUN_06fc1fb4(uVar9,uVar2,0);
    thunk_FUN_03d1e194(PTR_DAT_091a84b0);
    lVar8 = thunk_FUN_03d2ef40();
    FUN_084608ac(lVar8,0x40dc,uVar2,lVar4,0);
    *(undefined4 *)(lVar8 + 0x90) = 0x40dc;
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_0927f438);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(lVar8,uVar2);
  }
  thunk_FUN_03d1e194(PTR_DAT_091a84b0);
  lVar8 = thunk_FUN_03d2ef40();
  uVar2 = thunk_FUN_03d1e194(PTR_DAT_0927f440);
  FUN_084608ac(lVar8,0x40db,uVar2,lVar4,0);
  *(undefined4 *)(lVar8 + 0x90) = 0x40db;
  uVar2 = thunk_FUN_03d1e194(PTR_DAT_0927f438);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(lVar8,uVar2);
}


