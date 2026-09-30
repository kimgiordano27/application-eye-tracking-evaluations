/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.CanSelectMultipleAttribute$$.ctor
ENTRY_POINT: 024721ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;keyword_support;active_gaze_retrieval;possible_biometrics
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;eye_or_gaze_keyword_boost_only;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_possible_biometrics_hits_6
*/


void UnityEngine_XR_Interaction_Toolkit_CanSelectMultipleAttribute___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  undefined8 in_x7;
  long lVar15;
  long lVar16;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined1 auStack_288 [320];
  undefined1 auStack_148 [320];
  long lStack_8;
  
  puVar8 = Method_System_DateTimeFormat_ParseQuoteString__;
  lVar4 = tpidr_el0;
  lStack_8 = *(long *)(lVar4 + 0x28);
  uStack_290 = param_2;
  if ((DAT_03782553 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_DateTimeFormat_ParseQuoteString__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<EyesControl>__);
    thunk_FUN_00d48444(System_Data_XDRSchema_NameType_TypeInfo);
    thunk_FUN_00d48444(Method_DialogueSkip_SkipReleased__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<PlayerPlatform,_Quaternion>_get_Item__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__);
    DAT_03782553 = 1;
  }
  puVar6 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__;
  auStack_298[0] = 0;
  memset(auStack_148,0,0x13c);
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar14 = FUN_023a0ea8(0);
  FUN_023ae3ac(auStack_298,lVar14,*(undefined8 *)(param_1 + 0xd8),0);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026b6dc8(&uStack_290,lVar14,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_026a8aa4(lVar14,0);
  lVar15 = *(long *)(param_1 + 0xe0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(char *)(lVar15 + 0x13) != '\0') {
    FUN_0245d464(lVar15,lVar14,0);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026b6dc8(&uStack_290,lVar14,0);
    FUN_026a8aa4(lVar14,0);
  }
  puVar7 = Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__;
  lVar15 = *(long *)
            Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *(long *)puVar7;
  }
  FUN_0241d824(auStack_288,param_1,*(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x10),param_3,
               *(undefined4 *)((long)param_3 + 0x11c),0);
  puVar5 = Method_System_Collections_Generic_Dictionary<PlayerPlatform,_Quaternion>_get_Item__;
  memcpy(auStack_148,auStack_288,0x13c);
  uVar3 = *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x14);
  FUN_01342368(&uStack_2a8,*(undefined8 *)(param_1 + 0xe8),2,*(undefined8 *)puVar5);
  FUN_01342368(&uStack_2b8,*(undefined8 *)(param_1 + 0xf0),2,
               *(undefined8 *)Method_DialogueSkip_SkipReleased__);
  uVar12 = uStack_2a0;
  uVar11 = uStack_2a8;
  uVar10 = uStack_2b0;
  uVar9 = uStack_2b8;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026b69d0(&uStack_290,uVar1,uVar2,auStack_148,param_1 + 0xf8,uVar3,0,in_x7,uVar11,uVar12,uVar9,
               uVar10,0);
  FUN_01342a94(&uStack_2a8,*(undefined8 *)System_Data_XDRSchema_NameType_TypeInfo);
  FUN_01342a94(&uStack_2b8,
               *(undefined8 *)
                Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<EyesControl>__);
  puVar6 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__;
  lVar15 = *(long *)(param_1 + 0xe0);
  if (lVar15 != 0) {
    lVar16 = *(long *)(lVar15 + 0x100);
    uVar3 = **(undefined4 **)(*(long *)puVar7 + 0xb8);
    uVar13 = FUN_02457364(lVar15,0);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (uVar13 < *(uint *)(lVar16 + 0x18)) {
      lVar16 = lVar16 + (long)(int)uVar13 * 0x28;
      uStack_2c0 = *(undefined8 *)(lVar16 + 0x40);
      uStack_2d8 = *(undefined8 *)(lVar16 + 0x28);
      uStack_2e0 = *(undefined8 *)(lVar16 + 0x20);
      uStack_2c8 = *(undefined8 *)(lVar16 + 0x38);
      uStack_2d0 = *(undefined8 *)(lVar16 + 0x30);
      FUN_026acb10(lVar14,uVar3,&uStack_2e0,0);
      FUN_023ae3b0(auStack_298,0);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026b6dc8(&uStack_290,lVar14,0);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_023a1000(lVar14,0);
      if (*(long *)(lVar4 + 0x28) == lStack_8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


