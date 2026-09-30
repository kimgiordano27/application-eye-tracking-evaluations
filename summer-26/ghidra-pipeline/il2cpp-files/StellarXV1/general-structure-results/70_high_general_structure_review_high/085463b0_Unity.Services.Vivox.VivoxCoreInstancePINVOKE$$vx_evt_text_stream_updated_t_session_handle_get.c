/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_text_stream_updated_t_session_handle_get
ENTRY_POINT: 085463b0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_session_handle_get
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000000;
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
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  
  *(undefined4 *)(param_1 + 0x20) = param_3;
  lVar5 = *(long *)(unaff_x20 + 0x108);
  uStack0000000000000070 = 0;
  FUN_08a07820(&stack0x00000070,*unaff_x22,0);
  if (lVar5 != 0) {
    lVar3 = *(long *)(lVar5 + 0x10);
    lVar4 = *unaff_x23;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    puVar2 = PTR_DAT_0932e258;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = uStack0000000000000070;
      }
      else {
        FUN_05cc8dcc(lVar5,uStack0000000000000070,
                     *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = *(long *)(unaff_x20 + 0x108);
      uStack000000000000006c = 0;
      FUN_08a07820((long)((long)register0x00000008 + 0x68) + 4,*(undefined8 *)puVar2,0);
      if (lVar5 != 0) {
        lVar3 = *(long *)(lVar5 + 0x10);
        lVar4 = *unaff_x23;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000006c;
          }
          else {
            FUN_05cc8dcc(lVar5,uStack000000000000006c,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


