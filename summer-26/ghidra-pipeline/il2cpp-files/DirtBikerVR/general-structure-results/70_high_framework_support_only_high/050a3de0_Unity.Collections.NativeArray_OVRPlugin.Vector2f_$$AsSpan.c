/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$AsSpan
ENTRY_POINT: 050a3de0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__AsSpan(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 in_CY;
  int iVar5;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  
  while (!(bool)in_CY) {
    lVar4 = unaff_x22 + (long)(int)in_w8 * 0x20;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000028;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000020;
    *(undefined8 *)(lVar4 + 0x38) = in_stack_00000038;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000030;
    thunk_FUN_03afed3c(unaff_x25 + (long)(int)in_w8 * 0x20,0);
    if (unaff_x26 == unaff_x24) {
      return;
    }
    uVar6 = *(uint *)(unaff_x22 + 0x18);
    uVar2 = unaff_x26 + 1;
    if (uVar6 <= (uint)uVar2) break;
    lVar4 = unaff_x22 + uVar2 * 0x20;
    uVar7 = unaff_x26 & 0xffffffff;
    in_stack_00000028 = *(undefined8 *)(lVar4 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar4 + 0x20);
    in_stack_00000038 = *(undefined8 *)(lVar4 + 0x38);
    in_stack_00000030 = *(undefined8 *)(lVar4 + 0x30);
    if (unaff_x23 <= (long)unaff_x26) {
      do {
        uVar6 = (uint)uVar7;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_050a3e2c;
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar4 = unaff_x22 + (long)(int)uVar6 * 0x20;
        uVar9 = *(undefined8 *)(lVar4 + 0x28);
        uVar8 = *(undefined8 *)(lVar4 + 0x20);
        uVar11 = *(undefined8 *)(lVar4 + 0x38);
        uVar10 = *(undefined8 *)(lVar4 + 0x30);
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        in_stack_00000040 = uVar8;
        in_stack_00000048 = uVar9;
        in_stack_00000050 = uVar10;
        in_stack_00000058 = uVar11;
        in_stack_00000060 = in_stack_00000020;
        in_stack_00000068 = in_stack_00000028;
        in_stack_00000070 = in_stack_00000030;
        in_stack_00000078 = in_stack_00000038;
        iVar5 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000060,&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        unaff_x26 = uVar7;
        if (-1 < iVar5) break;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar6) ||
           (uVar1 = uVar6 + 1, *(uint *)(unaff_x22 + 0x18) <= uVar1)) goto LAB_050a3e2c;
        uVar8 = *(undefined8 *)(lVar4 + 0x20);
        uVar10 = *(undefined8 *)(lVar4 + 0x38);
        uVar9 = *(undefined8 *)(lVar4 + 0x30);
        lVar3 = unaff_x22 + (long)(int)uVar1 * 0x20;
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
        *(undefined8 *)(lVar3 + 0x20) = uVar8;
        *(undefined8 *)(lVar3 + 0x38) = uVar10;
        *(undefined8 *)(lVar3 + 0x30) = uVar9;
        thunk_FUN_03afed3c(unaff_x25 + (long)(int)uVar1 * 0x20,0);
        uVar7 = (ulong)(uVar6 - 1);
        unaff_x26 = uVar7;
      } while (unaff_w21 <= (int)(uVar6 - 1));
      uVar6 = *(uint *)(unaff_x22 + 0x18);
    }
    in_w8 = (int)unaff_x26 + 1;
    unaff_x26 = uVar2;
    in_CY = uVar6 <= in_w8;
  }
LAB_050a3e2c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


