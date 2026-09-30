/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyFrom
ENTRY_POINT: 05f1cad4
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
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,undefined1 param_5 [16],undefined1 param_6 [16],undefined1 param_7 [16])

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uStack0000000000000028 = param_7._8_8_;
  uStack0000000000000020 = param_7._0_8_;
  uStack0000000000000018 = param_6._8_8_;
  uStack0000000000000010 = param_6._0_8_;
  uStack0000000000000008 = param_5._8_8_;
  uStack0000000000000000 = param_5._0_8_;
  uStack0000000000000068 = param_4._8_8_;
  uStack0000000000000060 = param_4._0_8_;
  uStack0000000000000058 = param_3._8_8_;
  uStack0000000000000050 = param_3._0_8_;
  uStack0000000000000048 = param_2._8_8_;
  uStack0000000000000040 = param_2._0_8_;
  while( true ) {
    uStack0000000000000030 = *(undefined8 *)(param_1 + 0x50);
    uStack0000000000000070 = in_stack_00000170;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    in_stack_000001c8 = uStack0000000000000008;
    in_stack_000001c0 = uStack0000000000000000;
    in_stack_000001d8 = uStack0000000000000018;
    in_stack_000001d0 = uStack0000000000000010;
    in_stack_000001e8 = uStack0000000000000028;
    in_stack_000001e0 = uStack0000000000000020;
    iVar1 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000200,&stack0x000001c0,
                       *(undefined8 *)(unaff_x22 + 0x28));
    if (-1 < iVar1) {
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
      do {
        unaff_w19 = unaff_w19 + 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_05f1cc1c;
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        in_stack_000001c8 = in_stack_00000188;
        in_stack_000001c0 = in_stack_00000180;
        in_stack_000001d8 = in_stack_00000198;
        in_stack_000001d0 = in_stack_00000190;
        in_stack_000001e8 = in_stack_000001a8;
        in_stack_000001e0 = in_stack_000001a0;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000200,&stack0x000001c0,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar1 < 0);
    }
    unaff_w24 = unaff_w24 - 1;
    in_stack_00000170 = in_stack_000001b0;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) break;
    param_1 = unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w25;
    uStack0000000000000008 = *(undefined8 *)(param_1 + 0x28);
    uStack0000000000000000 = *(undefined8 *)(param_1 + 0x20);
    uStack0000000000000018 = *(undefined8 *)(param_1 + 0x38);
    uStack0000000000000010 = *(undefined8 *)(param_1 + 0x30);
    uStack0000000000000028 = *(undefined8 *)(param_1 + 0x48);
    uStack0000000000000020 = *(undefined8 *)(param_1 + 0x40);
    uStack0000000000000040 = in_stack_00000180;
    uStack0000000000000048 = in_stack_00000188;
    uStack0000000000000050 = in_stack_00000190;
    uStack0000000000000058 = in_stack_00000198;
    uStack0000000000000060 = in_stack_000001a0;
    uStack0000000000000068 = in_stack_000001a8;
  }
LAB_05f1cc1c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


