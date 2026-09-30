/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyFrom
ENTRY_POINT: 02767164
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyFrom
               (ulong param_1,long param_2,uint param_3,int param_4)

{
  char in_NG;
  char in_OV;
  int iVar1;
  long lVar2;
  int in_w9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  if (in_NG != in_OV) {
    in_w9 = in_w9 + 1;
  }
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  uVar3 = param_3 + (in_w9 >> 1);
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  FUN_02766b60();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  FUN_02766b60();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  FUN_02766b60();
  if (unaff_x20 == 0) {
LAB_02767420:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (uVar3 < *(uint *)(unaff_x20 + 0x18)) {
    lVar2 = unaff_x20 + (long)(int)uVar3 * 0x20;
    uVar10 = *(undefined8 *)(lVar2 + 0x28);
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    uVar3 = param_4 - 1;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_02766ca8();
    if ((int)uVar3 <= (int)param_3) {
LAB_027673b0:
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_02766ca8();
      return param_3;
    }
    while (param_3 = param_3 + 1, param_3 < *(uint *)(unaff_x20 + 0x18)) {
      lVar2 = unaff_x20 + (long)(int)param_3 * 0x20;
      uVar11 = *(undefined8 *)(lVar2 + 0x28);
      uVar9 = *(undefined8 *)(lVar2 + 0x20);
      uVar7 = *(undefined8 *)(lVar2 + 0x38);
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
      if (unaff_x22 == 0) goto LAB_02767420;
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_000000e0 = uVar8;
      in_stack_000000e8 = uVar10;
      in_stack_000000f0 = uVar4;
      in_stack_000000f8 = uVar6;
      in_stack_00000100 = uVar9;
      in_stack_00000108 = uVar11;
      in_stack_00000110 = uVar5;
      in_stack_00000118 = uVar7;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar1) {
        do {
          uVar3 = uVar3 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_0276741c;
          lVar2 = unaff_x20 + (long)(int)uVar3 * 0x20;
          uVar11 = *(undefined8 *)(lVar2 + 0x28);
          uVar9 = *(undefined8 *)(lVar2 + 0x20);
          uVar7 = *(undefined8 *)(lVar2 + 0x38);
          uVar5 = *(undefined8 *)(lVar2 + 0x30);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          in_stack_000000e0 = uVar9;
          in_stack_000000e8 = uVar11;
          in_stack_000000f0 = uVar5;
          in_stack_000000f8 = uVar7;
          in_stack_00000100 = uVar8;
          in_stack_00000108 = uVar10;
          in_stack_00000110 = uVar4;
          in_stack_00000118 = uVar6;
          iVar1 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar3 <= (int)param_3) goto LAB_027673b0;
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0185daa4();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_02766ca8();
      }
    }
  }
LAB_0276741c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


