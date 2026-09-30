/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 02b76008
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>___ctor(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x19;
  int iVar5;
  uint uVar6;
  long unaff_x22;
  long unaff_x23;
  long lVar7;
  undefined8 in_stack_00000008;
  
  uVar2 = FUN_033afb14(&stack0x00000008,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x168));
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar5 = 0;
  if (uVar1 != 0) {
    iVar5 = (int)uVar2 / (int)uVar1;
  }
  uVar6 = uVar2 - iVar5 * uVar1;
  if (uVar6 < uVar1) {
    if (unaff_x23 == 0) {
LAB_02b7622c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar6 = *(int *)(unaff_x22 + (ulong)uVar6 * 4 + 0x20) - 1;
    if (uVar6 < uVar1) {
      iVar5 = 0;
      do {
        lVar7 = (long)(int)uVar6;
        if (*(uint *)(unaff_x23 + lVar7 * 0x20 + 0x20) == uVar2) {
          plVar3 = (long *)FUN_021bb118(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_02b76228;
          if (plVar3 == (long *)0x0) goto LAB_02b7622c;
          uVar4 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined8 *)(unaff_x23 + lVar7 * 0x20 + 0x28),
                             in_stack_00000008,*(undefined8 *)(*plVar3 + 0x1c0));
          if ((uVar4 & 1) != 0) {
            return uVar6;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar6) goto LAB_02b76228;
        uVar6 = *(uint *)(unaff_x23 + lVar7 * 0x20 + 0x24);
        if ((int)uVar1 <= iVar5) {
          FUN_033b37f8(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar5 = iVar5 + 1;
      } while (uVar6 < uVar1);
    }
    return uVar6;
  }
LAB_02b76228:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


