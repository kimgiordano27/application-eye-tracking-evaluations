/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$get_Current
ENTRY_POINT: 028db120
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__get_Current(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x23;
  uint unaff_w24;
  uint uVar8;
  uint unaff_w25;
  long unaff_x26;
  int unaff_w27;
  ulong uVar9;
  int *piVar10;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x028db120:
  uVar8 = unaff_w24;
  piVar10 = (int *)(unaff_x26 + (ulong)uVar8 * (unaff_x20 & 0xffffffff) + 0x20);
  uVar9 = (ulong)uVar8;
  if (*piVar10 == unaff_w27) {
    plVar4 = *(long **)(unaff_x19 + 0x30);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)FUN_022cb868(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
      if (plVar4 == (long *)0x0) goto LAB_028db300;
      uVar6 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined4 *)(unaff_x26 + uVar9 * unaff_x20 + 0x28),
                         in_stack_00000018._4_4_,*(undefined8 *)(*plVar4 + 0x1c0));
    }
    else {
      if (plVar4 == (long *)0x0) goto LAB_028db300;
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
      uVar1 = *(undefined4 *)(unaff_x26 + uVar9 * unaff_x20 + 0x28);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01c72394(lVar3);
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_028db204;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01c72498(plVar4,lVar3,0);
LAB_028db204:
      uVar6 = (*(code *)*puVar2)(plVar4,uVar1,in_stack_00000018._4_4_,puVar2[1]);
      unaff_x23 = in_stack_00000010;
    }
    if ((uVar6 & 1) != 0) {
      if (-1 < (int)unaff_w25) {
        lVar3 = *(long *)(unaff_x19 + 0x18);
        if (lVar3 == 0) goto LAB_028db300;
        if (unaff_w25 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + (ulong)unaff_w25 * 0x28 + 0x24) =
               *(undefined4 *)(unaff_x26 + uVar9 * 0x28 + 0x24);
LAB_028db2c0:
          *piVar10 = -1;
          lVar3 = unaff_x26 + uVar9 * 0x28;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar3 + 0x38) = 0;
          *(undefined8 *)(lVar3 + 0x40) = 0;
          *(undefined8 *)(lVar3 + 0x30) = 0;
          *(undefined4 *)(lVar3 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar8;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
        goto LAB_028db304;
      }
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 != 0) {
        if ((uint)in_stack_00000008 < *(uint *)(lVar3 + 0x18)) {
          *(int *)(lVar3 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x26 + uVar9 * 0x28 + 0x24) + 1;
          goto LAB_028db2c0;
        }
        goto LAB_028db304;
      }
      goto LAB_028db300;
    }
  }
  unaff_w24 = *(uint *)(unaff_x26 + uVar9 * unaff_x20 + 0x24);
  if ((int)unaff_w24 < 0) {
    return 0;
  }
  unaff_x26 = *(long *)(unaff_x19 + 0x18);
  if (unaff_x26 != 0) {
    unaff_w25 = uVar8;
    if (*(uint *)(unaff_x26 + 0x18) <= unaff_w24) {
LAB_028db304:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    goto code_r0x028db120;
  }
LAB_028db300:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


