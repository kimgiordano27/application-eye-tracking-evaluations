/*
FUNCTION_NAME: FUN_019361b8
ENTRY_POINT: 019361b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_019361b8(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float local_64;
  undefined4 local_38;
  float local_34;
  
  if ((DAT_0377a127 & 1) == 0) {
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f7640);
    thunk_FUN_00d48444(StringLiteral_645);
    DAT_0377a127 = 1;
  }
  iVar6 = FUN_018ee384(param_1,0);
  puVar4 = StringLiteral_645;
  puVar3 = OVREyeGaze_TypeInfo;
  puVar2 = PTR_DAT_033f7640;
  fVar1 = DAT_028aa038;
  if (0 < iVar6) {
    lVar9 = 8;
    do {
      if ((*(long *)(param_1 + 0xa8) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_1 + 0xa8) + 0x130), lVar7 == 0)) {
LAB_019363ac:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(lVar7,(int)lVar9 + -8,&local_38,*(undefined8 *)puVar3);
      uVar5 = local_38;
      if (*(long *)(param_1 + 0xc0) == 0) goto LAB_019363ac;
      fVar11 = (float)FUN_0193755c(local_38);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(long *)(param_1 + 200) == 0) goto LAB_019363ac;
      fVar12 = (float)FUN_0193755c(uVar5);
      lVar7 = *(long *)(param_1 + 0xa8);
      if ((lVar7 == 0) || (lVar8 = *(long *)(lVar7 + 0x78), lVar8 == 0)) goto LAB_019363ac;
      uVar10 = lVar9 - 8;
      if (*(uint *)(lVar8 + 0x18) <= uVar10) {
LAB_019363b0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (fVar11 <= fVar1) {
        fVar11 = fVar1;
      }
      *(float *)(lVar8 + lVar9 * 4) = 1.0 / fVar11;
      lVar7 = *(long *)(lVar7 + 0x80);
      if (lVar7 == 0) goto LAB_019363ac;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_019363b0;
      if (fVar12 <= fVar1) {
        fVar12 = fVar1;
      }
      *(float *)(lVar7 + lVar9 * 4) = 1.0 / fVar12;
      if (*(char *)(param_1 + 0x78) != '\0') {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_019363ac;
        lVar7 = FUN_01920358(*(long *)(param_1 + 0x70),0);
        lVar8 = *(long *)(param_1 + 0x60);
        if (lVar8 == 0) goto LAB_019363ac;
        if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_019363b0;
        if (lVar7 == 0) goto LAB_019363ac;
        local_34 = 1.0 / fVar11;
        FUN_013577f0(lVar7,*(undefined4 *)(lVar8 + lVar9 * 4),&local_34,*(undefined8 *)puVar2);
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_019363ac;
        lVar7 = FUN_019203c4(*(long *)(param_1 + 0x70),0);
        lVar8 = *(long *)(param_1 + 0x60);
        if (lVar8 == 0) goto LAB_019363ac;
        if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_019363b0;
        if (lVar7 == 0) goto LAB_019363ac;
        local_64 = 1.0 / fVar12;
        FUN_013577f0(lVar7,*(undefined4 *)(lVar8 + lVar9 * 4),&local_64,*(undefined8 *)puVar2);
      }
      iVar6 = FUN_018ee384(param_1,0);
      lVar7 = lVar9 + -7;
      lVar9 = lVar9 + 1;
    } while (lVar7 < iVar6);
  }
  return;
}


