/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyFrom
ENTRY_POINT: 05f1ca90
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyFrom
               (code *param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4,
               undefined8 param_5)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  while( true ) {
    iVar1 = (*param_1)(param_2,param_3,param_4,param_5);
    if (-1 < iVar1) {
      do {
        unaff_w24 = unaff_w24 - 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_05f1cc1c;
        lVar2 = unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w25;
        uVar4 = *(undefined8 *)(lVar2 + 0x28);
        uVar3 = *(undefined8 *)(lVar2 + 0x20);
        uVar6 = *(undefined8 *)(lVar2 + 0x38);
        uVar5 = *(undefined8 *)(lVar2 + 0x30);
        uVar8 = *(undefined8 *)(lVar2 + 0x48);
        uVar7 = *(undefined8 *)(lVar2 + 0x40);
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        in_stack_000001c0 = uVar3;
        in_stack_000001c8 = uVar4;
        in_stack_000001d0 = uVar5;
        in_stack_000001d8 = uVar6;
        in_stack_000001e0 = uVar7;
        in_stack_000001e8 = uVar8;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000200,&stack0x000001c0,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar1 < 0);
      if ((int)unaff_w24 <= (int)unaff_w19) {
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04481fb8();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04481fb8();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        FUN_05f1c374();
        return unaff_w19;
      }
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      FUN_05f1c374();
    }
    unaff_w19 = unaff_w19 + 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) break;
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    param_1 = *(code **)(unaff_x22 + 0x18);
    param_2 = *(undefined8 *)(unaff_x22 + 0x40);
    in_stack_000001c8 = in_stack_00000188;
    in_stack_000001c0 = in_stack_00000180;
    in_stack_000001d8 = in_stack_00000198;
    in_stack_000001d0 = in_stack_00000190;
    in_stack_000001e8 = in_stack_000001a8;
    in_stack_000001e0 = in_stack_000001a0;
    param_5 = *(undefined8 *)(unaff_x22 + 0x28);
    param_3 = &stack0x00000200;
    param_4 = &stack0x000001c0;
  }
LAB_05f1cc1c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


