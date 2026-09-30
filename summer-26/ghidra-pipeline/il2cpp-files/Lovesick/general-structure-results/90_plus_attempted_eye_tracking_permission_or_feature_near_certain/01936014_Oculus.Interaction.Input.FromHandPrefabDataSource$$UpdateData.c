/*
FUNCTION_NAME: Oculus.Interaction.Input.FromHandPrefabDataSource$$UpdateData
ENTRY_POINT: 01936014
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Interaction_Input_FromHandPrefabDataSource__UpdateData(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_stack_00000000;
  
  if ((DAT_0377a126 & 1) == 0) {
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(
                      System_Func<PlayerEditorConnectionEvents_MessageTypeSubscribers,_bool>_TypeInfo
                      );
    DAT_0377a126 = 1;
  }
  iVar2 = FUN_018ee384(param_1,0);
  puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  if (0 < iVar2) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      if ((*(long *)(param_1 + 0xa8) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0xa8) + 0x130), lVar3 == 0)) {
LAB_019361a0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(lVar3,uVar5 & 0xffffffff);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(puVar1);
        DAT_03774e1c = '\x01';
      }
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_019361a0;
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      fVar8 = *(float *)(lVar3 + 0xc);
      fVar9 = *(float *)(lVar3 + 0x10);
      fVar10 = *(float *)(lVar3 + 0x14);
      fVar7 = (float)FUN_0193755c(in_stack_00000000);
      if ((*(long *)(param_1 + 0xa8) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0xa8) + 0x90), lVar3 == 0)) goto LAB_019361a0;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_019361a4:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      fVar8 = fVar8 * fVar7;
      lVar3 = lVar3 + lVar6;
      *(float *)(lVar3 + 0x20) = fVar8;
      *(float *)(lVar3 + 0x24) = fVar9 * fVar7;
      *(float *)(lVar3 + 0x28) = fVar10 * fVar7;
      if (*(char *)(param_1 + 0x78) != '\0') {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_019361a0;
        lVar3 = FUN_01920958(*(long *)(param_1 + 0x70),0);
        lVar4 = *(long *)(param_1 + 0x60);
        if (lVar4 == 0) goto LAB_019361a0;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_019361a4;
        if (lVar3 == 0) goto LAB_019361a0;
        FUN_013577f0(lVar3,*(undefined4 *)(lVar4 + uVar5 * 4 + 0x20));
        in_stack_00000000 = fVar8;
      }
      uVar5 = uVar5 + 1;
      iVar2 = FUN_018ee384(param_1,0);
      lVar6 = lVar6 + 0xc;
    } while ((long)uVar5 < (long)iVar2);
  }
  return;
}


