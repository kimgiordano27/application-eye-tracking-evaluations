/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_IsCreated
ENTRY_POINT: 05f1c8e0
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


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_IsCreated(long param_1)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  uint uVar3;
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
  undefined8 uVar15;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
                    /* try { // try from 05f1c8e8 to 0601c8ef has its CatchHandler @ 05f1c998 */
    FUN_04481fb8();
  }
  FUN_05f1c16c();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  FUN_05f1c16c();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  FUN_05f1c16c();
  if (unaff_x20 == 0) {
LAB_05f1cc20:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (unaff_w24 < *(uint *)(unaff_x20 + 0x18)) {
    lVar2 = unaff_x20 + (long)(int)unaff_w24 * 0x38;
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    uVar9 = *(undefined8 *)(lVar2 + 0x28);
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    uVar3 = unaff_w23 - 1;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_05f1c374();
    if ((int)uVar3 <= (int)unaff_w19) {
LAB_05f1cbac:
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
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) goto LAB_05f1cc20;
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      in_stack_000001c0 = uVar8;
      in_stack_000001c8 = uVar9;
      in_stack_000001d0 = uVar6;
      in_stack_000001d8 = uVar7;
      in_stack_000001e0 = uVar4;
      in_stack_000001e8 = uVar5;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000200,&stack0x000001c0,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar1) {
        do {
          uVar3 = uVar3 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05f1cc1c;
          lVar2 = unaff_x20 + (long)(int)uVar3 * 0x38;
          uVar11 = *(undefined8 *)(lVar2 + 0x28);
          uVar10 = *(undefined8 *)(lVar2 + 0x20);
          uVar13 = *(undefined8 *)(lVar2 + 0x38);
          uVar12 = *(undefined8 *)(lVar2 + 0x30);
          uVar15 = *(undefined8 *)(lVar2 + 0x48);
          uVar14 = *(undefined8 *)(lVar2 + 0x40);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          in_stack_000001c0 = uVar10;
          in_stack_000001c8 = uVar11;
          in_stack_000001d0 = uVar12;
          in_stack_000001d8 = uVar13;
          in_stack_000001e0 = uVar14;
          in_stack_000001e8 = uVar15;
          iVar1 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000200,&stack0x000001c0,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar3 <= (int)unaff_w19) goto LAB_05f1cbac;
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
    }
  }
LAB_05f1cc1c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


