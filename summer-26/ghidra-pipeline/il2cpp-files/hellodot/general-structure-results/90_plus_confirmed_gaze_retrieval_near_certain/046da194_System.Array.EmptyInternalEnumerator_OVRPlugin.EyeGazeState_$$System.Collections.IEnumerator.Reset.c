/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 046da194
PROGRAM: hellodot-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
          (void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  long lVar4;
  uint unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar5;
  int unaff_w27;
  int *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (unaff_w19 == in_w8) {
    FUN_046da6a0();
    lVar4 = *(long *)(unaff_x21 + 0x10);
    *(uint *)(unaff_x21 + 0x20) = unaff_w19 + 1;
    if (lVar4 == 0) goto LAB_046da2f4;
    uVar1 = *(uint *)(lVar4 + 0x18);
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar3 = unaff_w27 / (int)uVar1;
    }
    uVar2 = unaff_w27 - iVar3 * uVar1;
    if (uVar1 <= uVar2) goto LAB_046da2dc;
    lVar5 = *(long *)(unaff_x21 + 0x18);
    unaff_x28 = (int *)(lVar4 + (ulong)uVar2 * 4 + 0x20);
  }
  else {
    lVar5 = *(long *)(unaff_x21 + 0x18);
    *(uint *)(unaff_x21 + 0x20) = unaff_w19 + 1;
  }
  if (lVar5 != 0) {
    if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)unaff_w19 * 0x28;
      *(int *)(lVar5 + 0x20) = unaff_w27;
      iVar3 = *unaff_x28;
      *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
      *(int *)(lVar5 + 0x24) = iVar3 + -1;
      uVar7 = unaff_x29[1];
      uVar6 = *unaff_x29;
      *(undefined8 *)(lVar5 + 0x40) = unaff_x29[2];
      *(undefined8 *)(lVar5 + 0x38) = uVar7;
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      *unaff_x28 = unaff_w19 + 1;
      return 1;
    }
LAB_046da2dc:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
LAB_046da2f4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


