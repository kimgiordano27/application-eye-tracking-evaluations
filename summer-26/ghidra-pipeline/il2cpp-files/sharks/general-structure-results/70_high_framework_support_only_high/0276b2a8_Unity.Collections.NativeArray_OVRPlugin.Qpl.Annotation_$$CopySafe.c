/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopySafe
ENTRY_POINT: 0276b2a8
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopySafe
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack00000000000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  uStack00000000000000d0 = 0;
  lVar4 = *(long *)(param_5 + 0x20);
  iVar3 = param_3 - param_2;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 1;
  }
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  uVar6 = param_2 + (iVar3 >> 1);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar4 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  FUN_0276ac30(param_1,param_4,param_2,uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x70));
  lVar4 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  FUN_0276ac30(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x70));
  lVar4 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0185daa4();
  }
  FUN_0276ac30(param_1,param_4,uVar6,param_3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_0276b5e4:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (uVar6 < *(uint *)(param_1 + 0x18)) {
    lVar4 = param_1 + (long)(int)uVar6 * 0x18;
    uStack00000000000000d0 = *(undefined8 *)(lVar4 + 0x30);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    uVar1 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_0276add8(param_1,uVar6,uVar1);
    uVar6 = uVar1;
    if ((int)uVar1 <= (int)param_2) {
UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>__Add:
      lVar4 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_0276add8(param_1,param_2,uVar1);
      return param_2;
    }
    while (uVar2 = uStack00000000000000d0, param_2 = param_2 + 1,
          param_2 < *(uint *)(param_1 + 0x18)) {
      lVar4 = param_1 + (long)(int)param_2 * 0x18;
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      uVar10 = *(undefined8 *)(lVar4 + 0x28);
      uVar9 = *(undefined8 *)(lVar4 + 0x20);
      if (param_4 == 0) goto LAB_0276b5e4;
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_000000f0 = uVar2;
      in_stack_000000e0 = uVar7;
      in_stack_000000e8 = uVar8;
      in_stack_00000100 = uVar9;
      in_stack_00000108 = uVar10;
      in_stack_00000110 = uVar5;
      iVar3 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar3) {
        do {
          uVar2 = uStack00000000000000d0;
          uVar6 = uVar6 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_0276b5e0;
          lVar4 = param_1 + (long)(int)uVar6 * 0x18;
          uVar5 = *(undefined8 *)(lVar4 + 0x30);
          uVar10 = *(undefined8 *)(lVar4 + 0x28);
          uVar9 = *(undefined8 *)(lVar4 + 0x20);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          in_stack_00000110 = uVar2;
          in_stack_000000e0 = uVar9;
          in_stack_000000e8 = uVar10;
          in_stack_000000f0 = uVar5;
          in_stack_00000100 = uVar7;
          in_stack_00000108 = uVar8;
          iVar3 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&stack0x00000100,&stack0x000000e0,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar3 < 0);
        if ((int)uVar6 <= (int)param_2)
        goto UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>__Add;
        lVar4 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0185daa4();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0185daa4();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_0276add8(param_1,param_2,uVar6);
      }
    }
  }
LAB_0276b5e0:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


