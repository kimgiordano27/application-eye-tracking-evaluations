/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<object,-JsonParser.JsonValue>>
ENTRY_POINT: 020da398
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__get_Item<KeyValuePair<object,_JsonParser_JsonValue>>(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  bool bVar11;
  float *pfVar12;
  undefined8 *puVar13;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x788));
  thunk_FUN_01efb3a4(Method_System_Security_Cryptography_AesCryptoServiceProvider_CreateDecryptor__)
  ;
  *(undefined1 *)(unaff_x23 + 0xa2a) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  _iStack0000000000000018 = 0;
  if (unaff_x19 == (long *)0x0) goto LAB_020da7f8;
  uVar7 = (**(code **)(*unaff_x19 + 0x198))();
  if (((uVar7 & 1) == 0) && (*(char *)(unaff_x20 + 0x9c) != '\x01')) {
    if ((*(long *)(unaff_x20 + 0xa8) == 0) ||
       (lVar8 = FUN_02b651b0(*(long *)(unaff_x20 + 0xa8),
                             *(undefined8 *)
                              Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<ActiveStateNot>__
                            ), lVar8 == 0)) goto LAB_020da7f8;
    iVar4 = FUN_03000754(lVar8,*(undefined8 *)
                                Method_System_Linq_Expressions_Interpreter_AddInstruction_Create__);
    if (0 < iVar4) {
      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_020da7f8;
      uVar9 = FUN_02b65574();
      if ((uVar9 & 1) == 0) {
        return;
      }
    }
  }
  iVar4 = *(int *)(unaff_x20 + 0xa0);
  lVar8 = FUN_04070398();
  if (lVar8 == 0) goto LAB_020da7f8;
  fVar17 = *(float *)(unaff_x20 + 0x88);
  fVar19 = *(float *)(unaff_x20 + 0x8c);
  fVar15 = (float)FUN_0407e3a8(*(undefined4 *)(unaff_x20 + 0x84),lVar8,0);
  fVar18 = fVar17;
  fVar20 = fVar19;
  uVar9 = FUN_020da860();
  if ((uVar9 & 1) == 0) {
    uVar5 = (**(code **)(*unaff_x19 + 0x198))();
    uVar5 = uVar5 & 1;
  }
  else {
    uVar5 = 1;
  }
  if (unaff_w22 != unaff_w21) {
    FUN_020da0c8();
  }
  FUN_020da0c8();
  uVar9 = (**(code **)(*unaff_x19 + 0x198))();
  if ((uVar9 & 1) == 0) {
    if (*(long *)(unaff_x20 + 0x78) == 0) goto LAB_020da7f8;
    fVar16 = (float)FUN_0407d3c8(*(long *)(unaff_x20 + 0x78),0);
    if (DAT_0482ee9b == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482ee9b = '\x01';
    }
    lVar8 = *(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      lVar8 = thunk_FUN_01ee6d7c();
    }
    fVar21 = SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar17 * fVar17);
    if (fVar21 <= DAT_00c926ac) {
      if (DAT_0482ee12 == '\0') {
        lVar8 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      pfVar12 = *(float **)
                 (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      fVar15 = *pfVar12;
      fVar17 = pfVar12[1];
      fVar21 = pfVar12[2];
    }
    else {
      fVar15 = -fVar15 / fVar21;
      fVar17 = -fVar17 / fVar21;
      fVar21 = -fVar19 / fVar21;
    }
    if (*(char *)(unaff_x20 + 0x80) == '\0') {
      bVar11 = true;
    }
    else {
      bVar11 = 0.0 < (fVar21 * *(float *)(unaff_x19 + 7) +
                     fVar15 * *(float *)(unaff_x19 + 6) +
                     fVar17 * *(float *)((long)unaff_x19 + 0x34)) -
                     (fVar20 * fVar21 + fVar16 * fVar15 + fVar18 * fVar17);
    }
    iVar6 = FUN_020da93c(lVar8,iVar4,unaff_w21,unaff_w21 == 3,unaff_w21 == 2,0 < unaff_w21,uVar5,
                         bVar11);
  }
  else {
    iVar1 = unaff_w21;
    if (unaff_w21 != 3) {
      iVar1 = 0;
    }
    iVar6 = unaff_w21;
    if (unaff_w21 != 2) {
      iVar6 = iVar1;
    }
  }
  if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_020da7f8;
  if (iVar6 == 0) {
    FUN_02b6682c();
    if ((uVar7 & 1) == 0) goto LAB_020da680;
LAB_020da688:
    if ((*(long *)(unaff_x20 + 0xa8) == 0) ||
       (lVar8 = FUN_02b65220(*(long *)(unaff_x20 + 0xa8),
                             *(undefined8 *)
                              Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<ActiveStateToggle>__
                            ),
       puVar3 = Method_Oculus_Interaction_ActiveStateGate_HandleCloseSelected__,
       puVar2 = 
       Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<SequenceActiveState>__
       , lVar8 == 0)) {
LAB_020da7f8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02868cf0(&stack0x00000008,lVar8,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_AesCryptoServiceProvider_CreateDecryptor__);
    iVar1 = iVar6;
    while (iVar6 = iVar1, uVar7 = FUN_02ce8a10(&stack0x00000008,*(undefined8 *)puVar3),
          (uVar7 & 1) != 0) {
      iVar1 = iStack0000000000000018;
      if (iStack0000000000000018 <= iVar6) {
        iVar1 = iVar6;
      }
    }
    FUN_02ce8a0c(&stack0x00000008,*(undefined8 *)puVar2);
  }
  else {
    FUN_02b6536c();
    if ((uVar7 & 1) != 0) goto LAB_020da688;
LAB_020da680:
    if (*(char *)(unaff_x20 + 0x9c) != '\0') goto LAB_020da688;
  }
  if (iVar4 == iVar6) {
    return;
  }
  puVar13 = (undefined8 *)((ulong)(unaff_w21 == 0) << 1);
  *(int *)(unaff_x20 + 0xa0) = iVar6;
  if (iVar6 == 3) {
    puVar13 = (undefined8 *)(unaff_x20 + 0x30);
  }
  else if (iVar6 == 2) {
    puVar13 = (undefined8 *)(unaff_x20 + 0x28);
  }
  else {
    if (iVar6 != 1) {
      uVar14 = 0;
      goto LAB_020da74c;
    }
    puVar13 = (undefined8 *)(unaff_x20 + 0x20);
  }
  uVar14 = *puVar13;
LAB_020da74c:
  lVar8 = *(long *)(unaff_x20 + 0x50);
  if (lVar8 != 0) {
    iVar4 = FUN_0407a4c4(puVar13,0);
    uVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_System_Activator_CreateInstance<TranscriptionRequestEvent>__
                               );
    FUN_020da224((float)iVar4,uVar10,uVar14);
    uVar14 = thunk_FUN_01f117cc(*(undefined8 *)Method_Unity_VisualScripting_AddDictionaryItem_Add__)
    ;
    FUN_020da9ec();
    FUN_0280b3dc(lVar8,uVar14,*(undefined8 *)Method_Unity_VisualScripting_AddListItem_Add__);
  }
  return;
}


