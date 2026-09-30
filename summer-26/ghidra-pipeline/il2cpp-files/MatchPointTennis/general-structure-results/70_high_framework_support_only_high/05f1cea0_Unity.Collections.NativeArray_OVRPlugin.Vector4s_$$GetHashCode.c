/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetHashCode
ENTRY_POINT: 05f1cea0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetHashCode
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  
  uVar7 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  do {
    uStack0000000000000130 = uVar6;
    uStack0000000000000138 = uVar7;
    uStack0000000000000140 = in_x9;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000290,&stack0x00000250,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w28;
      uVar5 = unaff_w25 + unaff_w24;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_05f1d0c4;
      lVar4 = unaff_x19 + (long)(int)uVar5 * (long)(int)unaff_x26;
      if (unaff_x21 == 0) goto LAB_05f1d0c8;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      iVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000290,&stack0x00000250,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar2) {
        uVar5 = unaff_w25 + uVar1;
LAB_05f1d050:
        if (uVar5 < *(uint *)(unaff_x19 + 0x18)) {
          lVar4 = unaff_x19 + (long)(int)uVar5 * 0x38;
          *(undefined8 *)(lVar4 + 0x50) = in_stack_00000240;
          *(undefined8 *)(lVar4 + 0x38) = in_stack_00000228;
          *(undefined8 *)(lVar4 + 0x30) = in_stack_00000220;
          *(undefined8 *)(lVar4 + 0x48) = in_stack_00000238;
          *(undefined8 *)(lVar4 + 0x40) = in_stack_00000230;
          *(undefined8 *)(lVar4 + 0x28) = in_stack_00000218;
          *(undefined8 *)(lVar4 + 0x20) = in_stack_00000210;
          thunk_FUN_044bb4b4(lVar4 + 0x28,0);
          return;
        }
        goto LAB_05f1d0c4;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_05f1d0c4;
      uVar11 = *(undefined8 *)(lVar4 + 0x38);
      uVar10 = *(undefined8 *)(lVar4 + 0x30);
      uVar7 = *(undefined8 *)(lVar4 + 0x48);
      uVar6 = *(undefined8 *)(lVar4 + 0x40);
      uVar9 = *(undefined8 *)(lVar4 + 0x28);
      uVar8 = *(undefined8 *)(lVar4 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + uVar1) goto LAB_05f1d0c4;
      lVar3 = unaff_x19 + (int)(unaff_w25 + uVar1) * unaff_x26;
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar4 + 0x50);
      *(undefined8 *)(lVar3 + 0x38) = uVar11;
      *(undefined8 *)(lVar3 + 0x30) = uVar10;
      *(undefined8 *)(lVar3 + 0x48) = uVar7;
      *(undefined8 *)(lVar3 + 0x40) = uVar6;
      *(undefined8 *)(lVar3 + 0x28) = uVar9;
      *(undefined8 *)(lVar3 + 0x20) = uVar8;
      thunk_FUN_044bb4b4(lVar3 + 0x28,0);
      if (unaff_w27 < (int)unaff_w24) goto LAB_05f1d050;
      unaff_w28 = unaff_w24 * 2;
      uVar1 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w28);
    uVar1 = unaff_w28 + in_stack_00000008._4_4_;
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar1)) {
LAB_05f1d0c4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar4 = unaff_x19 + (long)(int)uVar1 * (long)(int)unaff_x26;
    in_x9 = *(undefined8 *)(lVar4 + 0x50);
    uVar7 = *(undefined8 *)(lVar4 + 0x48);
    uVar6 = *(undefined8 *)(lVar4 + 0x40);
    if (unaff_x21 == 0) {
LAB_05f1d0c8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  } while( true );
}


