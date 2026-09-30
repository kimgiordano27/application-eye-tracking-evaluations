/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_password_set
ENTRY_POINT: 0855cdb8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_8
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_password_set
               (undefined8 param_1)

{
  int iVar1;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar2;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long *plVar3;
  long in_stack_000001e8;
  
  plVar3 = *(long **)(unaff_x26 + 0x678);
  lVar2 = *(long *)(unaff_x22 + 0xd8);
  FUN_08a08278(param_1,lVar2,0);
  FUN_08a082e4(&stack0x000000c0,unaff_w24,0);
  memcpy(&stack0x00000060,&stack0x000000c0,0x60);
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  memcpy(&stack0x00000000,&stack0x00000060,0x60);
  FUN_08a00754(&stack0x00000124,unaff_w23);
  if ((unaff_x20 != 0) &&
     (FUN_08a00820(&stack0x00000124,*(undefined4 *)(unaff_x20 + 0x2c),0), unaff_x21 != 0)) {
    FUN_08a008c0(&stack0x00000124,*(undefined4 *)(unaff_x21 + 0x10),0);
    FUN_08a00828(&stack0x00000124,*(undefined1 *)(unaff_x20 + 0x28),0);
    if (lVar2 != 0) {
      iVar1 = FUN_08978cd4(lVar2,0);
      lVar2 = *plVar3;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar2);
      }
      FUN_08a00838(&stack0x00000124,iVar1 != 4,0);
      memcpy(unaff_x19,&stack0x00000124,0xc4);
      if (*(long *)(unaff_x25 + 0x28) == in_stack_000001e8) {
        return;
      }
      goto 
      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_connect_audio_set
      ;
    }
  }
  if (*(long *)(unaff_x25 + 0x28) == in_stack_000001e8) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_connect_audio_set:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


