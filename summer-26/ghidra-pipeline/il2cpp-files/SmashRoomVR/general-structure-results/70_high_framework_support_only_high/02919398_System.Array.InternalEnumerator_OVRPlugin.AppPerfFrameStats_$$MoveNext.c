/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext
ENTRY_POINT: 02919398
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


void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext(void)

{
  uint uVar1;
  int iVar2;
  uint in_w8;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
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
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  do {
    lVar3 = unaff_x19 + (long)(int)in_w8 * (long)unaff_w26;
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    uVar8 = *(undefined8 *)(lVar3 + 0x28);
    uVar7 = *(undefined8 *)(lVar3 + 0x20);
    uStack00000000000000d0 = uVar7;
    uStack00000000000000d8 = uVar8;
    uStack00000000000000e0 = uVar4;
    if (unaff_x21 == 0) {
LAB_02919570:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    in_stack_00000158 = in_stack_000000f8;
    in_stack_00000150 = in_stack_000000f0;
    in_stack_00000160 = in_stack_00000100;
    in_stack_00000130 = uVar7;
    in_stack_00000138 = uVar8;
    in_stack_00000140 = uVar4;
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w28;
      uVar6 = unaff_w25 + unaff_w24;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_0291956c;
      lVar3 = unaff_x19 + (long)(int)uVar6 * (long)unaff_w26;
      uVar4 = *(undefined8 *)(lVar3 + 0x30);
      uVar8 = *(undefined8 *)(lVar3 + 0x28);
      uVar7 = *(undefined8 *)(lVar3 + 0x20);
      uStack00000000000000d0 = uVar7;
      uStack00000000000000d8 = uVar8;
      uStack00000000000000e0 = uVar4;
      if (unaff_x21 == 0) goto LAB_02919570;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      in_stack_00000158 = in_stack_00000118;
      in_stack_00000150 = in_stack_00000110;
      in_stack_00000160 = in_stack_00000120;
      in_stack_00000130 = uVar7;
      in_stack_00000138 = uVar8;
      in_stack_00000140 = uVar4;
      iVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar2) {
        uVar6 = unaff_w25 + uVar1;
LAB_02919518:
        if (uVar6 < *(uint *)(unaff_x19 + 0x18)) {
          lVar3 = unaff_x19 + (long)(int)uVar6 * 0x18;
          *(undefined8 *)(lVar3 + 0x30) = in_stack_00000120;
          *(undefined8 *)(lVar3 + 0x28) = in_stack_00000118;
          *(undefined8 *)(lVar3 + 0x20) = in_stack_00000110;
          return;
        }
        goto LAB_0291956c;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_0291956c;
      uVar7 = *(undefined8 *)(lVar3 + 0x28);
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + uVar1) goto LAB_0291956c;
      lVar5 = unaff_x19 + (long)(int)(unaff_w25 + uVar1) * (long)unaff_w26;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(lVar5 + 0x28) = uVar7;
      *(undefined8 *)(lVar5 + 0x20) = uVar4;
      if (unaff_w27 < (int)unaff_w24) goto LAB_02919518;
      unaff_w28 = unaff_w24 * 2;
      uVar1 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w28);
    in_w8 = unaff_w28 + in_stack_00000008._4_4_;
    if (*(uint *)(unaff_x19 + 0x18) <= in_w8 - 1) break;
    lVar3 = unaff_x19 + (long)(int)(in_w8 - 1) * (long)unaff_w26;
    in_stack_00000100 = *(undefined8 *)(lVar3 + 0x30);
    in_stack_000000f8 = *(undefined8 *)(lVar3 + 0x28);
    in_stack_000000f0 = *(undefined8 *)(lVar3 + 0x20);
  } while (in_w8 < *(uint *)(unaff_x19 + 0x18));
LAB_0291956c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


