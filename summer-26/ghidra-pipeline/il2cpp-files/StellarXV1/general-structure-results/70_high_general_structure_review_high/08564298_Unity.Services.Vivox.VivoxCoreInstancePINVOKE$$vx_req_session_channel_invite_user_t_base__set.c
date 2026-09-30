/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_channel_invite_user_t_base__set
ENTRY_POINT: 08564298
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_base__set
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x1d8));
  *(undefined1 *)(unaff_x21 + 0xad1) = 1;
  puVar1 = PTR_DAT_0932d8a8;
  if ((unaff_x20 == 0) || (unaff_x19 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_083ee4a4();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_08564124();
  puVar1 = PTR_DAT_092871d8;
  if ((uVar2 & 1) != 0) {
    FUN_083ee4a4();
    FUN_083ee4a4();
    goto 
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_session_handle_get
    ;
  }
  if (*(char *)(unaff_x20 + 0x59) == '\0') {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar3 = FUN_08581e30(0);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0xe8) != 1)) {
    if (*(char *)(unaff_x20 + 0x59) == '\0') {
      return;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = FUN_08581e30(0);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0xe8) == 2)) {
      FUN_083ee4a4();
      goto LAB_085643f8;
    }
    if (*(char *)(unaff_x20 + 0x59) == '\0') {
      return;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = FUN_08581e30(0);
    if (lVar3 == 0) {
      return;
    }
    if (*(int *)(lVar3 + 0xe8) != 3) {
      return;
    }
    FUN_083ee4a4();
    FUN_083ee4a4();
  }
  else {
    FUN_083ee4a4();
LAB_085643f8:
    FUN_083ee4a4();
  }
  FUN_083ee4a4();

  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_session_handle_get
  :
  FUN_083ee4a4();
  return;
}


