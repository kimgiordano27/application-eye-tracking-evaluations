/*
FUNCTION_NAME: FUN_00e4c428
ENTRY_POINT: 00e4c428
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_00e4c428(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float local_58;
  undefined4 uStack_54;
  
                    /* try { // try from 00e4c42c to 00f4c4db has its CatchHandler @ 00e4c3ec */
  if ((DAT_03774d64 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Numerics_Vector<ushort>_get_Zero__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_short>__ctor__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_00d48444(StringLiteral_4992);
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    DAT_03774d64 = 1;
  }
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_short>__ctor__;
  lVar9 = *(long *)(param_1 + 0x58);
  if (lVar9 == 0) goto LAB_00e4c7cc;
  lVar6 = *(long *)Method_System_Collections_Generic_Dictionary<int,_short>__ctor__;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 00e4c420 with catch @ 00e4c4bc */
  uVar5 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
  if ((uVar5 & 1) == 0) {
    *(undefined4 *)(lVar9 + 0x18) = 0;
  }
  else {
    iVar8 = *(int *)(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    if (0 < iVar8) {
      FUN_0179519c(*(undefined8 *)(lVar9 + 0x10),0,iVar8,0);
    }
  }
  puVar3 = StringLiteral_4992;
  puVar2 = Method_System_Numerics_Vector<ushort>_get_Zero__;
  if (*(int *)(param_1 + 0x4f8) < 1) {
    fVar10 = *(float *)(param_1 + 0x104) * *(float *)(param_1 + 0x130);
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_00e4c7cc;
    FUN_0132138c(*(long *)(param_1 + 0x48),0,&local_58,*(undefined8 *)StringLiteral_4992);
    if ((CONCAT44(uStack_54,local_58) == 0) || (*(long *)(param_1 + 0x48) == 0)) goto LAB_00e4c7cc;
    fVar10 = *(float *)(CONCAT44(uStack_54,local_58) + 0x84);
    FUN_0132138c(*(long *)(param_1 + 0x48),0,&local_58,*(undefined8 *)puVar3);
    if (CONCAT44(uStack_54,local_58) == 0) goto LAB_00e4c7cc;
    iVar8 = *(int *)(param_1 + 0x4f8);
    fVar10 = fVar10 * *(float *)(CONCAT44(uStack_54,local_58) + 0x5c);
    if (0 < iVar8) {
      iVar7 = 0;
      do {
        if (*(long *)(param_1 + 0x78) == 0) goto LAB_00e4c7cc;
        sVar4 = FUN_015fa29c(*(long *)(param_1 + 0x78),iVar7,0);
        if ((sVar4 == 10) || (iVar7 == *(int *)(param_1 + 0x4f8) + -1)) {
          if (*(long *)(param_1 + 0x58) == 0) goto LAB_00e4c7cc;
          FUN_00ac1d04(fVar10,*(long *)(param_1 + 0x58),*(undefined8 *)puVar2);
          if (iVar7 < *(int *)(param_1 + 0x4f8) + -1) {
            if (*(long *)(param_1 + 0x48) == 0) goto LAB_00e4c7cc;
            FUN_0132138c(*(long *)(param_1 + 0x48),iVar7 + 1,&local_58,*(undefined8 *)puVar3);
            if ((CONCAT44(uStack_54,local_58) == 0) || (*(long *)(param_1 + 0x48) == 0))
            goto LAB_00e4c7cc;
            fVar10 = *(float *)(CONCAT44(uStack_54,local_58) + 0x84);
            FUN_0132138c(*(long *)(param_1 + 0x48),iVar7 + 1,&local_58,*(undefined8 *)puVar3);
            if (CONCAT44(uStack_54,local_58) == 0) goto LAB_00e4c7cc;
            fVar10 = fVar10 * *(float *)(CONCAT44(uStack_54,local_58) + 0x5c);
          }
        }
        else {
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_00e4c7cc;
          FUN_0132138c(*(long *)(param_1 + 0x48),iVar7,&local_58,*(undefined8 *)puVar3);
          if ((CONCAT44(uStack_54,local_58) == 0) || (*(long *)(param_1 + 0x48) == 0))
          goto LAB_00e4c7cc;
          fVar11 = *(float *)(CONCAT44(uStack_54,local_58) + 0x84);
          FUN_0132138c(*(long *)(param_1 + 0x48),iVar7,&local_58,*(undefined8 *)puVar3);
          if (CONCAT44(uStack_54,local_58) == 0) goto LAB_00e4c7cc;
          fVar11 = fVar11 * *(float *)(CONCAT44(uStack_54,local_58) + 0x5c);
          if (fVar10 <= fVar11) {
            fVar10 = fVar11;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar8 != iVar7);
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_00ac1d04(fVar10,*(long *)(param_1 + 0x58),*(undefined8 *)puVar2);
    lVar9 = *(long *)(param_1 + 0x60);
    if (lVar9 != 0) {
      lVar6 = *(long *)puVar1;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      uVar5 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
      if ((uVar5 & 1) == 0) {
        *(undefined4 *)(lVar9 + 0x18) = 0;
      }
      else {
        iVar8 = *(int *)(lVar9 + 0x18);
        *(undefined4 *)(lVar9 + 0x18) = 0;
        if (0 < iVar8) {
          FUN_0179519c(*(undefined8 *)(lVar9 + 0x10),0,iVar8,0);
        }
      }
      puVar1 = OVREyeGaze_TypeInfo;
      lVar9 = *(long *)(param_1 + 0x58);
      if (lVar9 != 0) {
        fVar11 = *(float *)(param_1 + 0x430);
        iVar8 = 0;
        fVar10 = 0.0;
        do {
          if (*(int *)(lVar9 + 0x18) <= iVar8) {
            if (*(long *)(param_1 + 0x60) != 0) {
              FUN_00ac1d04(fVar10,*(long *)(param_1 + 0x60),*(undefined8 *)puVar2);
              return;
            }
            break;
          }
          FUN_0132138c(lVar9,iVar8,&local_58,*(undefined8 *)puVar1);
          fVar10 = fVar10 + local_58;
          if (fVar11 < fVar10) {
            if (*(long *)(param_1 + 0x58) == 0) break;
            lVar9 = *(long *)(param_1 + 0x60);
            FUN_0132138c(*(long *)(param_1 + 0x58),iVar8,&local_58,*(undefined8 *)puVar1);
            if (lVar9 == 0) break;
            FUN_00ac1d04(fVar10 - local_58,lVar9,*(undefined8 *)puVar2);
            if (*(long *)(param_1 + 0x58) == 0) break;
            FUN_0132138c(*(long *)(param_1 + 0x58),iVar8,&local_58,*(undefined8 *)puVar1);
            fVar11 = (fVar10 - local_58) + *(float *)(param_1 + 0x430);
          }
          lVar9 = *(long *)(param_1 + 0x58);
          iVar8 = iVar8 + 1;
        } while (lVar9 != 0);
      }
    }
  }
LAB_00e4c7cc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


