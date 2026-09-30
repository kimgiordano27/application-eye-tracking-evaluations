/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetSubArray
ENTRY_POINT: 0276b398
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetSubArray(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int in_w8;
  long lVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  lVar5 = unaff_x20 + (long)unaff_w24 * (long)in_w8;
  uStack00000000000000d0 = *(undefined8 *)(lVar5 + 0x30);
  uStack00000000000000c8 = *(undefined8 *)(lVar5 + 0x28);
  uStack00000000000000c0 = *(undefined8 *)(lVar5 + 0x20);
  uVar7 = unaff_w23 - 1;
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  FUN_0276add8();
  if ((int)uVar7 <= (int)unaff_w19) {
UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>__Add:
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_0276add8();
    return unaff_w19;
  }
  do {
    do {
      uVar3 = uStack00000000000000d0;
      uVar2 = uStack00000000000000c8;
      uVar1 = uStack00000000000000c0;
      unaff_w19 = unaff_w19 + 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
LAB_0276b5e0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      lVar5 = unaff_x20 + (long)(int)unaff_w19 * 0x18;
      uVar6 = *(undefined8 *)(lVar5 + 0x30);
      uVar9 = *(undefined8 *)(lVar5 + 0x28);
      uVar8 = *(undefined8 *)(lVar5 + 0x20);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_000000e8 = uVar2;
      in_stack_000000e0 = uVar1;
      in_stack_000000f0 = uVar3;
      in_stack_00000100 = uVar8;
      in_stack_00000108 = uVar9;
      in_stack_00000110 = uVar6;
      iVar4 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar4 < 0);
    do {
      uVar3 = uStack00000000000000d0;
      uVar2 = uStack00000000000000c8;
      uVar1 = uStack00000000000000c0;
      uVar7 = uVar7 - 1;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar7) goto LAB_0276b5e0;
      lVar5 = unaff_x20 + (long)(int)uVar7 * 0x18;
      uVar6 = *(undefined8 *)(lVar5 + 0x30);
      uVar9 = *(undefined8 *)(lVar5 + 0x28);
      uVar8 = *(undefined8 *)(lVar5 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_00000108 = uVar2;
      in_stack_00000100 = uVar1;
      in_stack_00000110 = uVar3;
      in_stack_000000e0 = uVar8;
      in_stack_000000e8 = uVar9;
      in_stack_000000f0 = uVar6;
      iVar4 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar4 < 0);
    if ((int)uVar7 <= (int)unaff_w19)
    goto UnityEngine_UIElements_UIR_NativePagedList<ConvertMeshJobData>__Add;
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_0276add8();
  } while( true );
}


