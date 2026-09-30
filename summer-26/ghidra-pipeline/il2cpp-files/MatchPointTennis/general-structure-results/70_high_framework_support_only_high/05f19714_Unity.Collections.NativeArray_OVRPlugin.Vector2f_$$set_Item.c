/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$set_Item
ENTRY_POINT: 05f19714
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


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__set_Item
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
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
  
  iVar1 = param_3 - param_2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_04481fb8();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04481fb8();
  }
  uVar3 = param_2 + (iVar1 >> 1);
                    /* try { // try from 05f19758 to 0601986b has its CatchHandler @ 05f19758
                       catch() { ... } // from try @ 05f19758 with catch @ 05f19758
                       catch() { ... } // from try @ 05f19984 with catch @ 05f19758
                       catch() { ... } // from try @ 05f19a0c with catch @ 05f19758
                       catch() { ... } // from try @ 05f19a14 with catch @ 05f19758
                       catch() { ... } // from try @ 05f19abc with catch @ 05f19758 */
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  FUN_05f19094();
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  FUN_05f19094();
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  FUN_05f19094();
  if (unaff_x20 == 0) {
LAB_05f19a44:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (uVar3 < *(uint *)(unaff_x20 + 0x18)) {
    lVar2 = unaff_x20 + (long)(int)uVar3 * 0x40;
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    uVar11 = *(undefined8 *)(lVar2 + 0x28);
    uVar10 = *(undefined8 *)(lVar2 + 0x20);
    uVar8 = *(undefined8 *)(lVar2 + 0x38);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar3 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_05f19238();
    if ((int)uVar3 <= (int)param_2) {
LAB_05f199d4:
      lVar2 = *(long *)(param_5 + 0x20);
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
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      FUN_05f19238();
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(unaff_x20 + 0x18)) {
      if (param_4 == 0) goto LAB_05f19a44;
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      in_stack_000001c0 = uVar10;
      in_stack_000001c8 = uVar11;
      in_stack_000001d0 = uVar6;
      in_stack_000001d8 = uVar8;
      in_stack_000001e0 = uVar4;
      in_stack_000001e8 = uVar5;
      iVar1 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&stack0x00000200,&stack0x000001c0,
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar1) {
        do {
          uVar3 = uVar3 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_05f19a40;
          lVar2 = unaff_x20 + (long)(int)uVar3 * 0x40;
          uVar9 = *(undefined8 *)(lVar2 + 0x48);
          uVar7 = *(undefined8 *)(lVar2 + 0x40);
          uVar13 = *(undefined8 *)(lVar2 + 0x28);
          uVar12 = *(undefined8 *)(lVar2 + 0x20);
          uVar15 = *(undefined8 *)(lVar2 + 0x38);
          uVar14 = *(undefined8 *)(lVar2 + 0x30);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          in_stack_000001c0 = uVar12;
          in_stack_000001c8 = uVar13;
          in_stack_000001d0 = uVar14;
          in_stack_000001d8 = uVar15;
          in_stack_000001e0 = uVar7;
          in_stack_000001e8 = uVar9;
          iVar1 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&stack0x00000200,&stack0x000001c0,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar3 <= (int)param_2) goto LAB_05f199d4;
        lVar2 = *(long *)(param_5 + 0x20);
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
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        FUN_05f19238();
      }
    }
  }
LAB_05f19a40:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


