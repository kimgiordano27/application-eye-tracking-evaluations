/*
FUNCTION_NAME: FUN_06e3a46c
ENTRY_POINT: 06e3a46c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


long FUN_06e3a46c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,byte param_5
                 )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = Method_OVRSceneManager_CheckIfClassificationsAreValid__;
  if ((DAT_076ead6a & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07289ac8);
    thunk_FUN_032e1da0(PTR_DAT_07289ad0);
    thunk_FUN_032e1da0(PTR_DAT_07289ad8);
    thunk_FUN_032e1da0(PTR_DAT_07289c70);
    thunk_FUN_032e1da0(PTR_DAT_07289ae0);
    thunk_FUN_032e1da0(PTR_DAT_07289c78);
    thunk_FUN_032e1da0(PTR_DAT_07289ae8);
    thunk_FUN_032e1da0(PTR_DAT_07289af0);
    thunk_FUN_032e1da0(PTR_DAT_07289af8);
    thunk_FUN_032e1da0(Method_OVRSceneManager_CheckIfClassificationsAreValid__);
    thunk_FUN_032e1da0(Method_OVRSceneManager_OVRManager_SceneCaptureComplete__);
    thunk_FUN_032e1da0(Method_OVRSceneManager_OnTrackingSpaceChanged__);
    thunk_FUN_032e1da0(Method_OVRSceneManager_UpdateAllSceneAnchors__);
    thunk_FUN_032e1da0(Method_OVRSemanticLabels_GetClassifications__);
    DAT_076ead6a = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_056b12e0(lVar4,param_4,param_2,param_3,0);
  *(undefined8 *)(lVar4 + 0x58) = uVar6;
  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x58),uVar6);
  *(byte *)(lVar4 + 0x60) = param_5 & 1;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_03d0b564(*(long *)(param_1 + 0x50),lVar4,*(undefined8 *)PTR_DAT_07289ac8);
    puVar2 = Method_OVRSceneManager_OVRManager_SceneCaptureComplete__;
    puVar1 = PTR_DAT_07289ad0;
    if (*(long *)(lVar4 + 0x28) != 0) {
      lVar5 = *(long *)(*(long *)(lVar4 + 0x28) + 0x28);
      uVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07289ad0);
      FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar2,0);
      puVar2 = PTR_DAT_07289ad8;
      if (lVar5 != 0) {
        FUN_04af773c(lVar5,uVar6,*(undefined8 *)PTR_DAT_07289ad8);
        puVar3 = Method_OVRSceneManager_UpdateAllSceneAnchors__;
        if (*(long *)(lVar4 + 0x28) != 0) {
          lVar5 = *(long *)(*(long *)(lVar4 + 0x28) + 0x30);
          uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
          FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar3,0);
          if (lVar5 != 0) {
            FUN_04af773c(lVar5,uVar6,*(undefined8 *)puVar2);
            puVar3 = Method_OVRSemanticLabels_GetClassifications__;
            if (*(long *)(lVar4 + 0x28) != 0) {
              lVar5 = *(long *)(*(long *)(lVar4 + 0x28) + 0x38);
              uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
              FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar3,0);
              if (lVar5 != 0) {
                FUN_04af773c(lVar5,uVar6,*(undefined8 *)puVar2);
                puVar3 = Method_OVRSceneManager_OnTrackingSpaceChanged__;
                if (*(long *)(lVar4 + 0x28) != 0) {
                  lVar5 = *(long *)(*(long *)(lVar4 + 0x28) + 0x40);
                  uVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                  FUN_04af414c(uVar6,param_1,*(undefined8 *)puVar3,0);
                  if (lVar5 != 0) {
                    FUN_04af773c(lVar5,uVar6,*(undefined8 *)puVar2);
                    lVar5 = FUN_06e3acac(param_1);
                    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) {
                      FUN_04af799c(*(long *)(lVar5 + 0x28),lVar4,*(undefined8 *)PTR_DAT_07289c70);
                    }
                    return lVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


