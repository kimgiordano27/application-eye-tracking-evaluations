/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 03b600a4
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04f428ec(8);
  }
  if ((*(byte *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar2 = thunk_FUN_02cea894();
  FUN_03b5ee70(lVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar7 = 0;
    lVar8 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_03b60240;
      if (*(uint *)(lVar4 + 0x18) <= uVar7) {
LAB_03b60244:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      memcpy(&stack0x00000160,(void *)(lVar4 + lVar8),0x160);
      if (param_2 == 0) goto LAB_03b60240;
      pcVar9 = *(code **)(param_2 + 0x18);
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      memcpy(&stack0x000002c0,&stack0x00000160,0x160);
      uVar3 = (*pcVar9)(uVar5,&stack0x000002c0,*(undefined8 *)(param_2 + 0x28));
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_03b60240;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_03b60244;
        memcpy(&stack0x00000000,(void *)(lVar4 + lVar8),0x160);
        if (lVar2 == 0) {
LAB_03b60240:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        memcpy(&stack0x00000160,&stack0x00000000,0x160);
        lVar4 = *(long *)(lVar2 + 0x10);
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_03b60240;
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar4 + (long)(int)uVar1 * 0x160 + 0x20),&stack0x00000160,0x160);
        }
        else {
          uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
          memcpy(&stack0x000002c0,&stack0x00000160,0x160);
          FUN_03b5f738(lVar2,&stack0x000002c0,uVar5);
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x160;
    } while ((long)uVar7 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar2;
}


