/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$Dispose
ENTRY_POINT: 04929938
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x23;
  ulong unaff_x24;
  int *piVar10;
  int unaff_w27;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar2 = *(uint *)(param_1 + 0x24);
    uVar7 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      return 0;
    }
    param_1 = *(long *)(unaff_x19 + 0x18);
    if (param_1 == 0) goto LAB_04929a08;
    if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_04929a0c;
    piVar10 = (int *)(param_1 + uVar7 * (unaff_x20 & 0xffffffff) + 0x20);
    if (*piVar10 == unaff_w27) {
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)FUN_03642a0c(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
        if (plVar5 == (long *)0x0) goto LAB_04929a08;
        uVar8 = (**(code **)(*plVar5 + 0x1b8))
                          (plVar5,*(undefined4 *)(param_1 + uVar7 * unaff_x20 + 0x28),
                           in_stack_00000018._4_4_,*(undefined8 *)(*plVar5 + 0x1c0));
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_04929a08;
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
        uVar1 = *(undefined4 *)(param_1 + uVar7 * unaff_x20 + 0x28);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02d9a2e0(lVar4);
        }
        lVar6 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04929918;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,lVar4,0);
LAB_04929918:
        uVar8 = (*(code *)*puVar3)(plVar5,uVar1,in_stack_00000018._4_4_,puVar3[1]);
        unaff_x23 = in_stack_00000010;
      }
      if ((uVar8 & 1) != 0) {
        if ((int)(uint)unaff_x24 < 0) {
          lVar4 = *(long *)(unaff_x19 + 0x10);
          if (lVar4 == 0) goto LAB_04929a08;
          if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000008) goto LAB_04929a0c;
          *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(param_1 + uVar7 * 0x24 + 0x24) + 1;
        }
        else {
          lVar4 = *(long *)(unaff_x19 + 0x18);
          if (lVar4 == 0) {
LAB_04929a08:
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x24) {
LAB_04929a0c:
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          *(undefined4 *)(lVar4 + (unaff_x24 & 0xffffffff) * 0x24 + 0x24) =
               *(undefined4 *)(param_1 + uVar7 * 0x24 + 0x24);
        }
        *piVar10 = -1;
        *(undefined4 *)(param_1 + uVar7 * 0x24 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
        *(uint *)(unaff_x19 + 0x24) = uVar2;
        *(ulong *)(unaff_x19 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
        return 1;
      }
    }
    param_1 = param_1 + uVar7 * unaff_x20;
    unaff_x24 = uVar7;
  } while( true );
}


