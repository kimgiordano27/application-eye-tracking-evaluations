/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAudioInId
ENTRY_POINT: 0569a334
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 209
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_8
*/


byte OVRPlugin_OVRP_1_1_0__ovrp_GetAudioInId(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined4 local_84;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  uint local_64;
  
  if ((DAT_06dbc86f & 1) == 0) {
    FUN_02d965b8(
                UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                );
    FUN_02d965b8(System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>_TypeInfo);
    FUN_02d965b8(
                System_Collections_ObjectModel_ReadOnlyCollection<CustomAttributeTypedArgument>_TypeInfo
                );
    FUN_02d965b8(System_Collections_ObjectModel_ReadOnlyCollection<Exception>_TypeInfo);
    FUN_02d965b8(System_Collections_ObjectModel_ReadOnlyCollection<ExceptionDispatchInfo>_TypeInfo);
    FUN_02d965b8(System_Collections_ObjectModel_ReadOnlyCollection<Expression>_TypeInfo);
    FUN_02d965b8(System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fcea0);
    FUN_02d965b8(System_Collections_ObjectModel_ReadOnlyCollection<VolumeProfile>_TypeInfo);
    FUN_02d965b8(System_Collections_ObjectModel_ReadOnlyCollection<ZipArchiveEntry>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fda98);
    FUN_02d965b8(
                System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069fd228);
    FUN_02d965b8(System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<long>>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo
                );
    FUN_02d965b8(System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IEventMetric>_TypeInfo)
    ;
    FUN_02d965b8(
                System_Collections_ObjectModel_ReadOnlyDictionary<string,_ReadOnlyCollection<VivoxParticipant>>_TypeInfo
                );
    FUN_02d965b8(Unity_XR_CoreUtils_Collections_ReadOnlyList<string>_TypeInfo);
    FUN_02d965b8(
                Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>_TypeInfo
                );
    FUN_02d965b8(
                Unity_Services_Vivox_ReadWriteDictionary<AccountId,_IPresenceSubscription,_PresenceSubscription>_TypeInfo
                );
    FUN_02d965b8(
                Unity_Services_Vivox_ReadWriteDictionary<ChannelId,_IChannelSession,_ChannelSession>_TypeInfo
                );
    FUN_02d965b8(
                Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
                );
    FUN_02d965b8(
                Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
                );
    FUN_02d965b8(Unity_Services_Vivox_ReadWriteHashSet<AccountId>_TypeInfo);
    FUN_02d965b8(Unity_Services_Vivox_ReadWriteQueue<AccountId>_TypeInfo);
    FUN_02d965b8(Unity_Services_Vivox_ReadWriteQueue<IAccountArchiveMessage>_TypeInfo);
    FUN_02d965b8(Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_IEnumerable<Column>_TypeInfo);
    DAT_06dbc86f = 1;
  }
  local_64 = 0;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_84 = 0;
  local_90 = 0;
  uVar5 = FUN_0569adbc(param_2,param_3,&local_64);
  bVar4 = 0;
  if ((uVar5 & 1) != 0) {
    FUN_04288608(&local_78,local_64,2,0,
                 *(undefined8 *)
                  System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IEventMetric>_TypeInfo
                );
    lVar12 = *(long *)
              Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
    ;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      FUN_02dcfd74(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 8);
    if (*(long *)(lVar10 + 0x38) == 0) {
      FUN_02dcfd74(lVar10);
    }
    if ((((int)local_70 < 1) || (local_78 == 0)) ||
       (lVar10 = FUN_036eca44(local_78,local_70,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x28)),
       lVar10 == 0)) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_036ec97c(local_78,local_70,
                                   *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x18));
    }
    if (local_64 == 0) {
      iVar13 = 0;
      iVar14 = 0;
      iVar15 = 0;
      iVar17 = 0;
      iVar18 = 0;
    }
    else {
      uVar5 = 0;
      iVar18 = 0;
      iVar17 = 0;
      iVar15 = 0;
      iVar14 = 0;
      iVar13 = 0;
      do {
        uVar7 = FUN_0569b050(param_2,param_3,uVar5 & 0xffffffff,piVar6);
        if ((uVar7 & 1) == 0) {
OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryTemperature:
          bVar4 = 0;
          goto LAB_0569ad94;
        }
        if (piVar6 + 3 == (int *)0xc) goto LAB_0569adb8;
        iVar1 = *piVar6;
        if (iVar1 < 3) {
          if (iVar1 == 0) {
            iVar13 = iVar13 + 1;
          }
          else if (iVar1 == 1) {
            iVar18 = iVar18 + 1;
          }
          else if (iVar1 == 2) {
            iVar17 = iVar17 + 1;
          }
        }
        else if (iVar1 == 3) {
          iVar15 = iVar15 + 1;
        }
        else if (iVar1 == 4) {
          iVar14 = iVar14 + 1;
        }
        else if (iVar1 == 0x7fffffff) goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryTemperature;
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 3;
      } while (uVar5 < local_64);
    }
    lVar10 = *(long *)Unity_Services_Vivox_ReadWriteQueue<AccountId>_TypeInfo;
    if (*(long *)(lVar10 + 0x38) == 0) {
      FUN_02dcfd74(lVar10);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_0421bc74(param_1 + 0x38,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x18));
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    lVar10 = *(long *)Unity_Services_Vivox_ReadWriteHashSet<AccountId>_TypeInfo;
    if (*(long *)(lVar10 + 0x38) == 0) {
      FUN_02dcfd74(lVar10);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_0421ccdc(param_1 + 0x18,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    lVar10 = *(long *)Unity_Services_Vivox_ReadWriteQueue<IAccountArchiveMessage>_TypeInfo;
    if (*(long *)(lVar10 + 0x38) == 0) {
      FUN_02dcfd74(lVar10);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_0421dda4(param_1 + 0x28,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x18));
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    lVar10 = *(long *)Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo;
    if (*(long *)(lVar10 + 0x38) == 0) {
      FUN_02dcfd74(lVar10);
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_0421ac20(param_1 + 0x48,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x18));
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    uVar2 = local_64;
    lVar10 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fd228);
    FUN_0400f9fc(lVar10,uVar2,
                 *(undefined8 *)
                  System_Collections_ObjectModel_ReadOnlyCollection<VolumeProfile>_TypeInfo);
    plVar19 = (long *)(param_1 + 0x10);
    *plVar19 = lVar10;
    LeanTween__value(plVar19,lVar10);
    local_a0 = 0;
    uStack_98 = 0;
    FUN_0421b98c(&local_a0,iVar18,4,0,
                 *(undefined8 *)
                  System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<long>>_TypeInfo
                );
    puVar3 = System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo
    ;
    *(undefined8 *)(param_1 + 0x40) = uStack_98;
    *(undefined8 *)(param_1 + 0x38) = local_a0;
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_0421a938(&local_b0,iVar17,4,0,*(undefined8 *)puVar3);
    puVar3 = 
    System_Collections_ObjectModel_ReadOnlyDictionary<string,_ReadOnlyCollection<VivoxParticipant>>_TypeInfo
    ;
    *(undefined8 *)(param_1 + 0x50) = uStack_a8;
    *(undefined8 *)(param_1 + 0x48) = local_b0;
    local_c0 = 0;
    uStack_b8 = 0;
    FUN_0421c9e0(&local_c0,iVar15,4,0,*(undefined8 *)puVar3);
    puVar3 = Unity_XR_CoreUtils_Collections_ReadOnlyList<string>_TypeInfo;
    *(undefined8 *)(param_1 + 0x20) = uStack_b8;
    *(undefined8 *)(param_1 + 0x18) = local_c0;
    local_d0 = 0;
    uStack_c8 = 0;
    FUN_0421da74(&local_d0,iVar14,4,0,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x30) = uStack_c8;
    *(undefined8 *)(param_1 + 0x28) = local_d0;
    if (iVar13 != 0) {
      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo
                                );
      FUN_03ead43c(uVar8,iVar13,
                   *(undefined8 *)
                    System_Collections_ObjectModel_ReadOnlyCollection<ZipArchiveEntry>_TypeInfo);
      *(undefined8 *)(param_1 + 0x58) = uVar8;
      LeanTween__value((undefined8 *)(param_1 + 0x58),uVar8);
    }
    lVar12 = *(long *)
              Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
    ;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      FUN_02dcfd74(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 8);
    if (*(long *)(lVar10 + 0x38) == 0) {
      FUN_02dcfd74(lVar10);
    }
    if ((((int)local_70 < 1) || (local_78 == 0)) ||
       (lVar10 = FUN_036eca44(local_78,local_70,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x28)),
       lVar10 == 0)) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_036ec97c(local_78,local_70,
                                   *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x18));
    }
    lVar12 = *(long *)
              Unity_Services_Vivox_ReadWriteDictionary<AccountId,_IPresenceSubscription,_PresenceSubscription>_TypeInfo
    ;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      FUN_02dcfd74(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 8);
    if (*(long *)(lVar10 + 0x38) == 0) {
      FUN_02dcfd74(lVar10);
    }
    if (((*(int *)(param_1 + 0x40) < 1) || (*(long *)(param_1 + 0x38) == 0)) ||
       (lVar10 = FUN_036ec9d4(*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                              *(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x28)), lVar10 == 0)) {
      lVar10 = 0;
    }
    else {
      lVar10 = FUN_036ec8e0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                            *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x18));
    }
    lVar16 = *(long *)
              Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo;
    lVar12 = *(long *)(lVar16 + 0x38);
    if (lVar12 == 0) {
      FUN_02dcfd74(lVar16);
      lVar12 = *(long *)(lVar16 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 8);
    if (*(long *)(lVar12 + 0x38) == 0) {
      FUN_02dcfd74(lVar12);
    }
    if (((*(int *)(param_1 + 0x50) < 1) || (*(long *)(param_1 + 0x48) == 0)) ||
       (lVar12 = FUN_036ec9d0(*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                              *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x28)), lVar12 == 0)) {
      local_d8 = 0;
    }
    else {
      local_d8 = FUN_036ec8dc(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                              *(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x18));
    }
    lVar16 = *(long *)
              Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>_TypeInfo
    ;
    lVar12 = *(long *)(lVar16 + 0x38);
    if (lVar12 == 0) {
      FUN_02dcfd74(lVar16);
      lVar12 = *(long *)(lVar16 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 8);
    if (*(long *)(lVar12 + 0x38) == 0) {
      FUN_02dcfd74(lVar12);
    }
    if (((*(int *)(param_1 + 0x20) < 1) || (*(long *)(param_1 + 0x18) == 0)) ||
       (lVar12 = FUN_036ec9d8(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                              *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x28)), lVar12 == 0)) {
      local_e0 = 0;
    }
    else {
      local_e0 = FUN_036ec8e4(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                              *(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x18));
    }
    lVar16 = *(long *)
              Unity_Services_Vivox_ReadWriteDictionary<ChannelId,_IChannelSession,_ChannelSession>_TypeInfo
    ;
    lVar12 = *(long *)(lVar16 + 0x38);
    if (lVar12 == 0) {
      FUN_02dcfd74(lVar16);
      lVar12 = *(long *)(lVar16 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 8);
    if (*(long *)(lVar12 + 0x38) == 0) {
      FUN_02dcfd74(lVar12);
    }
    if (((*(int *)(param_1 + 0x30) < 1) || (*(long *)(param_1 + 0x28) == 0)) ||
       (lVar12 = FUN_036ec9dc(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                              *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x28)), lVar12 == 0)) {
      local_e8 = 0;
    }
    else {
      local_e8 = FUN_036ec8e8(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                              *(undefined8 *)(*(long *)(lVar16 + 0x38) + 0x18));
    }
    if (local_64 == 0) {
      bVar4 = 1;
    }
    else {
      uVar5 = 0;
      iVar14 = 0;
      iVar13 = 0;
      iVar18 = 0;
      iVar17 = 0;
      bVar4 = 1;
      do {
        if (piVar6 == (int *)0x0) {
LAB_0569adb8:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar15 = *piVar6;
        if (iVar15 < 2) {
          if (iVar15 == 0) {
            local_84 = 0;
            uVar7 = FUN_038d8f3c(param_2,param_3,uVar5 & 0xffffffff,piVar6,&local_80,&local_84,
                                 *(undefined8 *)
                                  UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                                );
            if (((uVar7 & 1) == 0) ||
               (uVar7 = FUN_0377528c(local_84,&local_90,
                                     *(undefined8 *)
                                      System_Collections_Generic_IEnumerable<Column>_TypeInfo),
               (uVar7 & 1) == 0)) {
              bVar4 = 0;
            }
            else {
              if ((*(long *)(param_1 + 0x10) == 0) || (local_90 == 0)) goto LAB_0569adb8;
              lVar12 = *(long *)(param_1 + 0x58);
              local_a0 = 0;
              uStack_98 = 0;
              FUN_03b3b344(&local_a0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18),
                           *(undefined8 *)(local_90 + 0x30),
                           *(undefined8 *)
                            System_Collections_ObjectModel_ReadOnlyCollection<Expression>_TypeInfo);
              if (lVar12 == 0) goto LAB_0569adb8;
              lVar16 = *(long *)(lVar12 + 0x10);
              lVar11 = *(long *)
                        System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_TypeInfo;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_0569adb8;
              uVar2 = *(uint *)(lVar12 + 0x18);
              if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                lVar16 = lVar16 + (long)(int)uVar2 * 0x10;
                *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                puVar9 = (undefined8 *)(lVar16 + 0x28);
                *puVar9 = uStack_98;
                *(undefined8 *)(lVar16 + 0x20) = local_a0;
                LeanTween__value(puVar9,0);
              }
              else {
                FUN_03eadc7c(lVar12,local_a0,uStack_98,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              lVar12 = *plVar19;
              if (lVar12 == 0) goto LAB_0569adb8;
              lVar16 = *(long *)(lVar12 + 0x10);
              lVar11 = *(long *)PTR_DAT_069fcea0;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_0569adb8;
              uVar2 = *(uint *)(lVar12 + 0x18);
              if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                puVar9 = (undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
                *puVar9 = local_80;
                LeanTween__value(puVar9);
              }
              else {
                FUN_040101ec(lVar12,local_80,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              bVar4 = 1;
            }
          }
          else if (iVar15 == 1) {
            lVar12 = (long)iVar14;
            iVar14 = iVar14 + 1;
            bVar4 = FUN_038d9cfc(param_1,param_2,param_3,uVar5 & 0xffffffff,piVar6,
                                 lVar10 + lVar12 * 8,
                                 *(undefined8 *)
                                  System_Collections_ObjectModel_ReadOnlyCollection<CustomAttributeTypedArgument>_TypeInfo
                                );
          }
          else {
LAB_0569accc:
            bVar4 = iVar15 != 0x7fffffff & bVar4;
          }
        }
        else if (iVar15 == 2) {
          lVar12 = (long)iVar13;
          iVar13 = iVar13 + 1;
          bVar4 = FUN_038d9bb4(param_1,param_2,param_3,uVar5 & 0xffffffff,piVar6,
                               local_d8 + lVar12 * 8,
                               *(undefined8 *)
                                System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>_TypeInfo
                              );
        }
        else if (iVar15 == 3) {
          lVar12 = (long)iVar18;
          iVar18 = iVar18 + 1;
          bVar4 = FUN_038d9e44(param_1,param_2,param_3,uVar5 & 0xffffffff,piVar6,
                               local_e0 + lVar12 * 0x10,
                               *(undefined8 *)
                                System_Collections_ObjectModel_ReadOnlyCollection<Exception>_TypeInfo
                              );
        }
        else {
          if (iVar15 != 4) goto LAB_0569accc;
          lVar12 = (long)iVar17;
          iVar17 = iVar17 + 1;
          bVar4 = FUN_038d9f94(param_1,param_2,param_3,uVar5 & 0xffffffff,piVar6,
                               local_e8 + lVar12 * 0x14,
                               *(undefined8 *)
                                System_Collections_ObjectModel_ReadOnlyCollection<ExceptionDispatchInfo>_TypeInfo
                              );
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 3;
      } while (uVar5 < local_64);
    }
  }
LAB_0569ad94:
  return bVar4 & 1;
}


