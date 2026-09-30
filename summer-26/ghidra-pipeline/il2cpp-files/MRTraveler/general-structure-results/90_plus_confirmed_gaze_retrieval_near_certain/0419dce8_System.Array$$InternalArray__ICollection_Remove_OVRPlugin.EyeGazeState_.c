/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0419dce8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 152
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  int unaff_w21;
  long unaff_x24;
  undefined *puVar4;
  
  FUN_03cf12a0();
  if (unaff_x24 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar1 = thunk_FUN_03cf5234();
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e80478);
    FUN_0705a2f8(uVar1,uVar2,0);
    goto LAB_0419dde4;
  }
  if (unaff_w21 < 0) {
LAB_0419dd3c:
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar1 = thunk_FUN_03cf5234();
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e80480);
    puVar4 = PTR_DAT_08e80488;
  }
  else {
    if (*(int *)(unaff_x24 + 0x18) < unaff_w21) goto LAB_0419dd3c;
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x24 + 0x18) - unaff_w21)) {
      FUN_041ae838();
      return;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar1 = thunk_FUN_03cf5234();
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e80490);
    puVar4 = PTR_DAT_08e80498;
  }
  uVar3 = thunk_FUN_03ce5214(puVar4);
  FUN_070619b8(uVar1,uVar2,uVar3,0);
LAB_0419dde4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar1);
}


