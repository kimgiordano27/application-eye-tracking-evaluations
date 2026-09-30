/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c__DisplayClass13_0$$<RequestScenePermissionIfNeeded>b__1
ENTRY_POINT: 06e6efb4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


bool Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0__<RequestScenePermissionIfNeeded>b__1
               (long param_1)

{
  long lVar1;
  uint in_w11;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  uint unaff_w22;
  undefined8 uVar4;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  
  do {
    uVar2 = in_w11;
    if (unaff_w22 <= uVar2) {
      *(uint *)(unaff_x19 + 0xc) = unaff_w22 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      goto LAB_06e6f08c;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = uVar2 + 1;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    in_w11 = uVar2 + 1;
  } while (*(int *)(lVar1 + (long)(int)uVar2 * 0x30 + 0x20) < 0);
  lVar1 = lVar1 + (long)(int)uVar2 * 0x30;
  uStack0000000000000014 = *(undefined8 *)(lVar1 + 0x44);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  in_stack_00000040 = 0;
  uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x3c) >> 0x20);
  uStack0000000000000008 = (undefined4)*(undefined8 *)(lVar1 + 0x38);
  uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  in_stack_00000058 = uStack0000000000000008;
  uStack0000000000000064 = uStack0000000000000014;
  uStack000000000000005c = uStack000000000000000c;
  in_stack_00000060 = uStack0000000000000010;
  in_stack_00000050 = uVar4;
  FUN_05815114(&stack0x00000020,uVar3,&stack0x00000050,
               *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000040;
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000030;
  thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
LAB_06e6f08c:
  return uVar2 < unaff_w22;
}


