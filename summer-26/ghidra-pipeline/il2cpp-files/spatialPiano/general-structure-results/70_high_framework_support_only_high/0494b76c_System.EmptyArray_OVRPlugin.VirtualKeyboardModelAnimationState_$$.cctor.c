/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 0494b76c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor(void)

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
  undefined4 *unaff_x26;
  undefined4 *puVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    lVar1 = thunk_FUN_02f45174(unaff_x21,*(undefined8 *)(*unaff_x22 + 0x40));
    if (lVar1 == 0) {
      uVar2 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar2,0);
    }
    do {
      if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar1 = (long)(int)unaff_w20;
      unaff_w20 = unaff_w20 + 1;
      unaff_x22[lVar1 + 4] = unaff_x21;
      do {
        puVar3 = unaff_x26;
        unaff_x25 = unaff_x25 + 1;
        unaff_x26 = puVar3 + 6;
        if (unaff_x23 == unaff_x25) {
          return;
        }
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
      } while ((int)puVar3[1] < 0);
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_03942940(puVar3[5],*unaff_x26,&stack0x00000010,*(undefined8 *)(puVar3 + 3),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
      unaff_x21 = thunk_FUN_02f44ec4(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    } while (unaff_x21 == 0);
  } while( true );
}


