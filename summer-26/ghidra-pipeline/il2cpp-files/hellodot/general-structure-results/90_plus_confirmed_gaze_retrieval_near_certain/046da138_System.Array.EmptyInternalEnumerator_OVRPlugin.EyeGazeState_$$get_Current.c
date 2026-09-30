/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 046da138
PROGRAM: hellodot-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__get_Current(void)

{
  int iVar1;
  uint uVar2;
  char in_NG;
  char in_OV;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint unaff_w19;
  uint uVar6;
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
    if (in_NG == in_OV) {
      FUN_04f52508(0);
    }
    unaff_w23 = unaff_w23 + 1;
    uVar4 = (uint)*(undefined8 *)(unaff_x26 + 0x18);
    if (uVar4 <= unaff_w19) break;
    if (*(int *)(unaff_x26 + (long)(int)unaff_w19 * (long)(int)unaff_x25 + 0x20) == unaff_w27) {
      if (unaff_x24 == (long *)0x0) {
LAB_046da2f4:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar3 = (**(code **)(*unaff_x24 + 0x1b8))();
      if ((uVar3 & 1) != 0) {
        if (in_stack_00000008._4_1_ == '\x02') {
          FUN_04f52404();
        }
        else if (in_stack_00000008._4_1_ == '\x01') {
          uVar8 = unaff_x29[1];
          uVar7 = *unaff_x29;
          if (unaff_w19 < *(uint *)(unaff_x26 + 0x18)) {
            lVar5 = unaff_x26 + (long)(int)unaff_w19 * 0x28;
            *(undefined8 *)(lVar5 + 0x40) = unaff_x29[2];
            *(undefined8 *)(lVar5 + 0x38) = uVar8;
            *(undefined8 *)(lVar5 + 0x30) = uVar7;
            if (unaff_w19 < *(uint *)(unaff_x26 + 0x18)) {
              return 1;
            }
          }
          goto LAB_046da2dc;
        }
        return 0;
      }
      uVar4 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar4 <= unaff_w19) goto LAB_046da2dc;
    unaff_w19 = *(uint *)(unaff_x26 + (int)unaff_w19 * unaff_x25 + 0x24);
    in_OV = SBORROW4(unaff_w23,uVar4);
    in_NG = (int)(unaff_w23 - uVar4) < 0;
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar6 = *(uint *)(unaff_x21 + 0x20);
    if (uVar6 == uVar4) {
      FUN_046da6a0();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
      if (lVar5 == 0) goto LAB_046da2f4;
      uVar4 = *(uint *)(lVar5 + 0x18);
      iVar1 = 0;
      if (uVar4 != 0) {
        iVar1 = unaff_w27 / (int)uVar4;
      }
      uVar2 = unaff_w27 - iVar1 * uVar4;
      if (uVar4 <= uVar2) goto LAB_046da2dc;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar5 + (ulong)uVar2 * 4 + 0x20);
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
  iVar1 = *unaff_x28;
  *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
  *(int *)(lVar5 + 0x24) = iVar1 + -1;
  uVar8 = unaff_x29[1];
  uVar7 = *unaff_x29;
  *(undefined8 *)(lVar5 + 0x40) = unaff_x29[2];
  *(undefined8 *)(lVar5 + 0x38) = uVar8;
  *(undefined8 *)(lVar5 + 0x30) = uVar7;
  *unaff_x28 = uVar6 + 1;
  return 1;
}


