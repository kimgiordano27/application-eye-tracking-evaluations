/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_text_stream_updated_t_session_handle_set
ENTRY_POINT: 08546318
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_session_handle_set
               (long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  int in_w9;
  long lVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  ulong in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  
code_r0x08546318:
  *(int *)(unaff_x22 + 0x18) = in_w9;
  *(int *)(param_1 + 0x20) = (int)param_3;
  do {
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      uStack0000000000000064 = 0;
      in_stack_00000060 = 0;
      in_stack_00000008 = 0;
      in_stack_00000000 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000058 = 0;
      uStack000000000000005c = 0;
      in_stack_00000050 = 0;
      FUN_08a03dd0();
      memcpy((void *)(unaff_x20 + 0x118),&stack0x00000000,0x6c);
      *(undefined8 *)(unaff_x20 + 0xe0) = unaff_x19;
      thunk_FUN_040ec700((undefined8 *)(unaff_x20 + 0xe0));
      return;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x22 = *(long *)(unaff_x20 + 0x108);
    in_stack_00000000 = in_stack_00000000 & 0xffffffff00000000;
    FUN_08a07820();
    if (unaff_x22 == 0) {
LAB_08546514:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    param_1 = *(long *)(unaff_x22 + 0x10);
    param_3 = in_stack_00000000 & 0xffffffff;
    lVar2 = *unaff_x23;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_08546514;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) break;
    FUN_05cc8dcc(unaff_x22,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                );
  } while( true );
  param_1 = param_1 + (long)(int)uVar1 * 4;
  in_w9 = uVar1 + 1;
  goto code_r0x08546318;
}


