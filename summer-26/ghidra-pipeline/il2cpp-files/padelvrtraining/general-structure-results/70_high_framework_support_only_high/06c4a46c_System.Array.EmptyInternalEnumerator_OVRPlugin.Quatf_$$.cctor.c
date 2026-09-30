/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$.cctor
ENTRY_POINT: 06c4a46c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>___cctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  iVar5 = *(int *)(unaff_x21 + 0x20);
  if (0 < iVar5) {
    lVar6 = *(long *)(unaff_x21 + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar7 = 0;
    puVar8 = (undefined4 *)(lVar6 + 0x30);
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_06c4a63c;
      if (-1 < (int)puVar8[-4]) {
        uVar2 = thunk_FUN_03d2eb70(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
        if (*(uint *)(lVar6 + 0x18) <= uVar7) {
LAB_06c4a63c:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        in_stack_00000028._4_4_ = *puVar8;
        uVar3 = thunk_FUN_03d2eb70(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                                   (long)&stack0x00000028 + 4);
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        FUN_07143704(&stack0x00000010,uVar2,uVar3,0);
        if (*(uint *)(param_1 + 0x18) <= unaff_w20) goto LAB_06c4a63c;
        lVar1 = param_1 + (long)(int)unaff_w20 * 0x10;
        puVar4 = (undefined8 *)(lVar1 + 0x20);
        *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
        *puVar4 = in_stack_00000010;
        unaff_w20 = unaff_w20 + 1;
        thunk_FUN_03d1023c(puVar4,0);
        iVar5 = *(int *)(unaff_x21 + 0x20);
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 6;
    } while ((long)uVar7 < (long)iVar5);
  }
  return;
}


