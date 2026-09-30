/*
FUNCTION_NAME: FUN_061615d4
ENTRY_POINT: 061615d4
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


uint FUN_061615d4(long param_1,long param_2,long *param_3,uint param_4)

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
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  int iVar23;
  uint uVar24;
  undefined8 uVar25;
  uint local_74;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_06dc683e & 1) == 0) {
                    /* try { // try from 06161610 to 06261653 has its CatchHandler @ 06161870 */
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<bool>__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_IMGUIContainer_<DoOnGUI>b__59_0__);
    FUN_02d965b8(Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<OVRLocatable_CopyPosesJob>__);
    FUN_02d965b8(Method_UnityEngine_UIElements_IMGUIContainer_OnGenerateVisualContent__);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextAnchor>__);
    FUN_02d965b8(
                Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<OVRLocatable_GetSceneAnchorPosesJob>__
                );
                    /* try { // try from 06161660 to 06261667 has its CatchHandler @ 0616185c */
    FUN_02d965b8(Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__);
    FUN_02d965b8(System_Collections_Generic_List<ModifierSpec>_TypeInfo);
                    /* try { // try from 06161678 to 0626171b has its CatchHandler @ 06161878 */
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
    FUN_02d965b8(
                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_UnregisterValueChangedCallback<bool>__
                );
    FUN_02d965b8(Method_System_Net_HttpWebRequest_EndGetResponse__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_UnregisterValueChangedCallback<float>__
                );
    FUN_02d965b8(Method_System_Net_Http_Headers_HeaderInfo_CreateSingle<Uri>__);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Visibility>__);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Wrap>__);
    FUN_02d965b8(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<WhiteSpace>__);
    DAT_06dc683e = 1;
  }
  local_70 = 0;
  local_68 = 0;
  uVar14 = FUN_0536c9cc(param_2,0);
  if ((uVar14 & 1) == 0) {
    if (*(int *)(param_1 + 0x110) != 0) {
      iVar10 = FUN_0615d808(param_1);
      if (iVar10 != 0) goto LAB_06161bcc;
      if ((*(long *)(param_1 + 0x138) == 0) || (*(long *)(param_1 + 0x128) == 0)) {
        FUN_0615a5fc(param_1);
      }
      lVar17 = *(long *)(param_1 + 0x200);
      if (lVar17 == 0) goto LAB_06162198;
      lVar16 = *(long *)(param_1 + 0x208);
      *(undefined4 *)(lVar17 + 0x18) = 0;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      puVar4 = 
      Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<Vector3Int>__
      ;
      if (lVar16 == 0) goto LAB_06162198;
      FUN_03c2dafc(lVar16,*(undefined8 *)
                           Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<Vector3Int>__
                  );
      lVar17 = *(long *)(param_1 + 0x210);
      if (lVar17 == 0) goto LAB_06162198;
      iVar10 = *(int *)(lVar17 + 0x18);
      *(undefined4 *)(lVar17 + 0x18) = 0;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      if (0 < iVar10) {
        FUN_0550afb4(*(undefined8 *)(lVar17 + 0x10),0,iVar10,0);
      }
      if (*(long *)(param_1 + 0x218) == 0) goto LAB_06162198;
      FUN_03c2dafc(*(long *)(param_1 + 0x218),*(undefined8 *)puVar4);
      lVar17 = *(long *)(param_1 + 0x220);
      if (lVar17 == 0) goto LAB_06162198;
      *(undefined4 *)(lVar17 + 0x18) = 0;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      puVar6 = Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<OVRLocatable_CopyPosesJob>__;
      puVar5 = Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__;
      puVar4 = System_Collections_Generic_List<ModifierSpec>_TypeInfo;
      if (param_2 == 0) goto LAB_06162198;
      iVar10 = *(int *)(param_2 + 0x10);
      if (iVar10 < 1) {
        local_74 = 0;
      }
      else {
        local_74 = 0;
        iVar23 = 0;
        do {
          uVar11 = FUN_053674f8(param_2,iVar23,0);
          if (*(long *)(param_1 + 0x138) == 0) goto LAB_06162198;
          uVar11 = uVar11 & 0xffff;
          uVar14 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                             (*(long *)(param_1 + 0x138),uVar11,*(undefined8 *)puVar6);
          if ((uVar14 & 1) == 0) {
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            iVar12 = FUN_063ee2a0(uVar11,0);
            if (iVar12 == 0) {
              if ((uVar11 == 0x2011) || (uVar11 == 0xad)) {
                lVar17 = *(long *)puVar5;
                uVar15 = 0x2d;
LAB_061618c0:
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                iVar12 = FUN_063ee2a0(uVar15,0);
                if (iVar12 != 0) goto LAB_061618e0;
              }
              else if (uVar11 == 0xa0) {
                lVar17 = *(long *)puVar5;
                uVar15 = 0x20;
                goto LAB_061618c0;
              }
              lVar17 = *(long *)(param_1 + 0x220);
              if (lVar17 == 0) goto LAB_06162198;
              lVar16 = *(long *)(lVar17 + 0x10);
              lVar18 = *(long *)PTR_DAT_06a0d6d8;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_06162198;
              uVar24 = *(uint *)(lVar17 + 0x18);
              if (uVar24 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar24 + 1;
                *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) = uVar11;
              }
              else {
                FUN_04088dc8(lVar17,uVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              local_74 = 1;
            }
            else {
LAB_061618e0:
              lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                           Method_System_Net_Http_Headers_HeaderInfo_CreateSingle<Uri>__
                                         );
              FUN_0615279c(lVar17,uVar11,iVar12);
              if (*(long *)(param_1 + 0x128) == 0) goto LAB_06162198;
              uVar14 = System_Array_EmptyInternalEnumerator<KeyValuePair<Int64Enum,_BytesSentAndReceived>>__get_Current
                                 (*(long *)(param_1 + 0x128),iVar12,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_IMGUIContainer_OnGenerateVisualContent__
                                 );
              if ((uVar14 & 1) == 0) {
                if (*(long *)(param_1 + 0x208) == 0) goto LAB_06162198;
                uVar14 = FUN_03c2e698(*(long *)(param_1 + 0x208),iVar12,*(undefined8 *)puVar4);
                if ((uVar14 & 1) != 0) {
                  lVar16 = *(long *)(param_1 + 0x200);
                  if (lVar16 == 0) goto LAB_06162198;
                  lVar18 = *(long *)(lVar16 + 0x10);
                  lVar20 = *(long *)PTR_DAT_06a0d6d8;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar18 == 0) goto LAB_06162198;
                  uVar24 = *(uint *)(lVar16 + 0x18);
                  if (uVar24 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar24 + 1;
                    *(int *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) = iVar12;
                  }
                  else {
                    FUN_04088dc8(lVar16,iVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                if (*(long *)(param_1 + 0x218) == 0) goto LAB_06162198;
                uVar14 = FUN_03c2e698(*(long *)(param_1 + 0x218),uVar11,*(undefined8 *)puVar4);
                if ((uVar14 & 1) != 0) {
                  lVar16 = *(long *)(param_1 + 0x210);
                  if (lVar16 == 0) goto LAB_06162198;
                  lVar18 = *(long *)(lVar16 + 0x10);
                  lVar20 = *(long *)
                            Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<DisplayStyle>__
                  ;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar18 == 0) goto LAB_06162198;
                  uVar11 = *(uint *)(lVar16 + 0x18);
                  if (uVar11 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar11 + 1;
                    plVar19 = (long *)(lVar18 + (long)(int)uVar11 * 8 + 0x20);
                    *plVar19 = lVar17;
                    LeanTween__value(plVar19,lVar17);
                  }
                  else {
                    FUN_040101ec(lVar16,lVar17,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              else {
                if ((*(long *)(param_1 + 0x128) == 0) ||
                   (uVar15 = FUN_04f94af4(*(long *)(param_1 + 0x128),iVar12,
                                          *(undefined8 *)
                                           Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<OVRLocatable_GetSceneAnchorPosesJob>__
                                         ), lVar17 == 0)) goto LAB_06162198;
                *(undefined8 *)(lVar17 + 0x20) = uVar15;
                LeanTween__value();
                *(long *)(lVar17 + 0x18) = param_1;
                LeanTween__value((long *)(lVar17 + 0x18),param_1);
                lVar16 = *(long *)(param_1 + 0x130);
                if (lVar16 == 0) goto LAB_06162198;
                lVar18 = *(long *)(lVar16 + 0x10);
                lVar20 = *(long *)
                          Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<DisplayStyle>__
                ;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar18 == 0) goto LAB_06162198;
                uVar24 = *(uint *)(lVar16 + 0x18);
                if (uVar24 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar24 + 1;
                  plVar19 = (long *)(lVar18 + (long)(int)uVar24 * 8 + 0x20);
                  *plVar19 = lVar17;
                  LeanTween__value(plVar19,lVar17);
                }
                else {
                  FUN_040101ec(lVar16,lVar17,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                if (*(long *)(param_1 + 0x138) == 0) goto LAB_06162198;
                FUN_04f94b94(*(long *)(param_1 + 0x138),uVar11,lVar17,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<bool>__
                            );
              }
            }
          }
          iVar23 = iVar23 + 1;
        } while (iVar10 != iVar23);
      }
      if (*(long *)(param_1 + 0x200) == 0) goto LAB_06162198;
      if (*(int *)(*(long *)(param_1 + 0x200) + 0x18) == 0) goto LAB_06161bcc;
      lVar17 = *(long *)(param_1 + 0x148);
      if (lVar17 == 0) goto LAB_06162198;
      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_061621d4;
      plVar19 = *(long **)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
      if (plVar19 == (long *)0x0) goto LAB_06162198;
      iVar10 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
      if (iVar10 < 2) {
LAB_06161c88:
        lVar17 = *(long *)(param_1 + 0x148);
        if (lVar17 == 0) goto LAB_06162198;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_061621d4;
        lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
        if (lVar17 == 0) goto LAB_06162198;
        FUN_0632f188(lVar17,*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c),0);
        lVar17 = *(long *)(param_1 + 0x148);
        if (lVar17 == 0) goto LAB_06162198;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_061621d4;
        uVar15 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
        if (*(int *)(*(long *)
                      Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__ +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_063f1194(uVar15,0);
      }
      else {
        lVar17 = *(long *)(param_1 + 0x148);
        if (lVar17 == 0) goto LAB_06162198;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_061621d4;
        plVar19 = *(long **)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
        if (plVar19 == (long *)0x0) goto LAB_06162198;
        iVar10 = (**(code **)(*plVar19 + 0x1a8))(plVar19,*(undefined8 *)(*plVar19 + 0x1b0));
        if (iVar10 < 2) goto LAB_06161c88;
      }
      lVar17 = *(long *)(param_1 + 0x148);
      if (lVar17 != 0) {
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) {
LAB_061621d4:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        uVar15 = *(undefined8 *)(param_1 + 0x168);
        uVar1 = *(undefined8 *)(param_1 + 0x170);
        uVar22 = *(undefined8 *)(param_1 + 0x200);
        uVar13 = *(undefined4 *)(param_1 + 0x160);
        uVar2 = *(undefined4 *)(param_1 + 0x164);
        uVar25 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
        if (*(int *)(*(long *)
                      Method_Unity_Jobs_IJobExtensions_Schedule<SimpleConnectionLayer_SendJob>__ +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar11 = UnityEngine_UIElements_UIR_Utility__SetPropertyBlock
                           (uVar22,uVar13,0,uVar1,uVar15,uVar2,uVar25,&local_68,0);
        puVar6 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Align>__;
        puVar5 = Method_UnityEngine_UIElements_IMGUIContainer_<DoOnGUI>b__59_0__;
        puVar4 = PTR_DAT_06a0d6d8;
        if (local_68 != 0) {
          uVar24 = 0;
          do {
            if ((int)*(uint *)(local_68 + 0x18) <= (int)uVar24) {
LAB_06161f10:
              lVar17 = *(long *)(param_1 + 0x200);
              if (lVar17 != 0) {
                lVar16 = *(long *)(param_1 + 0x210);
                *(undefined4 *)(lVar17 + 0x18) = 0;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                puVar9 = 
                Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextOverflowPosition>__
                ;
                puVar8 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<TextAnchor>__
                ;
                puVar7 = 
                Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<DisplayStyle>__;
                puVar6 = 
                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_UnregisterValueChangedCallback<float>__
                ;
                puVar5 = 
                Method_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback<bool>__
                ;
                if (lVar16 != 0) {
                  iVar10 = 0;
                  goto LAB_06161f58;
                }
              }
              break;
            }
            if (*(uint *)(local_68 + 0x18) <= uVar24) goto LAB_061621d4;
            lVar17 = *(long *)(local_68 + (long)(int)uVar24 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_06161f10;
            uVar13 = FUN_063ed08c(lVar17,0);
            FUN_063ed0f0(lVar17,*(undefined4 *)(param_1 + 0x150),0);
            lVar16 = *(long *)(param_1 + 0x120);
            if (lVar16 == 0) break;
            lVar18 = *(long *)(lVar16 + 0x10);
            lVar20 = *(long *)puVar6;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar18 == 0) break;
            uVar3 = *(uint *)(lVar16 + 0x18);
            if (uVar3 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar3 + 1;
              plVar19 = (long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
              *plVar19 = lVar17;
              LeanTween__value(plVar19,lVar17);
            }
            else {
              FUN_040101ec(lVar16,lVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0x128) == 0) break;
            FUN_04f94b94(*(long *)(param_1 + 0x128),uVar13,lVar17,*(undefined8 *)puVar5);
            lVar17 = *(long *)(param_1 + 0x1f8);
            if (lVar17 == 0) break;
            lVar16 = *(long *)(lVar17 + 0x10);
            lVar18 = *(long *)puVar4;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar16 == 0) break;
            uVar3 = *(uint *)(lVar17 + 0x18);
            if (uVar3 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar16 + (long)(int)uVar3 * 4 + 0x20) = uVar13;
            }
            else {
              FUN_04088dc8(lVar17,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            lVar17 = *(long *)(param_1 + 0x1f0);
            if (lVar17 == 0) break;
            lVar16 = *(long *)(lVar17 + 0x10);
            lVar18 = *(long *)puVar4;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar16 == 0) break;
            uVar3 = *(uint *)(lVar17 + 0x18);
            if (uVar3 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar16 + (long)(int)uVar3 * 4 + 0x20) = uVar13;
            }
            else {
              FUN_04088dc8(lVar17,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            uVar24 = uVar24 + 1;
          } while (local_68 != 0);
        }
      }
LAB_06162198:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
LAB_06161b68:
    uVar15 = thunk_FUN_06354368(param_1,0);
    puVar21 = (undefined8 *)
              Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Visibility>__;
  }
  else {
    if (*(int *)(param_1 + 0x110) == 0) goto LAB_06161b68;
    uVar15 = thunk_FUN_06354368(param_1,0);
    puVar21 = (undefined8 *)Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<Wrap>__;
  }
  uVar15 = FUN_0536d554(*(undefined8 *)
                         Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<WhiteSpace>__
                        ,uVar15,*puVar21,0);
  if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
  }
  FUN_0630c038(uVar15,param_1,0);
LAB_06161bcc:
  *param_3 = param_2;
  LeanTween__value(param_3,param_2);
  return 0;
LAB_06161f58:
  if (iVar10 < *(int *)(lVar16 + 0x18)) {
    lVar17 = FUN_0400ff1c(lVar16,iVar10,*(undefined8 *)puVar6);
    if ((lVar17 == 0) || (*(long *)(param_1 + 0x128) == 0)) goto LAB_06162198;
    uVar14 = FUN_04f96670(*(long *)(param_1 + 0x128),*(undefined4 *)(lVar17 + 0x28),&local_70,
                          *(undefined8 *)puVar8);
    if ((uVar14 & 1) == 0) {
      lVar16 = *(long *)(param_1 + 0x200);
      if (lVar16 == 0) goto LAB_06162198;
      lVar18 = *(long *)(lVar16 + 0x10);
      uVar13 = *(undefined4 *)(lVar17 + 0x28);
      lVar17 = *(long *)puVar4;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_06162198;
      uVar24 = *(uint *)(lVar16 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar24 + 1;
        *(undefined4 *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) = uVar13;
      }
      else {
        FUN_04088dc8(lVar16,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      *(undefined8 *)(lVar17 + 0x20) = local_70;
      LeanTween__value();
      *(long *)(lVar17 + 0x18) = param_1;
      LeanTween__value((long *)(lVar17 + 0x18),param_1);
      lVar16 = *(long *)(param_1 + 0x130);
      if (lVar16 == 0) goto LAB_06162198;
      lVar18 = *(long *)(lVar16 + 0x10);
      lVar20 = *(long *)puVar7;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_06162198;
      uVar24 = *(uint *)(lVar16 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar24 + 1;
        plVar19 = (long *)(lVar18 + (long)(int)uVar24 * 8 + 0x20);
        *plVar19 = lVar17;
        LeanTween__value(plVar19,lVar17);
      }
      else {
        FUN_040101ec(lVar16,lVar17,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(param_1 + 0x138) == 0) goto LAB_06162198;
      FUN_04f94b94(*(long *)(param_1 + 0x138),*(undefined4 *)(lVar17 + 0x14),lVar17,
                   *(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x210) == 0) goto LAB_06162198;
      FUN_0401187c(*(long *)(param_1 + 0x210),iVar10,*(undefined8 *)puVar9);
      iVar10 = iVar10 + -1;
    }
    lVar16 = *(long *)(param_1 + 0x210);
    iVar10 = iVar10 + 1;
    if (lVar16 == 0) goto LAB_06162198;
    goto LAB_06161f58;
  }
  if (*(char *)(param_1 + 0x154) != '\0' && (uVar11 & 1) == 0) {
    do {
      uVar14 = FUN_061610ac(param_1);
    } while ((uVar14 & 1) == 0);
    uVar11 = 1;
  }
  if ((param_4 & 1) != 0) {
    FUN_06161550(param_1);
  }
  *param_3 = **(long **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
  LeanTween__value(param_3);
  lVar17 = *(long *)(param_1 + 0x210);
  if (lVar17 != 0) {
    iVar10 = 0;
    while (iVar10 < *(int *)(lVar17 + 0x18)) {
      lVar17 = FUN_0400ff1c(lVar17,iVar10,*(undefined8 *)puVar6);
      if ((lVar17 == 0) || (lVar16 = *(long *)(param_1 + 0x220), lVar16 == 0)) goto LAB_06162198;
      lVar18 = *(long *)(lVar16 + 0x10);
      uVar13 = *(undefined4 *)(lVar17 + 0x14);
      lVar17 = *(long *)puVar4;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_06162198;
      uVar24 = *(uint *)(lVar16 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar24 + 1;
        *(undefined4 *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) = uVar13;
      }
      else {
        FUN_04088dc8(lVar16,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      lVar17 = *(long *)(param_1 + 0x210);
      iVar10 = iVar10 + 1;
      if (lVar17 == 0) goto LAB_06162198;
    }
    if (*(long *)(param_1 + 0x220) != 0) {
      if (0 < *(int *)(*(long *)(param_1 + 0x220) + 0x18)) {
        lVar17 = FUN_061514a0();
        *param_3 = lVar17;
        LeanTween__value(param_3,lVar17);
      }
      return uVar11 & (local_74 ^ 1);
    }
  }
  goto LAB_06162198;
}


