/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$AsReadOnly
ENTRY_POINT: 050a3d88
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__AsReadOnly
               (code *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong uVar6;
  uint uVar7;
  ulong unaff_x27;
  long unaff_x28;
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
  
  do {
    iVar4 = (*param_1)(param_2,param_3,param_4,param_5);
    if (iVar4 < 0) {
      uVar7 = (uint)unaff_x27;
      if ((*(uint *)(unaff_x22 + 0x18) <= uVar7) ||
         (uVar2 = uVar7 + 1, *(uint *)(unaff_x22 + 0x18) <= uVar2)) goto LAB_050a3e2c;
      uVar8 = *(undefined8 *)(unaff_x28 + 0x20);
      uVar10 = *(undefined8 *)(unaff_x28 + 0x38);
      uVar9 = *(undefined8 *)(unaff_x28 + 0x30);
      lVar3 = unaff_x22 + (long)(int)uVar2 * 0x20;
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(unaff_x28 + 0x28);
      *(undefined8 *)(lVar3 + 0x20) = uVar8;
      *(undefined8 *)(lVar3 + 0x38) = uVar10;
      *(undefined8 *)(lVar3 + 0x30) = uVar9;
      thunk_FUN_03afed3c(unaff_x25 + (long)(int)uVar2 * 0x20,0);
      unaff_x27 = (ulong)(uVar7 - 1);
      if ((int)(uVar7 - 1) < unaff_w21) goto LAB_050a3dd0;
    }
    else {
LAB_050a3dd0:
      uVar7 = *(uint *)(unaff_x22 + 0x18);
      uVar5 = unaff_x27 & 0xffffffff;
      uVar6 = unaff_x26;
      do {
        uVar2 = (int)uVar5 + 1;
        if (uVar7 <= uVar2) goto LAB_050a3e2c;
        lVar3 = unaff_x22 + (long)(int)uVar2 * 0x20;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000028;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
        *(undefined8 *)(lVar3 + 0x38) = in_stack_00000038;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000030;
        thunk_FUN_03afed3c(unaff_x25 + (long)(int)uVar2 * 0x20,0);
        if (uVar6 == unaff_x24) {
          return;
        }
        uVar7 = *(uint *)(unaff_x22 + 0x18);
        unaff_x26 = uVar6 + 1;
        if (uVar7 <= (uint)unaff_x26) goto LAB_050a3e2c;
        lVar3 = unaff_x22 + unaff_x26 * 0x20;
        unaff_x27 = uVar6 & 0xffffffff;
        in_stack_00000028 = *(undefined8 *)(lVar3 + 0x28);
        in_stack_00000020 = *(undefined8 *)(lVar3 + 0x20);
        in_stack_00000038 = *(undefined8 *)(lVar3 + 0x38);
        in_stack_00000030 = *(undefined8 *)(lVar3 + 0x30);
        bVar1 = (long)uVar6 < unaff_x23;
        uVar5 = uVar6;
        uVar6 = unaff_x26;
      } while (bVar1);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x27) {
LAB_050a3e2c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    unaff_x28 = unaff_x22 + (long)(int)(uint)unaff_x27 * 0x20;
    uVar9 = *(undefined8 *)(unaff_x28 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x28 + 0x20);
    uVar11 = *(undefined8 *)(unaff_x28 + 0x38);
    uVar10 = *(undefined8 *)(unaff_x28 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    param_3 = &stack0x00000060;
    param_1 = *(code **)(unaff_x20 + 0x18);
    param_2 = *(undefined8 *)(unaff_x20 + 0x40);
    param_4 = &stack0x00000040;
    param_5 = *(undefined8 *)(unaff_x20 + 0x28);
    in_stack_00000068 = in_stack_00000028;
    in_stack_00000060 = in_stack_00000020;
    in_stack_00000078 = in_stack_00000038;
    in_stack_00000070 = in_stack_00000030;
    in_stack_00000040 = uVar8;
    in_stack_00000048 = uVar9;
    in_stack_00000050 = uVar10;
    in_stack_00000058 = uVar11;
  } while( true );
}


