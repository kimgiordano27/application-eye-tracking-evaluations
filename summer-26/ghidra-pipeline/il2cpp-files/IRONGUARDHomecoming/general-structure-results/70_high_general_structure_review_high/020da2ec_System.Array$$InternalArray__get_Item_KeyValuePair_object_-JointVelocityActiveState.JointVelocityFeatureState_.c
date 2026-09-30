/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<object,-JointVelocityActiveState.JointVelocityFeatureState>>
ENTRY_POINT: 020da2ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__get_Item<KeyValuePair<object,_JointVelocityActiveState_JointVelocityFeatureState>>
               (long param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  bool bVar12;
  float *pfVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  
  if ((DAT_0482fa2a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Activator_CreateInstance<TranscriptionRequestEvent>__);
    thunk_FUN_01efb3a4(Method_System_Activator_CreateInstance__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<ActiveStateGroup>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<ActiveStateNot>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<ActiveStateToggle>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<Sequence>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<SequenceActiveState>__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_ActiveStateGate_HandleCloseSelected__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_ActiveStateGate_HandleOpenSelected__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AddDictionaryItem_Add__);
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Interpreter_AddInstruction_Create__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AddListItem_Add__);
    thunk_FUN_01efb3a4(
                      Method_System_Security_Cryptography_AesCryptoServiceProvider_CreateDecryptor__
                      );
    DAT_0482fa2a = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  _iStack0000000000000018 = 0;
  if (param_2 == (long *)0x0) goto LAB_020da7f8;
  uVar8 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
  if (((uVar8 & 1) == 0) && (*(char *)(param_1 + 0x9c) != '\x01')) {
    if ((*(long *)(param_1 + 0xa8) == 0) ||
       (lVar9 = FUN_02b651b0(*(long *)(param_1 + 0xa8),
                             *(undefined8 *)
                              Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<ActiveStateNot>__
                            ), lVar9 == 0)) goto LAB_020da7f8;
    iVar4 = FUN_03000754(lVar9,*(undefined8 *)
                                Method_System_Linq_Expressions_Interpreter_AddInstruction_Create__);
    if (0 < iVar4) {
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_020da7f8;
      uVar10 = FUN_02b65574(*(long *)(param_1 + 0xa8),param_2,
                            *(undefined8 *)Method_System_Activator_CreateInstance__);
      if ((uVar10 & 1) == 0) {
        return;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0xa0);
  lVar9 = FUN_04070398(param_1,0);
  if (lVar9 == 0) goto LAB_020da7f8;
  fVar18 = *(float *)(param_1 + 0x88);
  fVar20 = *(float *)(param_1 + 0x8c);
  fVar16 = (float)FUN_0407e3a8(*(undefined4 *)(param_1 + 0x84),lVar9,0);
  fVar19 = fVar18;
  fVar21 = fVar20;
  uVar10 = FUN_020da860(param_1,param_2);
  if ((uVar10 & 1) == 0) {
    uVar5 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
    uVar5 = uVar5 & 1;
  }
  else {
    uVar5 = 1;
  }
  if (param_3 != param_4) {
    FUN_020da0c8(param_1,param_3,param_2,2);
  }
  FUN_020da0c8(param_1,param_4,param_2,param_3 == param_4);
  uVar10 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
  if ((uVar10 & 1) == 0) {
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_020da7f8;
    fVar17 = (float)FUN_0407d3c8(*(long *)(param_1 + 0x78),0);
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    lVar9 = *(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      lVar9 = thunk_FUN_01ee6d7c();
    }
    fVar22 = SQRT(fVar20 * fVar20 + fVar16 * fVar16 + fVar18 * fVar18);
    if (fVar22 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        lVar9 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar13 = *(float **)
                 (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      fVar16 = *pfVar13;
      fVar18 = pfVar13[1];
      fVar22 = pfVar13[2];
    }
    else {
      fVar16 = -fVar16 / fVar22;
      fVar18 = -fVar18 / fVar22;
      fVar22 = -fVar20 / fVar22;
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      bVar12 = true;
    }
    else {
      bVar12 = 0.0 < (fVar22 * *(float *)(param_2 + 7) +
                     fVar16 * *(float *)(param_2 + 6) + fVar18 * *(float *)((long)param_2 + 0x34)) -
                     (fVar21 * fVar22 + fVar17 * fVar16 + fVar19 * fVar18);
    }
    iVar6 = FUN_020da93c(lVar9,iVar4,param_4,param_4 == 3,param_4 == 2,0 < param_4,uVar5,bVar12);
  }
  else {
    iVar1 = param_4;
    if (param_4 != 3) {
      iVar1 = 0;
    }
    iVar6 = param_4;
    if (param_4 != 2) {
      iVar6 = iVar1;
    }
  }
  lVar9 = *(long *)(param_1 + 0xa8);
  if (lVar9 == 0) goto LAB_020da7f8;
  if (iVar6 == 0) {
    FUN_02b6682c(lVar9,param_2,
                 *(undefined8 *)
                  Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<ActiveStateGroup>__
                );
    if ((uVar8 & 1) == 0) goto LAB_020da680;
LAB_020da688:
    if ((*(long *)(param_1 + 0xa8) == 0) ||
       (lVar9 = FUN_02b65220(*(long *)(param_1 + 0xa8),
                             *(undefined8 *)
                              Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<ActiveStateToggle>__
                            ),
       puVar3 = Method_Oculus_Interaction_ActiveStateGate_HandleCloseSelected__,
       puVar2 = 
       Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<SequenceActiveState>__
       , lVar9 == 0)) {
LAB_020da7f8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02868cf0(&stack0x00000008,lVar9,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_AesCryptoServiceProvider_CreateDecryptor__);
    iVar1 = iVar6;
    while (iVar6 = iVar1, uVar8 = FUN_02ce8a10(&stack0x00000008,*(undefined8 *)puVar3),
          (uVar8 & 1) != 0) {
      iVar1 = iStack0000000000000018;
      if (iStack0000000000000018 <= iVar6) {
        iVar1 = iVar6;
      }
    }
    FUN_02ce8a0c(&stack0x00000008,*(undefined8 *)puVar2);
  }
  else {
    FUN_02b6536c(lVar9,param_2,iVar6,
                 *(undefined8 *)
                  Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<Sequence>__
                );
    if ((uVar8 & 1) != 0) goto LAB_020da688;
LAB_020da680:
    if (*(char *)(param_1 + 0x9c) != '\0') goto LAB_020da688;
  }
  if (iVar4 == iVar6) {
    return;
  }
  iVar1 = (uint)(param_4 == 0) << 1;
  puVar14 = (undefined8 *)((ulong)(param_4 == 0) << 1);
  if (param_3 == param_4) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0xa0) = iVar6;
  if (iVar6 == 3) {
    puVar14 = (undefined8 *)(param_1 + 0x30);
  }
  else if (iVar6 == 2) {
    puVar14 = (undefined8 *)(param_1 + 0x28);
  }
  else {
    if (iVar6 != 1) {
      uVar15 = 0;
      goto LAB_020da74c;
    }
    puVar14 = (undefined8 *)(param_1 + 0x20);
  }
  uVar15 = *puVar14;
LAB_020da74c:
  lVar9 = *(long *)(param_1 + 0x50);
  if (lVar9 != 0) {
    iVar7 = FUN_0407a4c4(puVar14,0);
    uVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_System_Activator_CreateInstance<TranscriptionRequestEvent>__
                               );
    FUN_020da224((float)iVar7,uVar11,uVar15,param_2,iVar1);
    uVar15 = thunk_FUN_01f117cc(*(undefined8 *)Method_Unity_VisualScripting_AddDictionaryItem_Add__)
    ;
    FUN_020da9ec(uVar15,param_1,param_2,iVar6,iVar4,uVar11);
    FUN_0280b3dc(lVar9,uVar15,*(undefined8 *)Method_Unity_VisualScripting_AddListItem_Add__);
  }
  return;
}


