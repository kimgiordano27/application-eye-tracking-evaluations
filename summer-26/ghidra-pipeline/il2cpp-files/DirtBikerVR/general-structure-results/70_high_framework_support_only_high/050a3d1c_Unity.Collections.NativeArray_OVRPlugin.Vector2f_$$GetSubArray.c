/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetSubArray
ENTRY_POINT: 050a3d1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetSubArray(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  do {
    lVar2 = unaff_x22 + unaff_x26 * 0x20;
    uVar6 = param_1 & 0xffffffff;
    uStack0000000000000028 = *(undefined8 *)(lVar2 + 0x28);
    uStack0000000000000020 = *(undefined8 *)(lVar2 + 0x20);
    uStack0000000000000038 = *(undefined8 *)(lVar2 + 0x38);
    uStack0000000000000030 = *(undefined8 *)(lVar2 + 0x30);
    if (unaff_x23 <= (long)param_1) {
      do {
        uVar5 = (uint)uVar6;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_050a3e2c;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar2 = unaff_x22 + (long)(int)uVar5 * 0x20;
        uVar8 = *(undefined8 *)(lVar2 + 0x28);
        uVar7 = *(undefined8 *)(lVar2 + 0x20);
        uVar10 = *(undefined8 *)(lVar2 + 0x38);
        uVar9 = *(undefined8 *)(lVar2 + 0x30);
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        in_stack_00000068 = uStack0000000000000028;
        in_stack_00000060 = uStack0000000000000020;
        in_stack_00000078 = uStack0000000000000038;
        in_stack_00000070 = uStack0000000000000030;
        in_stack_00000040 = uVar7;
        in_stack_00000048 = uVar8;
        in_stack_00000050 = uVar9;
        in_stack_00000058 = uVar10;
        iVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        param_1 = uVar6;
        if (-1 < iVar4) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar5) ||
           (uVar1 = uVar5 + 1, *(uint *)(unaff_x22 + 0x18) <= uVar1)) goto LAB_050a3e2c;
        uVar7 = *(undefined8 *)(lVar2 + 0x20);
        uVar9 = *(undefined8 *)(lVar2 + 0x38);
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
        lVar3 = unaff_x22 + (long)(int)uVar1 * 0x20;
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(lVar3 + 0x20) = uVar7;
        *(undefined8 *)(lVar3 + 0x38) = uVar9;
        *(undefined8 *)(lVar3 + 0x30) = uVar8;
        thunk_FUN_03afed3c(unaff_x25 + (long)(int)uVar1 * 0x20,0);
        uVar6 = (ulong)(uVar5 - 1);
        param_1 = uVar6;
      } while (unaff_w21 <= (int)(uVar5 - 1));
      in_w9 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar5 = (int)param_1 + 1;
    if (in_w9 <= uVar5) break;
    lVar2 = unaff_x22 + (long)(int)uVar5 * 0x20;
    *(undefined8 *)(lVar2 + 0x28) = uStack0000000000000028;
    *(undefined8 *)(lVar2 + 0x20) = uStack0000000000000020;
    *(undefined8 *)(lVar2 + 0x38) = uStack0000000000000038;
    *(undefined8 *)(lVar2 + 0x30) = uStack0000000000000030;
    thunk_FUN_03afed3c(unaff_x25 + (long)(int)uVar5 * 0x20,0);
    if (unaff_x26 == unaff_x24) {
      return;
    }
    in_w9 = *(uint *)(unaff_x22 + 0x18);
    uVar6 = unaff_x26 + 1;
    param_1 = unaff_x26;
    unaff_x26 = uVar6;
  } while ((uint)uVar6 < in_w9);
LAB_050a3e2c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


