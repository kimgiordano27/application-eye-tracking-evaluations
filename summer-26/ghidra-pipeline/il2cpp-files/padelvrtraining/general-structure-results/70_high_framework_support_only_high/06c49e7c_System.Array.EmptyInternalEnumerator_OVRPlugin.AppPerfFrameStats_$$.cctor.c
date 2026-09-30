/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$.cctor
ENTRY_POINT: 06c49e7c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>___cctor(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar7;
  long unaff_x23;
  uint uVar8;
  ulong unaff_x24;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar9;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x06c49e7c:
  uVar8 = (uint)unaff_x24;
  uVar9 = (uint)unaff_x29;
  uVar5 = unaff_x24;
  unaff_x24 = unaff_x28;
  do {
    if ((param_1 & 1) != 0) {
      if ((int)uVar9 < 0) {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) goto LAB_06c49f54;
        if ((uint)in_stack_00000008 < *(uint *)(lVar2 + 0x18)) {
          *(int *)(lVar2 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x18 + 0x24) + 1;
          goto LAB_06c49f20;
        }
      }
      else {
        lVar2 = *(long *)(unaff_x19 + 0x18);
        if (lVar2 == 0) goto LAB_06c49f54;
        if (uVar9 < *(uint *)(lVar2 + 0x18)) {
          *(undefined4 *)(lVar2 + (ulong)uVar9 * 0x18 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x18 + 0x24);
LAB_06c49f20:
          *unaff_x25 = -1;
          *(undefined4 *)(unaff_x26 + unaff_x24 * 0x18 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar8;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_06c49f58:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    do {
      uVar8 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar8;
      unaff_x29 = uVar5 & 0xffffffff;
      uVar9 = (uint)uVar5;
      if ((int)uVar8 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_06c49f54;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_06c49f58;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar5 = unaff_x24;
    } while (*unaff_x25 != unaff_w27);
    plVar3 = *(long **)(unaff_x19 + 0x30);
    if (plVar3 != (long *)0x0) break;
    plVar3 = (long *)FUN_04aca658(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_06c49f54;
    param_1 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,*(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28),
                         in_stack_00000018,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  if (plVar3 == (long *)0x0) {
LAB_06c49f54:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
  uVar7 = *(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c(lVar2);
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_06c49e64;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370(plVar3,lVar2,0);
LAB_06c49e64:
  param_1 = (*(code *)*puVar1)(plVar3,uVar7,in_stack_00000018,puVar1[1]);
  unaff_x23 = in_stack_00000010;
  unaff_x28 = unaff_x24;
  goto code_r0x06c49e7c;
}


