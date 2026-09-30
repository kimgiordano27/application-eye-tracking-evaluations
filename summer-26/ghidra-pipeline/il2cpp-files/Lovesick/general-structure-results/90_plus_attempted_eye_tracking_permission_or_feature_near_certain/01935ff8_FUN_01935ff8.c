/*
FUNCTION_NAME: FUN_01935ff8
ENTRY_POINT: 01935ff8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_01935ff8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  
  if ((DAT_0377a126 & 1) == 0) {
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(
                      System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo
                      );
    DAT_0377a126 = 1;
  }
  iVar4 = FUN_018ee384(param_1,0);
  puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  puVar2 = OVREyeGaze_TypeInfo;
  puVar1 = System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo;
  if (0 < iVar4) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      if ((*(long *)(param_1 + 0xa8) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x130), lVar5 == 0)) {
LAB_019361a0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(lVar5,uVar7 & 0xffffffff,&local_80,*(undefined8 *)puVar2);
      fVar9 = local_80;
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(puVar3);
        DAT_03774e1c = '\x01';
      }
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_019361a0;
      lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
      fVar10 = *(float *)(lVar5 + 0xc);
      fVar11 = *(float *)(lVar5 + 0x10);
      fVar12 = *(float *)(lVar5 + 0x14);
      fVar9 = (float)FUN_0193755c(fVar9);
      if ((*(long *)(param_1 + 0xa8) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x90), lVar5 == 0)) goto LAB_019361a0;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_019361a4:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      fVar10 = fVar10 * fVar9;
      fVar11 = fVar11 * fVar9;
      fVar12 = fVar12 * fVar9;
      lVar5 = lVar5 + lVar8;
      *(float *)(lVar5 + 0x20) = fVar10;
      *(float *)(lVar5 + 0x24) = fVar11;
      *(float *)(lVar5 + 0x28) = fVar12;
      if (*(char *)(param_1 + 0x78) != '\0') {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_019361a0;
        lVar5 = FUN_01920958(*(long *)(param_1 + 0x70),0);
        lVar6 = *(long *)(param_1 + 0x60);
        if (lVar6 == 0) goto LAB_019361a0;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_019361a4;
        if (lVar5 == 0) goto LAB_019361a0;
        local_74 = 0;
        local_80 = fVar10;
        fStack_7c = fVar11;
        local_78 = fVar12;
        FUN_013577f0(lVar5,*(undefined4 *)(lVar6 + uVar7 * 4 + 0x20),&local_80,*(undefined8 *)puVar1
                    );
      }
      uVar7 = uVar7 + 1;
      iVar4 = FUN_018ee384(param_1,0);
      lVar8 = lVar8 + 0xc;
    } while ((long)uVar7 < (long)iVar4);
  }
  return;
}


