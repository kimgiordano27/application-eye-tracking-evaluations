/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 0417c398
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  code *unaff_x27;
  
  do {
    memcpy(&stack0x000000a0,&stack0x00000050,0x50);
    uVar2 = (*unaff_x27)(unaff_x23,&stack0x000000a0,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) {
LAB_0417c4b4:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto LAB_0417c4b8;
      memcpy(&stack0x00000000,(void *)(lVar3 + unaff_x25),0x50);
      if (unaff_x22 == 0) goto LAB_0417c4b4;
      memcpy(&stack0x00000050,&stack0x00000000,0x50);
      lVar3 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar3 == 0) goto LAB_0417c4b4;
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (int)uVar1 * unaff_x26;
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar3 + 0x20),&stack0x00000050,0x50);
        thunk_FUN_02f411dc(lVar3 + 0x40,0);
      }
      else {
        memcpy(&stack0x000000a0,&stack0x00000050,0x50);
        FUN_0417b950();
      }
    }
    unaff_x24 = unaff_x24 + 1;
    unaff_x25 = unaff_x25 + 0x50;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      return;
    }
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) goto LAB_0417c4b4;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x24) {
LAB_0417c4b8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    memcpy(&stack0x00000050,(void *)(lVar3 + unaff_x25),0x50);
    if (unaff_x20 == 0) goto LAB_0417c4b4;
    unaff_x27 = *(code **)(unaff_x20 + 0x18);
    unaff_x23 = *(undefined8 *)(unaff_x20 + 0x40);
  } while( true );
}


