/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$.ctor
ENTRY_POINT: 05176570
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___ctor(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int in_w8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  
  lVar3 = *(long *)(unaff_x21 + 0x18);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar4 = 0;
  puVar5 = (undefined8 *)(lVar3 + 0x2c);
  do {
    if (*(uint *)(lVar3 + 0x18) <= uVar4)
    goto System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose;
    if (-1 < *(int *)((long)puVar5 + -0xc)) {
      in_stack_00000068._4_4_ = *(undefined4 *)((long)puVar5 + -4);
      thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                         (long)&stack0x00000068 + 4);
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      in_stack_00000050 = puVar5[2];
      in_stack_00000048 = puVar5[1];
      in_stack_00000040 = *puVar5;
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
    uVar4 = uVar4 + 1;
    puVar5 = (undefined8 *)((long)puVar5 + 0x24);
    if ((long)in_w8 <= (long)uVar4) {
      return;
    }
  } while( true );
}


