/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02d9bc00
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 unaff_x22;
  undefined8 uVar4;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_02b9ad44(param_1);
    }
    uVar1 = FUN_05c8c45c(unaff_x22);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x90) == 0) break;
      lVar2 = FUN_037a6268(*(long *)(unaff_x19 + 0x90),unaff_w21,*unaff_x25);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*unaff_x24);
      }
      uVar1 = FUN_05c8c45c(lVar2);
      if ((uVar1 & 1) != 0) {
        if (lVar2 == 0) break;
        uVar4 = *(undefined8 *)(lVar2 + 0x28);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar1 = FUN_05c8c45c(uVar4,0,0);
        if (((uVar1 & 1) != 0) && (*(char *)(lVar2 + 0x40) != '\0')) {
          lVar3 = *(long *)(lVar2 + 0x28);
          if (lVar3 == 0) break;
          if (*(char *)(lVar3 + 400) != '\0') {
            if (*(long *)(unaff_x20 + 0x28) == 0) break;
            FUN_02d4c194(*(long *)(unaff_x20 + 0x28),*(undefined8 *)(lVar3 + 0x28),0);
            if ((*(long *)(unaff_x20 + 0x28) == 0) || (*(long *)(lVar2 + 0x28) == 0)) break;
            FUN_02d4c194(*(long *)(lVar2 + 0x28),*(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x28)
                         ,0);
          }
        }
      }
    }
    lVar2 = *(long *)(unaff_x19 + 0x90);
    unaff_w21 = unaff_w21 + 1;
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) <= unaff_w21) {
      if (*(long *)(unaff_x20 + 0x50) != 0) {
        FUN_05ca25bc(*(long *)(unaff_x20 + 0x50),0);
      }
      lVar2 = *(long *)(unaff_x20 + 0x60);
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02d9bd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
        return;
      }
      return;
    }
    unaff_x22 = FUN_037a6268(lVar2,unaff_w21,*unaff_x25);
    param_1 = *unaff_x24;
    in_w9 = *(int *)(param_1 + 0xe4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


