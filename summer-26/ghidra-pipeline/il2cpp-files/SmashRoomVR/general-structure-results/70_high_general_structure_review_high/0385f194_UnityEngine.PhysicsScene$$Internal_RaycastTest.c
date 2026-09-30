/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$Internal_RaycastTest
ENTRY_POINT: 0385f194
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void UnityEngine_PhysicsScene__Internal_RaycastTest
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined4 unaff_s11;
  undefined4 unaff_s13;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  
  uStack0000000000000064 = param_2;
  uVar2 = param_3;
  in_stack_00000060 = FUN_035a0b10(0);
  in_stack_00000068 = uVar2;
  uVar4 = FUN_03857c34(&stack0x00000080,&stack0x00000070,&stack0x00000060);
  if ((uVar4 & 1) == 0) {
    uStack0000000000000054 = uStack0000000000000018;
    uVar2 = in_stack_00000010._4_4_;
    uStack0000000000000050 = FUN_035a0b10(uStack000000000000001c,0);
    in_stack_00000058 = uVar2;
    uStack0000000000000044 = uStack0000000000000008;
    uVar2 = uStack0000000000000004;
    uStack0000000000000040 = FUN_035a0b10(uStack000000000000000c,0);
    in_stack_00000048 = uVar2;
    uVar4 = FUN_03857d04(&stack0x00000050,&stack0x00000040);
    if ((uVar4 & 1) == 0) {
      in_stack_00000030 = FUN_035a0b10(uStack0000000000000000,0);
      in_stack_00000038 = unaff_s11;
      in_stack_00000020 = FUN_035a0b10(0);
      in_stack_00000028 = unaff_s13;
      bVar3 = FUN_03857da8(&stack0x00000030,&stack0x00000020);
    }
    else {
      bVar3 = 0;
    }
  }
  else {
    bVar3 = 1;
  }
  if (*(byte *)(unaff_x19 + 0x32) != (bVar3 & 1)) {
    *(byte *)(unaff_x19 + 0x32) = bVar3 & 1;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar5 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0385f31c;
      FUN_0391b78c(*(long *)(unaff_x19 + 0x40),*(char *)(unaff_x19 + 0x32) == '\0',0);
    }
    uVar5 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x48) == 0) {
LAB_0385f31c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_0391b78c(*(long *)(unaff_x19 + 0x48),*(char *)(unaff_x19 + 0x32) == '\0',0);
    }
  }
  return;
}


