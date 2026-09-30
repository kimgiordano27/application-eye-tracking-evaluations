/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 05f1d030
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,long param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  int unaff_w25;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  
  uVar10 = param_4._8_8_;
  uVar9 = param_4._0_8_;
  uVar8 = param_3._8_8_;
  uVar7 = param_3._0_8_;
  uVar6 = param_2._8_8_;
  uVar5 = param_2._0_8_;
  do {
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    thunk_FUN_044bb4b4(param_5,param_6);
    if (unaff_w27 < (int)unaff_w28) {
LAB_05f1d050:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar4 = unaff_x19 + (long)(int)unaff_w29 * 0x38;
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
LAB_05f1d0c4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar1 = unaff_w28 * 2;
    if ((int)uVar1 < unaff_w23) {
      if ((*(uint *)(unaff_x19 + 0x18) <= (uVar1 + in_stack_00000008._4_4_) - 1) ||
         (*(uint *)(unaff_x19 + 0x18) <= uVar1 + in_stack_00000008._4_4_)) goto LAB_05f1d0c4;
      if (unaff_x21 == 0) goto LAB_05f1d0c8;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      uVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000290,&stack0x00000250,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar1 = uVar1 | uVar2 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + uVar1;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_05f1d0c4;
    lVar4 = unaff_x19 + (long)(int)unaff_w29 * (long)(int)unaff_x26;
    if (unaff_x21 == 0) {
LAB_05f1d0c8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    iVar3 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000290,&stack0x00000250,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar3) {
      unaff_w29 = unaff_w25 + unaff_w28;
      goto LAB_05f1d050;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_05f1d0c4;
    uVar10 = *(undefined8 *)(lVar4 + 0x38);
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x48);
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w28) goto LAB_05f1d0c4;
    param_1 = unaff_x19 + (int)(unaff_w25 + unaff_w28) * unaff_x26;
    param_5 = param_1 + 0x28;
    param_6 = 0;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar4 + 0x50);
    unaff_w28 = uVar1;
  } while( true );
}


