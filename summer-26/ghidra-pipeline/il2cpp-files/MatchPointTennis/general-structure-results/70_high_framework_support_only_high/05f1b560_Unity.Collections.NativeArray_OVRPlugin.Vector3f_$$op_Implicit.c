/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$op_Implicit
ENTRY_POINT: 05f1b560
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


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__op_Implicit(void)

{
  undefined1 in_CY;
  uint uVar1;
  int iVar2;
  long lVar3;
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
  uint unaff_w29;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  do {
    uVar5 = unaff_w28;
    if ((bool)in_CY) {
LAB_05f1b6a8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar4 = unaff_x19 + (long)(int)unaff_w29 * (long)(int)unaff_x26;
    uVar9 = *(undefined8 *)(lVar4 + 0x38);
    uVar8 = *(undefined8 *)(lVar4 + 0x30);
    uVar7 = *(undefined8 *)(lVar4 + 0x48);
    uVar6 = *(undefined8 *)(lVar4 + 0x40);
    uVar11 = *(undefined8 *)(lVar4 + 0x28);
    uVar10 = *(undefined8 *)(lVar4 + 0x20);
    if (unaff_x21 == 0) {
LAB_05f1b6ac:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    in_stack_000001c0 = uVar10;
    in_stack_000001c8 = uVar11;
    in_stack_000001d0 = uVar8;
    in_stack_000001d8 = uVar9;
    in_stack_000001e0 = uVar6;
    in_stack_000001e8 = uVar7;
    iVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000001f0,&stack0x000001c0,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar2) {
      unaff_w29 = unaff_w25 + unaff_w24;
LAB_05f1b644:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x30;
        *(undefined8 *)(lVar4 + 0x38) = in_stack_000001a8;
        *(undefined8 *)(lVar4 + 0x30) = in_stack_000001a0;
        *(undefined8 *)(lVar4 + 0x48) = in_stack_000001b8;
        *(undefined8 *)(lVar4 + 0x40) = in_stack_000001b0;
        *(undefined8 *)(lVar4 + 0x28) = in_stack_00000198;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000190;
        thunk_FUN_044bb4b4(lVar4 + 0x20,0);
        return;
      }
      goto LAB_05f1b6a8;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_05f1b6a8;
    uVar10 = *(undefined8 *)(lVar4 + 0x30);
    uVar7 = *(undefined8 *)(lVar4 + 0x48);
    uVar6 = *(undefined8 *)(lVar4 + 0x40);
    uVar9 = *(undefined8 *)(lVar4 + 0x28);
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_05f1b6a8;
    lVar3 = unaff_x19 + (int)(unaff_w25 + unaff_w24) * unaff_x26;
    *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar4 + 0x38);
    *(undefined8 *)(lVar3 + 0x30) = uVar10;
    *(undefined8 *)(lVar3 + 0x48) = uVar7;
    *(undefined8 *)(lVar3 + 0x40) = uVar6;
    *(undefined8 *)(lVar3 + 0x28) = uVar9;
    *(undefined8 *)(lVar3 + 0x20) = uVar8;
    thunk_FUN_044bb4b4(lVar3 + 0x20,0);
    if (unaff_w27 < (int)uVar5) goto LAB_05f1b644;
    unaff_w28 = uVar5 * 2;
    if ((int)unaff_w28 < unaff_w23) {
      uVar1 = unaff_w28 + in_stack_00000008._4_4_;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar1))
      goto LAB_05f1b6a8;
      lVar4 = unaff_x19 + (long)(int)uVar1 * (long)(int)unaff_x26;
      uVar9 = *(undefined8 *)(lVar4 + 0x38);
      uVar8 = *(undefined8 *)(lVar4 + 0x30);
      uVar7 = *(undefined8 *)(lVar4 + 0x48);
      uVar6 = *(undefined8 *)(lVar4 + 0x40);
      uVar11 = *(undefined8 *)(lVar4 + 0x28);
      uVar10 = *(undefined8 *)(lVar4 + 0x20);
      if (unaff_x21 == 0) goto LAB_05f1b6ac;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      in_stack_000001c0 = uVar10;
      in_stack_000001c8 = uVar11;
      in_stack_000001d0 = uVar8;
      in_stack_000001d8 = uVar9;
      in_stack_000001e0 = uVar6;
      in_stack_000001e8 = uVar7;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000001f0,&stack0x000001c0,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w28;
    in_CY = *(uint *)(unaff_x19 + 0x18) <= unaff_w29;
    unaff_w24 = uVar5;
  } while( true );
}


