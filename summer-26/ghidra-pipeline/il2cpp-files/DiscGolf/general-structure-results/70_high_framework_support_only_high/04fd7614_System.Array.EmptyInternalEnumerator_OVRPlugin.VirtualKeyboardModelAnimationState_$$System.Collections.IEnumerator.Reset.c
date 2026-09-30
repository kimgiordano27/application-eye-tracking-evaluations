/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04fd7614
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_Reset
          (long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong unaff_x20;
  long unaff_x23;
  ulong unaff_x24;
  int *piVar10;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar2 = *(uint *)(param_1 + 4);
    uVar6 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      return 0;
    }
    param_1 = *(long *)(unaff_x23 + 0x18);
    if (param_1 == 0) goto LAB_04fd76e4;
    if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_04fd76e8;
    param_1 = param_1 + 0x20;
    piVar10 = (int *)(param_1 + uVar6 * (unaff_x20 & 0xffffffff));
    if (*piVar10 == unaff_w29) {
      plVar9 = *(long **)(unaff_x23 + 0x30);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)FUN_0390b9f8(*(undefined8 *)
                                       (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18
                                       ));
        if (plVar9 == (long *)0x0) goto LAB_04fd76e4;
        uVar7 = (**(code **)(*plVar9 + 0x1b8))
                          (plVar9,*(undefined4 *)(param_1 + uVar6 * (unaff_x20 & 0xffffffff) + 8),
                           in_stack_00000018._4_4_,*(undefined8 *)(*plVar9 + 0x1c0));
      }
      else {
        lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
        uVar1 = *(undefined4 *)(param_1 + uVar6 * (unaff_x20 & 0xffffffff) + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02dcfd18(lVar4);
        }
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04fd75f4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02dd004c(plVar9,lVar4,0);
LAB_04fd75f4:
        uVar7 = (*(code *)*puVar3)(plVar9,uVar1,in_stack_00000018._4_4_,puVar3[1]);
        unaff_x23 = in_stack_00000008;
      }
      if ((uVar7 & 1) != 0) {
        if ((int)(uint)unaff_x24 < 0) {
          lVar4 = *(long *)(unaff_x23 + 0x10);
          if (lVar4 == 0) goto LAB_04fd76e4;
          if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000000) goto LAB_04fd76e8;
          *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) = *(int *)(param_1 + uVar6 * 0x18 + 4) + 1;
        }
        else {
          lVar4 = *(long *)(unaff_x23 + 0x18);
          if (lVar4 == 0) {
LAB_04fd76e4:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x24) {
LAB_04fd76e8:
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          *(undefined4 *)(lVar4 + (unaff_x24 & 0xffffffff) * 0x18 + 0x24) =
               *(undefined4 *)(param_1 + uVar6 * 0x18 + 4);
        }
        uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
        param_1 = param_1 + uVar6 * 0x18;
        *piVar10 = -1;
        *(undefined4 *)(param_1 + 4) = uVar1;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(uint *)(unaff_x23 + 0x24) = uVar2;
        *(ulong *)(unaff_x23 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
        return 1;
      }
    }
    param_1 = param_1 + uVar6 * (unaff_x20 & 0xffffffff);
    unaff_x24 = uVar6;
  } while( true );
}


