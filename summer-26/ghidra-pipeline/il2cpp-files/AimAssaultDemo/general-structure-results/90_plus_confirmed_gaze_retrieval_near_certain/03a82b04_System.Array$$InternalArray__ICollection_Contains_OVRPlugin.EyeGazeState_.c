/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03a82b04
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *puVar4;
  long unaff_x26;
  undefined8 *puVar5;
  undefined8 *unaff_x27;
  
  puVar5 = *(undefined8 **)(unaff_x26 + 0xe90);
  puVar4 = *(undefined8 **)(unaff_x25 + 0xa80);
  uVar1 = thunk_FUN_037788cc();
  FUN_058e3b74();
  uVar2 = thunk_FUN_037788cc(*unaff_x27);
  FUN_058e4c20();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_03a70cf8(uVar1,uVar2);
  uVar1 = FUN_03fa4fa0(uVar1,*puVar5);
  lVar3 = FUN_0420f09c(uVar1,*unaff_x20,*puVar4);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x148) = unaff_w19;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


