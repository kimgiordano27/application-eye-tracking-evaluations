/*
FUNCTION_NAME: FUN_02013280
ENTRY_POINT: 02013280
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;keyword_support;attempted_use
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_9;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_known_unity_or_il2cpp_false_positive_family;functionality_data_collection_or_telemetry_hits_9
*/


void FUN_02013280(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  char *pcVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  
  if ((DAT_0452ef52 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fa08);
    FUN_01c5d288(System_Func<SHA1Wrapper>_TypeInfo);
    FUN_01c5d288(PTR_DAT_042396c0);
    FUN_01c5d288(PTR_DAT_04239378);
    FUN_01c5d288(PTR_DAT_04239578);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(PTR_DAT_042393a8);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo
                );
    FUN_01c5d288(PTR_DAT_04230aa8);
    FUN_01c5d288(System_Func<SimpleTuple<float,_Vector2>,_Vector2>_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
                );
    FUN_01c5d288(System_Func<StructMultiKey<string,_string>,_Type>_TypeInfo);
    FUN_01c5d288(System_Net_Sockets_NetworkStream_var);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo
                );
    FUN_01c5d288(System_Func<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo
                );
    FUN_01c5d288(System_Func<Socket_AwaitableSocketAsyncEventArgs>_TypeInfo);
    FUN_01c5d288(System_Func<Socket_CachedEventArgs>_TypeInfo);
    FUN_01c5d288(System_Globalization_NumberFormatInfo_var);
    FUN_01c5d288(PTR_DAT_04236818);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo);
    FUN_01c5d288(OVRGazePointer_var);
    FUN_01c5d288(System_Func<StructMultiKey<Type,_Type>,_Func<object,_object>>_TypeInfo);
    FUN_01c5d288(PTR_DAT_04239888);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo);
    FUN_01c5d288(System_Func<ValueTuple<string,_Type>,_string>_TypeInfo);
    FUN_01c5d288(
                System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_IInput>,_EventBase>_TypeInfo
                );
    FUN_01c5d288(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_TypeInfo);
    FUN_01c5d288(System_Func<object[],_object>_TypeInfo);
    FUN_01c5d288(System_Runtime_Remoting_ObjRef_var);
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo);
    FUN_01c5d288(System_Runtime_InteropServices_ICustomMarshaler_var);
    FUN_01c5d288(object_var);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
                );
    FUN_01c5d288(PTR_DAT_04230f30);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
                );
    FUN_01c5d288(UnityEngine_Object_var);
    FUN_01c5d288(PTR_DAT_042399f0);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
                );
    FUN_01c5d288(UnityEngine_Rendering_ObjectParameter<T>_var);
    FUN_01c5d288(PTR_DAT_04239ad0);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
                );
    FUN_01c5d288(System_ComponentModel_NullableConverter_var);
    FUN_01c5d288(System_ComponentModel_Design_IDictionaryService_var);
    FUN_01c5d288(
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo);
    FUN_01c5d288(CodeStage_AntiCheat_ObscuredTypes_ObscuredBigInteger_var);
    FUN_01c5d288(PTR_DAT_04236148);
    DAT_0452ef52 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  iStack_64 = 0;
  *(long *)(param_1 + 0x100) = param_2;
  if ((param_2 == 0) || (plVar9 = *(long **)(param_1 + 0x98), plVar9 == (long *)0x0))
  goto LAB_020137d8;
  (**(code **)(*plVar9 + 0x558))
            (plVar9,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(*plVar9 + 0x560));
  puVar4 = System_Net_Sockets_NetworkStream_var;
  if (*(long *)(param_2 + 0x18) == 0) goto LAB_020137d8;
  plVar9 = (long *)FUN_035097bc(*(long *)(param_2 + 0x18),
                                *(undefined8 *)System_Net_Sockets_NetworkStream_var,0);
  puVar3 = PTR_DAT_0422fc38;
  if (plVar9 != (long *)0x0) {
    if (*plVar9 != *(long *)PTR_DAT_0422fc38) goto LAB_02014668;
    if (*(long *)(param_2 + 0x18) == 0) goto LAB_020137d8;
    plVar9 = (long *)FUN_035097bc(*(long *)(param_2 + 0x18),*(undefined8 *)puVar4,0);
    if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar9);
    }
    plVar20 = *(long **)(param_1 + 0xa0);
    uVar10 = FUN_021940e0(plVar9,0);
    puVar4 = PTR_DAT_04239378;
    if (plVar20 == (long *)0x0) goto LAB_020137d8;
    (**(code **)(*plVar20 + 0x558))(plVar20,uVar10,*(undefined8 *)(*plVar20 + 0x560));
    lVar18 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    if (lVar18 == 0) goto LAB_020137d8;
    lVar18 = *(long *)(lVar18 + 0x1e0);
    local_70 = local_70 & 0xffffffff;
    if (lVar18 == 0) goto LAB_020137d8;
    uVar21 = *(uint *)(lVar18 + 0x18);
    if (0 < (int)uVar21) {
      lVar22 = 0;
      do {
        if (uVar21 <= (uint)lVar22) goto LAB_02014664;
        lVar23 = *(long *)(lVar18 + 0x20 + lVar22 * 8);
        if (lVar23 == 0) goto LAB_020137d8;
        uVar11 = thunk_FUN_03152714(*(undefined8 *)(lVar23 + 0x18),plVar9,0);
        if ((uVar11 & 1) != 0) {
          if (*(long *)(param_1 + 0x78) == 0) goto LAB_020137d8;
          FUN_03df8cc0(*(long *)(param_1 + 0x78),*(undefined8 *)(lVar23 + 0x10),0);
          if (*(long *)(param_1 + 0x78) == 0) goto LAB_020137d8;
          FUN_03d45e2c(*(long *)(param_1 + 0x78),1,0);
          break;
        }
        lVar22 = lVar22 + 1;
        local_70 = CONCAT44((int)lVar22,(undefined4)local_70);
        uVar21 = *(uint *)(lVar18 + 0x18);
      } while ((int)lVar22 < (int)uVar21);
    }
  }
  puVar3 = System_Globalization_NumberFormatInfo_var;
  puVar4 = PTR_DAT_0422fd68;
  if (*(long *)(param_2 + 0x18) == 0) goto LAB_020137d8;
  lVar18 = FUN_035097bc(*(long *)(param_2 + 0x18),
                        *(undefined8 *)System_Globalization_NumberFormatInfo_var,0);
  if (lVar18 != 0) {
    uVar10 = *(undefined8 *)puVar4;
    lVar22 = thunk_FUN_01c495e4(lVar18,uVar10);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar18,uVar10);
    }
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar18 = FUN_035097bc(*(long *)(param_2 + 0x18),*(undefined8 *)puVar3,0);
      if (lVar18 == 0) {
        lVar22 = 0;
      }
      else {
        uVar10 = *(undefined8 *)puVar4;
        lVar22 = thunk_FUN_01c495e4(lVar18,uVar10);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar18,uVar10);
        }
      }
      lVar18 = *(long *)(param_1 + 0x80);
      if (lVar18 != 0) {
        lVar23 = 4;
        do {
          uVar21 = (int)lVar23 - 4;
          if ((int)*(uint *)(lVar18 + 0x18) <= (int)uVar21) goto LAB_020137dc;
          if (lVar22 == 0) break;
          if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_02014664;
          lVar18 = *(long *)(lVar18 + lVar23 * 8);
          if (lVar18 == 0) break;
          iVar1 = *(int *)(lVar22 + 0x18);
          lVar18 = FUN_03d468e8(lVar18,0);
          if (lVar18 == 0) break;
          if ((int)uVar21 < iVar1) {
            FUN_03d499ec(lVar18,1,0);
            lVar18 = *(long *)(param_1 + 0x80);
            if (lVar18 == 0) break;
            if ((*(uint *)(lVar18 + 0x18) <= uVar21) || (*(uint *)(lVar22 + 0x18) <= uVar21))
            goto LAB_02014664;
            lVar18 = *(long *)(lVar18 + lVar23 * 8);
            if (lVar18 == 0) break;
            FUN_01fe6e50(lVar18,*(undefined8 *)(lVar22 + lVar23 * 8),0);
          }
          else {
            FUN_03d499ec(lVar18,0,0);
          }
          lVar18 = *(long *)(param_1 + 0x80);
          lVar23 = lVar23 + 1;
        } while (lVar18 != 0);
      }
    }
    goto LAB_020137d8;
  }
LAB_020137dc:
  puVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBigInteger_var;
  puVar7 = PTR_DAT_042393a8;
  puVar5 = PTR_DAT_0422fd80;
  puVar3 = PTR_DAT_0422fa08;
  if (*(long *)(param_2 + 0x18) == 0) goto LAB_020137d8;
  lVar18 = FUN_035097bc(*(long *)(param_2 + 0x18),
                        *(undefined8 *)CodeStage_AntiCheat_ObscuredTypes_ObscuredBigInteger_var,0);
  if (lVar18 == 0) {
    plVar9 = *(long **)(param_1 + 0xa8);
joined_r0x02013960:
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)System_Func<Socket_CachedEventArgs>_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)System_Func<Socket_CachedEventArgs>_TypeInfo;
    }
    goto LAB_02013a0c;
  }
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (plVar9 = (long *)FUN_035097bc(*(long *)(param_2 + 0x18),*(undefined8 *)puVar6,0),
     puVar8 = System_Func<Socket_AwaitableSocketAsyncEventArgs>_TypeInfo, puVar6 = PTR_DAT_04230aa8,
     plVar9 == (long *)0x0)) goto LAB_020137d8;
  if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) goto LAB_02014668;
  piVar12 = (int *)thunk_FUN_01c49834();
  iVar1 = *piVar12;
  plVar9 = (long *)(param_1 + 0xa8);
  plVar20 = (long *)*plVar9;
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar10 = FUN_0210eb50(*(undefined8 *)puVar8,1,0,1,0,0,0,1,0);
  uVar10 = FUN_03146988(uVar10,*(undefined8 *)puVar6,0);
  if (plVar20 == (long *)0x0) goto LAB_020137d8;
  (**(code **)(*plVar20 + 0x558))(plVar20,uVar10,*(undefined8 *)(*plVar20 + 0x560));
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (plVar20 = (long *)FUN_035097bc(*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_04239ad0,0),
     plVar20 == (long *)0x0)) goto LAB_020137d8;
  if (*(long *)(*plVar20 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_02014668;
  pcVar13 = (char *)thunk_FUN_01c49834();
  if (*pcVar13 != '\0') {
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_020137d8;
        uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
        puVar19 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar7);
          puVar19 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<ShareSheetResult>_TypeInfo;
        }
      }
      else {
        if (iVar1 != 1) goto switchD_0201398c_caseD_11;
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_020137d8;
        uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
        puVar19 = (undefined8 *)
                  VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo
        ;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar7);
          puVar19 = (undefined8 *)
                    VoxelBusters_CoreLibrary_EventCallback<BillingServicesInitializeStoreResult>_TypeInfo
          ;
        }
      }
      goto LAB_02013a0c;
    }
LAB_020139d0:
    plVar9 = (long *)*plVar9;
    goto joined_r0x02013960;
  }
  if (iVar1 == 0) goto LAB_020139d0;
  switch(iVar1) {
  case 1:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<LeaderboardLoadScoresResult>_TypeInfo;
    }
    break;
  case 2:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
    ;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<AddressBookRequestContactsAccessResult>_TypeInfo
      ;
    }
    break;
  case 3:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
    ;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<BillingServicesRestorePurchasesResult>_TypeInfo
      ;
    }
    break;
  case 4:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MessageComposerResult>_TypeInfo
      ;
    }
    break;
  case 5:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<AddressBookReadContactsResult>_TypeInfo;
    }
    break;
  case 6:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
    ;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRequestPermissionResult>_TypeInfo
      ;
    }
    break;
  case 7:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
    ;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesRegisterForPushNotificationsResult>_TypeInfo
      ;
    }
    break;
  case 8:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<GameServicesViewResult>_TypeInfo;
    }
    break;
  case 9:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)VoxelBusters_CoreLibrary_EventCallback<MailComposerResult>_TypeInfo;
    }
    break;
  case 10:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementsResult>_TypeInfo;
    }
    break;
  case 0xb:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
    ;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<MediaServicesRequestGalleryAccessResult>_TypeInfo
      ;
    }
    break;
  case 0xc:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<CloudServicesUserChangeResult>_TypeInfo;
    }
    break;
  case 0xd:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
    ;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetScheduledNotificationsResult>_TypeInfo
      ;
    }
    break;
  case 0xe:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
    ;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<MediaServicesSaveImageToGalleryResult>_TypeInfo
      ;
    }
    break;
  case 0xf:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
    ;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadServerCredentialsResult>_TypeInfo
      ;
    }
    break;
  case 0x10:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<GameServicesAuthStatusChangeResult>_TypeInfo;
    }
    break;
  default:
    goto switchD_0201398c_caseD_11;
  case 0x12:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
    ;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<NotificationServicesGetDeliveredNotificationsResult>_TypeInfo
      ;
    }
    break;
  case 0x13:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    uVar10 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
    puVar19 = (undefined8 *)
              VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
    ;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar7);
      puVar19 = (undefined8 *)
                VoxelBusters_CoreLibrary_EventCallback<GameServicesLoadAchievementDescriptionsResult>_TypeInfo
      ;
    }
  }
LAB_02013a0c:
  uVar14 = FUN_0210eb50(*puVar19,1,0,1,0,0,0,1,0);
  uVar10 = FUN_03146988(uVar10,uVar14,0);
  (**(code **)(*plVar9 + 0x558))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x560));
switchD_0201398c_caseD_11:
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (plVar9 = (long *)FUN_035097bc(*(long *)(param_2 + 0x18),
                                    *(undefined8 *)UnityEngine_Rendering_ObjectParameter<T>_var,0),
     puVar7 = PTR_DAT_042396c0, plVar9 == (long *)0x0)) goto LAB_020137d8;
  if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)PTR_DAT_04239578 + 0x40)) goto LAB_02014668;
  piVar12 = (int *)thunk_FUN_01c49834();
  lVar18 = *(long *)puVar7;
  iVar1 = *piVar12;
  if (*(int *)(lVar18 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar18 = *(long *)puVar7;
  }
  if (**(long **)(lVar18 + 0xb8) == 0) goto LAB_020137d8;
  uVar10 = FUN_021b31b8(**(long **)(lVar18 + 0xb8),3,0);
  if (**(long **)(*(long *)puVar7 + 0xb8) == 0) goto LAB_020137d8;
  uVar14 = FUN_021b31b8(**(long **)(*(long *)puVar7 + 0xb8),4,0);
  puVar7 = UnityEngine_Object_var;
  local_68 = 0;
  iStack_64 = 0;
  if (*(long *)(param_2 + 0x18) == 0) goto LAB_020137d8;
  lVar18 = FUN_035097bc(*(long *)(param_2 + 0x18),*(undefined8 *)UnityEngine_Object_var,0);
  if (lVar18 == 0) {
    iVar24 = 0;
  }
  else {
    if ((*(long *)(param_2 + 0x18) == 0) ||
       (plVar9 = (long *)FUN_035097bc(*(long *)(param_2 + 0x18),*(undefined8 *)puVar7,0),
       plVar9 == (long *)0x0)) goto LAB_020137d8;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) goto LAB_02014668;
    piVar12 = (int *)thunk_FUN_01c49834();
    iVar24 = *piVar12;
    iStack_64 = iVar24;
  }
  puVar7 = OVRGazePointer_var;
  if (*(long *)(param_2 + 0x18) == 0) goto LAB_020137d8;
  lVar18 = FUN_035097bc(*(long *)(param_2 + 0x18),*(undefined8 *)OVRGazePointer_var,0);
  if (lVar18 == 0) {
    iVar25 = 0;
  }
  else {
    if ((*(long *)(param_2 + 0x18) == 0) ||
       (plVar9 = (long *)FUN_035097bc(*(long *)(param_2 + 0x18),*(undefined8 *)puVar7,0),
       plVar9 == (long *)0x0)) goto LAB_020137d8;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) goto LAB_02014668;
    piVar12 = (int *)thunk_FUN_01c49834();
    iVar25 = *piVar12;
    local_68 = iVar25;
  }
  puVar7 = PTR_DAT_04230f30;
  if (iVar1 < 0x80) {
    if (iVar1 != 2) {
      if (iVar1 == 8) goto LAB_02013bf4;
      goto LAB_02013c3c;
    }
  }
  else if ((iVar1 != 0x1000) && (iVar1 != 0x800)) {
    if (iVar1 == 0x80) {
LAB_02013bf4:
      plVar9 = *(long **)(param_1 + 0xb8);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x558))
                  (plVar9,*(undefined8 *)PTR_DAT_04230f30,*(undefined8 *)(*plVar9 + 0x560));
        plVar9 = *(long **)(param_1 + 0xb0);
        if (plVar9 == (long *)0x0) goto LAB_020137d8;
        lVar18 = *plVar9;
        uVar10 = *(undefined8 *)puVar7;
        goto LAB_02013f14;
      }
      goto LAB_020137d8;
    }
LAB_02013c3c:
    if ((*(long *)(param_1 + 0xb8) == 0) ||
       (lVar18 = FUN_0230c12c(*(long *)(param_1 + 0xb8),
                              *(undefined8 *)System_Func<SHA1Wrapper>_TypeInfo), lVar18 == 0))
    goto LAB_020137d8;
    puVar19 = (undefined8 *)System_Func<StructMultiKey<Type,_Type>,_Func<object,_object>>_TypeInfo;
    if (iVar1 != 0x400) {
      puVar19 = (undefined8 *)System_Func<StructMultiKey<string,_string>,_Type>_TypeInfo;
    }
    FUN_0210d918(lVar18,*puVar19,0);
    puVar7 = System_Runtime_Remoting_ObjRef_var;
    if (*(char *)(param_2 + 0x38) == '\0') {
LAB_02013efc:
      plVar9 = *(long **)(param_1 + 0xb0);
      if (plVar9 == (long *)0x0) goto LAB_020137d8;
      lVar18 = *plVar9;
      puVar19 = (undefined8 *)System_Func<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo;
LAB_02013f10:
      uVar10 = *puVar19;
      goto LAB_02013f14;
    }
    if (*(long *)(param_2 + 0x18) == 0) goto LAB_020137d8;
    lVar18 = FUN_035097bc(*(long *)(param_2 + 0x18),
                          *(undefined8 *)System_Runtime_Remoting_ObjRef_var,0);
    if (lVar18 == 0) {
      uVar21 = 0;
    }
    else {
      if ((*(long *)(param_2 + 0x18) == 0) ||
         (plVar9 = (long *)FUN_035097bc(*(long *)(param_2 + 0x18),*(undefined8 *)puVar7,0),
         plVar9 == (long *)0x0)) goto LAB_020137d8;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) goto LAB_02014668;
      puVar15 = (uint *)thunk_FUN_01c49834();
      uVar21 = *puVar15;
    }
    if (*(long *)(param_2 + 0x18) == 0) goto LAB_020137d8;
    plVar9 = (long *)FUN_035097bc(*(long *)(param_2 + 0x18),
                                  *(undefined8 *)System_ComponentModel_NullableConverter_var,0);
    if ((*(long *)(param_2 + 0x18) == 0) ||
       (plVar20 = (long *)FUN_035097bc(*(long *)(param_2 + 0x18),*(undefined8 *)object_var,0),
       plVar20 == (long *)0x0)) goto LAB_020137d8;
    if (*(long *)(*plVar20 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
LAB_02014668:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748();
    }
    pcVar13 = (char *)thunk_FUN_01c49834();
    if (plVar9 == (long *)0x0) goto LAB_020137d8;
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar9);
    }
    cVar2 = *pcVar13;
    pcVar13 = (char *)thunk_FUN_01c49834(plVar9);
    if (*pcVar13 != '\0') goto LAB_02013efc;
    if (cVar2 == '\0') {
      plVar9 = *(long **)(param_1 + 0xb0);
      if (plVar9 == (long *)0x0) goto LAB_020137d8;
      lVar18 = *plVar9;
      puVar19 = (undefined8 *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_TypeInfo;
      goto LAB_02013f10;
    }
    if ((int)uVar21 < 1) {
      if (iVar1 == 0x400) {
        lVar18 = FUN_01c5d2fc(*(undefined8 *)puVar4,9);
        if (lVar18 == 0) goto LAB_020137d8;
        uVar21 = *(uint *)(lVar18 + 0x18);
        if (((uVar21 == 0) ||
            (*(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)PTR_DAT_04239888, uVar21 == 1)) ||
           (*(undefined8 *)(lVar18 + 0x28) = uVar14,
           puVar4 = System_ComponentModel_Design_IDictionaryService_var, uVar21 < 3))
        goto LAB_02014664;
        *(undefined8 *)(lVar18 + 0x30) =
             *(undefined8 *)System_ComponentModel_Design_IDictionaryService_var;
        uVar14 = FUN_032cf308(&local_68,0);
        uVar21 = *(uint *)(lVar18 + 0x18);
        if (((uVar21 < 4) || (*(undefined8 *)(lVar18 + 0x38) = uVar14, uVar21 == 4)) ||
           ((*(undefined8 *)(lVar18 + 0x40) =
                  *(undefined8 *)System_Func<ValueTuple<string,_Type>,_string>_TypeInfo, uVar21 < 6
            || (*(undefined8 *)(lVar18 + 0x48) = uVar10, uVar21 == 6)))) goto LAB_02014664;
        *(undefined8 *)(lVar18 + 0x50) = *(undefined8 *)puVar4;
        uVar10 = FUN_032cf308(&iStack_64,0);
        if ((*(uint *)(lVar18 + 0x18) < 8) ||
           (*(undefined8 *)(lVar18 + 0x58) = uVar10, *(uint *)(lVar18 + 0x18) == 8))
        goto LAB_02014664;
        *(undefined8 *)(lVar18 + 0x60) =
             *(undefined8 *)System_Runtime_InteropServices_ICustomMarshaler_var;
        goto LAB_020141d4;
      }
      uVar10 = *(undefined8 *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_TypeInfo;
    }
    else {
      local_70 = CONCAT44(local_70._4_4_,(int)((float)(int)uVar21 / 60.0));
      uVar16 = FUN_032e3f8c(&local_70,*(undefined8 *)PTR_DAT_04236148,0);
      local_70 = CONCAT44(uVar21 % 0x3c,(undefined4)local_70);
      uVar17 = FUN_032cf39c((long)&local_70 + 4,*(undefined8 *)PTR_DAT_042399f0,0);
      if (iVar1 == 0x400) {
        lVar18 = FUN_01c5d2fc(*(undefined8 *)puVar4,0xd);
        if (lVar18 == 0) goto LAB_020137d8;
        uVar21 = *(uint *)(lVar18 + 0x18);
        if (((uVar21 == 0) ||
            (*(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)PTR_DAT_04239888, uVar21 == 1)) ||
           (*(undefined8 *)(lVar18 + 0x28) = uVar14,
           puVar4 = System_ComponentModel_Design_IDictionaryService_var, uVar21 < 3))
        goto LAB_02014664;
        *(undefined8 *)(lVar18 + 0x30) =
             *(undefined8 *)System_ComponentModel_Design_IDictionaryService_var;
        uVar14 = FUN_032cf308(&local_68,0);
        uVar21 = *(uint *)(lVar18 + 0x18);
        if (((((uVar21 < 4) || (*(undefined8 *)(lVar18 + 0x38) = uVar14, uVar21 == 4)) ||
             ((*(undefined8 *)(lVar18 + 0x40) =
                    *(undefined8 *)
                     System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_IInput>,_EventBase>_TypeInfo
              , uVar21 < 6 ||
              ((*(undefined8 *)(lVar18 + 0x48) = uVar16, uVar21 == 6 ||
               (*(undefined8 *)(lVar18 + 0x50) = *(undefined8 *)PTR_DAT_04236818, uVar21 < 8))))))
            || (*(undefined8 *)(lVar18 + 0x58) = uVar17, uVar21 == 8)) ||
           ((*(undefined8 *)(lVar18 + 0x60) = *(undefined8 *)System_Func<object[],_object>_TypeInfo,
            uVar21 < 10 || (*(undefined8 *)(lVar18 + 0x68) = uVar10, uVar21 == 10))))
        goto LAB_02014664;
        *(undefined8 *)(lVar18 + 0x70) = *(undefined8 *)puVar4;
        uVar10 = FUN_032cf308(&iStack_64,0);
        if ((*(uint *)(lVar18 + 0x18) < 0xc) ||
           (*(undefined8 *)(lVar18 + 0x78) = uVar10, *(uint *)(lVar18 + 0x18) == 0xc))
        goto LAB_02014664;
        *(undefined8 *)(lVar18 + 0x80) =
             *(undefined8 *)System_Runtime_InteropServices_ICustomMarshaler_var;
LAB_020141d4:
        uVar10 = FUN_031533cc(lVar18,0);
      }
      else {
        uVar10 = FUN_03152fb8(uVar16,*(undefined8 *)PTR_DAT_04236818,uVar17,0);
      }
    }
    plVar9 = *(long **)(param_1 + 0xb0);
    if (plVar9 != (long *)0x0) {
      lVar18 = *plVar9;
      goto LAB_02013f14;
    }
    goto LAB_020137d8;
  }
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (lVar18 = FUN_0230c12c(*(long *)(param_1 + 0xb8),
                            *(undefined8 *)System_Func<SHA1Wrapper>_TypeInfo), lVar18 != 0)) {
    FUN_0210d918(lVar18,*(undefined8 *)
                         System_Func<StructMultiKey<Type,_Type>,_Func<object,_object>>_TypeInfo,0);
    if (100 < iVar25) {
      local_68 = 100;
    }
    if (100 < iVar24) {
      iStack_64 = 100;
    }
    plVar9 = *(long **)(param_1 + 0xb0);
    lVar18 = FUN_01c5d2fc(*(undefined8 *)puVar4,9);
    if (lVar18 != 0) {
      uVar21 = *(uint *)(lVar18 + 0x18);
      if (((uVar21 != 0) &&
          (*(undefined8 *)(lVar18 + 0x20) = *(undefined8 *)PTR_DAT_04239888, uVar21 != 1)) &&
         (*(undefined8 *)(lVar18 + 0x28) = uVar14,
         puVar4 = System_ComponentModel_Design_IDictionaryService_var, 2 < uVar21)) {
        *(undefined8 *)(lVar18 + 0x30) =
             *(undefined8 *)System_ComponentModel_Design_IDictionaryService_var;
        uVar14 = FUN_032cf308(&local_68,0);
        uVar21 = *(uint *)(lVar18 + 0x18);
        if (((3 < uVar21) && (*(undefined8 *)(lVar18 + 0x38) = uVar14, uVar21 != 4)) &&
           ((*(undefined8 *)(lVar18 + 0x40) =
                  *(undefined8 *)System_Func<SimpleTuple<float,_Vector2>,_Vector2>_TypeInfo,
            5 < uVar21 && (*(undefined8 *)(lVar18 + 0x48) = uVar10, uVar21 != 6)))) {
          *(undefined8 *)(lVar18 + 0x50) = *(undefined8 *)puVar4;
          uVar10 = FUN_032cf308(&iStack_64,0);
          if ((7 < *(uint *)(lVar18 + 0x18)) &&
             (*(undefined8 *)(lVar18 + 0x58) = uVar10, *(uint *)(lVar18 + 0x18) != 8)) {
            *(undefined8 *)(lVar18 + 0x60) =
                 *(undefined8 *)System_Runtime_InteropServices_ICustomMarshaler_var;
            uVar10 = FUN_031533cc(lVar18,0);
            if (plVar9 != (long *)0x0) {
              lVar18 = *plVar9;
LAB_02013f14:
              (**(code **)(lVar18 + 0x558))(plVar9,uVar10,*(undefined8 *)(lVar18 + 0x560));
              return;
            }
            goto LAB_020137d8;
          }
        }
      }
LAB_02014664:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
  }
LAB_020137d8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


