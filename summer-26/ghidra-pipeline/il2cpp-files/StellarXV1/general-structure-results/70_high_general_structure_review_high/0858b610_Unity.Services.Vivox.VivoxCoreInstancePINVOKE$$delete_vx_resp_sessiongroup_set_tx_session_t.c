/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_sessiongroup_set_tx_session_t
ENTRY_POINT: 0858b610
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_sessiongroup_set_tx_session_t
               (undefined1 param_1 [16],long param_2,undefined1 *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w23;
  long unaff_x24;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined4 in_stack_00000100;
  undefined8 in_stack_00000168;
  
  uStack00000000000000b8 = param_1._8_8_;
  uStack00000000000000b0 = param_1._0_8_;
  do {
    uStack00000000000000e0 = uStack00000000000000b0;
    uStack00000000000000e8 = uStack00000000000000b8;
    uStack00000000000000f0 = uStack00000000000000b0;
    uStack00000000000000f8 = uStack00000000000000b8;
    FUN_08a0f318(param_2,param_3,param_4);
    FUN_08a0ef58(&stack0x00000110,&stack0x000000b0,0);
LAB_0858b6d0:
    while( true ) {
      in_stack_00000168._7_1_ = 0;
      memmove((void *)(unaff_x19 + (long)(int)unaff_x24 * (long)unaff_w23),&stack0x00000110,0x60);
      uVar1 = (int)unaff_x24 + 1;
      if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)uVar1) {
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      unaff_x24 = (long)(int)uVar1;
      param_2 = *(long *)(unaff_x20 + unaff_x24 * 8 + 0x20);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      iVar2 = FUN_08999cb4(param_2,0);
      if (iVar2 < 2) break;
      if (iVar2 == 2) {
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        FUN_08a0f4b0(param_2,&stack0x00000060,0);
        FUN_08a0efd0(&stack0x00000110,&stack0x00000060,0);
      }
      else {
LAB_0858b630:
        uVar3 = FUN_089d0058(param_2,0);
        FUN_08a0f070(&stack0x00000110,uVar3,0);
      }
    }
    if (iVar2 == 0) {
      FUN_08a0f660(param_2);
      FUN_08999fb4(param_2,0);
      FUN_08a0f044(&stack0x00000110);
      goto LAB_0858b6d0;
    }
    if (iVar2 != 1) goto LAB_0858b630;
    uStack00000000000000b0 = 0;
    uStack00000000000000b8 = 0;
    param_3 = (undefined1 *)&stack0x000000b0;
    param_4 = 0;
    in_stack_00000100 = 0;
    in_stack_000000c8 = 0;
    in_stack_000000c0 = 0;
    in_stack_000000d8 = 0;
    in_stack_000000d0 = 0;
  } while( true );
}


