/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 0474b21c
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__Dispose(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  uint uVar5;
  long unaff_x23;
  int iVar6;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  uVar1 = *(uint *)(unaff_x23 + 0x18);
  uVar5 = *(int *)(param_1 + 0x20) - 1;
  if (uVar5 < uVar1) {
    iVar6 = 0;
    do {
      if (*(int *)(unaff_x23 + (long)(int)uVar5 * 0x28 + 0x20) == unaff_w21) {
        plVar2 = (long *)FUN_0475d3a8(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
        if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_0474b4d4;
        lVar4 = unaff_x23 + (long)(int)uVar5 * 0x28;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        in_stack_000000a0 = *unaff_x20;
        in_stack_000000a8 = unaff_x20[1];
        in_stack_000000b0 = unaff_x20[2];
        in_stack_000000c0 = *(undefined8 *)(lVar4 + 0x28);
        in_stack_000000c8 = *(undefined8 *)(lVar4 + 0x30);
        in_stack_000000d0 = *(undefined8 *)(lVar4 + 0x38);
        uVar3 = (**(code **)(*plVar2 + 0x1b8))
                          (plVar2,&stack0x000000c0,&stack0x000000a0,*(undefined8 *)(*plVar2 + 0x1c0)
                          );
        if ((uVar3 & 1) != 0) {
          return uVar5;
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
      }
      if (uVar1 <= uVar5) {
LAB_0474b4d4:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      uVar5 = *(uint *)(unaff_x23 + (long)(int)uVar5 * 0x28 + 0x24);
      if ((int)uVar1 <= iVar6) {
        FUN_04f52508(0);
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      iVar6 = iVar6 + 1;
    } while (uVar5 < uVar1);
  }
  return uVar5;
}


