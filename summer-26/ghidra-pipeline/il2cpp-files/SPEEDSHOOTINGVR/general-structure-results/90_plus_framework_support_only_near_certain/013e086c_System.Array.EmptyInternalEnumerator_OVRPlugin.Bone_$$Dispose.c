/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$Dispose
ENTRY_POINT: 013e086c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__Dispose(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int unaff_w19;
  uint uVar8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  char unaff_w23;
  int *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  undefined8 uVar9;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while ((param_1 & 1) == 0) {
    uVar6 = (ulong)*(uint *)(unaff_x28 + 0x18);
    do {
      if ((uint)uVar6 <= (uint)unaff_x22) goto LAB_013e0a88;
      uVar8 = *(uint *)(unaff_x28 + unaff_x22 * unaff_x21 + 0x24);
      if ((int)(uint)uVar6 <= unaff_w19) {
        FUN_01d69580(0);
      }
      uVar6 = *(ulong *)(unaff_x28 + 0x18);
      unaff_w19 = unaff_w19 + 1;
      if ((uint)uVar6 <= uVar8) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar8 = *(uint *)(unaff_x20 + 0x20);
          if (uVar8 == (uint)uVar6) {
            FUN_013e0e44();
            lVar7 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
            if (lVar7 == 0) goto LAB_013e0a8c;
            uVar1 = *(uint *)(lVar7 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w29 / (int)uVar1;
            }
            uVar2 = unaff_w29 - iVar3 * uVar1;
            if (uVar1 <= uVar2) goto LAB_013e0a88;
            unaff_x28 = *(long *)(unaff_x20 + 0x18);
            unaff_x25 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x28 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
          }
          if (unaff_x28 == 0) goto LAB_013e0a8c;
          if (*(uint *)(unaff_x28 + 0x18) <= uVar8) goto LAB_013e0a88;
          lVar7 = (long)(int)uVar8;
        }
        else {
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          uVar8 = *(uint *)(unaff_x20 + 0x24);
          if (*(uint *)(unaff_x28 + 0x18) <= uVar8) goto LAB_013e0a88;
          lVar7 = (long)(int)uVar8;
          *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x28 + lVar7 * 0x30 + 0x24);
        }
        lVar7 = unaff_x28 + lVar7 * 0x30;
        *(int *)(lVar7 + 0x20) = unaff_w29;
        *(int *)(lVar7 + 0x24) = *unaff_x25 + -1;
        *(undefined8 *)(lVar7 + 0x30) = in_stack_00000048;
        *(undefined8 *)(lVar7 + 0x28) = in_stack_00000040;
        uVar9 = unaff_x26[1];
        uVar5 = *unaff_x26;
        *(undefined8 *)(lVar7 + 0x48) = unaff_x26[2];
        *(undefined8 *)(lVar7 + 0x40) = uVar9;
        *(undefined8 *)(lVar7 + 0x38) = uVar5;
        *unaff_x25 = uVar8 + 1;
        return 1;
      }
      unaff_x22 = (long)(int)uVar8;
    } while (*(int *)(unaff_x28 + (long)(int)uVar8 * (long)(int)unaff_x21 + 0x20) != unaff_w29);
    plVar4 = (long *)FUN_012274ec(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0) + 0x18));
    if (*(uint *)(unaff_x28 + 0x18) <= uVar8) goto LAB_013e0a88;
    if (plVar4 == (long *)0x0) {
LAB_013e0a8c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar7 = unaff_x28 + unaff_x22 * unaff_x21;
    param_1 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined8 *)(lVar7 + 0x28),*(undefined8 *)(lVar7 + 0x30),
                         in_stack_00000040,in_stack_00000048,*(undefined8 *)(*plVar4 + 0x1c0));
  }
  if (unaff_w23 == '\x02') {
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    uVar5 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(*(long *)(unaff_x27 + 0x20) + 0xc0) + 0x70)
                               ,&stack0x00000020);
    FUN_01d6947c(uVar5,0);
  }
  else if (unaff_w23 == '\x01') {
    in_stack_00000030 = unaff_x26[2];
    in_stack_00000028 = unaff_x26[1];
    in_stack_00000020 = *unaff_x26;
    if ((uint)unaff_x22 < *(uint *)(unaff_x28 + 0x18)) {
      lVar7 = unaff_x28 + unaff_x22 * 0x30;
      *(undefined8 *)(lVar7 + 0x48) = in_stack_00000030;
      *(undefined8 *)(lVar7 + 0x40) = in_stack_00000028;
      *(undefined8 *)(lVar7 + 0x38) = in_stack_00000020;
      return 1;
    }
LAB_013e0a88:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
  return 0;
}


