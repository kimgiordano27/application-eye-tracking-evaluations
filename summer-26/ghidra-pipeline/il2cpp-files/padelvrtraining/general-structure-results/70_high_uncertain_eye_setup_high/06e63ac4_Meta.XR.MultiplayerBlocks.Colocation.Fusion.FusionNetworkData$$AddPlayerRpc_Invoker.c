/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionNetworkData$$AddPlayerRpc@Invoker
ENTRY_POINT: 06e63ac4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionNetworkData__AddPlayerRpc_Invoker
               (long param_1)

{
  long lVar1;
  int in_w9;
  long in_x10;
  uint in_w11;
  long in_x12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  do {
    uVar3 = in_w11 + 1;
    if (-1 < *(int *)(in_x12 + 0x20)) {
      lVar1 = in_x10 + (long)(int)unaff_w23 * 0x30;
      uVar5 = *(undefined8 *)(lVar1 + 0x38);
      uVar4 = *(undefined8 *)(lVar1 + 0x30);
      uVar7 = *(undefined8 *)(lVar1 + 0x48);
      uVar6 = *(undefined8 *)(lVar1 + 0x40);
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      in_stack_00000040 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      in_stack_00000050 = uVar4;
      in_stack_00000058 = uVar5;
      in_stack_00000060 = uVar6;
      in_stack_00000068 = uVar7;
      FUN_058137c0(&stack0x00000020,uVar2,&stack0x00000050,
                   *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
      *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000040;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
      *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000038;
      *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000030;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      uVar3 = unaff_w23;
LAB_06e63b58:
      return uVar3 < unaff_w22;
    }
    if (unaff_w22 <= uVar3) {
      *(uint *)(unaff_x19 + 0xc) = unaff_w22 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      goto LAB_06e63b58;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = in_w11 + 2;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_w11 = in_w11 + 1;
    if (*(uint *)(in_x10 + 0x18) <= in_w11) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    in_x12 = in_x10 + (long)(int)uVar3 * (long)in_w9;
    unaff_w23 = uVar3;
  } while( true );
}


