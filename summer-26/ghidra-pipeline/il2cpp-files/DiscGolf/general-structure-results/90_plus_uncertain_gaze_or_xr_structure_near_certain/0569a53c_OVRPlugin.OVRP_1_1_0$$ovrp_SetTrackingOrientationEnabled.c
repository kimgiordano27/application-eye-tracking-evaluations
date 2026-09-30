/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingOrientationEnabled
ENTRY_POINT: 0569a53c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 207
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_4
*/


byte OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingOrientationEnabled(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar11;
  int iVar12;
  long unaff_x23;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  int iStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined8 in_stack_00000088;
  
  FUN_02dcfd74();
  if (((iStack0000000000000080 < 1) || (in_stack_00000078 == 0)) ||
     (lVar5 = FUN_036eca44(in_stack_00000078,CONCAT44(uStack0000000000000084,iStack0000000000000080)
                           ,*(undefined8 *)(*(long *)(unaff_x23 + 0x38) + 0x28)), lVar5 == 0)) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_036ec97c(in_stack_00000078,
                                 CONCAT44(uStack0000000000000084,iStack0000000000000080),
                                 *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x18));
  }
  if (in_stack_00000088._4_4_ == 0) {
    iVar12 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
  }
  else {
    uVar11 = 0;
    iVar17 = 0;
    iVar16 = 0;
    iVar15 = 0;
    iVar14 = 0;
    iVar12 = 0;
    do {
      uVar7 = FUN_0569b050(unaff_w20,unaff_w19,uVar11 & 0xffffffff,piVar6);
      if ((uVar7 & 1) == 0) {
OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryTemperature:
        bVar4 = 0;
        goto LAB_0569ad94;
      }
      if (piVar6 + 3 == (int *)0xc) goto LAB_0569adb8;
      iVar1 = *piVar6;
      if (iVar1 < 3) {
        if (iVar1 == 0) {
          iVar12 = iVar12 + 1;
        }
        else if (iVar1 == 1) {
          iVar17 = iVar17 + 1;
        }
        else if (iVar1 == 2) {
          iVar16 = iVar16 + 1;
        }
      }
      else if (iVar1 == 3) {
        iVar15 = iVar15 + 1;
      }
      else if (iVar1 == 4) {
        iVar14 = iVar14 + 1;
      }
      else if (iVar1 == 0x7fffffff) goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryTemperature;
      uVar11 = uVar11 + 1;
      piVar6 = piVar6 + 3;
    } while (uVar11 < in_stack_00000088._4_4_);
  }
  lVar5 = *(long *)Unity_Services_Vivox_ReadWriteQueue<AccountId>_TypeInfo;
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  if (*(long *)(unaff_x21 + 0x38) != 0) {
    FUN_0421bc74(unaff_x21 + 0x38,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
    *(undefined8 *)(unaff_x21 + 0x38) = 0;
    *(undefined8 *)(unaff_x21 + 0x40) = 0;
  }
  lVar5 = *(long *)Unity_Services_Vivox_ReadWriteHashSet<AccountId>_TypeInfo;
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    FUN_0421ccdc(unaff_x21 + 0x18,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
    *(undefined8 *)(unaff_x21 + 0x18) = 0;
    *(undefined8 *)(unaff_x21 + 0x20) = 0;
  }
  lVar5 = *(long *)Unity_Services_Vivox_ReadWriteQueue<IAccountArchiveMessage>_TypeInfo;
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  if (*(long *)(unaff_x21 + 0x28) != 0) {
    FUN_0421dda4(unaff_x21 + 0x28,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
    *(undefined8 *)(unaff_x21 + 0x28) = 0;
    *(undefined8 *)(unaff_x21 + 0x30) = 0;
  }
  lVar5 = *(long *)Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo;
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  if (*(long *)(unaff_x21 + 0x48) != 0) {
    FUN_0421ac20(unaff_x21 + 0x48,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
    *(undefined8 *)(unaff_x21 + 0x48) = 0;
    *(undefined8 *)(unaff_x21 + 0x50) = 0;
  }
  uVar2 = in_stack_00000088._4_4_;
  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fd228);
  FUN_0400f9fc(lVar5,uVar2,
               *(undefined8 *)
                System_Collections_ObjectModel_ReadOnlyCollection<VolumeProfile>_TypeInfo);
  plVar18 = (long *)(unaff_x21 + 0x10);
  *plVar18 = lVar5;
  LeanTween__value(plVar18,lVar5);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  FUN_0421b98c(&stack0x00000050,iVar17,4,0,
               *(undefined8 *)
                System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<long>>_TypeInfo)
  ;
  puVar3 = System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo;
  *(undefined8 *)(unaff_x21 + 0x40) = in_stack_00000058;
  *(undefined8 *)(unaff_x21 + 0x38) = in_stack_00000050;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  FUN_0421a938(&stack0x00000040,iVar16,4,0,*(undefined8 *)puVar3);
  puVar3 = 
  System_Collections_ObjectModel_ReadOnlyDictionary<string,_ReadOnlyCollection<VivoxParticipant>>_TypeInfo
  ;
  *(undefined8 *)(unaff_x21 + 0x50) = in_stack_00000048;
  *(undefined8 *)(unaff_x21 + 0x48) = in_stack_00000040;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  FUN_0421c9e0(&stack0x00000030,iVar15,4,0,*(undefined8 *)puVar3);
  puVar3 = Unity_XR_CoreUtils_Collections_ReadOnlyList<string>_TypeInfo;
  *(undefined8 *)(unaff_x21 + 0x20) = in_stack_00000038;
  *(undefined8 *)(unaff_x21 + 0x18) = in_stack_00000030;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_0421da74(&stack0x00000020,iVar14,4,0,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x21 + 0x30) = in_stack_00000028;
  *(undefined8 *)(unaff_x21 + 0x28) = in_stack_00000020;
  if (iVar12 != 0) {
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo
                              );
    FUN_03ead43c(uVar8,iVar12,
                 *(undefined8 *)
                  System_Collections_ObjectModel_ReadOnlyCollection<ZipArchiveEntry>_TypeInfo);
    *(undefined8 *)(unaff_x21 + 0x58) = uVar8;
    LeanTween__value((undefined8 *)(unaff_x21 + 0x58),uVar8);
  }
  lVar13 = *(long *)
            Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
  ;
  lVar5 = *(long *)(lVar13 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar13);
    lVar5 = *(long *)(lVar13 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  if (((iStack0000000000000080 < 1) || (in_stack_00000078 == 0)) ||
     (lVar5 = FUN_036eca44(in_stack_00000078,CONCAT44(uStack0000000000000084,iStack0000000000000080)
                           ,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)), lVar5 == 0)) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_036ec97c(in_stack_00000078,
                                 CONCAT44(uStack0000000000000084,iStack0000000000000080),
                                 *(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
  }
  lVar13 = *(long *)
            Unity_Services_Vivox_ReadWriteDictionary<AccountId,_IPresenceSubscription,_PresenceSubscription>_TypeInfo
  ;
  lVar5 = *(long *)(lVar13 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar13);
    lVar5 = *(long *)(lVar13 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  if (((0 < *(int *)(unaff_x21 + 0x40)) && (*(long *)(unaff_x21 + 0x38) != 0)) &&
     (lVar5 = FUN_036ec9d4(*(long *)(unaff_x21 + 0x38),*(undefined8 *)(unaff_x21 + 0x40),
                           *(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)), lVar5 != 0)) {
    FUN_036ec8e0(*(undefined8 *)(unaff_x21 + 0x38),*(undefined8 *)(unaff_x21 + 0x40),
                 *(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
  }
  lVar13 = *(long *)
            Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo;
  lVar5 = *(long *)(lVar13 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar13);
    lVar5 = *(long *)(lVar13 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  if (((0 < *(int *)(unaff_x21 + 0x50)) && (*(long *)(unaff_x21 + 0x48) != 0)) &&
     (lVar5 = FUN_036ec9d0(*(long *)(unaff_x21 + 0x48),*(undefined8 *)(unaff_x21 + 0x50),
                           *(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)), lVar5 != 0)) {
    FUN_036ec8dc(*(undefined8 *)(unaff_x21 + 0x48),*(undefined8 *)(unaff_x21 + 0x50),
                 *(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
  }
  lVar13 = *(long *)
            Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>_TypeInfo
  ;
  lVar5 = *(long *)(lVar13 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar13);
    lVar5 = *(long *)(lVar13 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  if (((0 < *(int *)(unaff_x21 + 0x20)) && (*(long *)(unaff_x21 + 0x18) != 0)) &&
     (lVar5 = FUN_036ec9d8(*(long *)(unaff_x21 + 0x18),*(undefined8 *)(unaff_x21 + 0x20),
                           *(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)), lVar5 != 0)) {
    FUN_036ec8e4(*(undefined8 *)(unaff_x21 + 0x18),*(undefined8 *)(unaff_x21 + 0x20),
                 *(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
  }
  lVar13 = *(long *)
            Unity_Services_Vivox_ReadWriteDictionary<ChannelId,_IChannelSession,_ChannelSession>_TypeInfo
  ;
  lVar5 = *(long *)(lVar13 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar13);
    lVar5 = *(long *)(lVar13 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  if (((0 < *(int *)(unaff_x21 + 0x30)) && (*(long *)(unaff_x21 + 0x28) != 0)) &&
     (lVar5 = FUN_036ec9dc(*(long *)(unaff_x21 + 0x28),*(undefined8 *)(unaff_x21 + 0x30),
                           *(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)), lVar5 != 0)) {
    FUN_036ec8e8(*(undefined8 *)(unaff_x21 + 0x28),*(undefined8 *)(unaff_x21 + 0x30),
                 *(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
  }
  if (in_stack_00000088._4_4_ == 0) {
    bVar4 = 1;
  }
  else {
    uVar11 = 0;
    bVar4 = 1;
    do {
      if (piVar6 == (int *)0x0) {
LAB_0569adb8:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar16 = *piVar6;
      if (iVar16 < 2) {
        if (iVar16 == 0) {
          in_stack_00000068._4_4_ = 0;
          uVar7 = FUN_038d8f3c(unaff_w20,unaff_w19,uVar11 & 0xffffffff,piVar6,&stack0x00000070,
                               (long)&stack0x00000068 + 4,
                               *(undefined8 *)
                                UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                              );
          if (((uVar7 & 1) == 0) ||
             (uVar7 = FUN_0377528c(in_stack_00000068._4_4_,&stack0x00000060,
                                   *(undefined8 *)
                                    System_Collections_Generic_IEnumerable<Column>_TypeInfo),
             (uVar7 & 1) == 0)) {
            bVar4 = 0;
          }
          else {
            if ((*(long *)(unaff_x21 + 0x10) == 0) || (in_stack_00000060 == 0)) goto LAB_0569adb8;
            lVar5 = *(long *)(unaff_x21 + 0x58);
            in_stack_00000050 = 0;
            in_stack_00000058 = 0;
            FUN_03b3b344(&stack0x00000050,*(undefined4 *)(*(long *)(unaff_x21 + 0x10) + 0x18),
                         *(undefined8 *)(in_stack_00000060 + 0x30),
                         *(undefined8 *)
                          System_Collections_ObjectModel_ReadOnlyCollection<Expression>_TypeInfo);
            if (lVar5 == 0) goto LAB_0569adb8;
            lVar13 = *(long *)(lVar5 + 0x10);
            lVar10 = *(long *)
                      System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_TypeInfo;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_0569adb8;
            uVar2 = *(uint *)(lVar5 + 0x18);
            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)uVar2 * 0x10;
              *(uint *)(lVar5 + 0x18) = uVar2 + 1;
              puVar9 = (undefined8 *)(lVar13 + 0x28);
              *puVar9 = in_stack_00000058;
              *(undefined8 *)(lVar13 + 0x20) = in_stack_00000050;
              LeanTween__value(puVar9,0);
            }
            else {
              FUN_03eadc7c(lVar5,in_stack_00000050,in_stack_00000058,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            lVar5 = *plVar18;
            if (lVar5 == 0) goto LAB_0569adb8;
            lVar13 = *(long *)(lVar5 + 0x10);
            lVar10 = *(long *)PTR_DAT_069fcea0;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_0569adb8;
            uVar2 = *(uint *)(lVar5 + 0x18);
            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar2 + 1;
              puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
              *puVar9 = in_stack_00000070;
              LeanTween__value(puVar9);
            }
            else {
              FUN_040101ec(lVar5,in_stack_00000070,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            bVar4 = 1;
          }
        }
        else if (iVar16 == 1) {
          bVar4 = FUN_038d9cfc();
        }
        else {
LAB_0569accc:
          bVar4 = iVar16 != 0x7fffffff & bVar4;
        }
      }
      else if (iVar16 == 2) {
        bVar4 = FUN_038d9bb4();
      }
      else if (iVar16 == 3) {
        bVar4 = FUN_038d9e44();
      }
      else {
        if (iVar16 != 4) goto LAB_0569accc;
        bVar4 = FUN_038d9f94();
      }
      uVar11 = uVar11 + 1;
      piVar6 = piVar6 + 3;
    } while (uVar11 < in_stack_00000088._4_4_);
  }
LAB_0569ad94:
  return bVar4 & 1;
}


