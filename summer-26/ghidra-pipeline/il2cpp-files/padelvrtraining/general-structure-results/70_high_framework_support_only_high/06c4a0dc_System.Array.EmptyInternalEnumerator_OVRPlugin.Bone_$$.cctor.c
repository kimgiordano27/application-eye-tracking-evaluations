/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$.cctor
ENTRY_POINT: 06c4a0dc
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


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>___cctor(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  uint uVar6;
  ulong unaff_x25;
  uint uVar7;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  long in_stack_00000000;
  undefined4 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
LAB_06c4a0e0:
  uVar6 = (uint)unaff_x25;
  uVar7 = (uint)unaff_x26;
  lVar3 = *unaff_x22;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_1) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_06c4a16c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370(unaff_x22,param_1,0);
LAB_06c4a16c:
  uVar4 = (*(code *)*puVar1)(unaff_x22,unaff_x23,unaff_x24,puVar1[1]);
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar7 < 0) {
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
        if (uVar7 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + (ulong)uVar7 * 0x18 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x20 * 0x18 + 0x24);
LAB_06c4a230:
          lVar3 = unaff_x27 + unaff_x20 * 0x18;
          *in_stack_00000008 = *(undefined4 *)(lVar3 + 0x30);
          *unaff_x29 = -1;
          *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar6;
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
      uVar6 = *(uint *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x24);
      unaff_x20 = (ulong)uVar6;
      unaff_x26 = unaff_x25 & 0xffffffff;
      uVar7 = (uint)unaff_x25;
      if ((int)uVar6 < 0) {
        *in_stack_00000008 = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0) goto LAB_06c4a270;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_06c4a274;
      unaff_x29 = (int *)(unaff_x27 + unaff_x20 * (unaff_x21 & 0xffffffff) + 0x20);
      unaff_x25 = unaff_x20;
    } while (*unaff_x29 != unaff_w28);
    unaff_x22 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar2 = (long *)FUN_04aca658(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_06c4a270;
    uVar4 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28),
                       in_stack_00000018,*(undefined8 *)(*plVar2 + 0x1c0));
  } while( true );
  if (unaff_x22 == (long *)0x0) {
LAB_06c4a270:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  param_1 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_x23 = *(undefined8 *)(unaff_x27 + unaff_x20 * unaff_x21 + 0x28);
  unaff_x24 = in_stack_00000018;
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03d8f26c(param_1);
  }
  goto LAB_06c4a0e0;
}


