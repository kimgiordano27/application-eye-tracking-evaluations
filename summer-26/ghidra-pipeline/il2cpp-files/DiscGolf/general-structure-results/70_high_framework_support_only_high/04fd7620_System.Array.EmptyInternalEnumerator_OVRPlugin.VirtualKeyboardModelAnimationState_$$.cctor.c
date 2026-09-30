/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$.cctor
ENTRY_POINT: 04fd7620
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
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___cctor(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint in_w8;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong unaff_x20;
  long unaff_x23;
  ulong uVar10;
  uint unaff_w25;
  int *piVar11;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar4 = in_w8;
    uVar10 = (ulong)uVar4;
    if ((int)uVar4 < 0) {
      return 0;
    }
    lVar5 = *(long *)(unaff_x23 + 0x18);
    if (lVar5 == 0) goto LAB_04fd76e4;
    if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_04fd76e8;
    lVar5 = lVar5 + 0x20;
    piVar11 = (int *)(lVar5 + (ulong)uVar4 * (unaff_x20 & 0xffffffff));
    if (*piVar11 == unaff_w29) {
      plVar9 = *(long **)(unaff_x23 + 0x30);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)FUN_0390b9f8(*(undefined8 *)
                                       (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18
                                       ));
        if (plVar9 == (long *)0x0) goto LAB_04fd76e4;
        uVar7 = (**(code **)(*plVar9 + 0x1b8))
                          (plVar9,*(undefined4 *)(lVar5 + uVar10 * (unaff_x20 & 0xffffffff) + 8),
                           in_stack_00000018._4_4_,*(undefined8 *)(*plVar9 + 0x1c0));
      }
      else {
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
        uVar1 = *(undefined4 *)(lVar5 + uVar10 * (unaff_x20 & 0xffffffff) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02dcfd18(lVar3);
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04fd75f4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_02dd004c(plVar9,lVar3,0);
LAB_04fd75f4:
        uVar7 = (*(code *)*puVar2)(plVar9,uVar1,in_stack_00000018._4_4_,puVar2[1]);
        unaff_x23 = in_stack_00000008;
      }
      if ((uVar7 & 1) != 0) {
        if ((int)unaff_w25 < 0) {
          lVar3 = *(long *)(unaff_x23 + 0x10);
          if (lVar3 == 0) goto LAB_04fd76e4;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_04fd76e8;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) = *(int *)(lVar5 + uVar10 * 0x18 + 4) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x23 + 0x18);
          if (lVar3 == 0) {
LAB_04fd76e4:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w25) {
LAB_04fd76e8:
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          *(undefined4 *)(lVar3 + (ulong)unaff_w25 * 0x18 + 0x24) =
               *(undefined4 *)(lVar5 + uVar10 * 0x18 + 4);
        }
        uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
        lVar5 = lVar5 + uVar10 * 0x18;
        *piVar11 = -1;
        *(undefined4 *)(lVar5 + 4) = uVar1;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(uint *)(unaff_x23 + 0x24) = uVar4;
        *(ulong *)(unaff_x23 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
        return 1;
      }
    }
    in_w8 = *(uint *)(lVar5 + uVar10 * (unaff_x20 & 0xffffffff) + 4);
    unaff_w25 = uVar4;
  } while( true );
}


