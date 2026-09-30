/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_add_session_t_base__set
ENTRY_POINT: 09045364
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0904545c) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_add_session_t_base__set
               (undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long lVar7;
  long in_stack_00000010;
  
  if (param_2 != 1) {
    if (in_stack_00000010 < 0) {
      FUN_05260918(&stack0x00000040,*(undefined8 *)PTR_DAT_09fc11e0);
    }
    if (param_2 == 1) {
      puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
      uVar1 = thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
      uVar5 = thunk_FUN_044a9a40(uVar1,*(undefined8 *)*puVar4);
      if ((uVar5 & 1) != 0) {
        uVar1 = *puVar4;
        __cxa_end_catch();
        *unaff_x19 = 0xfffffffe;
        lVar7 = thunk_FUN_044adef4(PTR_DAT_09f43b00);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar2 = thunk_FUN_044adef4(PTR_DAT_09f43b38);
        FUN_066f3c90(unaff_x19 + 2,uVar1,uVar2);
        return;
      }
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&PTR_PTR_0991e038,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0452a004(param_1);
  }
  plVar3 = (long *)__cxa_begin_catch();
  lVar7 = *plVar3;
  __cxa_end_catch();
  if (in_stack_00000010 < 0) {
    FUN_05260918(&stack0x00000040,*(undefined8 *)PTR_DAT_09fc11e0);
  }
  if (lVar7 == 0) {
    if (unaff_x20 != (long *)0x0) {
      uVar1 = (**(code **)(*unaff_x20 + 0x168))();
      thunk_FUN_044adef4(PTR_DAT_09f20bb0);
      uVar2 = thunk_FUN_0448520c();
      FUN_07a3e070(uVar2,uVar1,0);
      uVar1 = thunk_FUN_044adef4(PTR_DAT_09fc1250);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar2,uVar1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e3c(lVar7);
}


