/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 059d157c
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar4;
  long lVar5;
  
  FUN_059d0408();
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    uVar4 = 0;
    lVar5 = 0x20;
    do {
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) goto LAB_059d16bc;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_059d16c0:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (unaff_x20 == 0) goto LAB_059d16bc;
      memcpy(&stack0x00000008,(void *)(lVar3 + lVar5),0x48);
      memcpy(&stack0x00000098,&stack0x00000008,0x48);
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(unaff_x21 + 0x10);
        if (lVar3 == 0) goto LAB_059d16bc;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_059d16c0;
        if (unaff_x22 == 0) {
LAB_059d16bc:
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        memcpy(&stack0x00000050,(void *)(lVar3 + lVar5),0x48);
        lVar3 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar3 == 0) goto LAB_059d16bc;
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar3 + (long)(int)uVar1 * 0x48 + 0x20),&stack0x00000050,0x48);
        }
        else {
          memcpy(&stack0x00000098,&stack0x00000050,0x48);
          FUN_059d0cbc();
        }
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x48;
    } while ((long)uVar4 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return;
}


