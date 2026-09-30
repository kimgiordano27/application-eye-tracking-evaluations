/*
FUNCTION_NAME: FUN_0856425c
ENTRY_POINT: 0856425c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_0856425c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_0989dad1 & 1) == 0) {
    FUN_04077588(PTR_DAT_0932c488);
    FUN_04077588(PTR_DAT_0932d8a8);
    FUN_04077588(PTR_DAT_092871d8);
    DAT_0989dad1 = 1;
  }
  puVar1 = PTR_DAT_0932d8a8;
  puVar2 = PTR_DAT_0932c488;
  if ((param_2 == 0) || (param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_083ee4a4(param_1,*(long *)(*(long *)PTR_DAT_0932c488 + 0xb8) + 0xa0,
               *(undefined1 *)(param_2 + 0x59),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar3 = FUN_08564124();
  puVar1 = PTR_DAT_092871d8;
  if ((uVar3 & 1) != 0) {
    FUN_083ee4a4(param_1,*(long *)(*(long *)puVar2 + 0xb8) + 0xb0,0,0);
    FUN_083ee4a4(param_1,*(long *)(*(long *)puVar2 + 0xb8) + 0xc0,0,0);
    lVar4 = *(long *)(*(long *)puVar2 + 0xb8) + 0xd0;
    goto 
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_session_handle_get
    ;
  }
  if (*(char *)(param_2 + 0x59) == '\0') {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_092871d8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar4 = FUN_08581e30(0);
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0xe8) != 1)) {
    if (*(char *)(param_2 + 0x59) == '\0') {
      return;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = FUN_08581e30(0);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0xe8) == 2)) {
      FUN_083ee4a4(param_1,*(long *)(*(long *)puVar2 + 0xb8) + 0xb0,0,0);
      lVar4 = *(long *)puVar2;
      uVar5 = 1;
      goto LAB_085643f8;
    }
    if (*(char *)(param_2 + 0x59) == '\0') {
      return;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = FUN_08581e30(0);
    if (lVar4 == 0) {
      return;
    }
    if (*(int *)(lVar4 + 0xe8) != 3) {
      return;
    }
    FUN_083ee4a4(param_1,*(long *)(*(long *)puVar2 + 0xb8) + 0xb0,0,0);
    FUN_083ee4a4(param_1,*(long *)(*(long *)puVar2 + 0xb8) + 0xc0,0,0);
    lVar4 = *(long *)puVar2;
    uVar5 = 1;
  }
  else {
    FUN_083ee4a4(param_1,*(long *)(*(long *)puVar2 + 0xb8) + 0xb0,1,0);
    lVar4 = *(long *)puVar2;
    uVar5 = 0;
LAB_085643f8:
    FUN_083ee4a4(param_1,*(long *)(lVar4 + 0xb8) + 0xc0,uVar5,0);
    lVar4 = *(long *)puVar2;
    uVar5 = 0;
  }
  FUN_083ee4a4(param_1,*(long *)(lVar4 + 0xb8) + 0xd0,uVar5,0);
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8) + 0xa0;

  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_session_handle_get
  :
  FUN_083ee4a4(param_1,lVar4,0,0);
  return;
}


