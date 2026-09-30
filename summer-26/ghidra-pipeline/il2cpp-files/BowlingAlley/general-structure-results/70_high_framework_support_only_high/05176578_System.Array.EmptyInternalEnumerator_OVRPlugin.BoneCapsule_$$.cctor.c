/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$.cctor
ENTRY_POINT: 05176578
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int in_w8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x24;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  
  uVar3 = 0;
  puVar4 = (undefined8 *)(unaff_x24 + 0x2c);
  do {
    if (*(uint *)(unaff_x24 + 0x18) <= uVar3)
    goto System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose;
    if (-1 < *(int *)((long)puVar4 + -0xc)) {
      in_stack_00000068._4_4_ = *(undefined4 *)((long)puVar4 + -4);
      thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                         (long)&stack0x00000068 + 4);
      if (*(uint *)(unaff_x24 + 0x18) <= uVar3) {
System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      in_stack_00000050 = puVar4[2];
      in_stack_00000048 = puVar4[1];
      in_stack_00000040 = *puVar4;
      thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                         &stack0x00000040);
      FUN_058f08a8();
      if (*(uint *)(param_1 + 0x18) <= unaff_w20)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose;
      lVar1 = param_1 + (long)(int)unaff_w20 * 0x10;
      puVar2 = (undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *puVar2 = 0;
      unaff_w20 = unaff_w20 + 1;
      thunk_FUN_0333a630(puVar2,0);
      in_w8 = *(int *)(unaff_x21 + 0x20);
    }
    uVar3 = uVar3 + 1;
    puVar4 = (undefined8 *)((long)puVar4 + 0x24);
    if ((long)in_w8 <= (long)uVar3) {
      return;
    }
  } while( true );
}


