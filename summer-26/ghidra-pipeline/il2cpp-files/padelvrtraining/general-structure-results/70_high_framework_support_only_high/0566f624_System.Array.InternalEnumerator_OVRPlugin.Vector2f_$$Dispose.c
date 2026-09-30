/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 0566f624
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_Vector2f>__Dispose(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  long lVar5;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  
  uStack00000000000000f8 = in_stack_00000098;
  uStack00000000000000f0 = in_stack_00000090;
  uStack0000000000000108 = in_stack_000000a8;
  uStack0000000000000100 = in_stack_000000a0;
  uStack0000000000000110 = in_stack_000000b0;
  uStack00000000000000c8 = in_stack_00000068;
  uStack00000000000000c0 = in_stack_00000060;
  uStack00000000000000d8 = in_stack_00000078;
  uStack00000000000000d0 = in_stack_00000070;
  uStack00000000000000e0 = in_stack_00000080;
  uVar2 = (**(code **)(*unaff_x21 + 0x1b8))();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(unaff_x20 + 0xc) == 0) {
LAB_0566f70c:
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      lVar5 = 0x20;
      do {
        if ((long)(*unaff_x20 + -1) <= (long)uVar2) goto LAB_0566f70c;
        lVar4 = *(long *)(unaff_x20 + 0xc);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        puVar1 = (undefined8 *)(lVar4 + lVar5);
        uStack0000000000000110 = puVar1[4];
        uStack00000000000000f8 = puVar1[1];
        uStack00000000000000f0 = *puVar1;
        uStack0000000000000108 = puVar1[3];
        uStack0000000000000100 = puVar1[2];
        uStack00000000000000e0 = unaff_x19[4];
        uStack00000000000000c8 = unaff_x19[1];
        uStack00000000000000c0 = *unaff_x19;
        uStack00000000000000d8 = unaff_x19[3];
        uStack00000000000000d0 = unaff_x19[2];
        uVar3 = (**(code **)(*unaff_x21 + 0x1b8))();
        uVar2 = uVar2 + 1;
        lVar5 = lVar5 + 0x28;
      } while ((uVar3 & 1) == 0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}


