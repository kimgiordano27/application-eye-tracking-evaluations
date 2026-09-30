/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 029194f4
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


void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset
               (undefined8 param_1,undefined1 param_2 [16])

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_w9;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  uVar7 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  do {
    lVar5 = unaff_x19 + (long)(int)in_w9 * (long)unaff_w26;
    *(undefined8 *)(lVar5 + 0x30) = param_1;
    *(undefined8 *)(lVar5 + 0x28) = uVar7;
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    if (unaff_w27 < (int)unaff_w28) {
LAB_02919518:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar5 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        *(undefined8 *)(lVar5 + 0x30) = in_stack_00000120;
        *(undefined8 *)(lVar5 + 0x28) = in_stack_00000118;
        *(undefined8 *)(lVar5 + 0x20) = in_stack_00000110;
        return;
      }
      break;
    }
    uVar1 = unaff_w28 * 2;
    if ((int)uVar1 < unaff_w23) {
      uVar2 = uVar1 + in_stack_00000008._4_4_;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar2 - 1) break;
      lVar5 = unaff_x19 + (long)(int)(uVar2 - 1) * (long)unaff_w26;
      uVar6 = *(undefined8 *)(lVar5 + 0x30);
      uVar9 = *(undefined8 *)(lVar5 + 0x28);
      uVar7 = *(undefined8 *)(lVar5 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar2) break;
      lVar5 = unaff_x19 + (long)(int)uVar2 * (long)unaff_w26;
      uVar4 = *(undefined8 *)(lVar5 + 0x30);
      uVar10 = *(undefined8 *)(lVar5 + 0x28);
      uVar8 = *(undefined8 *)(lVar5 + 0x20);
      if (unaff_x21 == 0) goto LAB_02919570;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      in_stack_00000130 = uVar8;
      in_stack_00000138 = uVar10;
      in_stack_00000140 = uVar4;
      in_stack_00000150 = uVar7;
      in_stack_00000158 = uVar9;
      in_stack_00000160 = uVar6;
      uVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar1 = uVar1 | uVar2 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + uVar1;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) break;
    lVar5 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
    uVar6 = *(undefined8 *)(lVar5 + 0x30);
    uVar9 = *(undefined8 *)(lVar5 + 0x28);
    uVar7 = *(undefined8 *)(lVar5 + 0x20);
    if (unaff_x21 == 0) {
LAB_02919570:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    in_stack_00000158 = in_stack_00000118;
    in_stack_00000150 = in_stack_00000110;
    in_stack_00000160 = in_stack_00000120;
    in_stack_00000130 = uVar7;
    in_stack_00000138 = uVar9;
    in_stack_00000140 = uVar6;
    iVar3 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar3) {
      unaff_w29 = unaff_w25 + unaff_w28;
      goto LAB_02919518;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) break;
    param_1 = *(undefined8 *)(lVar5 + 0x30);
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    in_w9 = unaff_w25 + unaff_w28;
    unaff_w28 = uVar1;
  } while (in_w9 < *(uint *)(unaff_x19 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


