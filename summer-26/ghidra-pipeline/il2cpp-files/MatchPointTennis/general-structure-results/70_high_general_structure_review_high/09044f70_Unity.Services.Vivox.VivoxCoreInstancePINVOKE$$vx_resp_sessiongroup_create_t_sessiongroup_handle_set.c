/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_create_t_sessiongroup_handle_set
ENTRY_POINT: 09044f70
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


/* WARNING: Removing unreachable block (ram,0x09045038) */
/* WARNING: Removing unreachable block (ram,0x090450dc) */
/* WARNING: Removing unreachable block (ram,0x0904525c) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_create_t_sessiongroup_handle_set
               (void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  while( true ) {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(unaff_x21 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(unaff_x24 + 0x18);
    thunk_FUN_044bb4b4();
    if (*(uint *)(unaff_x21 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(unaff_x21 + 0x40) = *unaff_x28;
    thunk_FUN_044bb4b4();
    if (*(uint *)(unaff_x21 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)(unaff_x24 + 0x10);
    thunk_FUN_044bb4b4();
    if (*(uint *)(unaff_x21 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(unaff_x21 + 0x50) = *unaff_x29;
    thunk_FUN_044bb4b4();
    uVar2 = FUN_078b57fc(unaff_x21,0);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar2,uVar2);
    }
    FUN_078bb7b4();
    uVar1 = FUN_052607f8(&stack0x00000040,*unaff_x23);
    unaff_x24 = in_stack_00000058;
    uVar2 = in_stack_00000050;
    if ((uVar1 & 1) == 0) {
      if (in_stack_00000010 < 0) {
        FUN_05260918(&stack0x00000040,*(undefined8 *)PTR_DAT_09fc11e0);
      }
      if (unaff_x20 != (long *)0x0) {
        uVar2 = (**(code **)(*unaff_x20 + 0x168))();
        thunk_FUN_044adef4(PTR_DAT_09f20bb0);
        uVar3 = thunk_FUN_0448520c();
        FUN_07a3e070(uVar3,uVar2,0);
        uVar2 = thunk_FUN_044adef4(PTR_DAT_09fc1250);
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar3,uVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    unaff_x21 = FUN_04447c90(*unaff_x25,7);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(unaff_x21 + 0x18) == 0) break;
    *(undefined8 *)(unaff_x21 + 0x20) = *unaff_x26;
    thunk_FUN_044bb4b4();
    if (*(uint *)(unaff_x21 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(unaff_x21 + 0x28) = uVar2;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x28),uVar2);
    if (*(uint *)(unaff_x21 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(unaff_x21 + 0x30) = *unaff_x27;
    thunk_FUN_044bb4b4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


