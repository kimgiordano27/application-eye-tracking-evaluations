/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$Dispose
ENTRY_POINT: 058a67fc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__Dispose(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar9;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (param_1 == (long *)0x0) {
      plVar4 = (long *)FUN_03e98388(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
      if (plVar4 == (long *)0x0) goto LAB_058a69b0;
      uVar7 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined4 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28),
                         in_stack_00000018._4_4_,*(undefined8 *)(*plVar4 + 0x1c0));
    }
    else {
      if (unaff_x21 == (long *)0x0) goto LAB_058a69b0;
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
      uVar1 = *(undefined4 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4(lVar5);
      }
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_058a68c0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8(unaff_x21,lVar5,0);
LAB_058a68c0:
      uVar7 = (*(code *)*puVar3)(unaff_x21,uVar1,in_stack_00000018._4_4_,puVar3[1]);
      unaff_x22 = unaff_x21;
      unaff_x23 = in_stack_00000010;
    }
    uVar9 = unaff_x24;
    if ((uVar7 & 1) != 0) {
      if ((int)(uint)unaff_x29 < 0) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 != 0) {
          if ((uint)in_stack_00000008 < *(uint *)(lVar5 + 0x18)) {
            *(int *)(lVar5 + in_stack_00000008 * 4 + 0x20) =
                 *(int *)(unaff_x26 + unaff_x28 * 0x24 + 0x24) + 1;
            goto LAB_058a697c;
          }
LAB_058a69b4:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x18);
        if (lVar5 != 0) {
          if ((uint)unaff_x29 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + (unaff_x29 & 0xffffffff) * 0x24 + 0x24) =
                 *(undefined4 *)(unaff_x26 + unaff_x28 * 0x24 + 0x24);
LAB_058a697c:
            *unaff_x25 = -1;
            *(undefined4 *)(unaff_x26 + unaff_x28 * 0x24 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24)
            ;
            *(int *)(unaff_x19 + 0x24) = (int)unaff_x24;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
          goto LAB_058a69b4;
        }
      }
LAB_058a69b0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    do {
      uVar2 = *(uint *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar2;
      unaff_x29 = uVar9 & 0xffffffff;
      if ((int)uVar2 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_058a69b0;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar2) goto LAB_058a69b4;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar9 = unaff_x24;
      unaff_x28 = unaff_x24;
    } while (*unaff_x25 != unaff_w27);
    param_1 = *(long **)(unaff_x19 + 0x30);
    unaff_x21 = unaff_x22;
    if (param_1 != (long *)0x0) {
      unaff_x21 = param_1;
    }
  } while( true );
}


