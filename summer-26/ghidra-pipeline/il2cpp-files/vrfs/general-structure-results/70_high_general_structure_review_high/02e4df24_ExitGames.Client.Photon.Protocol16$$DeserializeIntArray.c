/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeIntArray
ENTRY_POINT: 02e4df24
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeIntArray
               (float param_1,float param_2,float param_3,float param_4,long param_5,long param_6)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
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
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  fVar7 = param_2;
  fVar8 = param_3;
  fVar9 = param_4;
  if ((bRam00000000072369d4 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e52cd8);
    thunk_FUN_0159f088(PTR_DAT_06dd2ce8);
    bRam00000000072369d4 = 1;
  }
  puVar2 = PTR_DAT_06dd2ce8;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  if ((param_6 == 0) || (*(int *)(param_6 + 0x18) < 4)) {
    if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_0486672c(*(undefined8 *)puVar2,0);
    return;
  }
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar6 = FUN_04f1d548(param_5,0);
  in_stack_00000080 = CONCAT44(fVar7,uVar6);
  in_stack_00000088 = CONCAT44(fVar9,fVar8);
  fVar7 = (float)FUN_051dc0c8(&stack0x00000080,0);
  fVar8 = (float)FUN_051dc0d8(&stack0x00000080,0);
  fVar9 = (float)FUN_051dc1a8(&stack0x00000080,0);
  fVar10 = (float)FUN_051dc1b8(&stack0x00000080,0);
  uVar1 = *(uint *)(param_6 + 0x18);
  if (uVar1 != 0) {
    *(float *)(param_6 + 0x20) = param_1 + fVar7;
    *(float *)(param_6 + 0x24) = param_2 + fVar8;
    *(undefined4 *)(param_6 + 0x28) = 0;
    if (uVar1 != 1) {
      *(float *)(param_6 + 0x2c) = param_1 + fVar7;
      *(float *)(param_6 + 0x30) = fVar10 - param_4;
      *(undefined4 *)(param_6 + 0x34) = 0;
      if (2 < uVar1) {
        *(float *)(param_6 + 0x38) = fVar9 - param_3;
        *(float *)(param_6 + 0x3c) = fVar10 - param_4;
        *(undefined4 *)(param_6 + 0x40) = 0;
        if (uVar1 != 3) {
          *(float *)(param_6 + 0x44) = fVar9 - param_3;
          *(float *)(param_6 + 0x48) = param_2 + fVar8;
          *(undefined4 *)(param_6 + 0x4c) = 0;
          FUN_04f1b8ac(param_5,0);
          uVar4 = 0;
          in_stack_00000058 = in_stack_00000018;
          in_stack_00000050 = in_stack_00000010;
          in_stack_00000068 = in_stack_00000028;
          in_stack_00000060 = in_stack_00000020;
          in_stack_00000048 = in_stack_00000008;
          in_stack_00000040 = in_stack_00000000;
          in_stack_00000078 = in_stack_00000038;
          in_stack_00000070 = in_stack_00000030;
          uVar3 = (ulong)*(uint *)(param_6 + 0x18);
          puVar5 = (undefined4 *)(param_6 + 0x28);
          while (uVar4 < uVar3) {
            uVar11 = puVar5[-1];
            uVar12 = *puVar5;
            uVar6 = FUN_051e7fd0(puVar5[-2],&stack0x00000040,0);
            uVar3 = (ulong)*(uint *)(param_6 + 0x18);
            if (uVar3 <= uVar4) break;
            uVar4 = uVar4 + 1;
            puVar5[-2] = uVar6;
            puVar5[-1] = uVar11;
            *puVar5 = uVar12;
            puVar5 = puVar5 + 3;
            if (uVar4 == 4) {
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


