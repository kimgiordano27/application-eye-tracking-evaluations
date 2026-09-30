/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06c4a0bc
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


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar7;
  undefined8 unaff_x24;
  uint uVar8;
  ulong unaff_x25;
  uint uVar9;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  long in_stack_00000000;
  undefined4 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x06c4a0bc:
  uVar8 = (uint)unaff_x25;
  uVar9 = (uint)unaff_x26;
  lVar3 = *(long *)(param_1 + 8);
  uVar7 = *(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c(lVar3);
  }
  lVar4 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_06c4a16c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370(unaff_x22,lVar3,0);
LAB_06c4a16c:
  uVar5 = (*(code *)*puVar1)(unaff_x22,uVar7,unaff_x24,puVar1[1]);
  do {
    if ((uVar5 & 1) != 0) {
      if ((int)uVar9 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_06c4a270;
        if ((uint)in_stack_00000000 < *(uint *)(lVar3 + 0x18)) {
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x20 * 0x18 + 0x24) + 1;
          goto LAB_06c4a230;
        }
      }
      else {
        lVar3 = *(long *)(unaff_x19 + 0x18);
        if (lVar3 == 0) goto LAB_06c4a270;
        if (uVar9 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + (ulong)uVar9 * 0x18 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x20 * 0x18 + 0x24);
LAB_06c4a230:
          lVar3 = unaff_x27 + unaff_x20 * 0x18;
          *in_stack_00000008 = *(undefined4 *)(lVar3 + 0x30);
          *unaff_x29 = -1;
          *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar8;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_06c4a274:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    do {
      uVar8 = *(uint *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x24);
      unaff_x20 = (ulong)uVar8;
      unaff_x26 = unaff_x25 & 0xffffffff;
      uVar9 = (uint)unaff_x25;
      if ((int)uVar8 < 0) {
        *in_stack_00000008 = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_06c4a270;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar8) goto LAB_06c4a274;
      unaff_x29 = (int *)(unaff_x27 + unaff_x20 * (unaff_x21 & 0xffffffff) + 0x20);
      unaff_x25 = unaff_x20;
    } while (*unaff_x29 != unaff_w28);
    unaff_x22 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar2 = (long *)FUN_04aca658(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_06c4a270;
    uVar5 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28),
                       in_stack_00000018,*(undefined8 *)(*plVar2 + 0x1c0));
  } while( true );
  if (unaff_x22 == (long *)0x0) {
LAB_06c4a270:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  param_1 = *(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0);
  unaff_x24 = in_stack_00000018;
  goto code_r0x06c4a0bc;
}


