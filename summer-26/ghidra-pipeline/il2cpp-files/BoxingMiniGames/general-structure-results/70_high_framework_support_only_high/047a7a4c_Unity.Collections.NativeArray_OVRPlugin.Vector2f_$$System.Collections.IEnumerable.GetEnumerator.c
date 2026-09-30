/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 047a7a4c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  do {
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 < *(uint *)(in_x9 + 0x18)) {
      lVar4 = in_x9 + (long)(int)uVar2 * (long)unaff_w25;
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar4 + 0x28) = in_stack_00000028;
      *(undefined8 *)(lVar4 + 0x20) = in_stack_00000020;
      *(undefined8 *)(lVar4 + 0x30) = in_stack_00000030;
      thunk_FUN_036b7ad0(lVar4 + 0x20,0);
    }
    else {
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000030;
      FUN_047a70a8();
    }
    do {
      unaff_x23 = unaff_x23 + 1;
      unaff_x24 = unaff_x24 + 0x18;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
        return;
      }
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_047a7ae0;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_047a7ae4;
      if (unaff_x20 == 0) goto LAB_047a7ae0;
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      in_stack_00000048 = puVar1[1];
      in_stack_00000040 = *puVar1;
      in_stack_00000050 = puVar1[2];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar3 & 1) == 0);
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_047a7ae4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (unaff_x22 == 0) break;
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    in_stack_00000028 = puVar1[1];
    in_stack_00000020 = *puVar1;
    in_stack_00000030 = puVar1[2];
    in_x9 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
  } while (in_x9 != 0);
LAB_047a7ae0:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


