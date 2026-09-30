/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetHashCode
ENTRY_POINT: 0399b7f4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetHashCode(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong uVar3;
  long lVar4;
  
  uVar3 = 0;
  lVar4 = 0x20;
  do {
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    if (unaff_w21 != iVar1) goto LAB_0399b86c;
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) {
LAB_0399b894:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (unaff_x20 == 0) goto LAB_0399b894;
    memcpy(&stack0x00000000,(void *)(lVar2 + lVar4),0x1b0);
    memcpy(&stack0x000001b0,&stack0x00000000,0x1b0);
    (**(code **)(unaff_x20 + 0x18))
              (*(undefined8 *)(unaff_x20 + 0x40),&stack0x000001b0,*(undefined8 *)(unaff_x20 + 0x28))
    ;
    uVar3 = uVar3 + 1;
    lVar4 = lVar4 + 0x1b0;
  } while ((long)uVar3 < (long)*(int *)(unaff_x19 + 0x18));
  iVar1 = *(int *)(unaff_x19 + 0x1c);
LAB_0399b86c:
  if (unaff_w21 != iVar1) {
    FUN_04d9c6d8(0);
  }
  return;
}


