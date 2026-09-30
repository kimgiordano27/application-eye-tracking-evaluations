/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 05f1b14c
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


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  uVar3 = param_1._0_8_;
  uVar4 = param_1._8_8_;
  uVar5 = param_2._0_8_;
  uVar6 = param_2._8_8_;
  uVar7 = param_3._0_8_;
  uVar8 = param_3._8_8_;
  while (unaff_w24 = unaff_w24 - 1, uStack00000000000000f0 = uVar3, uStack00000000000000f8 = uVar4,
        uStack0000000000000100 = uVar5, uStack0000000000000108 = uVar6,
        uStack0000000000000110 = uVar7, uStack0000000000000118 = uVar8,
        unaff_w24 < *(uint *)(unaff_x20 + 0x18)) {
    lVar2 = unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w25;
    uVar14 = *(undefined8 *)(lVar2 + 0x38);
    uVar13 = *(undefined8 *)(lVar2 + 0x30);
    uVar10 = *(undefined8 *)(lVar2 + 0x48);
    uVar9 = *(undefined8 *)(lVar2 + 0x40);
    uVar12 = *(undefined8 *)(lVar2 + 0x28);
    uVar11 = *(undefined8 *)(lVar2 + 0x20);
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    in_stack_00000150 = uVar11;
    in_stack_00000158 = uVar12;
    in_stack_00000160 = uVar13;
    in_stack_00000168 = uVar14;
    in_stack_00000170 = uVar9;
    in_stack_00000178 = uVar10;
    in_stack_00000180 = uVar3;
    in_stack_00000188 = uVar4;
    in_stack_00000190 = uVar5;
    in_stack_00000198 = uVar6;
    in_stack_000001a0 = uVar7;
    in_stack_000001a8 = uVar8;
    iVar1 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000180,&stack0x00000150,
                       *(undefined8 *)(unaff_x22 + 0x28));
    uVar3 = in_stack_00000120;
    uVar4 = in_stack_00000128;
    uVar5 = in_stack_00000130;
    uVar6 = in_stack_00000138;
    uVar7 = in_stack_00000140;
    uVar8 = in_stack_00000148;
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
        FUN_05f1aa94();
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
      FUN_05f1aa94();
      do {
        unaff_w19 = unaff_w19 + 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_05f1b2a0;
        lVar2 = unaff_x20 + (long)(int)unaff_w19 * (long)unaff_w25;
        uVar14 = *(undefined8 *)(lVar2 + 0x38);
        uVar13 = *(undefined8 *)(lVar2 + 0x30);
        uVar10 = *(undefined8 *)(lVar2 + 0x48);
        uVar9 = *(undefined8 *)(lVar2 + 0x40);
        uVar12 = *(undefined8 *)(lVar2 + 0x28);
        uVar11 = *(undefined8 *)(lVar2 + 0x20);
        uStack00000000000000f0 = uVar11;
        uStack00000000000000f8 = uVar12;
        uStack0000000000000100 = uVar13;
        uStack0000000000000108 = uVar14;
        uStack0000000000000110 = uVar9;
        uStack0000000000000118 = uVar10;
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        in_stack_00000158 = in_stack_00000128;
        in_stack_00000150 = in_stack_00000120;
        in_stack_00000168 = in_stack_00000138;
        in_stack_00000160 = in_stack_00000130;
        in_stack_00000178 = in_stack_00000148;
        in_stack_00000170 = in_stack_00000140;
        in_stack_00000180 = uVar11;
        in_stack_00000188 = uVar12;
        in_stack_00000190 = uVar13;
        in_stack_00000198 = uVar14;
        in_stack_000001a0 = uVar9;
        in_stack_000001a8 = uVar10;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000180,&stack0x00000150,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar1 < 0);
    }
  }
LAB_05f1b2a0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


