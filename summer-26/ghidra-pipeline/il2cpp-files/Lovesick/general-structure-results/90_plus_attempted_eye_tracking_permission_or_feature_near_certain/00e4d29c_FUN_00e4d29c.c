/*
FUNCTION_NAME: FUN_00e4d29c
ENTRY_POINT: 00e4d29c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_00e4d29c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_48;
  undefined4 uStack_44;
  
  puVar1 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  if ((DAT_03774d66 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<fsVersionedType>_Add__);
    thunk_FUN_00d48444(StringLiteral_4992);
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_03774d66 = 1;
  }
  puVar2 = StringLiteral_4992;
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)puVar1;
  fVar9 = (float)FUN_00e37408(param_1);
  if ((fVar9 <= 0.0) || (*(int *)(param_1 + 0x150) != 1)) {
    fVar9 = (float)FUN_00e37408(param_1);
    puVar1 = OVREyeGaze_TypeInfo;
    if ((fVar9 <= 0.0) || (1 < *(int *)(param_1 + 0x150) - 3U)) {
LAB_00e4d548:
      if (*(long *)(param_1 + 0x48) != 0) {
        return;
      }
    }
    else if (*(long *)(param_1 + 0x60) != 0) {
      FUN_0132138c(*(long *)(param_1 + 0x60),0,&local_48,*(undefined8 *)OVREyeGaze_TypeInfo);
      lVar6 = *(long *)(param_1 + 0x78);
      *(float *)(param_1 + 0x358) = -local_48;
      if (lVar6 != 0) {
        iVar5 = 0;
        iVar7 = 0;
        do {
          if (*(int *)(lVar6 + 0x10) <= iVar7) goto LAB_00e4d548;
          lVar6 = *(long *)(param_1 + 0x48);
          while( true ) {
            if (lVar6 == 0) goto LAB_00e4d594;
            iVar8 = iVar5 + 1;
            FUN_0132138c(lVar6,iVar7,&local_48,*(undefined8 *)puVar2);
            if (CONCAT44(uStack_44,local_48) == 0) goto LAB_00e4d594;
            if (*(float *)(param_1 + 0x358) - *(float *)(param_1 + 0x50c) <=
                *(float *)(CONCAT44(uStack_44,local_48) + 0x48)) break;
            lVar6 = *(long *)(param_1 + 0x60);
            if (lVar6 == 0) goto LAB_00e4d594;
            if (iVar8 < *(int *)(lVar6 + 0x18)) {
              FUN_0132138c(lVar6,iVar8,&local_48,*(undefined8 *)puVar1);
              fVar9 = -local_48;
            }
            else {
              lVar6 = *(long *)(param_1 + 0x58);
              if (lVar6 == 0) goto LAB_00e4d594;
              FUN_0132138c(lVar6,*(int *)(lVar6 + 0x18) + -1,&local_48,*(undefined8 *)puVar1);
              fVar9 = 0.0 - local_48;
            }
            uVar3 = FUN_0269e56c(0);
            if (((uVar3 & 1) != 0) &&
               (*(int *)(param_1 + 0x350) < iVar8 + *(int *)(param_1 + 0x354))) {
              lVar6 = *(long *)(param_1 + 0x78);
              if (lVar6 != 0) {
                uVar4 = FUN_01601ad8(lVar6,iVar7,*(int *)(lVar6 + 0x10) - iVar7,0);
                *(undefined8 *)(param_1 + 0x78) = uVar4;
                FUN_00e4e374(param_1);
                *(int *)(param_1 + 0x354) = *(int *)(param_1 + 0x354) + iVar8;
                return;
              }
              goto LAB_00e4d594;
            }
            lVar6 = *(long *)(param_1 + 0x48);
            *(float *)(param_1 + 0x358) = fVar9;
            iVar5 = iVar8;
          }
          lVar6 = *(long *)(param_1 + 0x78);
          iVar7 = iVar7 + 1;
        } while (lVar6 != 0);
      }
    }
  }
  else {
    fVar9 = (float)FUN_00e37408(param_1);
    if (*(int *)(param_1 + 0x144) - 3U < 3) {
      fVar10 = fVar9 * -0.5;
    }
    else {
      fVar10 = 0.0;
      if (2 < *(int *)(param_1 + 0x144) - 6U) {
        fVar10 = -fVar9;
      }
    }
    lVar6 = *(long *)(param_1 + 0x78);
    if (lVar6 != 0) {
      fVar9 = *(float *)(param_1 + 0x518);
      iVar7 = 0;
      do {
        if (*(int *)(lVar6 + 0x10) <= iVar7) goto LAB_00e4d548;
        if (*(long *)(param_1 + 0x48) == 0) break;
        FUN_0132138c(*(long *)(param_1 + 0x48),iVar7,&local_48,*(undefined8 *)puVar2);
        if (CONCAT44(uStack_44,local_48) == 0) break;
        if (*(float *)(CONCAT44(uStack_44,local_48) + 0x48) < fVar10 + fVar9) {
          lVar6 = *(long *)(param_1 + 0x78);
          if (lVar6 != 0) {
            uVar4 = FUN_01601ad8(lVar6,iVar7,*(int *)(lVar6 + 0x10) - iVar7,0);
            *(undefined8 *)(param_1 + 0x78) = uVar4;
            FUN_00e4e374(param_1);
            return;
          }
          break;
        }
        lVar6 = *(long *)(param_1 + 0x78);
        iVar7 = iVar7 + 1;
      } while (lVar6 != 0);
    }
  }
LAB_00e4d594:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


