/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0139a42c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  
                    /* try { // try from 0139a42c to 0149a437 has its CatchHandler @ 0139a290 */
  if (param_1 == (long *)0x0) {
    FUN_01230ab0();
    return;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0139a428 with catch @ 0139a434
                        */
                    /* try { // try from 0139a438 to 0149a557 has its CatchHandler @ 0139a438
                       catch(type#1 @ 00000000) { ... } // from try @ 0139a438 with catch @ 0139a438
                       catch(type#1 @ 00000000) { ... } // from try @ 0139a560 with catch @ 0139a438
                       catch(type#1 @ 00000000) { ... } // from try @ 0139a5c0 with catch @ 0139a438
                        */
  lVar1 = thunk_FUN_0124b7d8(**(undefined8 **)(unaff_x20 + 0x38));
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_0124baac(lVar1,*(undefined8 *)(*param_1 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar3,0);
  }
  if (unaff_w19 < *(uint *)(param_1 + 3)) {
    param_1[(long)(int)unaff_w19 + 4] = lVar1;
    thunk_FUN_01286abc(param_1 + (long)(int)unaff_w19 + 4,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


