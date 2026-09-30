/*
FUNCTION_NAME: FUN_0675e364
ENTRY_POINT: 0675e364
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


void FUN_0675e364(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 auStack_64 [8];
  int local_5c;
  int local_58;
  
  if ((DAT_07558595 & 1) == 0) {
    FUN_03188a78(OVREyeGaze_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_07558595 = 1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar4 = OVREyeGaze_TypeInfo;
  puVar3 = PTR_DAT_070c1b68;
  if (param_2 != 0) {
    if ((*(char *)(param_2 + 0x31) != '\0') && (0 < *(int *)(param_2 + 0x28))) {
      iVar10 = 0;
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      do {
        if (*(int *)(param_1 + 0x1c) != 0) {
          return;
        }
        uVar6 = FUN_03b26540(uVar1,uVar2,iVar10,*(undefined8 *)puVar4);
        lVar7 = FUN_06a1536c(uVar6,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)puVar3);
        }
        uVar8 = FUN_069d69b8(lVar7,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar7 == 0) goto LAB_0675e4c4;
          FUN_069a931c(auStack_64,lVar7,0);
          if ((local_5c == 1) && (iVar5 = FUN_069a958c(lVar7,0), iVar5 != 0)) {
            FUN_069a931c(auStack_64,lVar7,0);
            if (local_58 == 1) {
              uVar9 = 2;
            }
            else {
              if (local_58 != 2) goto LAB_0675e498;
              uVar9 = 1;
            }
            *(undefined4 *)(param_1 + 0x1c) = uVar9;
          }
        }
LAB_0675e498:
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_2 + 0x28));
    }
    return;
  }
LAB_0675e4c4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


