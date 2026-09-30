/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_playback_frame_played_t_sessiongroup_handle_set
ENTRY_POINT: 0854b650
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_playback_frame_played_t_sessiongroup_handle_set
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x26;
  long *unaff_x27;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8(param_1);
  }
  FUN_0845979c();
  iVar2 = *(int *)(unaff_x19 + 0x14);
  if (iVar2 == 2) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x34);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x3c);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08488c60(uVar4,uVar5,0);
    FUN_08488c60(*(undefined8 *)(unaff_x19 + 0x44),*(undefined8 *)(unaff_x19 + 0x4c),0);
    iVar2 = *(int *)(*unaff_x27 + 0xe4);
    uVar4 = 8;
  }
  else if (iVar2 == 1) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x34);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x3c);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08488c60(uVar4,uVar5,0);
    FUN_08488c60(*(undefined8 *)(unaff_x19 + 0x54),*(undefined8 *)(unaff_x19 + 0x5c),0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x27);
    }
    FUN_0845979c();
    FUN_08488c60(*(undefined8 *)(unaff_x19 + 0x54),*(undefined8 *)(unaff_x19 + 0x5c),0);
    FUN_08488c60(*(undefined8 *)(unaff_x19 + 0x44),*(undefined8 *)(unaff_x19 + 0x4c),0);
    iVar2 = *(int *)(*unaff_x27 + 0xe4);
    uVar4 = 6;
  }
  else {
    if (iVar2 != 0) {
      thunk_FUN_040dedf8(PTR_DAT_09288c08);
      uVar4 = thunk_FUN_040b4efc();
      FUN_075d60dc(uVar4,0);
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_0932e318);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar4,uVar5);
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x34);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x3c);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08488c60(uVar4,uVar5,0);
    FUN_08488c60(*(undefined8 *)(unaff_x19 + 0x54),*(undefined8 *)(unaff_x19 + 0x5c),0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x27);
    }
    FUN_0845979c();
    FUN_08488c60(*(undefined8 *)(unaff_x19 + 0x54),*(undefined8 *)(unaff_x19 + 0x5c),0);
    FUN_08488c60(*(undefined8 *)(unaff_x19 + 0x34),*(undefined8 *)(unaff_x19 + 0x3c),0);
    FUN_0845979c();
    FUN_08488c60(*(undefined8 *)(unaff_x19 + 0x34),*(undefined8 *)(unaff_x19 + 0x3c),0);
    FUN_08488c60(*(undefined8 *)(unaff_x19 + 0x44),*(undefined8 *)(unaff_x19 + 0x4c),0);
    iVar2 = *(int *)(*unaff_x27 + 0xe4);
    uVar4 = 3;
  }
  if (iVar2 == 0) {
    thunk_FUN_040d65a8(uVar4);
  }
  FUN_0845979c();
  if (*(char *)(unaff_x19 + 0x10) != '\0') {
    return;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    FUN_083ef860(*(long *)(unaff_x20 + 0x18),*(long *)(*(long *)PTR_DAT_0932c488 + 0xb8) + 0x210,1,0
                );
    puVar1 = PTR_DAT_0932d298;
    lVar3 = *(long *)(unaff_x20 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0932d298 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (lVar3 != 0) {
      FUN_083ef734(0x3f800000,0,0,*(undefined4 *)(unaff_x19 + 0x20),lVar3,
                   **(undefined4 **)(*(long *)puVar1 + 0xb8),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


