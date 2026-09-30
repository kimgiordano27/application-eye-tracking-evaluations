/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04fd7600
PROGRAM: DiscGolf-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_get_Current
          (code *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  ulong unaff_x20;
  undefined4 unaff_w23;
  uint uVar8;
  ulong unaff_x24;
  uint uVar9;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x04fd7600:
  uVar8 = (uint)unaff_x24;
  uVar9 = (uint)unaff_x25;
                    /* try { // try from 04fd7604 to 050d7663 has its CatchHandler @ 04fd7768 */
  uVar4 = (*param_1)(param_2,param_3,unaff_w23,param_5);
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar9 < 0) {
        lVar5 = *(long *)(in_stack_00000008 + 0x10);
        if (lVar5 != 0) {
          if ((uint)in_stack_00000000 < *(uint *)(lVar5 + 0x18)) {
            *(int *)(lVar5 + in_stack_00000000 * 4 + 0x20) =
                 *(int *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 0x18 + 4) + 1;
            goto LAB_04fd76ac;
          }
          goto LAB_04fd76e8;
        }
      }
      else {
        lVar5 = *(long *)(in_stack_00000008 + 0x18);
        if (lVar5 != 0) {
          if (uVar9 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + (ulong)uVar9 * 0x18 + 0x24) =
                 *(undefined4 *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 0x18 + 4);
LAB_04fd76ac:
            uVar1 = *(undefined4 *)(in_stack_00000008 + 0x24);
            lVar5 = unaff_x26 + (unaff_x27 & 0xffffffff) * 0x18;
            *unaff_x28 = -1;
            *(undefined4 *)(lVar5 + 4) = uVar1;
            *(undefined8 *)(lVar5 + 0x10) = 0;
            *(uint *)(in_stack_00000008 + 0x24) = uVar8;
            *(ulong *)(in_stack_00000008 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000008 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(in_stack_00000008 + 0x28) + 1);
            return 1;
          }
LAB_04fd76e8:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
      }
LAB_04fd76e4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    do {
      unaff_x25 = unaff_x24 & 0xffffffff;
      uVar9 = (uint)unaff_x24;
      uVar8 = *(uint *)(unaff_x26 + (unaff_x27 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 4);
      unaff_x24 = (ulong)uVar8;
      if ((int)uVar8 < 0) {
        return 0;
      }
      lVar5 = *(long *)(in_stack_00000008 + 0x18);
      if (lVar5 == 0) goto LAB_04fd76e4;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_04fd76e8;
      unaff_x26 = lVar5 + 0x20;
      unaff_x28 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff));
      unaff_x27 = unaff_x24;
    } while (*unaff_x28 != unaff_w29);
    param_2 = *(long **)(in_stack_00000008 + 0x30);
    if (param_2 != (long *)0x0) break;
    plVar3 = (long *)FUN_0390b9f8(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_04fd76e4;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 8),
                       in_stack_00000018._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  uVar8 = *(uint *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18(lVar5);
  }
  lVar6 = *param_2;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar5) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04fd75f4;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02dd004c(param_2,lVar5,0);
LAB_04fd75f4:
  param_1 = (code *)*puVar2;
  param_5 = puVar2[1];
  param_3 = (ulong)uVar8;
  unaff_w23 = in_stack_00000018._4_4_;
  goto code_r0x04fd7600;
}


