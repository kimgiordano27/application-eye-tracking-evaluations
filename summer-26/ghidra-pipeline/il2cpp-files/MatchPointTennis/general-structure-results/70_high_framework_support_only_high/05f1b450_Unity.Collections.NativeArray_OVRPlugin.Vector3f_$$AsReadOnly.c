/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$AsReadOnly
ENTRY_POINT: 05f1b450
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__AsReadOnly
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               long param_6,long param_7)

{
  int iVar1;
  char in_NG;
  char in_OV;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint in_w9;
  long unaff_x19;
  uint unaff_w24;
  int unaff_w25;
  long unaff_x26;
  uint uVar6;
  uint unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  undefined8 uStack00000000000001a0;
  undefined8 uStack00000000000001a8;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uStack00000000000001a8 = *(undefined8 *)(param_1 + 0x38);
  uStack00000000000001a0 = *(undefined8 *)(param_1 + 0x30);
  uStack00000000000001b8 = *(undefined8 *)(param_1 + 0x48);
  uStack00000000000001b0 = *(undefined8 *)(param_1 + 0x40);
  uStack0000000000000198 = *(undefined8 *)(param_1 + 0x28);
  uStack0000000000000190 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = param_4;
  if (in_NG != in_OV) {
    iVar1 = param_4 + 1;
  }
  if ((int)unaff_w24 <= iVar1 >> 1) {
    do {
      uVar6 = unaff_w24 * 2;
      if ((int)uVar6 < param_4) {
        uVar2 = uVar6 + param_5;
        if ((*(uint *)(unaff_x19 + 0x18) <= uVar2 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar2))
        goto LAB_05f1b6a8;
        lVar5 = unaff_x19 + (long)(int)uVar2 * (long)(int)unaff_x26;
        uVar10 = *(undefined8 *)(lVar5 + 0x38);
        uVar9 = *(undefined8 *)(lVar5 + 0x30);
        uVar8 = *(undefined8 *)(lVar5 + 0x48);
        uVar7 = *(undefined8 *)(lVar5 + 0x40);
        uVar12 = *(undefined8 *)(lVar5 + 0x28);
        uVar11 = *(undefined8 *)(lVar5 + 0x20);
        if (param_6 == 0) goto LAB_05f1b6ac;
        if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        in_stack_000001c0 = uVar11;
        in_stack_000001c8 = uVar12;
        in_stack_000001d0 = uVar9;
        in_stack_000001d8 = uVar10;
        in_stack_000001e0 = uVar7;
        in_stack_000001e8 = uVar8;
        uVar2 = (**(code **)(param_6 + 0x18))
                          (*(undefined8 *)(param_6 + 0x40),&stack0x000001f0,&stack0x000001c0,
                           *(undefined8 *)(param_6 + 0x28));
        uVar6 = uVar6 | uVar2 >> 0x1f;
      }
      unaff_w29 = unaff_w25 + uVar6;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_05f1b6a8;
      lVar5 = unaff_x19 + (long)(int)unaff_w29 * (long)(int)unaff_x26;
      uVar10 = *(undefined8 *)(lVar5 + 0x38);
      uVar9 = *(undefined8 *)(lVar5 + 0x30);
      uVar8 = *(undefined8 *)(lVar5 + 0x48);
      uVar7 = *(undefined8 *)(lVar5 + 0x40);
      uVar12 = *(undefined8 *)(lVar5 + 0x28);
      uVar11 = *(undefined8 *)(lVar5 + 0x20);
      if (param_6 == 0) {
LAB_05f1b6ac:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((*(byte *)(*(long *)(param_7 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      in_stack_000001c0 = uVar11;
      in_stack_000001c8 = uVar12;
      in_stack_000001d0 = uVar9;
      in_stack_000001d8 = uVar10;
      in_stack_000001e0 = uVar7;
      in_stack_000001e8 = uVar8;
      iVar3 = (**(code **)(param_6 + 0x18))
                        (*(undefined8 *)(param_6 + 0x40),&stack0x000001f0,&stack0x000001c0,
                         *(undefined8 *)(param_6 + 0x28));
      if (-1 < iVar3) {
        unaff_w29 = unaff_w25 + unaff_w24;
        break;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_05f1b6a8;
      uVar11 = *(undefined8 *)(lVar5 + 0x30);
      uVar8 = *(undefined8 *)(lVar5 + 0x48);
      uVar7 = *(undefined8 *)(lVar5 + 0x40);
      uVar10 = *(undefined8 *)(lVar5 + 0x28);
      uVar9 = *(undefined8 *)(lVar5 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w24) goto LAB_05f1b6a8;
      lVar4 = unaff_x19 + (int)(unaff_w25 + unaff_w24) * unaff_x26;
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar5 + 0x38);
      *(undefined8 *)(lVar4 + 0x30) = uVar11;
      *(undefined8 *)(lVar4 + 0x48) = uVar8;
      *(undefined8 *)(lVar4 + 0x40) = uVar7;
      *(undefined8 *)(lVar4 + 0x28) = uVar10;
      *(undefined8 *)(lVar4 + 0x20) = uVar9;
      thunk_FUN_044bb4b4(lVar4 + 0x20,0);
      unaff_w24 = uVar6;
    } while ((int)uVar6 <= iVar1 >> 1);
    in_w9 = *(uint *)(unaff_x19 + 0x18);
  }
  if (unaff_w29 < in_w9) {
    lVar5 = unaff_x19 + (long)(int)unaff_w29 * 0x30;
    *(undefined8 *)(lVar5 + 0x38) = uStack00000000000001a8;
    *(undefined8 *)(lVar5 + 0x30) = uStack00000000000001a0;
    *(undefined8 *)(lVar5 + 0x48) = uStack00000000000001b8;
    *(undefined8 *)(lVar5 + 0x40) = uStack00000000000001b0;
    *(undefined8 *)(lVar5 + 0x28) = uStack0000000000000198;
    *(undefined8 *)(lVar5 + 0x20) = uStack0000000000000190;
    thunk_FUN_044bb4b4(lVar5 + 0x20,0);
    return;
  }
LAB_05f1b6a8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


