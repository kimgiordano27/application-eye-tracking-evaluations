/*
FUNCTION_NAME: FUN_072cc318
ENTRY_POINT: 072cc318
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_6;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_072cc318(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = OVRPlugin_BoneCapsule___TypeInfo;
  puVar1 = System_Collections_Generic_List<Chunk>_TypeInfo;
  if ((DAT_08268ace & 1) == 0) {
    FUN_0373b518(System_Collections_Generic_List<Chunk>_TypeInfo);
    FUN_0373b518(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_0373b518(PTR_DAT_07d95dd8);
    FUN_0373b518(PTR_DAT_07dce840);
    FUN_0373b518(OVRPlugin_FaceTrackingDataSource___TypeInfo);
    FUN_0373b518(OVRPlugin_BoneCapsule___TypeInfo);
    DAT_08268ace = 1;
  }
  uVar4 = FUN_03f46c40(param_1,*(undefined8 *)puVar1);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar6);
    lVar6 = *(long *)puVar2;
  }
  puVar3 = OVRPlugin_EyeGazeState___TypeInfo;
  puVar1 = PTR_DAT_07d95dd8;
  lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar6);
      lVar6 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar6 + 0xb8);
    lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07dce840);
    FUN_044a4918(lVar7,uVar8,*(undefined8 *)OVRPlugin_FaceTrackingDataSource___TypeInfo,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar7;
    thunk_FUN_037aeb94(plVar5,lVar7);
  }
  uVar4 = FUN_03f6a6a8(uVar4,lVar7,*(undefined8 *)puVar3);
  uVar4 = FUN_03f756d8(uVar4,*(undefined8 *)puVar1);
  FUN_060c23f8(param_2,uVar4,0);
  return;
}


