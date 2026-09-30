/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 058a704c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__Dispose
               (undefined8 param_1,undefined1 param_2 [16])

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar4;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000028 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  do {
    uStack0000000000000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    uStack0000000000000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    uStack0000000000000008 = (undefined4)uStack0000000000000028;
    uStack000000000000000c = (undefined4)((ulong)uStack0000000000000028 >> 0x20);
    uStack0000000000000010 = (undefined4)param_1;
    uStack0000000000000014 = (undefined4)((ulong)param_1 >> 0x20);
    uStack0000000000000020 = uStack0000000000000000;
    uStack0000000000000030 = param_1;
    FUN_045e4168(&stack0x00000040,*(undefined4 *)((long)unaff_x26 + -4));
    uStack0000000000000008 = uStack0000000000000048;
    uStack0000000000000000 = uStack0000000000000040;
    uStack0000000000000014 = uStack0000000000000054;
    uStack000000000000000c = uStack000000000000004c;
    uStack0000000000000010 = uStack0000000000000050;
    lVar1 = thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8)
                              );
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_0322f04c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar3,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    unaff_x22[(long)(int)unaff_w20 + 4] = lVar1;
    thunk_FUN_0329bf60(unaff_x22 + (long)(int)unaff_w20 + 4,lVar1);
    unaff_w20 = unaff_w20 + 1;
    do {
      puVar4 = unaff_x26;
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = (undefined8 *)((long)puVar4 + 0x24);
      if (unaff_x23 == unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
    } while (*(int *)(puVar4 + 3) < 0);
    uStack0000000000000028 = *(undefined8 *)((long)puVar4 + 0x2c);
    uStack0000000000000000 = *unaff_x26;
    param_1 = *(undefined8 *)((long)puVar4 + 0x34);
  } while( true );
}


