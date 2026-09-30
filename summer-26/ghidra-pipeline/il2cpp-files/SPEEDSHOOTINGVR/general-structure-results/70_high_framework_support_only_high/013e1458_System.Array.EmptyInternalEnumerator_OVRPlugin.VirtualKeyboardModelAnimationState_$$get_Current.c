/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$get_Current
ENTRY_POINT: 013e1458
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
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current
          (void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  int *piVar7;
  ulong uVar8;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar9 = unaff_w27;
    lVar10 = *(long *)(unaff_x25 + 0x18);
    if (lVar10 == 0) goto LAB_013e1678;
    if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_013e167c;
    piVar7 = (int *)(lVar10 + (ulong)uVar9 * 0x30 + 0x20);
    uVar8 = (ulong)uVar9;
    if (*piVar7 == unaff_w24) {
      plVar3 = *(long **)(unaff_x25 + 0x30);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)FUN_012274ec(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x26 + 0x20) + 0xc0) + 0x18));
        if (plVar3 == (long *)0x0) goto LAB_013e1678;
        lVar2 = lVar10 + uVar8 * 0x30;
        uVar5 = (**(code **)(*plVar3 + 0x1b8))
                          (plVar3,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30),
                           in_stack_00000020,in_stack_00000028,*(undefined8 *)(*plVar3 + 0x1c0));
      }
      else {
        if (plVar3 == (long *)0x0) goto LAB_013e1678;
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x26 + 0x20) + 0xc0) + 8);
        lVar4 = lVar10 + uVar8 * 0x30;
        uVar11 = *(undefined8 *)(lVar4 + 0x28);
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0103c244(lVar2);
        }
        lVar4 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar2) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_013e155c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_0103c348(plVar3,lVar2,0);
LAB_013e155c:
        uVar5 = (*(code *)*puVar1)(plVar3,uVar11,uVar12,in_stack_00000020,in_stack_00000028,
                                   puVar1[1]);
      }
      if ((uVar5 & 1) != 0) {
        if ((int)unaff_w19 < 0) {
          lVar2 = *(long *)(unaff_x25 + 0x10);
          if (lVar2 == 0) goto LAB_013e1678;
          if (*(uint *)(lVar2 + 0x18) <= (uint)in_stack_00000000) goto LAB_013e167c;
          *(int *)(lVar2 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(lVar10 + uVar8 * 0x30 + 0x24) + 1;
        }
        else {
          lVar2 = *(long *)(unaff_x25 + 0x18);
          if (lVar2 == 0) {
LAB_013e1678:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
LAB_013e167c:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          *(undefined4 *)(lVar2 + (ulong)unaff_w19 * 0x30 + 0x24) =
               *(undefined4 *)(lVar10 + uVar8 * 0x30 + 0x24);
        }
        lVar10 = lVar10 + uVar8 * 0x30;
        uVar12 = *(undefined8 *)(lVar10 + 0x40);
        uVar11 = *(undefined8 *)(lVar10 + 0x38);
        in_stack_00000008[2] = *(undefined8 *)(lVar10 + 0x48);
        in_stack_00000008[1] = uVar12;
        *in_stack_00000008 = uVar11;
        *piVar7 = -1;
        *(undefined4 *)(lVar10 + 0x24) = *(undefined4 *)(unaff_x25 + 0x24);
        *(uint *)(unaff_x25 + 0x24) = uVar9;
        *(ulong *)(unaff_x25 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x25 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x25 + 0x28) + 1);
        return 1;
      }
    }
    unaff_w27 = *(uint *)(lVar10 + uVar8 * 0x30 + 0x24);
    unaff_w19 = uVar9;
    if ((int)unaff_w27 < 0) {
      *in_stack_00000008 = 0;
      in_stack_00000008[1] = 0;
      in_stack_00000008[2] = 0;
      return 0;
    }
  } while( true );
}


