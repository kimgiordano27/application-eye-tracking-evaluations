/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 050a3b54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint in_w9;
  uint in_w10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  uint unaff_w28;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
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
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  while ((in_w10 < (uint)param_1 && (in_w9 < (uint)param_1))) {
    if (unaff_x21 == 0) {
LAB_050a3cb8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar1 = unaff_x19 + (long)(int)in_w10 * 0x20;
    lVar2 = unaff_x19 + (long)(int)in_w9 * 0x20;
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    uVar11 = *(undefined8 *)(lVar1 + 0x38);
    uVar10 = *(undefined8 *)(lVar1 + 0x30);
    uVar9 = *(undefined8 *)(lVar2 + 0x28);
    uVar7 = *(undefined8 *)(lVar2 + 0x20);
    uVar13 = *(undefined8 *)(lVar2 + 0x38);
    uVar12 = *(undefined8 *)(lVar2 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    in_stack_00000090 = uVar7;
    in_stack_00000098 = uVar9;
    in_stack_000000a0 = uVar12;
    in_stack_000000a8 = uVar13;
    in_stack_000000b0 = uVar6;
    in_stack_000000b8 = uVar8;
    in_stack_000000c0 = uVar10;
    in_stack_000000c8 = uVar11;
    uVar3 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                       *(undefined8 *)(unaff_x21 + 0x28));
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_w28 = unaff_w28 | uVar3 >> 0x1f;
    uVar3 = unaff_w24;
    do {
      unaff_w24 = unaff_w28;
      uVar5 = unaff_w25 + unaff_w24;
      if ((uint)param_1 <= uVar5) goto LAB_050a3cb4;
      if (unaff_x21 == 0) goto LAB_050a3cb8;
      lVar1 = unaff_x19 + (long)(int)uVar5 * 0x20;
      uVar7 = *(undefined8 *)(lVar1 + 0x28);
      uVar6 = *(undefined8 *)(lVar1 + 0x20);
      uVar9 = *(undefined8 *)(lVar1 + 0x38);
      uVar8 = *(undefined8 *)(lVar1 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
                    /* try { // try from 050a3bf8 to 051a3bfb has its CatchHandler @ 050a3c08 */
                    /* try { // try from 050a3bfc to 051a3c33 has its CatchHandler @ 050a3728 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a3bf8 with catch @ 050a3c08
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a3b18 with catch @ 050a3c0c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a3b34 with catch @ 050a3c10
                        */
      in_stack_000000b8 = in_stack_00000078;
      in_stack_000000b0 = in_stack_00000070;
      in_stack_000000c8 = in_stack_00000088;
      in_stack_000000c0 = in_stack_00000080;
      in_stack_00000090 = uVar6;
      in_stack_00000098 = uVar7;
      in_stack_000000a0 = uVar8;
      in_stack_000000a8 = uVar9;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a3a4c with catch @ 050a3c14
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 050a3a98 with catch @ 050a3c18
                        */
      iVar4 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar4) {
        uVar5 = unaff_w25 + uVar3;
LAB_050a3c6c:
        if (uVar5 < *(uint *)(unaff_x19 + 0x18)) {
          lVar1 = unaff_x19 + (long)(int)uVar5 * 0x20;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000078;
          *(undefined8 *)(lVar1 + 0x20) = in_stack_00000070;
          *(undefined8 *)(lVar1 + 0x38) = in_stack_00000088;
          *(undefined8 *)(lVar1 + 0x30) = in_stack_00000080;
          thunk_FUN_03afed3c(lVar1 + 0x20,0);
          return;
        }
        goto LAB_050a3cb4;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar5) ||
         (uVar3 = unaff_w25 + uVar3, *(uint *)(unaff_x19 + 0x18) <= uVar3)) goto LAB_050a3cb4;
      uVar8 = *(undefined8 *)(lVar1 + 0x20);
      uVar7 = *(undefined8 *)(lVar1 + 0x38);
      uVar6 = *(undefined8 *)(lVar1 + 0x30);
      lVar2 = unaff_x19 + (long)(int)uVar3 * 0x20;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar8;
      *(undefined8 *)(lVar2 + 0x38) = uVar7;
      *(undefined8 *)(lVar2 + 0x30) = uVar6;
      thunk_FUN_03afed3c(unaff_x27 + (long)(int)uVar3 * 0x20,0);
      if (unaff_w26 < (int)unaff_w24) goto LAB_050a3c6c;
      unaff_w28 = unaff_w24 * 2;
      param_1 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar3 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w28);
    in_w9 = unaff_w28 + in_stack_00000008._4_4_;
    in_w10 = in_w9 - 1;
  }
LAB_050a3cb4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


