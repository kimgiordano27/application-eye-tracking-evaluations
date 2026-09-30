/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_session_handle_get
ENTRY_POINT: 05fdb658
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_session_handle_get
               (void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 unaff_w21;
  uint unaff_w22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  int unaff_w27;
  long lVar5;
  long unaff_x28;
  undefined8 uVar6;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (*(int *)(unaff_x28 + 0x28) != unaff_w27) {
    lVar5 = *(long *)(unaff_x24 + 0x88);
    if (lVar5 == 0) goto LAB_05fdb7e8;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w22) goto LAB_05fdb7ec;
    if (*(int *)(*(long *)Method_System_Span<FrameTiming>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dc4285 == '\0') {
      FUN_02d965b8(&DAT_06b37e68);
      DAT_06dc4285 = '\x01';
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dc4286 == '\0') {
      FUN_02d965b8(&DAT_06b37e68);
      DAT_06dc4286 = '\x01';
    }
    uVar1 = *(ushort *)(lVar5 + (long)unaff_w26 * 0x1c + 0x22);
    iVar2 = (uint)uVar1 << 0x10;
    if (uVar1 != 0) {
      lVar5 = *unaff_x25;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *unaff_x25;
      }
      piVar4 = *(int **)(lVar5 + 0xb8);
      if (iVar2 == *piVar4) {
        return;
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        piVar4 = *(int **)(*unaff_x25 + 0xb8);
      }
      if (iVar2 == piVar4[1]) {
        return;
      }
    }
  }
  uVar3 = *(undefined4 *)(unaff_x24 + 0x90);
  if (*(int *)(DAT_06b35a68 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_054e9108(uVar3,unaff_w22,0);
  lVar5 = *(long *)(unaff_x24 + 0x88);
  *(undefined4 *)(unaff_x24 + 0x90) = uVar3;
  if (lVar5 == 0) {
LAB_05fdb7e8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (unaff_w22 < *(uint *)(lVar5 + 0x18)) {
    uVar6 = *unaff_x23;
    lVar5 = lVar5 + (long)unaff_w26 * 0x1c;
    *(undefined8 *)(lVar5 + 0x28) = unaff_x23[1];
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    lVar5 = *(long *)(unaff_x24 + 0x88);
    if (lVar5 == 0) goto LAB_05fdb7e8;
    if (unaff_w22 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)unaff_w26 * 0x1c;
      *(undefined4 *)(lVar5 + 0x30) = uStack0000000000000008;
      *(undefined4 *)(lVar5 + 0x34) = uStack000000000000000c;
      *(undefined4 *)(lVar5 + 0x38) = unaff_w21;
      return;
    }
  }
LAB_05fdb7ec:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


