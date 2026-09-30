/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 03b5ffe8
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(void)

{
  ulong uVar1;
  long lVar2;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  long unaff_x23;
  ulong unaff_x24;
  code *pcVar4;
  
  do {
    pcVar4 = *(code **)(unaff_x21 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x40);
    memcpy(&stack0x00000160,&stack0x00000000,0x160);
    uVar1 = (*pcVar4)(uVar3,&stack0x00000160,*(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 != 0) {
        if ((uint)unaff_x24 < *(uint *)(lVar2 + 0x18)) {
          memcpy(unaff_x19,(void *)(lVar2 + unaff_x23),0x160);
          return;
        }
LAB_03b60080:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      break;
    }
    unaff_x24 = unaff_x24 + 1;
    unaff_x23 = unaff_x23 + 0x160;
    if ((long)*(int *)(unaff_x20 + 0x18) <= (long)unaff_x24) {
      memset(unaff_x19,0,0x160);
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x24) goto LAB_03b60080;
    memcpy(&stack0x00000000,(void *)(lVar2 + unaff_x23),0x160);
  } while (unaff_x21 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


