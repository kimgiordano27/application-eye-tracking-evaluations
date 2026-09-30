/*
FUNCTION_NAME: FUN_06160444
ENTRY_POINT: 06160444
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint FUN_06160444(long param_1,long param_2,long *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined8 uVar25;
  uint local_7c;
  undefined8 local_78;
  int local_6c;
  long local_68;
  
                    /* try { // try from 0616044c to 06260457 has its CatchHandler @ 061609a8 */
                    /* try { // try from 06160474 to 0626047f has its CatchHandler @ 06160994 */
  if ((DAT_06dc683d & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
                    /* try { // try from 0616048c to 062604a7 has its CatchHandler @ 0616099c */
    FUN_02d965b8(
                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<bool>__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_IMGUIContainer_<DoOnGUI>b__59_0__);
    FUN_02d965b8(Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<OVRLocatable_CopyPosesJob>__);
    FUN_02d965b8(Method_UnityEngine_UIElements_IMGUIContainer_OnGenerateVisualContent__);
                    /* try { // try from 061604c0 to 062604cb has its CatchHandler @ 061609a8 */
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextAnchor>__);
    FUN_02d965b8(
                Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<OVRLocatable_GetSceneAnchorPosesJob>__
                );
                    /* try { // try from 061604d0 to 062604d7 has its CatchHandler @ 06160988 */
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextGeneratorType>__)
    ;
                    /* try { // try from 061604dc to 062604e7 has its CatchHandler @ 06160984 */
    FUN_02d965b8(Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__);
    FUN_02d965b8(System_Collections_Generic_List<ModifierSpec>_TypeInfo);
                    /* try { // try from 061604fc to 06260503 has its CatchHandler @ 06160964 */
    FUN_02d965b8(
                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<Vector3Int>__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Align>__);
    FUN_02d965b8(PTR_DAT_06a0d6d8);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<DisplayStyle>__);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextOverflow>__);
    FUN_02d965b8(Method_System_Collections_Generic_List<CAPI_ovrAvatar2JointType>_Add__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextOverflowPosition>__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<BitmapAllocator32_Page>_set_Item__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_UnregisterValueChangedCallback<bool>__
                );
    FUN_02d965b8(Method_System_Net_HttpWebRequest_EndGetResponse__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_UnregisterValueChangedCallback<float>__
                );
    FUN_02d965b8(Method_System_Net_Http_Headers_HeaderInfo_CreateSingle<Uri>__);
    FUN_02d965b8(Method_Unity_Hierarchy_HierarchyViewNodesEnumerable__ctor__);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TimeValue>__);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Visibility>__);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<WhiteSpace>__);
    DAT_06dc683d = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<WhiteSpace>__;
  local_68 = 0;
  local_6c = 0;
  local_78 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) || (*(int *)(param_1 + 0x110) == 0)) {
    iVar10 = *(int *)(param_1 + 0x110);
    uVar23 = thunk_FUN_06354368(param_1,0);
    puVar20 = (undefined8 *)
              Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Visibility>__;
    if (iVar10 != 0) {
      puVar20 = (undefined8 *)
                Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TimeValue>__;
    }
    uVar23 = FUN_0536d554(*(undefined8 *)puVar4,uVar23,*puVar20,0);
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
    }
    FUN_0630c038(uVar23,param_1,0);
    *param_3 = 0;
    param_2 = 0;
LAB_06160690:
    LeanTween__value(param_3,param_2);
    return 0;
  }
  iVar10 = FUN_0615d808(param_1);
  if (iVar10 != 0) {
    param_2 = FUN_036147a4(param_2,*(undefined8 *)
                                    Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextGeneratorType>__
                          );
    *param_3 = param_2;
    goto LAB_06160690;
  }
  if ((*(long *)(param_1 + 0x138) == 0) || (*(long *)(param_1 + 0x128) == 0)) {
    FUN_0615a5fc(param_1);
  }
  lVar17 = *(long *)(param_1 + 0x200);
  if (lVar17 == 0) goto LAB_06161040;
  lVar15 = *(long *)(param_1 + 0x208);
  *(undefined4 *)(lVar17 + 0x18) = 0;
  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
  puVar4 = 
  Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<Vector3Int>__
  ;
  if (lVar15 == 0) goto LAB_06161040;
  FUN_03c2dafc(lVar15,*(undefined8 *)
                       Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<Vector3Int>__
              );
  lVar17 = *(long *)(param_1 + 0x210);
  if (lVar17 == 0) goto LAB_06161040;
  iVar10 = *(int *)(lVar17 + 0x18);
  *(undefined4 *)(lVar17 + 0x18) = 0;
  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
  if (0 < iVar10) {
    FUN_0550afb4(*(undefined8 *)(lVar17 + 0x10),0,iVar10,0);
  }
  if (*(long *)(param_1 + 0x218) == 0) goto LAB_06161040;
  FUN_03c2dafc(*(long *)(param_1 + 0x218),*(undefined8 *)puVar4);
  lVar17 = *(long *)(param_1 + 0x220);
  if (lVar17 == 0) goto LAB_06161040;
  iVar10 = *(int *)(param_2 + 0x18);
  local_6c = 0;
  *(undefined4 *)(lVar17 + 0x18) = 0;
  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
  puVar7 = Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<OVRLocatable_CopyPosesJob>__;
  puVar6 = Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__;
  puVar5 = Method_Unity_Hierarchy_HierarchyViewNodesEnumerable__ctor__;
  puVar4 = System_Collections_Generic_List<ModifierSpec>_TypeInfo;
  if (iVar10 < 1) {
    local_7c = 0;
  }
  else {
    local_7c = 0;
    do {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar11 = FUN_06167c30(param_2,&local_6c,0);
      if (*(long *)(param_1 + 0x138) == 0) goto LAB_06161040;
      uVar16 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                         (*(long *)(param_1 + 0x138),iVar11,*(undefined8 *)puVar7);
      if ((uVar16 & 1) == 0) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        iVar12 = FUN_063ee2a0(iVar11,0);
        if (iVar12 == 0) {
          if ((iVar11 == 0x2011) || (iVar11 == 0xad)) {
            lVar17 = *(long *)puVar6;
            uVar23 = 0x2d;
LAB_0616081c:
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            iVar12 = FUN_063ee2a0(uVar23,0);
            if (iVar12 != 0) goto LAB_0616083c;
          }
          else if (iVar11 == 0xa0) {
            lVar17 = *(long *)puVar6;
            uVar23 = 0x20;
            goto LAB_0616081c;
          }
          lVar17 = *(long *)(param_1 + 0x220);
          if (lVar17 == 0) goto LAB_06161040;
          lVar15 = *(long *)(lVar17 + 0x10);
          lVar18 = *(long *)PTR_DAT_06a0d6d8;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_06161040;
          uVar13 = *(uint *)(lVar17 + 0x18);
          if (uVar13 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar17 + 0x18) = uVar13 + 1;
            *(int *)(lVar15 + (long)(int)uVar13 * 4 + 0x20) = iVar11;
          }
          else {
            FUN_04088dc8(lVar17,iVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          local_7c = 1;
        }
        else {
LAB_0616083c:
          lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                       Method_System_Net_Http_Headers_HeaderInfo_CreateSingle<Uri>__
                                     );
          FUN_0615279c(lVar17,iVar11,iVar12);
          if (*(long *)(param_1 + 0x128) == 0) goto LAB_06161040;
          uVar16 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                             (*(long *)(param_1 + 0x128),iVar12,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_IMGUIContainer_OnGenerateVisualContent__
                             );
          if ((uVar16 & 1) == 0) {
            if (*(long *)(param_1 + 0x208) == 0) goto LAB_06161040;
            uVar16 = FUN_03c2e698(*(long *)(param_1 + 0x208),iVar12,*(undefined8 *)puVar4);
            if ((uVar16 & 1) != 0) {
              lVar15 = *(long *)(param_1 + 0x200);
              if (lVar15 == 0) goto LAB_06161040;
              lVar18 = *(long *)(lVar15 + 0x10);
              lVar21 = *(long *)PTR_DAT_06a0d6d8;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_06161040;
              uVar13 = *(uint *)(lVar15 + 0x18);
              if (uVar13 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                *(int *)(lVar18 + (long)(int)uVar13 * 4 + 0x20) = iVar12;
              }
              else {
                FUN_04088dc8(lVar15,iVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (*(long *)(param_1 + 0x218) == 0) goto LAB_06161040;
            uVar16 = FUN_03c2e698(*(long *)(param_1 + 0x218),iVar11,*(undefined8 *)puVar4);
            if ((uVar16 & 1) != 0) {
              lVar15 = *(long *)(param_1 + 0x210);
              if (lVar15 == 0) goto LAB_06161040;
              lVar18 = *(long *)(lVar15 + 0x10);
              lVar21 = *(long *)
                        Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<DisplayStyle>__
              ;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_06161040;
              uVar13 = *(uint *)(lVar15 + 0x18);
              if (uVar13 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                plVar19 = (long *)(lVar18 + (long)(int)uVar13 * 8 + 0x20);
                *plVar19 = lVar17;
                LeanTween__value(plVar19,lVar17);
              }
              else {
                FUN_040101ec(lVar15,lVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            if ((*(long *)(param_1 + 0x128) == 0) ||
               (uVar23 = FUN_04f94af4(*(long *)(param_1 + 0x128),iVar12,
                                      *(undefined8 *)
                                       Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<OVRLocatable_GetSceneAnchorPosesJob>__
                                     ), lVar17 == 0)) goto LAB_06161040;
            *(undefined8 *)(lVar17 + 0x20) = uVar23;
            LeanTween__value();
            *(long *)(lVar17 + 0x18) = param_1;
            LeanTween__value((long *)(lVar17 + 0x18),param_1);
            lVar15 = *(long *)(param_1 + 0x130);
            if (lVar15 == 0) goto LAB_06161040;
            lVar18 = *(long *)(lVar15 + 0x10);
            lVar21 = *(long *)
                      Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<DisplayStyle>__;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_06161040;
            uVar13 = *(uint *)(lVar15 + 0x18);
            if (uVar13 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar13 + 1;
              plVar19 = (long *)(lVar18 + (long)(int)uVar13 * 8 + 0x20);
              *plVar19 = lVar17;
              LeanTween__value(plVar19,lVar17);
            }
            else {
              FUN_040101ec(lVar15,lVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0x138) == 0) goto LAB_06161040;
            FUN_04f94b94(*(long *)(param_1 + 0x138),iVar11,lVar17,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<bool>__
                        );
          }
        }
      }
      local_6c = local_6c + 1;
    } while (local_6c < iVar10);
  }
  if (*(long *)(param_1 + 0x200) == 0) goto LAB_06161040;
  if (*(int *)(*(long *)(param_1 + 0x200) + 0x18) == 0) {
    *param_3 = param_2;
    goto LAB_06160690;
  }
  lVar17 = *(long *)(param_1 + 0x148);
  if (lVar17 == 0) goto LAB_06161040;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_061610a8;
  plVar19 = *(long **)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
  if (plVar19 == (long *)0x0) goto LAB_06161040;
  iVar10 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
  if (iVar10 < 2) {
LAB_06160b50:
    lVar17 = *(long *)(param_1 + 0x148);
    if (lVar17 == 0) goto LAB_06161040;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_061610a8;
    lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (lVar17 == 0) goto LAB_06161040;
    FUN_0632f188(lVar17,*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c),0);
    lVar17 = *(long *)(param_1 + 0x148);
    if (lVar17 == 0) goto LAB_06161040;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_061610a8;
    uVar23 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (*(int *)(*(long *)Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__
                + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_063f1194(uVar23,0);
  }
  else {
    lVar17 = *(long *)(param_1 + 0x148);
    if (lVar17 == 0) goto LAB_06161040;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_061610a8;
    plVar19 = *(long **)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (plVar19 == (long *)0x0) goto LAB_06161040;
    iVar10 = (**(code **)(*plVar19 + 0x1a8))(plVar19,*(undefined8 *)(*plVar19 + 0x1b0));
    if (iVar10 < 2) goto LAB_06160b50;
  }
  lVar17 = *(long *)(param_1 + 0x148);
  if (lVar17 != 0) {
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) {
LAB_061610a8:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    uVar23 = *(undefined8 *)(param_1 + 0x168);
    uVar1 = *(undefined8 *)(param_1 + 0x170);
    uVar22 = *(undefined8 *)(param_1 + 0x200);
    uVar14 = *(undefined4 *)(param_1 + 0x160);
    uVar2 = *(undefined4 *)(param_1 + 0x164);
    uVar25 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (*(int *)(*(long *)Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__
                + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar13 = UnityEngine_UIElements_UIR_Utility__SetPropertyBlock
                       (uVar22,uVar14,0,uVar1,uVar23,uVar2,uVar25,&local_68,0);
    puVar6 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Align>__;
    puVar5 = Method_UnityEngine_UIElements_IMGUIContainer_<DoOnGUI>b__59_0__;
    puVar4 = PTR_DAT_06a0d6d8;
    if (local_68 != 0) {
      uVar24 = 0;
      do {
        if ((int)*(uint *)(local_68 + 0x18) <= (int)uVar24) {
LAB_06160dd8:
          lVar17 = *(long *)(param_1 + 0x200);
          if (lVar17 != 0) {
            lVar15 = *(long *)(param_1 + 0x210);
            *(undefined4 *)(lVar17 + 0x18) = 0;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            puVar9 = 
            Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextOverflowPosition>__;
            puVar8 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextAnchor>__;
            puVar7 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<DisplayStyle>__;
            puVar6 = 
            Method_UnityEngine_UIElements_INotifyValueChangedExtensions_UnregisterValueChangedCallback<float>__
            ;
            puVar5 = 
            Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<bool>__
            ;
            if (lVar15 != 0) {
              iVar10 = 0;
              goto LAB_06160e20;
            }
          }
          break;
        }
        if (*(uint *)(local_68 + 0x18) <= uVar24) goto LAB_061610a8;
        lVar17 = *(long *)(local_68 + (long)(int)uVar24 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_06160dd8;
        uVar14 = FUN_063ed08c(lVar17,0);
        FUN_063ed0f0(lVar17,*(undefined4 *)(param_1 + 0x150),0);
        lVar15 = *(long *)(param_1 + 0x120);
        if (lVar15 == 0) break;
        lVar18 = *(long *)(lVar15 + 0x10);
        lVar21 = *(long *)puVar6;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar18 == 0) break;
        uVar3 = *(uint *)(lVar15 + 0x18);
        if (uVar3 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar3 + 1;
          plVar19 = (long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
          *plVar19 = lVar17;
          LeanTween__value(plVar19,lVar17);
        }
        else {
          FUN_040101ec(lVar15,lVar17,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 0x128) == 0) break;
        FUN_04f94b94(*(long *)(param_1 + 0x128),uVar14,lVar17,*(undefined8 *)puVar5);
        lVar17 = *(long *)(param_1 + 0x1f8);
        if (lVar17 == 0) break;
        lVar15 = *(long *)(lVar17 + 0x10);
        lVar18 = *(long *)puVar4;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar15 == 0) break;
        uVar3 = *(uint *)(lVar17 + 0x18);
        if (uVar3 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar17 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar15 + (long)(int)uVar3 * 4 + 0x20) = uVar14;
        }
        else {
          FUN_04088dc8(lVar17,uVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        lVar17 = *(long *)(param_1 + 0x1f0);
        if (lVar17 == 0) break;
        lVar15 = *(long *)(lVar17 + 0x10);
        lVar18 = *(long *)puVar4;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar15 == 0) break;
        uVar3 = *(uint *)(lVar17 + 0x18);
        if (uVar3 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar17 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar15 + (long)(int)uVar3 * 4 + 0x20) = uVar14;
        }
        else {
          FUN_04088dc8(lVar17,uVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        uVar24 = uVar24 + 1;
      } while (local_68 != 0);
    }
  }
LAB_06161040:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
LAB_06160e20:
  if (iVar10 < *(int *)(lVar15 + 0x18)) {
    lVar17 = FUN_0400ff1c(lVar15,iVar10,*(undefined8 *)puVar6);
    if ((lVar17 == 0) || (*(long *)(param_1 + 0x128) == 0)) goto LAB_06161040;
    uVar16 = FUN_04f96670(*(long *)(param_1 + 0x128),*(undefined4 *)(lVar17 + 0x28),&local_78,
                          *(undefined8 *)puVar8);
    if ((uVar16 & 1) == 0) {
      lVar15 = *(long *)(param_1 + 0x200);
      if (lVar15 == 0) goto LAB_06161040;
      lVar18 = *(long *)(lVar15 + 0x10);
      uVar14 = *(undefined4 *)(lVar17 + 0x28);
      lVar17 = *(long *)puVar4;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_06161040;
      uVar24 = *(uint *)(lVar15 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar24 + 1;
        *(undefined4 *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) = uVar14;
      }
      else {
        FUN_04088dc8(lVar15,uVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      *(undefined8 *)(lVar17 + 0x20) = local_78;
      LeanTween__value();
      *(long *)(lVar17 + 0x18) = param_1;
      LeanTween__value((long *)(lVar17 + 0x18),param_1);
      lVar15 = *(long *)(param_1 + 0x130);
      if (lVar15 == 0) goto LAB_06161040;
      lVar18 = *(long *)(lVar15 + 0x10);
      lVar21 = *(long *)puVar7;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_06161040;
      uVar24 = *(uint *)(lVar15 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar24 + 1;
        plVar19 = (long *)(lVar18 + (long)(int)uVar24 * 8 + 0x20);
        *plVar19 = lVar17;
        LeanTween__value(plVar19,lVar17);
      }
      else {
        FUN_040101ec(lVar15,lVar17,
                     *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(param_1 + 0x138) == 0) goto LAB_06161040;
      FUN_04f94b94(*(long *)(param_1 + 0x138),*(undefined4 *)(lVar17 + 0x14),lVar17,
                   *(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x210) == 0) goto LAB_06161040;
      FUN_0401187c(*(long *)(param_1 + 0x210),iVar10,*(undefined8 *)puVar9);
      iVar10 = iVar10 + -1;
    }
    lVar15 = *(long *)(param_1 + 0x210);
    iVar10 = iVar10 + 1;
    if (lVar15 == 0) goto LAB_06161040;
    goto LAB_06160e20;
  }
  if (*(char *)(param_1 + 0x154) != '\0' && (uVar13 & 1) == 0) {
    do {
      uVar16 = FUN_061610ac(param_1);
    } while ((uVar16 & 1) == 0);
    uVar13 = 1;
  }
  if ((param_4 & 1) != 0) {
    FUN_06161550(param_1);
  }
  lVar17 = *(long *)(param_1 + 0x210);
  if (lVar17 != 0) {
    iVar10 = 0;
    while (iVar10 < *(int *)(lVar17 + 0x18)) {
      lVar17 = FUN_0400ff1c(lVar17,iVar10,*(undefined8 *)puVar6);
      if ((lVar17 == 0) || (lVar15 = *(long *)(param_1 + 0x220), lVar15 == 0)) goto LAB_06161040;
      lVar18 = *(long *)(lVar15 + 0x10);
      uVar14 = *(undefined4 *)(lVar17 + 0x14);
      lVar17 = *(long *)puVar4;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_06161040;
      uVar24 = *(uint *)(lVar15 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar24 + 1;
        *(undefined4 *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) = uVar14;
      }
      else {
        FUN_04088dc8(lVar15,uVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      lVar17 = *(long *)(param_1 + 0x210);
      iVar10 = iVar10 + 1;
      if (lVar17 == 0) goto LAB_06161040;
    }
    *param_3 = 0;
    LeanTween__value(param_3,0);
    lVar17 = *(long *)(param_1 + 0x220);
    if (lVar17 != 0) {
      if (0 < *(int *)(lVar17 + 0x18)) {
        lVar17 = FUN_0408a740(lVar17,*(undefined8 *)
                                      Method_System_Collections_Generic_List<BitmapAllocator32_Page>_set_Item__
                             );
        *param_3 = lVar17;
        LeanTween__value(param_3,lVar17);
      }
      return uVar13 & (local_7c ^ 1);
    }
  }
  goto LAB_06161040;
}


