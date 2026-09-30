/*
FUNCTION_NAME: FUN_019453dc
ENTRY_POINT: 019453dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


float FUN_019453dc(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  float fVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_54;
  
  if ((DAT_0377a183 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    DAT_0377a183 = 1;
  }
  puVar3 = OVREyeGaze_TypeInfo;
  fVar7 = 0.0;
  if (0.0 < param_1) {
    if (param_1 < *(float *)(param_2 + 0x60)) {
      lVar5 = *(long *)(param_2 + 0x58);
      if (lVar5 != 0) {
        iVar6 = 0;
        do {
          iVar1 = iVar6 + 1;
          if (*(int *)(lVar5 + 0x18) <= iVar1) {
LAB_019454a0:
            iVar2 = *(int *)(lVar5 + 0x18);
            FUN_0132138c(lVar5,iVar6,&local_54,*(undefined8 *)puVar3);
            fVar7 = local_54;
            if (*(long *)(param_2 + 0x58) != 0) {
              FUN_0132138c(*(long *)(param_2 + 0x58),iVar1,&local_54,*(undefined8 *)puVar3);
              fVar4 = local_54;
              if (*(long *)(param_2 + 0x58) != 0) {
                fVar8 = (float)(iVar2 + -1);
                fVar9 = (float)iVar6 / fVar8;
                FUN_0132138c(*(long *)(param_2 + 0x58),iVar6,&local_54,*(undefined8 *)puVar3);
                return fVar9 + ((float)iVar1 / fVar8 - fVar9) *
                               ((param_1 - fVar7) / (fVar4 - local_54));
              }
            }
            break;
          }
          FUN_0132138c(lVar5,iVar1,&local_54,*(undefined8 *)puVar3);
          if (param_1 < local_54) {
            lVar5 = *(long *)(param_2 + 0x58);
            if (lVar5 != 0) goto LAB_019454a0;
            break;
          }
          lVar5 = *(long *)(param_2 + 0x58);
          iVar6 = iVar6 + 1;
        } while (lVar5 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar7 = 1.0;
  }
  return fVar7;
}


