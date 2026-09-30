/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 05e75378
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x25;
  
  uVar4 = *(undefined8 *)(param_1 + 0x180);
  if (in_w9 == 0) {
    FUN_033b9870();
  }
  FUN_0683eca4(uVar4,0);
  if (unaff_x22 == 0) {
LAB_05e7549c:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar1 = FUN_0670bb64();
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618(lVar5);
  }
  if (lVar1 == 0) {
    FUN_06851730(0x10,0);
  }
  else {
    lVar2 = FUN_0339898c(lVar1,lVar5);
    if (lVar2 != 0) {
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar6 = 0;
        uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        do {
          if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          FUN_05e74ba0();
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
      *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
      if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar1 = FUN_067f6a20(0);
      if (lVar1 != 0) {
        FUN_05b73180();
        return;
      }
      goto LAB_05e7549c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1fec(lVar1,lVar5);
}


