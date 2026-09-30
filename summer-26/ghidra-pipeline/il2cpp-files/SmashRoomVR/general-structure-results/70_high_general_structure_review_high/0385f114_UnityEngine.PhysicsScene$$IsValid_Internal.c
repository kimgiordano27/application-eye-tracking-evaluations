/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$IsValid_Internal
ENTRY_POINT: 0385f114
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void UnityEngine_PhysicsScene__IsValid_Internal
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x21;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 unaff_s11;
  undefined4 unaff_s15;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  
  uStack0000000000000014 = param_3;
  uStack000000000000001c = FUN_039291ac();
  if (unaff_x21 != 0) {
    uVar6 = param_2;
    uVar8 = uStack0000000000000014;
    uVar5 = FUN_03928d34();
    uVar7 = uVar6;
    uVar9 = uVar8;
    uVar4 = FUN_039291ac();
    uVar10 = unaff_s11;
    uStack0000000000000084 = in_stack_00000010;
    uStack0000000000000080 = FUN_035a0b10(0);
    in_stack_00000088 = uVar10;
    uStack0000000000000074 = param_2;
    uVar10 = uStack0000000000000014;
    uStack0000000000000070 = FUN_035a0b10(uStack000000000000001c,0);
    in_stack_00000078 = uVar10;
    uStack0000000000000064 = uVar6;
    uVar10 = uVar8;
    uStack0000000000000060 = FUN_035a0b10(uVar5,0);
    in_stack_00000068 = uVar10;
    uVar3 = FUN_03857c34(&stack0x00000080,&stack0x00000070,&stack0x00000060);
    if ((uVar3 & 1) == 0) {
      uStack0000000000000054 = param_2;
      uVar10 = uStack0000000000000014;
      uStack0000000000000050 = FUN_035a0b10(uStack000000000000001c,0);
      in_stack_00000058 = uVar10;
      uStack0000000000000044 = uVar7;
      uStack0000000000000040 = FUN_035a0b10(uVar4,0);
      in_stack_00000048 = uVar9;
      uVar3 = FUN_03857d04(&stack0x00000050,&stack0x00000040);
      if ((uVar3 & 1) == 0) {
        uStack0000000000000034 = in_stack_00000010;
        uStack0000000000000030 = FUN_035a0b10(unaff_s15,0);
        in_stack_00000038 = unaff_s11;
        uStack0000000000000024 = uVar6;
        uStack0000000000000020 = FUN_035a0b10(uVar5,0);
        in_stack_00000028 = uVar8;
        bVar2 = FUN_03857da8(&stack0x00000030,&stack0x00000020);
      }
      else {
        bVar2 = 0;
      }
    }
    else {
      bVar2 = 1;
    }
    if (*(byte *)(unaff_x19 + 0x32) != (bVar2 & 1)) {
      *(byte *)(unaff_x19 + 0x32) = bVar2 & 1;
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uVar5 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar5,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0385f31c;
        FUN_0391b78c(*(long *)(unaff_x19 + 0x40),*(char *)(unaff_x19 + 0x32) == '\0',0);
      }
      uVar5 = *(undefined8 *)(unaff_x19 + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar5,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0385f31c;
        FUN_0391b78c(*(long *)(unaff_x19 + 0x48),*(char *)(unaff_x19 + 0x32) == '\0',0);
      }
    }
    return;
  }
LAB_0385f31c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


