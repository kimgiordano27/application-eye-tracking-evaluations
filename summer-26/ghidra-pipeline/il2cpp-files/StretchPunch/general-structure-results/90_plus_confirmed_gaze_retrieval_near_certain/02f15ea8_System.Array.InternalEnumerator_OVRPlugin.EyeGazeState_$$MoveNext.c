/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 02f15ea8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x9;
  int *in_x10;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong uVar3;
  long unaff_x24;
  int unaff_w25;
  long unaff_x27;
  long unaff_x29;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02f15edc;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_02f15edc:
  (*(code *)*puVar1)();
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db68();
  }
  if (((unaff_w25 == 0xb) || (unaff_w25 == 0)) && (0 < (int)unaff_x21)) {
    if (unaff_x22 == 0) {
LAB_02f15f90:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar3 = 0;
    do {
      uVar2 = FUN_03604bc4();
      if ((uVar2 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02f15f90;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        FUN_02f123d0();
      }
      uVar3 = uVar3 + 1;
    } while (unaff_x21 != uVar3);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


