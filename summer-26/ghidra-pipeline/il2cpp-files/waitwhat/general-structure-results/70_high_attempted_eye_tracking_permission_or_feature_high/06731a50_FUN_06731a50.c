/*
FUNCTION_NAME: FUN_06731a50
ENTRY_POINT: 06731a50
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


bool FUN_06731a50(long param_1,int param_2)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  
  if ((DAT_07558418 & 1) == 0) {
    FUN_03188a78(OVREyeGaze_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(OVRGLTFAnimatinonNode_TypeInfo);
    DAT_07558418 = 1;
  }
  puVar1 = PTR_DAT_070c1b68;
  if (param_1 != 0) {
    uVar7 = FUN_03b26540(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2,
                         *(undefined8 *)OVREyeGaze_TypeInfo);
    lVar8 = FUN_06a1536c(uVar7,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)puVar1);
    }
    uVar9 = FUN_069d8404(lVar8,0,0);
    if ((uVar9 & 1) == 0) {
      iVar5 = FUN_06a153f8(uVar7,0);
      if (lVar8 == 0) goto LAB_06731b84;
      iVar6 = FUN_069a958c(lVar8,0);
      fVar10 = (float)FUN_069a9640(lVar8,0);
      if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      bVar2 = false;
      bVar3 = true;
      bVar4 = false;
      if ((*(int *)(param_1 + 0x10) != param_2 && iVar5 != 1) && iVar6 != 0) {
        bVar2 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar10)) {
          bVar2 = fVar10 < 0.0;
          bVar3 = fVar10 == 0.0;
          bVar4 = false;
        }
      }
      bVar2 = !bVar3 && bVar2 == bVar4;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
LAB_06731b84:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


