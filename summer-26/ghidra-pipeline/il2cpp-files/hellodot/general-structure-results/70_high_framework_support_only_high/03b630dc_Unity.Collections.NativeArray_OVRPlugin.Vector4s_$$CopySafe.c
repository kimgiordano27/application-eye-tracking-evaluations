/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 03b630dc
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int in_w9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar4;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  code *pcVar5;
  
  while (*(int *)(unaff_x22 + 0x1c) = in_w9 + 1, param_1 != 0) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      memcpy((void *)(param_1 + (int)uVar1 * unaff_x26 + 0x20),&stack0x000000b0,0xb0);
    }
    else {
      memcpy(&stack0x00000160,&stack0x000000b0,0xb0);
      FUN_03b62674();
    }
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x25 = unaff_x25 + 0xb0;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
        return;
      }
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) goto LAB_03b6317c;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto LAB_03b63180;
      memcpy(&stack0x000000b0,(void *)(lVar3 + unaff_x25),0xb0);
      if (unaff_x20 == 0) goto LAB_03b6317c;
      pcVar5 = *(code **)(unaff_x20 + 0x18);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
      memcpy(&stack0x00000160,&stack0x000000b0,0xb0);
      uVar2 = (*pcVar5)(uVar4,&stack0x00000160,*(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar2 & 1) == 0);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x24) {
LAB_03b63180:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    memcpy(&stack0x00000000,(void *)(lVar3 + unaff_x25),0xb0);
    if (unaff_x22 == 0) break;
    memcpy(&stack0x000000b0,&stack0x00000000,0xb0);
    in_w9 = *(int *)(unaff_x22 + 0x1c);
    param_1 = *(long *)(unaff_x22 + 0x10);
  }
LAB_03b6317c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


