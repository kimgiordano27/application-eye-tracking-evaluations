/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 069482a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong unaff_x25;
  long *unaff_x29;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((unaff_x25 & 1) == 0) {
LAB_06948418:
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b65f8,0);
    FUN_06939cec();
    FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b66c0,0);
    FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6680,0);
    return;
  }
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6660,0);
  puVar1 = PTR_DAT_08487320;
  lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
  FUN_07c9d2fc(lVar2,*(undefined8 *)PTR_DAT_084b6638,0);
  lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_07c9d2fc(lVar3,*(undefined8 *)PTR_DAT_084b6688,0);
  if ((((lVar2 != 0) && (lVar4 = FUN_07c9c69c(lVar2,0), lVar4 != 0)) && (FUN_07cacdbc(), lVar3 != 0)
      ) && (lVar4 = FUN_07c9c69c(lVar3,0), lVar4 != 0)) {
    FUN_07cacdbc();
    lVar4 = FUN_07c9c69c(lVar2,0);
    fVar5 = (float)FUN_07cac280();
    fVar7 = param_2;
    fVar8 = param_3;
    fVar6 = (float)FUN_07cac7a8();
    if (lVar4 != 0) {
      param_3 = param_3 - fVar8;
      param_2 = param_2 - fVar7;
      FUN_07cac358(fVar5 - fVar6,param_2,param_3,lVar4,0);
      lVar4 = FUN_07c9c69c(lVar3,0);
      fVar5 = (float)FUN_07cac280();
      fVar7 = param_2;
      fVar8 = param_3;
      fVar6 = (float)FUN_07cac7a8();
      if (lVar4 != 0) {
        FUN_07cac358(fVar5 + fVar6,param_2 + fVar7,param_3 + fVar8,lVar4,0);
        puVar1 = PTR_DAT_084b5a40;
        FUN_07c998ec(lVar2,*(undefined8 *)PTR_DAT_084b5a40,0);
        FUN_07c998ec(lVar3,*(undefined8 *)puVar1,0);
        goto LAB_06948418;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


