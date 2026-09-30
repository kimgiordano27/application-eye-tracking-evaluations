/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 06032bdc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__Dispose(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  do {
    lVar1 = thunk_FUN_03ac73c0(unaff_x21,*(undefined8 *)(*unaff_x22 + 0x40));
    if (lVar1 == 0) {
      uVar2 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar2,0);
    }
    do {
      if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      unaff_x22[(long)(int)unaff_w20 + 4] = unaff_x21;
      thunk_FUN_03afed3c(unaff_x26 + (long)(int)unaff_w20 * 8,unaff_x21);
      unaff_w20 = unaff_w20 + 1;
      do {
        lVar1 = unaff_x27;
        unaff_x25 = unaff_x25 + 1;
        unaff_x27 = lVar1 + 0x24;
        if (unaff_x23 == unaff_x25) {
          return;
        }
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
      } while (*(int *)(lVar1 + 0x18) < 0);
      in_stack_00000040 = 0;
      uStack0000000000000048 = 0;
      uStack000000000000004c = 0;
      in_stack_00000058 = 0;
      uStack0000000000000050 = 0;
      uStack0000000000000054 = 0;
      FUN_04bdc600(&stack0x00000040,*(undefined4 *)(lVar1 + 0x20));
      unaff_x21 = thunk_FUN_03ac70f4(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    } while (unaff_x21 == 0);
  } while( true );
}


