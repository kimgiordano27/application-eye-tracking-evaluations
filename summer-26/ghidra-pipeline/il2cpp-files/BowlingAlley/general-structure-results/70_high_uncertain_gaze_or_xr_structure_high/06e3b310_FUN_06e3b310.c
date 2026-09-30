/*
FUNCTION_NAME: FUN_06e3b310
ENTRY_POINT: 06e3b310
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


void FUN_06e3b310(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_076ead6e & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07289b10);
    thunk_FUN_032e1da0(PTR_DAT_07289b18);
    thunk_FUN_032e1da0(PTR_DAT_07289ad0);
    thunk_FUN_032e1da0(PTR_DAT_07289c70);
    thunk_FUN_032e1da0(PTR_DAT_0728a210);
    thunk_FUN_032e1da0(PTR_DAT_07289ae0);
    thunk_FUN_032e1da0(PTR_DAT_07289c78);
    thunk_FUN_032e1da0(PTR_DAT_07289ae8);
    thunk_FUN_032e1da0(PTR_DAT_07289af0);
    thunk_FUN_032e1da0(PTR_DAT_07289af8);
    thunk_FUN_032e1da0(Method_OVRSceneManager_OVRManager_SceneCaptureComplete__);
    thunk_FUN_032e1da0(Method_OVRSceneManager_OnTrackingSpaceChanged__);
    thunk_FUN_032e1da0(Method_OVRSceneManager_UpdateAllSceneAnchors__);
    thunk_FUN_032e1da0(Method_OVRSemanticLabels_GetClassifications__);
    DAT_076ead6e = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar3 = FUN_03d0aa74(*(long *)(param_1 + 0x50),param_2,*(undefined8 *)PTR_DAT_07289b10);
    puVar1 = PTR_DAT_07289ad0;
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((param_2 != 0) && (*(long *)(param_2 + 0x28) != 0)) {
      lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x28);
      uVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07289ad0);
      FUN_04af414c(uVar4,param_1,
                   *(undefined8 *)Method_OVRSceneManager_OVRManager_SceneCaptureComplete__,0);
      puVar2 = PTR_DAT_0728a210;
      if (lVar5 != 0) {
        FUN_04af7778(lVar5,uVar4,*(undefined8 *)PTR_DAT_0728a210);
        if (*(long *)(param_2 + 0x28) != 0) {
          lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
          uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
          FUN_04af414c(uVar4,param_1,*(undefined8 *)Method_OVRSceneManager_UpdateAllSceneAnchors__,0
                      );
          if (lVar5 != 0) {
            FUN_04af7778(lVar5,uVar4,*(undefined8 *)puVar2);
            if (*(long *)(param_2 + 0x28) != 0) {
              lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x38);
              uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
              FUN_04af414c(uVar4,param_1,
                           *(undefined8 *)Method_OVRSemanticLabels_GetClassifications__,0);
              if (lVar5 != 0) {
                FUN_04af7778(lVar5,uVar4,*(undefined8 *)puVar2);
                if (*(long *)(param_2 + 0x28) != 0) {
                  lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x40);
                  uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                  FUN_04af414c(uVar4,param_1,
                               *(undefined8 *)Method_OVRSceneManager_OnTrackingSpaceChanged__,0);
                  if (lVar5 != 0) {
                    FUN_04af7778(lVar5,uVar4,*(undefined8 *)puVar2);
                    if (*(long *)(param_1 + 0x50) != 0) {
                      FUN_03d0ac40(*(long *)(param_1 + 0x50),param_2,*(undefined8 *)PTR_DAT_07289b18
                                  );
                      lVar5 = FUN_06e3acac(param_1);
                      if (lVar5 == 0) {
                        return;
                      }
                      if (*(long *)(lVar5 + 0xa0) == 0) {
                        return;
                      }
                      FUN_04af799c(*(long *)(lVar5 + 0xa0),param_2,*(undefined8 *)PTR_DAT_07289c70);
                      return;
                    }
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


