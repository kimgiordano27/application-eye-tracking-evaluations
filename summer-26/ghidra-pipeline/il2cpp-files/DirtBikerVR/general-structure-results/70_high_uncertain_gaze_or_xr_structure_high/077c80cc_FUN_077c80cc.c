/*
FUNCTION_NAME: FUN_077c80cc
ENTRY_POINT: 077c80cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_077c80cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  
  puVar6 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  if ((DAT_089870d6 & 1) == 0) {
    FUN_03a8a718(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    DAT_089870d6 = 1;
  }
  uVar5 = _UNK_015c9cd8;
  uVar4 = _DAT_015c9cd0;
  uVar3 = _DAT_015c9010;
  uVar2 = _UNK_015c7768;
  uVar1 = _DAT_015c7760;
  puVar7 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
  puVar7[1] = _UNK_015c9018;
  *puVar7 = uVar3;
  puVar7[3] = uVar2;
  puVar7[2] = uVar1;
  puVar7[5] = uVar5;
  puVar7[4] = uVar4;
  return;
}


