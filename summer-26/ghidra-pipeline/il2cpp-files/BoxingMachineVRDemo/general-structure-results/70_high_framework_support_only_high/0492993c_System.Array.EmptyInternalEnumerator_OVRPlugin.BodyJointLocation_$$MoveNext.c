/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$MoveNext
ENTRY_POINT: 0492993c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__MoveNext(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint in_w8;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int unaff_w27;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar8 = (ulong)in_w8;
    if ((int)in_w8 < 0) {
      return 0;
    }
    lVar10 = *(long *)(unaff_x19 + 0x18);
    if (lVar10 == 0) goto LAB_04929a08;
    if (*(uint *)(lVar10 + 0x18) <= in_w8) goto LAB_04929a0c;
    piVar9 = (int *)(lVar10 + (ulong)in_w8 * (unaff_x20 & 0xffffffff) + 0x20);
    if (*piVar9 == unaff_w27) {
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)FUN_03642a0c(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
        if (plVar4 == (long *)0x0) goto LAB_04929a08;
        uVar6 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined4 *)(lVar10 + uVar8 * unaff_x20 + 0x28),
                           in_stack_00000018._4_4_,*(undefined8 *)(*plVar4 + 0x1c0));
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_04929a08;
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
        uVar1 = *(undefined4 *)(lVar10 + uVar8 * unaff_x20 + 0x28);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d9a2e0(lVar3);
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04929918;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_02d9a5d4(plVar4,lVar3,0);
LAB_04929918:
        uVar6 = (*(code *)*puVar2)(plVar4,uVar1,in_stack_00000018._4_4_,puVar2[1]);
        unaff_x23 = in_stack_00000010;
      }
      if ((uVar6 & 1) != 0) {
        if ((int)(uint)unaff_x24 < 0) {
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_04929a08;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000008) goto LAB_04929a0c;
          *(int *)(lVar3 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(lVar10 + uVar8 * 0x24 + 0x24) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x19 + 0x18);
          if (lVar3 == 0) {
LAB_04929a08:
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x24) {
LAB_04929a0c:
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          *(undefined4 *)(lVar3 + (unaff_x24 & 0xffffffff) * 0x24 + 0x24) =
               *(undefined4 *)(lVar10 + uVar8 * 0x24 + 0x24);
        }
        *piVar9 = -1;
        *(undefined4 *)(lVar10 + uVar8 * 0x24 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
        *(uint *)(unaff_x19 + 0x24) = in_w8;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    in_w8 = *(uint *)(lVar10 + uVar8 * unaff_x20 + 0x24);
    unaff_x24 = uVar8;
  } while( true );
}


