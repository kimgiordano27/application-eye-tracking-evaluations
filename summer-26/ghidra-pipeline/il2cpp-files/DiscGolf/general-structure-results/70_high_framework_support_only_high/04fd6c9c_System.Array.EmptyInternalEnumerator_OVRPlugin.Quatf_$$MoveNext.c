/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$MoveNext
ENTRY_POINT: 04fd6c9c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext(void)

{
  uint uVar1;
  int iVar2;
  undefined1 in_CY;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  uint uVar9;
  undefined8 unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  int unaff_w27;
  undefined8 unaff_x28;
  char unaff_w29;
  int *in_stack_00000018;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  while (uVar9 = (uint)unaff_x24, !(bool)in_CY) {
    if (*(int *)(unaff_x19 + (long)(int)unaff_w25 * (long)unaff_w23) == unaff_w27) {
      plVar3 = (long *)FUN_0390b9f8(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_w25) goto LAB_04fd6e64;
      if (plVar3 == (long *)0x0) goto LAB_04fd6e68;
      uVar4 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,*(undefined4 *)
                                 (unaff_x19 + (long)(int)unaff_w25 * (long)unaff_w23 + 8),
                         uStack000000000000002c,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar4 & 1) != 0) {
        if (unaff_w29 == '\x02') {
          uStack0000000000000028 = uStack000000000000002c;
          uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000028);
          FUN_05509920(uVar5,0);
        }
        else if (unaff_w29 == '\x01') {
          if (unaff_w25 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined8 *)(unaff_x19 + (long)(int)unaff_w25 * 0x18 + 0x10) = unaff_x28;
            LeanTween__value();
            return 1;
          }
          goto LAB_04fd6e64;
        }
        return 0;
      }
      uVar9 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar9 <= unaff_w25) goto LAB_04fd6e64;
    unaff_w25 = *(uint *)(unaff_x19 + (long)(int)unaff_w25 * (long)unaff_w23 + 4);
    if ((int)uVar9 <= unaff_w22) {
      FUN_05509a24(0);
    }
    unaff_x24 = *(undefined8 *)(unaff_x26 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    in_CY = (uint)unaff_x24 <= unaff_w25;
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar8 = *(uint *)(unaff_x20 + 0x20);
    if (uVar8 == uVar9) {
      FUN_04fd7204();
      lVar7 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
      if (lVar7 == 0) goto LAB_04fd6e68;
      uVar9 = *(uint *)(lVar7 + 0x18);
      iVar2 = 0;
      if (uVar9 != 0) {
        iVar2 = unaff_w27 / (int)uVar9;
      }
      uVar1 = unaff_w27 - iVar2 * uVar9;
      if (uVar9 <= uVar1) goto LAB_04fd6e64;
      lVar6 = *(long *)(unaff_x20 + 0x18);
      in_stack_00000018 = (int *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar6 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
    }
    if (lVar6 == 0) {
LAB_04fd6e68:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_04fd6e64;
    lVar6 = lVar6 + (long)(int)uVar8 * 0x18;
  }
  else {
    uVar8 = *(uint *)(unaff_x20 + 0x24);
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    if (uVar9 <= uVar8) {
LAB_04fd6e64:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar6 = unaff_x26 + (long)(int)uVar8 * 0x18;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
  }
  *(int *)(lVar6 + 0x20) = unaff_w27;
  *(int *)(lVar6 + 0x24) = *in_stack_00000018 + -1;
  *(undefined4 *)(lVar6 + 0x28) = uStack000000000000002c;
  *(undefined8 *)(lVar6 + 0x30) = unaff_x28;
  LeanTween__value();
  *in_stack_00000018 = uVar8 + 1;
  return 1;
}


