/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Equals
ENTRY_POINT: 0399b708
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint in_w9;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar3;
  
  do {
    if (in_w9 <= unaff_w22) {
LAB_0399b7b8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (unaff_x21 == 0) {
LAB_0399b7b4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar3 = unaff_x23 & 0xffffffff;
    memcpy(&stack0x00000000,(void *)(param_1 + uVar3 * (unaff_x24 & 0xffffffff) + 0x20),0x1b0);
    memcpy(&stack0x000001b0,&stack0x00000000,0x1b0);
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000001b0,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_x23 = unaff_x23 - 1;
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 == 0) goto LAB_0399b7b4;
      if (unaff_w22 < *(uint *)(lVar2 + 0x18)) {
        memcpy(unaff_x19,(void *)(lVar2 + uVar3 * 0x1b0 + 0x20),0x1b0);
        return;
      }
      goto LAB_0399b7b8;
    }
    unaff_w22 = unaff_w22 - 1;
    if ((int)unaff_w22 < 0) {
      memset(unaff_x19,0,0x1b0);
      return;
    }
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) goto LAB_0399b7b4;
    in_w9 = *(uint *)(param_1 + 0x18);
  } while( true );
}


