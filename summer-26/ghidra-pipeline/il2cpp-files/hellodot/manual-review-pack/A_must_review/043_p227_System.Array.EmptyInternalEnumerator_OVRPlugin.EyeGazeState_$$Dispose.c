/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 046da12c
PROGRAM: hellodot-libil2cpp.so
SCORE: 175
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose(ulong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  
  while( true ) {
    uVar6 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x25 + 0x24);
    if ((int)param_1 <= unaff_w23) {
      FUN_04f52508(0);
    }
    param_1 = *(ulong *)(unaff_x26 + 0x18);
    unaff_w23 = unaff_w23 + 1;
    if ((uint)param_1 <= uVar6) break;
    unaff_x19 = (long)(int)uVar6;
    if (*(int *)(unaff_x26 + (long)(int)uVar6 * (long)(int)unaff_x25 + 0x20) == unaff_w27) {
      if (unaff_x24 == (long *)0x0) {
LAB_046da2f4:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar4 = (**(code **)(*unaff_x24 + 0x1b8))();
      if ((uVar4 & 1) != 0) {
        if (in_stack_00000008._4_1_ == '\x02') {
          FUN_04f52404();
        }
        else if (in_stack_00000008._4_1_ == '\x01') {
          uVar8 = unaff_x29[1];
          uVar7 = *unaff_x29;
          if (uVar6 < *(uint *)(unaff_x26 + 0x18)) {
            lVar5 = unaff_x26 + unaff_x19 * 0x28;
            *(undefined8 *)(lVar5 + 0x40) = unaff_x29[2];
            *(undefined8 *)(lVar5 + 0x38) = uVar8;
            *(undefined8 *)(lVar5 + 0x30) = uVar7;
            if (uVar6 < *(uint *)(unaff_x26 + 0x18)) {
              return 1;
            }
          }
          goto LAB_046da2dc;
        }
        return 0;
      }
      param_1 = (ulong)*(uint *)(unaff_x26 + 0x18);
    }
    if ((uint)param_1 <= uVar6) goto LAB_046da2dc;
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar6 = *(uint *)(unaff_x21 + 0x20);
    if (uVar6 == (uint)param_1) {
      FUN_046da6a0();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
      if (lVar5 == 0) goto LAB_046da2f4;
      uVar1 = *(uint *)(lVar5 + 0x18);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = unaff_w27 / (int)uVar1;
      }
      uVar3 = unaff_w27 - iVar2 * uVar1;
      if (uVar1 <= uVar3) goto LAB_046da2dc;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar5 + (ulong)uVar3 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
    }
    if (unaff_x26 == 0) goto LAB_046da2f4;
    if (*(uint *)(unaff_x26 + 0x18) <= uVar6) {
LAB_046da2dc:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    lVar5 = (long)(int)uVar6;
  }
  else {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    uVar6 = *(uint *)(unaff_x21 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_046da2dc;
    lVar5 = (long)(int)uVar6;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x28 + 0x24);
  }
  lVar5 = unaff_x26 + lVar5 * 0x28;
  *(int *)(lVar5 + 0x20) = unaff_w27;
  iVar2 = *unaff_x28;
  *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
  *(int *)(lVar5 + 0x24) = iVar2 + -1;
  uVar8 = unaff_x29[1];
  uVar7 = *unaff_x29;
  *(undefined8 *)(lVar5 + 0x40) = unaff_x29[2];
  *(undefined8 *)(lVar5 + 0x38) = uVar8;
  *(undefined8 *)(lVar5 + 0x30) = uVar7;
  *unaff_x28 = uVar6 + 1;
  return 1;
}


