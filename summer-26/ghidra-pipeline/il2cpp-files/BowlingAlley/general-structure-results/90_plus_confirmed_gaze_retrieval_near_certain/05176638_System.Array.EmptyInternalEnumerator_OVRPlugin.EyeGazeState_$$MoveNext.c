/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 05176638
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 156
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_5;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext(void)

{
  long lVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  int in_w8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  
  do {
    if (in_NG == in_OV) {
      return;
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25)
    goto System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose;
    if (-1 < *(int *)(unaff_x26 + 3)) {
      in_stack_00000068._4_4_ = *(undefined4 *)(unaff_x26 + 4);
      thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                         (long)&stack0x00000068 + 4);
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      in_stack_00000050 = *(undefined8 *)((long)unaff_x26 + 0x34);
      in_stack_00000048 = *(undefined8 *)((long)unaff_x26 + 0x2c);
      in_stack_00000040 = *(undefined8 *)((long)unaff_x26 + 0x24);
      thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                         &stack0x00000040);
      FUN_058f08a8();
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose;
      lVar1 = unaff_x23 + (long)(int)unaff_w20 * 0x10;
      puVar2 = (undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *puVar2 = 0;
      unaff_w20 = unaff_w20 + 1;
      thunk_FUN_0333a630(puVar2,0);
      in_w8 = *(int *)(unaff_x21 + 0x20);
    }
    unaff_x25 = unaff_x25 + 1;
    in_OV = SBORROW8(unaff_x25,(long)in_w8);
    in_NG = (long)(unaff_x25 - (long)in_w8) < 0;
    unaff_x26 = (undefined8 *)((long)unaff_x26 + 0x24);
  } while( true );
}


