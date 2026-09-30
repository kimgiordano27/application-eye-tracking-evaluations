/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Read
ENTRY_POINT: 06371a48
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Read
               (long *param_1,long *param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  
  if (param_2 == param_3) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090(lVar3);
      }
      lVar3 = thunk_FUN_03ac73c0(param_2,lVar3);
      if (lVar3 != 0) {
        lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03ac4090(lVar3);
        }
        lVar3 = thunk_FUN_03ac73c0(param_3,lVar3);
        if (lVar3 != 0) {
          lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03ac4090(lVar3);
          }
          if (*(long *)(*param_2 + 0x40) == *(long *)(lVar3 + 0x40)) {
            puVar2 = (undefined8 *)thunk_FUN_03ac7604(param_2);
            uVar5 = puVar2[1];
            uVar4 = *puVar2;
            uVar7 = puVar2[3];
            uVar6 = puVar2[2];
            uVar9 = puVar2[5];
            uVar8 = puVar2[4];
            lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03ac4090(lVar3);
            }
            param_2 = param_3;
            if (*(long *)(*param_3 + 0x40) == *(long *)(lVar3 + 0x40)) {
              puVar2 = (undefined8 *)thunk_FUN_03ac7604();
              in_stack_00000068 = puVar2[1];
              in_stack_00000060 = *puVar2;
              in_stack_00000078 = puVar2[3];
              in_stack_00000070 = puVar2[2];
              in_stack_00000088 = puVar2[5];
              in_stack_00000080 = puVar2[4];
              in_stack_00000090 = uVar4;
              in_stack_00000098 = uVar5;
              in_stack_000000a0 = uVar6;
              in_stack_000000a8 = uVar7;
              in_stack_000000b0 = uVar8;
              in_stack_000000b8 = uVar9;
              uVar1 = (**(code **)(*param_1 + 0x1b8))
                                (param_1,&stack0x00000090,&stack0x00000060,
                                 *(undefined8 *)(*param_1 + 0x1c0));
              goto LAB_06371bbc;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(param_2);
        }
      }
      FUN_0677195c(2,0);
      uVar1 = 0;
    }
  }
LAB_06371bbc:
  return uVar1 & 1;
}


