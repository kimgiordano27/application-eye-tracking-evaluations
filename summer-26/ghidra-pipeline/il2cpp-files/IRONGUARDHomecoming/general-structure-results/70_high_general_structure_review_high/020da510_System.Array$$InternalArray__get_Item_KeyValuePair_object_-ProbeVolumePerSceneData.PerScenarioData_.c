/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<object,-ProbeVolumePerSceneData.PerScenarioData>>
ENTRY_POINT: 020da510
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__InternalArray__get_Item<KeyValuePair<object,_ProbeVolumePerSceneData_PerScenarioData>>
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  bool bVar8;
  int in_w8;
  float *pfVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w23;
  ulong unaff_x24;
  undefined8 uVar11;
  undefined4 unaff_w25;
  long unaff_x26;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  int in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x26 + 0xe9b) = 1;
  }
  lVar5 = *(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    lVar5 = thunk_FUN_01ee6d7c();
  }
  fVar14 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar14 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      lVar5 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar9 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar12 = *pfVar9;
    fVar13 = pfVar9[1];
    fVar14 = pfVar9[2];
  }
  else {
    fVar12 = -unaff_s8 / fVar14;
    fVar13 = -unaff_s9 / fVar14;
    fVar14 = -unaff_s10 / fVar14;
  }
  if (*(char *)(unaff_x20 + 0x80) == '\0') {
    bVar8 = true;
  }
  else {
    bVar8 = 0.0 < (fVar14 * *(float *)(unaff_x19 + 0x38) +
                  fVar12 * *(float *)(unaff_x19 + 0x30) + fVar13 * *(float *)(unaff_x19 + 0x34)) -
                  (param_3 * fVar14 + unaff_s11 * fVar12 + param_2 * fVar13);
  }
  iVar4 = FUN_020da93c(lVar5,unaff_w23,unaff_w21,unaff_w21 == 3,unaff_w21 == 2,0 < unaff_w21,
                       unaff_w25,bVar8);
  if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_020da7f8;
  if (iVar4 == 0) {
    FUN_02b6682c();
    if ((unaff_x24 & 1) == 0) goto LAB_020da680;
LAB_020da688:
    if ((*(long *)(unaff_x20 + 0xa8) == 0) ||
       (lVar5 = FUN_02b65220(*(long *)(unaff_x20 + 0xa8),
                             *(undefined8 *)
                              Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<ActiveStateToggle>__
                            ),
       puVar2 = Method_Oculus_Interaction_ActiveStateGate_HandleCloseSelected__,
       puVar1 = 
       Method_Oculus_Interaction_PoseDetection_Debug_ActiveStateDebugTree_RegisterModel<SequenceActiveState>__
       , lVar5 == 0)) {
LAB_020da7f8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02868cf0(&stack0x00000008,lVar5,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_AesCryptoServiceProvider_CreateDecryptor__);
    iVar3 = iVar4;
    while (iVar4 = iVar3, uVar6 = FUN_02ce8a10(&stack0x00000008,*(undefined8 *)puVar2),
          (uVar6 & 1) != 0) {
      iVar3 = in_stack_00000018;
      if (in_stack_00000018 <= iVar4) {
        iVar3 = iVar4;
      }
    }
    FUN_02ce8a0c(&stack0x00000008,*(undefined8 *)puVar1);
  }
  else {
    FUN_02b6536c();
    if ((unaff_x24 & 1) != 0) goto LAB_020da688;
LAB_020da680:
    if (*(char *)(unaff_x20 + 0x9c) != '\0') goto LAB_020da688;
  }
  if (unaff_w23 == iVar4) {
    return;
  }
  puVar10 = (undefined8 *)((ulong)(unaff_w21 == 0) << 1);
  *(int *)(unaff_x20 + 0xa0) = iVar4;
  if (iVar4 == 3) {
    puVar10 = (undefined8 *)(unaff_x20 + 0x30);
  }
  else if (iVar4 == 2) {
    puVar10 = (undefined8 *)(unaff_x20 + 0x28);
  }
  else {
    if (iVar4 != 1) {
      uVar11 = 0;
      goto LAB_020da74c;
    }
    puVar10 = (undefined8 *)(unaff_x20 + 0x20);
  }
  uVar11 = *puVar10;
LAB_020da74c:
  lVar5 = *(long *)(unaff_x20 + 0x50);
  if (lVar5 != 0) {
    iVar4 = FUN_0407a4c4(puVar10,0);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Activator_CreateInstance<TranscriptionRequestEvent>__)
    ;
    FUN_020da224((float)iVar4,uVar7,uVar11);
    uVar11 = thunk_FUN_01f117cc(*(undefined8 *)Method_Unity_VisualScripting_AddDictionaryItem_Add__)
    ;
    FUN_020da9ec();
    FUN_0280b3dc(lVar5,uVar11,*(undefined8 *)Method_Unity_VisualScripting_AddListItem_Add__);
  }
  return;
}


