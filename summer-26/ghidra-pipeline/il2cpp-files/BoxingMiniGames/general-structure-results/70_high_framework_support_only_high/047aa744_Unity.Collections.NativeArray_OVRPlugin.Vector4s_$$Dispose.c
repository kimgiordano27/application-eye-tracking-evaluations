/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 047aa744
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  while( true ) {
    puVar1 = (undefined8 *)(param_1 + unaff_x24);
    uStack0000000000000028 = puVar1[1];
    uStack0000000000000020 = *puVar1;
    uStack0000000000000038 = puVar1[3];
    uStack0000000000000030 = puVar1[2];
    lVar4 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)uVar2 * 0x20;
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar4 + 0x28) = uStack0000000000000028;
      *(undefined8 *)(lVar4 + 0x20) = uStack0000000000000020;
      *(undefined8 *)(lVar4 + 0x38) = uStack0000000000000038;
      *(undefined8 *)(lVar4 + 0x30) = uStack0000000000000030;
      thunk_FUN_036b7ad0(lVar4 + 0x20,0);
    }
    else {
      in_stack_00000040 = uStack0000000000000020;
      in_stack_00000048 = uStack0000000000000028;
      in_stack_00000050 = uStack0000000000000030;
      in_stack_00000058 = uStack0000000000000038;
      FUN_047a9e48();
    }
    do {
      unaff_x23 = unaff_x23 + 1;
      unaff_x24 = unaff_x24 + 0x20;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
        return;
      }
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_047aa7f0;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_047aa7f4;
      if (unaff_x20 == 0) goto LAB_047aa7f0;
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      in_stack_00000048 = puVar1[1];
      in_stack_00000040 = *puVar1;
      in_stack_00000058 = puVar1[3];
      in_stack_00000050 = puVar1[2];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar3 & 1) == 0);
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x23) {
LAB_047aa7f4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (unaff_x22 == 0) break;
  }
LAB_047aa7f0:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


