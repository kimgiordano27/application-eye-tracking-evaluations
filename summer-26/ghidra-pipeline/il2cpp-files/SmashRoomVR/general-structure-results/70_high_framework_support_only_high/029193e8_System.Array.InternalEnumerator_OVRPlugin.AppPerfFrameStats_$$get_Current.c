/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 029193e8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current
               (undefined1 param_1 [16])

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_x9;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  
  uVar7 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  do {
    uStack0000000000000138 = in_stack_00000098;
    uStack0000000000000130 = in_stack_00000090;
    uStack0000000000000140 = in_stack_000000a0;
    uStack0000000000000150 = uVar3;
    uStack0000000000000158 = uVar7;
    uStack0000000000000160 = in_x9;
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w28;
      uVar6 = unaff_w25 + unaff_w24;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_0291956c;
      lVar5 = unaff_x19 + (long)(int)uVar6 * (long)unaff_w26;
      uVar3 = *(undefined8 *)(lVar5 + 0x30);
      uVar8 = *(undefined8 *)(lVar5 + 0x28);
      uVar7 = *(undefined8 *)(lVar5 + 0x20);
      if (unaff_x21 == 0) goto LAB_02919570;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      uStack0000000000000158 = in_stack_00000118;
      uStack0000000000000150 = in_stack_00000110;
      uStack0000000000000160 = in_stack_00000120;
      uStack0000000000000130 = uVar7;
      uStack0000000000000138 = uVar8;
      uStack0000000000000140 = uVar3;
      iVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar2) {
        uVar6 = unaff_w25 + uVar1;
LAB_02919518:
        if (uVar6 < *(uint *)(unaff_x19 + 0x18)) {
          lVar5 = unaff_x19 + (long)(int)uVar6 * 0x18;
          *(undefined8 *)(lVar5 + 0x30) = in_stack_00000120;
          *(undefined8 *)(lVar5 + 0x28) = in_stack_00000118;
          *(undefined8 *)(lVar5 + 0x20) = in_stack_00000110;
          return;
        }
        goto LAB_0291956c;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_0291956c;
      uVar7 = *(undefined8 *)(lVar5 + 0x28);
      uVar3 = *(undefined8 *)(lVar5 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + uVar1) goto LAB_0291956c;
      lVar4 = unaff_x19 + (long)(int)(unaff_w25 + uVar1) * (long)unaff_w26;
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 *)(lVar4 + 0x28) = uVar7;
      *(undefined8 *)(lVar4 + 0x20) = uVar3;
      if (unaff_w27 < (int)unaff_w24) goto LAB_02919518;
      unaff_w28 = unaff_w24 * 2;
      uVar1 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w28);
    uVar1 = unaff_w28 + in_stack_00000008._4_4_;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) {
LAB_0291956c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar5 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
    in_x9 = *(undefined8 *)(lVar5 + 0x30);
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    uVar3 = *(undefined8 *)(lVar5 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_0291956c;
    lVar5 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
    in_stack_000000a0 = *(undefined8 *)(lVar5 + 0x30);
    in_stack_00000098 = *(undefined8 *)(lVar5 + 0x28);
    in_stack_00000090 = *(undefined8 *)(lVar5 + 0x20);
    if (unaff_x21 == 0) {
LAB_02919570:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
  } while( true );
}


