/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 050a546c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  if (param_2 < param_3) {
    if (param_1 == 0) {
LAB_050a55fc:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar8 = (long)param_2;
    do {
      uVar7 = *(uint *)(param_1 + 0x18);
      uVar2 = uVar8 + 1;
      if (uVar7 <= (uint)uVar2) {
LAB_050a55f8:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar4 = param_1 + uVar2 * 0x18;
      uStack0000000000000028 = *(undefined8 *)(lVar4 + 0x28);
      uStack0000000000000020 = *(undefined8 *)(lVar4 + 0x20);
      uStack0000000000000030 = *(undefined8 *)(lVar4 + 0x30);
      if ((long)param_2 <= (long)uVar8) {
        do {
          uVar7 = (uint)uVar8;
          if (*(uint *)(param_1 + 0x18) <= uVar7) goto LAB_050a55f8;
          if (param_4 == 0) goto LAB_050a55fc;
          lVar4 = param_1 + (long)(int)uVar7 * 0x18;
          uVar10 = *(undefined8 *)(lVar4 + 0x28);
          uVar9 = *(undefined8 *)(lVar4 + 0x20);
          uVar5 = *(undefined8 *)(lVar4 + 0x30);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          in_stack_00000070 = uStack0000000000000030;
          in_stack_00000068 = uStack0000000000000028;
          in_stack_00000060 = uStack0000000000000020;
          in_stack_00000040 = uVar9;
          in_stack_00000048 = uVar10;
          in_stack_00000050 = uVar5;
          iVar3 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&stack0x00000060,&stack0x00000040,
                             *(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar3) break;
          if ((*(uint *)(param_1 + 0x18) <= uVar7) ||
             (uVar1 = uVar7 + 1, *(uint *)(param_1 + 0x18) <= uVar1)) goto LAB_050a55f8;
          lVar6 = param_1 + (long)(int)uVar1 * 0x18;
          uVar9 = *(undefined8 *)(lVar4 + 0x20);
          uVar5 = *(undefined8 *)(lVar4 + 0x30);
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
          *(undefined8 *)(lVar6 + 0x20) = uVar9;
          *(undefined8 *)(lVar6 + 0x30) = uVar5;
          thunk_FUN_03afed3c(param_1 + 0x20 + (long)(int)uVar1 * 0x18 + 8,0);
          uVar8 = (ulong)(uVar7 - 1);
        } while (param_2 <= (int)(uVar7 - 1));
        uVar7 = *(uint *)(param_1 + 0x18);
      }
      uVar1 = (int)uVar8 + 1;
      if (uVar7 <= uVar1) goto LAB_050a55f8;
      lVar4 = param_1 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar4 + 0x28) = uStack0000000000000028;
      *(undefined8 *)(lVar4 + 0x20) = uStack0000000000000020;
      *(undefined8 *)(lVar4 + 0x30) = uStack0000000000000030;
      thunk_FUN_03afed3c(param_1 + 0x20 + (long)(int)uVar1 * 0x18 + 8,0);
      uVar8 = uVar2;
    } while (uVar2 != (long)param_3);
  }
  return;
}


