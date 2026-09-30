/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_edit_message_t_session_handle_get
ENTRY_POINT: 0853c4c8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_session_handle_get
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 uVar3;
  long *unaff_x25;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  
  uStack00000000000000a0 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000098 = 0;
  uStack0000000000000090 = 0;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar4 = FUN_0855d284();
  FUN_089ea1dc(&stack0x00000058,2,0);
  uStack0000000000000088 = in_stack_00000060;
  uStack0000000000000080 = in_stack_00000058;
  uStack0000000000000098 = in_stack_00000070;
  uStack0000000000000090 = in_stack_00000068;
  uStack00000000000000a0 = in_stack_00000078;
  if ((unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x1a0) != 0)) {
    uVar1 = FUN_083e3844(*(long *)(unaff_x22 + 0x1a0),0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x22 + 0x1a0);
      if (lVar2 == 0) goto LAB_0853c674;
      uStack0000000000000088 = *(undefined8 *)(lVar2 + 0x38);
      uStack0000000000000080 = *(undefined8 *)(lVar2 + 0x30);
      uStack0000000000000098 = *(undefined8 *)(lVar2 + 0x48);
      uStack0000000000000090 = *(undefined8 *)(lVar2 + 0x40);
      uStack00000000000000a0 = *(undefined8 *)(lVar2 + 0x50);
    }
    if (unaff_x24 == 0) goto LAB_0853c674;
    in_stack_00000038 = *(undefined8 *)(unaff_x24 + 0x30);
    in_stack_00000030 = *(undefined8 *)(unaff_x24 + 0x28);
    in_stack_00000048 = *(undefined8 *)(unaff_x24 + 0x40);
    in_stack_00000040 = *(undefined8 *)(unaff_x24 + 0x38);
    in_stack_00000050 = *(undefined8 *)(unaff_x24 + 0x48);
    uVar1 = FUN_089ea6c4(&stack0x00000030);
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar1 = FUN_089ca704(uVar3,0,0);
      if ((uVar1 & 1) == 0) goto LAB_0853c610;
    }
    if (((unaff_x23 & 1) == 0) && (*(char *)(unaff_x22 + 0x1e0) != '\0')) {
      if (unaff_x21 == 0) goto LAB_0853c674;
      fVar8 = *(float *)(unaff_x22 + 0x138);
      fVar7 = *(float *)(unaff_x22 + 0x134);
      uVar6 = *(undefined4 *)(unaff_x22 + 0x130);
      uVar5 = *(undefined4 *)(unaff_x22 + 300);
    }
    else {
      if (unaff_x21 == 0) goto LAB_0853c674;
      fVar8 = (float)*(int *)(unaff_x22 + 0xfc);
      fVar7 = (float)*(int *)(unaff_x22 + 0xf8);
      uVar5 = 0;
      uVar6 = 0;
    }
    FUN_083ee258(uVar5,uVar6,fVar7,fVar8);
LAB_0853c610:
    if (*(int *)(*(long *)PTR_DAT_09326db8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_08458b38(uVar4,param_2,param_3,param_4);
    return;
  }
LAB_0853c674:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


