/*
FUNCTION_NAME: FUN_010585d8
ENTRY_POINT: 010585d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_13;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long FUN_010585d8(long param_1,long param_2,long param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float local_48;
  float local_44;
  
  if ((DAT_037760a6 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    DAT_037760a6 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar4 = FUN_02658ed8(*(long *)(param_1 + 0x10),0);
    fVar13 = ((float)param_4 / (float)iVar4) / DAT_028aa028;
    iVar4 = -0x80000000;
    if (fVar13 != INFINITY) {
      iVar4 = (int)fVar13;
    }
    if (param_2 != 0) {
      lVar5 = FUN_00da4fb8(*(undefined8 *)
                            Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,
                           *(undefined4 *)(param_2 + 0x18));
      puVar3 = OVREyeGaze_TypeInfo;
      if (*(int *)(param_2 + 0x18) < 1) {
        if (lVar5 == 0) goto LAB_01058834;
      }
      else {
        uVar12 = 0;
        do {
          FUN_0132138c(param_2,uVar12 & 0xffffffff,&local_48,*(undefined8 *)puVar3);
          if (param_3 == 0) goto LAB_01058834;
          if (*(uint *)(param_3 + 0x18) <= uVar12) goto LAB_01058830;
          if (*(float *)(param_3 + 0x20 + uVar12 * 4) <= local_48) {
            FUN_0132138c(param_2,uVar12 & 0xffffffff,&local_44,*(undefined8 *)puVar3);
            if (*(uint *)(param_3 + 0x18) <= uVar12) goto LAB_01058830;
            if (lVar5 == 0) goto LAB_01058834;
            if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_01058830;
            fVar13 = local_44 - *(float *)(param_3 + 0x20 + uVar12 * 4);
          }
          else {
            if (lVar5 == 0) goto LAB_01058834;
            fVar13 = 0.0;
            if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_01058830;
          }
          *(float *)(lVar5 + 0x20 + uVar12 * 4) = fVar13;
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)*(int *)(param_2 + 0x18));
      }
      iVar6 = (int)*(ulong *)(lVar5 + 0x18);
      if (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        *(undefined4 *)(lVar5 + 0x20) = 0;
        if (1 < iVar6) {
          uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          pfVar8 = (float *)(lVar5 + 0x28);
          uVar12 = 2;
          uVar9 = 1;
          do {
            if (uVar9 == uVar7) goto LAB_01058830;
            pfVar10 = (float *)(lVar5 + uVar9 * 4 + 0x20);
            fVar13 = *pfVar10;
            uVar1 = uVar9 + 1;
            if (uVar7 <= uVar1) goto LAB_01058830;
            if (*(float *)(lVar5 + uVar1 * 4 + 0x20) <= fVar13) {
              if ((0.0 < fVar13) &&
                 (pfVar10 = pfVar8, uVar11 = uVar7, iVar2 = iVar4 + -1,
                 (long)uVar1 < (long)(iVar4 + (int)uVar9))) {
                do {
                  if (uVar12 == uVar11) goto LAB_01058830;
                  if (0.0 < *pfVar10) {
                    *pfVar10 = 0.0;
                  }
                  iVar2 = iVar2 + -1;
                  pfVar10 = pfVar10 + 1;
                  uVar11 = uVar11 - 1;
                } while (iVar2 != 0);
              }
            }
            else {
              *pfVar10 = 0.0;
            }
            uVar12 = uVar12 + 1;
            pfVar8 = pfVar8 + 1;
            uVar9 = uVar1;
          } while ((long)uVar1 < (long)iVar6);
        }
        return lVar5;
      }
LAB_01058830:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_01058834:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


