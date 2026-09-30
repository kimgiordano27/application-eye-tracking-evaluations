/*
FUNCTION_NAME: FUN_087daf24
ENTRY_POINT: 087daf24
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_possible_biometrics_hits_4
*/


void FUN_087daf24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo;
  puVar1 = System_Collections_Generic_HashSet<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo;
  if ((DAT_0943d01d & 1) == 0) {
    FUN_03c8f898(System_Collections_Generic_HashSet<MB3_MeshCombinerSingle_BoneAndBindpose>_TypeInfo
                );
    FUN_03c8f898(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    FUN_03c8f898(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    DAT_0943d01d = 1;
  }
  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_04d70cf4(uVar4,0,*(undefined8 *)puVar2,0);
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  thunk_FUN_03d233cc((undefined8 *)(param_1 + 0x88),uVar4);
  FUN_060babf0(param_1,*(undefined8 *)puVar3);
  return;
}


