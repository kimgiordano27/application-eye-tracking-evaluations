/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_sessiongroup_set_tx_session_t
ENTRY_POINT: 0858b5ac
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_sessiongroup_set_tx_session_t(void)

{
  undefined1 in_CY;
  int iVar1;
  undefined4 uVar2;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  int unaff_w23;
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
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined8 in_stack_00000168;
  
  do {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar3 = *(long *)(unaff_x20 + (long)(int)in_w9 * 8 + 0x20);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar1 = FUN_08999cb4(lVar3,0);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        FUN_08a0f660(lVar3);
        FUN_08999fb4(lVar3,0);
        FUN_08a0f044(&stack0x00000110);
      }
      else {
        if (iVar1 != 1) goto LAB_0858b630;
        in_stack_00000100 = 0;
        in_stack_000000c8 = 0;
        in_stack_000000c0 = 0;
        in_stack_000000d8 = 0;
        in_stack_000000d0 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000b0 = 0;
        FUN_08a0f318(lVar3,&stack0x000000b0,0);
        FUN_08a0ef58(&stack0x00000110,&stack0x000000b0,0);
      }
    }
    else if (iVar1 == 2) {
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
      FUN_08a0f4b0(lVar3,&stack0x00000060,0);
      FUN_08a0efd0(&stack0x00000110,&stack0x00000060,0);
    }
    else {
LAB_0858b630:
      uVar2 = FUN_089d0058(lVar3,0);
      FUN_08a0f070(&stack0x00000110,uVar2,0);
    }
    in_stack_00000168._7_1_ = 0;
    memmove((void *)(unaff_x19 + (long)(int)in_w9 * (long)unaff_w23),&stack0x00000110,0x60);
    in_w9 = in_w9 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)in_w9) {
      return;
    }
    in_CY = *(uint *)(unaff_x20 + 0x18) <= in_w9;
  } while( true );
}


