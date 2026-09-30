/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$MoveNext
ENTRY_POINT: 013e1450
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__MoveNext(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar8 = 0xffffffff;
  do {
    lVar11 = *(long *)(unaff_x25 + 0x18);
    if (lVar11 == 0) goto LAB_013e1678;
    if (*(uint *)(lVar11 + 0x18) <= unaff_w27) goto LAB_013e167c;
    piVar9 = (int *)(lVar11 + (ulong)unaff_w27 * 0x30 + 0x20);
    uVar10 = (ulong)unaff_w27;
    if (*piVar9 == unaff_w24) {
      plVar4 = *(long **)(unaff_x25 + 0x30);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)FUN_012274ec(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x26 + 0x20) + 0xc0) + 0x18));
        if (plVar4 == (long *)0x0) goto LAB_013e1678;
        lVar3 = lVar11 + uVar10 * 0x30;
        uVar6 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30),
                           in_stack_00000020,in_stack_00000028,*(undefined8 *)(*plVar4 + 0x1c0));
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_013e1678;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x26 + 0x20) + 0xc0) + 8);
        lVar5 = lVar11 + uVar10 * 0x30;
        uVar12 = *(undefined8 *)(lVar5 + 0x28);
        uVar13 = *(undefined8 *)(lVar5 + 0x30);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0103c244(lVar3);
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_013e155c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_0103c348(plVar4,lVar3,0);
LAB_013e155c:
        uVar6 = (*(code *)*puVar2)(plVar4,uVar12,uVar13,in_stack_00000020,in_stack_00000028,
                                   puVar2[1]);
      }
      if ((uVar6 & 1) != 0) {
        if ((int)(uint)uVar8 < 0) {
          lVar3 = *(long *)(unaff_x25 + 0x10);
          if (lVar3 == 0) goto LAB_013e1678;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_013e167c;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(lVar11 + uVar10 * 0x30 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x25 + 0x18);
          if (lVar3 == 0) {
LAB_013e1678:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)uVar8) {
LAB_013e167c:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          *(undefined4 *)(lVar3 + uVar8 * 0x30 + 0x24) =
               *(undefined4 *)(lVar11 + uVar10 * 0x30 + 0x24);
        }
        lVar11 = lVar11 + uVar10 * 0x30;
        uVar13 = *(undefined8 *)(lVar11 + 0x40);
        uVar12 = *(undefined8 *)(lVar11 + 0x38);
        in_stack_00000008[2] = *(undefined8 *)(lVar11 + 0x48);
        in_stack_00000008[1] = uVar13;
        *in_stack_00000008 = uVar12;
        *piVar9 = -1;
        *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(unaff_x25 + 0x24);
        *(uint *)(unaff_x25 + 0x24) = unaff_w27;
        *(ulong *)(unaff_x25 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x25 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x25 + 0x28) + 1);
        return 1;
      }
    }
    uVar1 = *(uint *)(lVar11 + uVar10 * 0x30 + 0x24);
    uVar8 = (ulong)unaff_w27;
    unaff_w27 = uVar1;
    if ((int)uVar1 < 0) {
      *in_stack_00000008 = 0;
      in_stack_00000008[1] = 0;
      in_stack_00000008[2] = 0;
      return 0;
    }
  } while( true );
}


