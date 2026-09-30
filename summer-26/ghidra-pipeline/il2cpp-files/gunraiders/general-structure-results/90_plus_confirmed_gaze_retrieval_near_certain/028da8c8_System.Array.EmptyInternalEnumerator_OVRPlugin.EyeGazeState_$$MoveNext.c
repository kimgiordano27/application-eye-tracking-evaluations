/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 028da8c8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 in_CY;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  int unaff_w19;
  uint uVar8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  char unaff_w29;
  undefined8 uVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while (uVar6 = (uint)param_1, !(bool)in_CY) {
    lVar7 = (long)(int)unaff_w24;
    if (*(int *)(unaff_x26 + (long)(int)unaff_w24 * (long)(int)unaff_x22 + 0x20) == unaff_w27) {
      plVar3 = (long *)FUN_022cb868(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_w24) goto LAB_028daa8c;
      if (plVar3 == (long *)0x0) goto LAB_028daabc;
      uVar4 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,*(undefined4 *)(unaff_x26 + lVar7 * unaff_x22 + 0x28),
                         in_stack_00000028._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar4 & 1) != 0) {
        if (unaff_w29 == '\x02') {
          in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,in_stack_00000028._4_4_);
          uVar5 = thunk_FUN_01c49334(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000010);
          FUN_032f29a8(uVar5,0);
        }
        else if (unaff_w29 == '\x01') {
          in_stack_00000020 = unaff_x25[2];
          in_stack_00000018 = unaff_x25[1];
          in_stack_00000010 = *unaff_x25;
          if (unaff_w24 < *(uint *)(unaff_x26 + 0x18)) {
            lVar7 = unaff_x26 + lVar7 * 0x28;
            *(undefined8 *)(lVar7 + 0x40) = in_stack_00000020;
            *(undefined8 *)(lVar7 + 0x38) = in_stack_00000018;
            *(undefined8 *)(lVar7 + 0x30) = in_stack_00000010;
            if (unaff_w24 < *(uint *)(unaff_x26 + 0x18)) {
              return 1;
            }
          }
          goto LAB_028daa8c;
        }
        return 0;
      }
      uVar6 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar6 <= unaff_w24) goto LAB_028daa8c;
    unaff_w24 = *(uint *)(unaff_x26 + lVar7 * unaff_x22 + 0x24);
    if ((int)uVar6 <= unaff_w19) {
      FUN_032f2aac(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    unaff_w19 = unaff_w19 + 1;
    in_CY = (uint)param_1 <= unaff_w24;
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar8 = *(uint *)(unaff_x20 + 0x20);
    if (uVar8 == uVar6) {
      FUN_028dae4c();
      lVar7 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
      if (lVar7 == 0) goto LAB_028daabc;
      uVar6 = *(uint *)(lVar7 + 0x18);
      iVar2 = 0;
      if (uVar6 != 0) {
        iVar2 = unaff_w27 / (int)uVar6;
      }
      uVar1 = unaff_w27 - iVar2 * uVar6;
      if (uVar6 <= uVar1) goto LAB_028daa8c;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar8 + 1;
    }
    if (unaff_x26 == 0) {
LAB_028daabc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_028daa8c;
    lVar7 = (long)(int)uVar8;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar8 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar8) {
LAB_028daa8c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    lVar7 = (long)(int)uVar8;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x28 + 0x24);
  }
  lVar7 = unaff_x26 + lVar7 * 0x28;
  *(int *)(lVar7 + 0x20) = unaff_w27;
  *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar7 + 0x28) = in_stack_00000028._4_4_;
  uVar9 = unaff_x25[1];
  uVar5 = *unaff_x25;
  *(undefined8 *)(lVar7 + 0x40) = unaff_x25[2];
  *(undefined8 *)(lVar7 + 0x38) = uVar9;
  *(undefined8 *)(lVar7 + 0x30) = uVar5;
  *unaff_x28 = uVar8 + 1;
  return 1;
}


