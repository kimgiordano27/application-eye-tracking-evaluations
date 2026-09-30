/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04a7831c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


long System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_EyeGazeState>
               (ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_040b1acc();
  }
  lVar3 = **(long **)(param_2 + 0xb8);
  thunk_FUN_04085a30();
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = FUN_053bd344(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
    thunk_FUN_04085a30();
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    **(long **)(lVar1 + 0xb8) = lVar3;
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    thunk_FUN_040ec700(*(undefined8 *)(lVar1 + 0xb8),lVar3);
  }
  return lVar3;
}


