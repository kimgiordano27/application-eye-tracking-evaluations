/*
FUNCTION_NAME: UnityEngine.PhysicsScene$$GetHashCode
ENTRY_POINT: 0385f03c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_PhysicsScene__GetHashCode
               (ulong param_1,undefined8 param_2,undefined1 param_3 [16],undefined4 param_4,
               long param_5,long param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x21;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x21 + 0x680) = 1;
  }
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*(char *)(param_5 + 0x31) == '\0') {
    if (*(long *)(param_5 + 0x38) == 0) goto LAB_0385f31c;
    iVar4 = FUN_03afa68c(*(long *)(param_5 + 0x38),0);
    if (iVar4 == 2) {
      fVar21 = *(float *)(param_5 + 0x50);
      fVar7 = (float)FUN_03925cf4(0);
      fVar21 = fVar21 + fVar7;
      uVar12 = 0x3f000000;
      *(float *)(param_5 + 0x50) = fVar21;
      if (0.5 <= fVar21) {
        *(undefined4 *)(param_5 + 0x50) = 0;
        if ((*(long *)(param_5 + 0x38) != 0) &&
           (lVar5 = FUN_0391c27c(*(long *)(param_5 + 0x38),0), param_6 != 0)) {
          uVar13 = FUN_03928d34(param_6,0);
          uVar17 = uVar12;
          uVar11 = param_4;
          uVar8 = FUN_039291ac(param_6,0);
          if (lVar5 != 0) {
            uVar18 = uVar17;
            uVar19 = uVar11;
            uVar14 = FUN_03928d34(lVar5,0);
            uVar15 = uVar18;
            uVar20 = uVar19;
            uVar9 = FUN_039291ac(lVar5,0);
            uVar16 = uVar12;
            uVar2 = param_4;
            uVar10 = FUN_035a0b10(uVar13,0);
            in_stack_00000088 = uVar2;
            in_stack_00000080 = CONCAT44(uVar16,uVar10);
            uVar16 = uVar17;
            uVar2 = uVar11;
            uVar10 = FUN_035a0b10(uVar8,0);
            in_stack_00000078 = uVar2;
            in_stack_00000070 = CONCAT44(uVar16,uVar10);
            uVar16 = uVar18;
            uVar2 = uVar19;
            uVar10 = FUN_035a0b10(uVar14,0);
            in_stack_00000068 = uVar2;
            in_stack_00000060 = CONCAT44(uVar16,uVar10);
            uVar6 = FUN_03857c34(param_2,&stack0x00000080,&stack0x00000070,&stack0x00000060);
            if ((uVar6 & 1) == 0) {
              uVar8 = FUN_035a0b10(uVar8,0);
              in_stack_00000058 = uVar11;
              in_stack_00000050 = CONCAT44(uVar17,uVar8);
              uVar11 = FUN_035a0b10(uVar9,0);
              in_stack_00000048 = uVar20;
              in_stack_00000040 = CONCAT44(uVar15,uVar11);
              uVar6 = FUN_03857d04(&stack0x00000050,&stack0x00000040);
              if ((uVar6 & 1) == 0) {
                uVar11 = FUN_035a0b10(uVar13 & 0xffffffff,0);
                in_stack_00000038 = param_4;
                in_stack_00000030 = CONCAT44(uVar12,uVar11);
                uVar12 = FUN_035a0b10(uVar14,0);
                in_stack_00000028 = uVar19;
                in_stack_00000020 = CONCAT44(uVar18,uVar12);
                bVar3 = FUN_03857da8(&stack0x00000030,&stack0x00000020);
              }
              else {
                bVar3 = 0;
              }
            }
            else {
              bVar3 = 1;
            }
            if (*(byte *)(param_5 + 0x32) == (bVar3 & 1)) {
              return;
            }
            *(byte *)(param_5 + 0x32) = bVar3 & 1;
            puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            uVar14 = *(undefined8 *)(param_5 + 0x40);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar13 = FUN_0391f968(uVar14,0,0);
            if ((uVar13 & 1) != 0) {
              if (*(long *)(param_5 + 0x40) == 0) goto LAB_0385f31c;
              FUN_0391b78c(*(long *)(param_5 + 0x40),*(char *)(param_5 + 0x32) == '\0',0);
            }
            uVar14 = *(undefined8 *)(param_5 + 0x48);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar13 = FUN_0391f968(uVar14,0,0);
            if ((uVar13 & 1) == 0) {
              return;
            }
            if (*(long *)(param_5 + 0x48) != 0) {
              FUN_0391b78c(*(long *)(param_5 + 0x48),*(char *)(param_5 + 0x32) == '\0',0);
              return;
            }
          }
        }
LAB_0385f31c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
  }
  return;
}


