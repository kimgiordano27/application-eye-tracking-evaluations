/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02dda064
PROGRAM: vrealmfunverse-libil2cpp.so
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
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  
  uVar1 = thunk_FUN_02b79644();
  FUN_03fbd788();
  FUN_02dd6110(uVar1);
  uVar1 = thunk_FUN_02b79644(*unaff_x22);
  FUN_03fbd788();
  FUN_02dd62b0(uVar1);
  uVar1 = thunk_FUN_02b79644(*unaff_x22);
  FUN_03fbd788();
  FUN_02dd6450(uVar1);
  uVar1 = thunk_FUN_02b79644(*unaff_x27);
  FUN_04cf4310();
  FUN_02dcd83c(uVar1);
  uVar1 = thunk_FUN_02b79644(*unaff_x27);
  FUN_04cf4310();
  FUN_02dd65f0(uVar1);
  uVar1 = thunk_FUN_02b79644(*unaff_x25);
  FUN_04380420();
  FUN_02dd6768(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  uVar1 = thunk_FUN_02b79644(*unaff_x22);
  FUN_03fbd788();
  lVar2 = FUN_04dc0fdc(uVar4,uVar1,0);
  if (lVar2 == 0) {
    lVar3 = 0;
    plVar5 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *plVar5 = 0;
  }
  else {
    uVar1 = *unaff_x22;
    lVar3 = thunk_FUN_02b79548(lVar2,uVar1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar2,uVar1);
    }
    uVar1 = *unaff_x22;
    plVar5 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *plVar5 = lVar3;
    lVar3 = thunk_FUN_02b79548(lVar2,uVar1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar2,uVar1);
    }
  }
  thunk_FUN_02bb0e9c(plVar5,lVar3);
  return;
}


