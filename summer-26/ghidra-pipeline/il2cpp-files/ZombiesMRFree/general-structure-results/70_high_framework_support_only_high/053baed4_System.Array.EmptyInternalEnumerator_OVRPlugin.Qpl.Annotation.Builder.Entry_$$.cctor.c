/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$.cctor
ENTRY_POINT: 053baed4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>___cctor
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x19;
  int iVar5;
  uint uVar6;
  long unaff_x23;
  long unaff_x25;
  undefined8 in_stack_00000008;
  
  if (*(int *)(**(long **)(param_1 + 0xd30) + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_0378c5f0(&stack0x00000008,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x188));
  uVar1 = *(uint *)(unaff_x25 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar5 = 0;
  if (uVar1 != 0) {
    iVar5 = (int)uVar2 / (int)uVar1;
  }
  uVar6 = uVar2 - iVar5 * uVar1;
  if (uVar6 < uVar1) {
    if (unaff_x23 == 0) {
LAB_053bb124:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar6 = *(int *)(unaff_x25 + (ulong)uVar6 * 4 + 0x20) - 1;
    if (uVar6 < uVar1) {
      iVar5 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar6 * 0x28 + 0x20) == uVar2) {
          plVar3 = (long *)FUN_04005378(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_053bb120;
          if (plVar3 == (long *)0x0) goto LAB_053bb124;
          uVar4 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined8 *)(unaff_x23 + (long)(int)uVar6 * 0x28 + 0x28),
                             in_stack_00000008,*(undefined8 *)(*plVar3 + 0x1c0));
          if ((uVar4 & 1) != 0) {
            return uVar6;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar6) goto LAB_053bb120;
        uVar6 = *(uint *)(unaff_x23 + (long)(int)uVar6 * 0x28 + 0x24);
        if ((int)uVar1 <= iVar5) {
          FUN_05b108f4(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar5 = iVar5 + 1;
      } while (uVar6 < uVar1);
    }
    return uVar6;
  }
LAB_053bb120:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


