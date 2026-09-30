/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 02b5801c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__Dispose(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar9;
  ulong unaff_x24;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  ulong unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x02b5801c:
  if ((bool)in_ZR) {
    plVar5 = *(long **)(unaff_x19 + 0x30);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)FUN_02249368(*(undefined8 *)
                                     (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x18))
      ;
      if (plVar5 == (long *)0x0) goto LAB_02b581e4;
      uVar7 = (**(code **)(*plVar5 + 0x1b8))
                        (plVar5,*(undefined8 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28));
    }
    else {
      if (plVar5 == (long *)0x0) goto LAB_02b581e4;
      lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
      uVar9 = *(undefined8 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02b580f4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar5,lVar4,0);
LAB_02b580f4:
      uVar7 = (*(code *)*puVar3)(plVar5,uVar9);
    }
    if ((uVar7 & 1) != 0) {
      if (-1 < (int)(uint)unaff_x29) {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto LAB_02b581e4;
        if ((uint)unaff_x29 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + (unaff_x29 & 0xffffffff) * 0x28 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x28 * 0x28 + 0x24);
LAB_02b581ac:
          *unaff_x25 = -1;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar4 = unaff_x26 + unaff_x28 * 0x28;
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *(undefined4 *)(lVar4 + 0x24) = uVar2;
          *(int *)(unaff_x19 + 0x24) = (int)unaff_x24;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
        goto LAB_02b581e8;
      }
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 != 0) {
        if ((uint)in_stack_00000000 < *(uint *)(lVar4 + 0x18)) {
          *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x28 * 0x28 + 0x24) + 1;
          goto LAB_02b581ac;
        }
LAB_02b581e8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      goto LAB_02b581e4;
    }
  }
  uVar1 = *(uint *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x24);
  unaff_x28 = (ulong)uVar1;
  unaff_x29 = unaff_x24 & 0xffffffff;
  if ((int)uVar1 < 0) {
    return 0;
  }
  unaff_x26 = *(long *)(unaff_x19 + 0x18);
  if (unaff_x26 != 0) {
    if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_02b581e8;
    unaff_x25 = (int *)(unaff_x26 + unaff_x28 * (unaff_x20 & 0xffffffff) + 0x20);
    in_ZR = *unaff_x25 == unaff_w27;
    unaff_x24 = unaff_x28;
    goto code_r0x02b5801c;
  }
LAB_02b581e4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


