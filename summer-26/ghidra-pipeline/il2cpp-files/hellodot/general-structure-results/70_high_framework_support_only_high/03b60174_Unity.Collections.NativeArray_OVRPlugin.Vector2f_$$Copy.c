/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 03b60174
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
               (undefined1 *param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar4;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  code *pcVar5;
  
  while (memcpy(param_1,param_2,param_3), unaff_x22 != 0) {
    memcpy(&stack0x00000160,&stack0x00000000,0x160);
    lVar3 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar3 == 0) break;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar3 + (int)uVar1 * unaff_x26 + 0x20),&stack0x00000160,0x160);
    }
    else {
      memcpy(&stack0x000002c0,&stack0x00000160,0x160);
      FUN_03b5f738();
    }
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x25 = unaff_x25 + 0x160;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
        return;
      }
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) goto LAB_03b60240;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto LAB_03b60244;
      memcpy(&stack0x00000160,(void *)(lVar3 + unaff_x25),0x160);
      if (unaff_x20 == 0) goto LAB_03b60240;
      pcVar5 = *(code **)(unaff_x20 + 0x18);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
      memcpy(&stack0x000002c0,&stack0x00000160,0x160);
      uVar2 = (*pcVar5)(uVar4,&stack0x000002c0,*(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar2 & 1) == 0);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x24) {
LAB_03b60244:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    param_2 = (void *)(lVar3 + unaff_x25);
    param_3 = 0x160;
    param_1 = (undefined1 *)register0x00000008;
  }
LAB_03b60240:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


