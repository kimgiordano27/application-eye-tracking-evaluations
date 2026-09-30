/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 050a52c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Dispose(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint in_w9;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar6;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  do {
    lVar4 = unaff_x19 + (long)(int)in_w9 * (long)unaff_w26;
    uStack0000000000000068 = *(undefined8 *)(param_1 + 0x28);
    uStack0000000000000060 = *(undefined8 *)(param_1 + 0x20);
    uStack0000000000000070 = *(undefined8 *)(param_1 + 0x30);
    uStack0000000000000048 = *(undefined8 *)(lVar4 + 0x28);
    uStack0000000000000040 = *(undefined8 *)(lVar4 + 0x20);
    uStack0000000000000050 = *(undefined8 *)(lVar4 + 0x30);
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    in_stack_000000d0 = uStack0000000000000070;
    in_stack_000000c8 = uStack0000000000000068;
    in_stack_000000c0 = uStack0000000000000060;
    in_stack_000000a8 = uStack0000000000000048;
    in_stack_000000a0 = uStack0000000000000040;
    in_stack_000000b0 = uStack0000000000000050;
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000c0,&stack0x000000a0,
                       *(undefined8 *)(unaff_x21 + 0x28));
    uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_w29 = unaff_w29 | uVar1 >> 0x1f;
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w29;
      uVar6 = unaff_w25 + unaff_w24;
      if ((uint)uVar3 <= uVar6) goto LAB_050a5450;
      if (unaff_x21 == 0) goto LAB_050a5454;
      lVar4 = unaff_x19 + (long)(int)uVar6 * (long)unaff_w26;
      uVar8 = *(undefined8 *)(lVar4 + 0x28);
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      uVar3 = *(undefined8 *)(lVar4 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      in_stack_000000d0 = in_stack_00000090;
      in_stack_000000c8 = in_stack_00000088;
      in_stack_000000c0 = in_stack_00000080;
      in_stack_000000a0 = uVar7;
      in_stack_000000a8 = uVar8;
      in_stack_000000b0 = uVar3;
      iVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000c0,&stack0x000000a0,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar2) {
        uVar6 = unaff_w25 + uVar1;
LAB_050a53fc:
        if (uVar6 < *(uint *)(unaff_x19 + 0x18)) {
          lVar4 = unaff_x19 + (long)(int)uVar6 * 0x18;
          *(undefined8 *)(lVar4 + 0x28) = in_stack_00000088;
          *(undefined8 *)(lVar4 + 0x20) = in_stack_00000080;
          *(undefined8 *)(lVar4 + 0x30) = in_stack_00000090;
          thunk_FUN_03afed3c(lVar4 + 0x28,0);
          return;
        }
        goto LAB_050a5450;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar6) ||
         (uVar1 = unaff_w25 + uVar1, *(uint *)(unaff_x19 + 0x18) <= uVar1)) goto LAB_050a5450;
      lVar5 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
      uVar7 = *(undefined8 *)(lVar4 + 0x28);
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
      *(undefined8 *)(lVar5 + 0x28) = uVar7;
      *(undefined8 *)(lVar5 + 0x20) = uVar3;
      thunk_FUN_03afed3c(in_stack_00000018 + (long)(int)uVar1 * (long)unaff_w26 + 8,0);
      if (unaff_w27 < (int)unaff_w24) goto LAB_050a53fc;
      unaff_w29 = unaff_w24 * 2;
      uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar1 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w29);
    in_w9 = unaff_w29 + in_stack_00000010._4_4_;
    if (((uint)uVar3 <= in_w9 - 1) || ((uint)uVar3 <= in_w9)) {
LAB_050a5450:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (unaff_x21 == 0) {
LAB_050a5454:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    param_1 = unaff_x19 + (long)(int)(in_w9 - 1) * (long)unaff_w26;
    param_2 = *(long *)(unaff_x20 + 0x20);
  } while( true );
}


