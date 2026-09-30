/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$IsValid
ENTRY_POINT: 0385f0cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void UnityEngine_PhysicsScene__IsValid(float param_1,float param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  float fStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  float fStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  float fStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined4 uStack0000000000000080;
  float fStack0000000000000084;
  undefined4 in_stack_00000088;
  
  *(float *)(unaff_x19 + 0x50) = param_1;
  if (param_1 < param_2) {
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x50) = 0;
  if ((*(long *)(unaff_x19 + 0x38) != 0) &&
     (lVar4 = FUN_0391c27c(*(long *)(unaff_x19 + 0x38),0), unaff_x20 != 0)) {
    uVar8 = FUN_03928d34();
    fVar10 = param_2;
    uVar13 = param_3;
    uVar6 = FUN_039291ac();
    if (lVar4 != 0) {
      fVar11 = fVar10;
      uVar14 = uVar13;
      uVar9 = FUN_03928d34(lVar4,0);
      fVar12 = fVar11;
      uVar15 = uVar14;
      uVar7 = FUN_039291ac(lVar4,0);
      fStack0000000000000084 = param_2;
      uVar2 = param_3;
      uStack0000000000000080 = FUN_035a0b10(uVar8,0);
      in_stack_00000088 = uVar2;
      fStack0000000000000074 = fVar10;
      uVar2 = uVar13;
      uStack0000000000000070 = FUN_035a0b10(uVar6,0);
      in_stack_00000078 = uVar2;
      fStack0000000000000064 = fVar11;
      uVar2 = uVar14;
      uStack0000000000000060 = FUN_035a0b10(uVar9,0);
      in_stack_00000068 = uVar2;
      uVar5 = FUN_03857c34(&stack0x00000080,&stack0x00000070,&stack0x00000060);
      if ((uVar5 & 1) == 0) {
        fStack0000000000000054 = fVar10;
        uStack0000000000000050 = FUN_035a0b10(uVar6,0);
        in_stack_00000058 = uVar13;
        fStack0000000000000044 = fVar12;
        uStack0000000000000040 = FUN_035a0b10(uVar7,0);
        in_stack_00000048 = uVar15;
        uVar5 = FUN_03857d04(&stack0x00000050,&stack0x00000040);
        if ((uVar5 & 1) == 0) {
          fStack0000000000000034 = param_2;
          uStack0000000000000030 = FUN_035a0b10(uVar8 & 0xffffffff,0);
          in_stack_00000038 = param_3;
          fStack0000000000000024 = fVar11;
          uStack0000000000000020 = FUN_035a0b10(uVar9,0);
          in_stack_00000028 = uVar14;
          bVar3 = FUN_03857da8(&stack0x00000030,&stack0x00000020);
        }
        else {
          bVar3 = 0;
        }
      }
      else {
        bVar3 = 1;
      }
      if (*(byte *)(unaff_x19 + 0x32) == (bVar3 & 1)) {
        return;
      }
      *(byte *)(unaff_x19 + 0x32) = bVar3 & 1;
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(uVar9,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0385f31c;
        FUN_0391b78c(*(long *)(unaff_x19 + 0x40),*(char *)(unaff_x19 + 0x32) == '\0',0);
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_0391f968(uVar9,0,0);
      if ((uVar8 & 1) == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        FUN_0391b78c(*(long *)(unaff_x19 + 0x48),*(char *)(unaff_x19 + 0x32) == '\0',0);
        return;
      }
    }
  }
LAB_0385f31c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


