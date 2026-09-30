/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingPositionSupported
ENTRY_POINT: 0569a5b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 189
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_4
*/


byte OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported
               (ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  long lVar11;
  int unaff_w23;
  long lVar12;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  long *plVar13;
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
  
  while (uVar5 = FUN_0569b050(param_1,param_2,param_3,unaff_x28), (uVar5 & 1) != 0) {
    if (unaff_x28 + 3 == (int *)0xc) goto LAB_0569adb8;
    iVar1 = *unaff_x28;
    if (iVar1 < 3) {
      if (iVar1 == 0) {
        unaff_w23 = unaff_w23 + 1;
      }
      else if (iVar1 == 1) {
        unaff_w27 = unaff_w27 + 1;
      }
      else if (iVar1 == 2) {
        unaff_w26 = unaff_w26 + 1;
      }
    }
    else if (iVar1 == 3) {
      unaff_w25 = unaff_w25 + 1;
    }
    else if (iVar1 == 4) {
      unaff_w24 = unaff_w24 + 1;
    }
    else if (iVar1 == unaff_w29) break;
    unaff_x22 = unaff_x22 + 1;
    if (in_stack_00000088._4_4_ <= unaff_x22) {
      lVar11 = *(long *)Unity_Services_Vivox_ReadWriteQueue<AccountId>_TypeInfo;
      if (*(long *)(lVar11 + 0x38) == 0) {
        FUN_02dcfd74(lVar11);
      }
      if (*(long *)(unaff_x21 + 0x38) != 0) {
        FUN_0421bc74(unaff_x21 + 0x38,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x18));
        *(undefined8 *)(unaff_x21 + 0x38) = 0;
        *(undefined8 *)(unaff_x21 + 0x40) = 0;
      }
      lVar11 = *(long *)Unity_Services_Vivox_ReadWriteHashSet<AccountId>_TypeInfo;
      if (*(long *)(lVar11 + 0x38) == 0) {
        FUN_02dcfd74(lVar11);
      }
      if (*(long *)(unaff_x21 + 0x18) != 0) {
        FUN_0421ccdc(unaff_x21 + 0x18,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x18));
        *(undefined8 *)(unaff_x21 + 0x18) = 0;
        *(undefined8 *)(unaff_x21 + 0x20) = 0;
      }
      lVar11 = *(long *)Unity_Services_Vivox_ReadWriteQueue<IAccountArchiveMessage>_TypeInfo;
      if (*(long *)(lVar11 + 0x38) == 0) {
        FUN_02dcfd74(lVar11);
      }
      if (*(long *)(unaff_x21 + 0x28) != 0) {
        FUN_0421dda4(unaff_x21 + 0x28,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x18));
        *(undefined8 *)(unaff_x21 + 0x28) = 0;
        *(undefined8 *)(unaff_x21 + 0x30) = 0;
      }
      lVar11 = *(long *)Unity_Services_Vivox_ReadWriteQueue<IChannelTextMessage>_TypeInfo;
      if (*(long *)(lVar11 + 0x38) == 0) {
        FUN_02dcfd74(lVar11);
      }
      if (*(long *)(unaff_x21 + 0x48) != 0) {
        FUN_0421ac20(unaff_x21 + 0x48,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x18));
        *(undefined8 *)(unaff_x21 + 0x48) = 0;
        *(undefined8 *)(unaff_x21 + 0x50) = 0;
      }
      uVar2 = in_stack_00000088._4_4_;
      lVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fd228);
      FUN_0400f9fc(lVar11,uVar2,
                   *(undefined8 *)
                    System_Collections_ObjectModel_ReadOnlyCollection<VolumeProfile>_TypeInfo);
      plVar13 = (long *)(unaff_x21 + 0x10);
      *plVar13 = lVar11;
      LeanTween__value(plVar13,lVar11);
      in_stack_00000050 = 0;
      in_stack_00000058 = 0;
      FUN_0421b98c(&stack0x00000050,unaff_w27,4,0,
                   *(undefined8 *)
                    System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<long>>_TypeInfo
                  );
      puVar3 = 
      System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo;
      *(undefined8 *)(unaff_x21 + 0x40) = in_stack_00000058;
      *(undefined8 *)(unaff_x21 + 0x38) = in_stack_00000050;
      in_stack_00000040 = 0;
      in_stack_00000048 = 0;
      FUN_0421a938(&stack0x00000040,unaff_w26,4,0,*(undefined8 *)puVar3);
      puVar3 = 
      System_Collections_ObjectModel_ReadOnlyDictionary<string,_ReadOnlyCollection<VivoxParticipant>>_TypeInfo
      ;
      *(undefined8 *)(unaff_x21 + 0x50) = in_stack_00000048;
      *(undefined8 *)(unaff_x21 + 0x48) = in_stack_00000040;
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      FUN_0421c9e0(&stack0x00000030,unaff_w25,4,0,*(undefined8 *)puVar3);
      puVar3 = Unity_XR_CoreUtils_Collections_ReadOnlyList<string>_TypeInfo;
      *(undefined8 *)(unaff_x21 + 0x20) = in_stack_00000038;
      *(undefined8 *)(unaff_x21 + 0x18) = in_stack_00000030;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_0421da74(&stack0x00000020,unaff_w24,4,0,*(undefined8 *)puVar3);
      *(undefined8 *)(unaff_x21 + 0x30) = in_stack_00000028;
      *(undefined8 *)(unaff_x21 + 0x28) = in_stack_00000020;
      if (unaff_w23 != 0) {
        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                    System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo
                                  );
        FUN_03ead43c(uVar6,unaff_w23,
                     *(undefined8 *)
                      System_Collections_ObjectModel_ReadOnlyCollection<ZipArchiveEntry>_TypeInfo);
        *(undefined8 *)(unaff_x21 + 0x58) = uVar6;
        LeanTween__value((undefined8 *)(unaff_x21 + 0x58),uVar6);
      }
      lVar12 = *(long *)
                Unity_Services_Vivox_ReadWriteDictionary<string,_IParticipant,_ChannelParticipant>_TypeInfo
      ;
      lVar11 = *(long *)(lVar12 + 0x38);
      if (lVar11 == 0) {
        FUN_02dcfd74(lVar12);
        lVar11 = *(long *)(lVar12 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 8);
      if (*(long *)(lVar11 + 0x38) == 0) {
        FUN_02dcfd74(lVar11);
      }
      if (((iStack0000000000000080 < 1) || (in_stack_00000078 == 0)) ||
         (lVar11 = FUN_036eca44(in_stack_00000078,
                                CONCAT44(uStack0000000000000084,iStack0000000000000080),
                                *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x28)), lVar11 == 0)) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)FUN_036ec97c(in_stack_00000078,
                                     CONCAT44(uStack0000000000000084,iStack0000000000000080),
                                     *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x18));
      }
      lVar12 = *(long *)
                Unity_Services_Vivox_ReadWriteDictionary<AccountId,_IPresenceSubscription,_PresenceSubscription>_TypeInfo
      ;
      lVar11 = *(long *)(lVar12 + 0x38);
      if (lVar11 == 0) {
        FUN_02dcfd74(lVar12);
        lVar11 = *(long *)(lVar12 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 8);
      if (*(long *)(lVar11 + 0x38) == 0) {
        FUN_02dcfd74(lVar11);
      }
      if (((0 < *(int *)(unaff_x21 + 0x40)) && (*(long *)(unaff_x21 + 0x38) != 0)) &&
         (lVar11 = FUN_036ec9d4(*(long *)(unaff_x21 + 0x38),*(undefined8 *)(unaff_x21 + 0x40),
                                *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x28)), lVar11 != 0)) {
        FUN_036ec8e0(*(undefined8 *)(unaff_x21 + 0x38),*(undefined8 *)(unaff_x21 + 0x40),
                     *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x18));
      }
      lVar12 = *(long *)
                Unity_Services_Vivox_ReadWriteDictionary<string,_IAudioDevice,_AudioDevice>_TypeInfo
      ;
      lVar11 = *(long *)(lVar12 + 0x38);
      if (lVar11 == 0) {
        FUN_02dcfd74(lVar12);
        lVar11 = *(long *)(lVar12 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 8);
      if (*(long *)(lVar11 + 0x38) == 0) {
        FUN_02dcfd74(lVar11);
      }
      if (((0 < *(int *)(unaff_x21 + 0x50)) && (*(long *)(unaff_x21 + 0x48) != 0)) &&
         (lVar11 = FUN_036ec9d0(*(long *)(unaff_x21 + 0x48),*(undefined8 *)(unaff_x21 + 0x50),
                                *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x28)), lVar11 != 0)) {
        FUN_036ec8dc(*(undefined8 *)(unaff_x21 + 0x48),*(undefined8 *)(unaff_x21 + 0x50),
                     *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x18));
      }
      lVar12 = *(long *)
                Unity_Services_Vivox_ReadWriteDictionary<AccountId,_ILoginSession,_LoginSession>_TypeInfo
      ;
      lVar11 = *(long *)(lVar12 + 0x38);
      if (lVar11 == 0) {
        FUN_02dcfd74(lVar12);
        lVar11 = *(long *)(lVar12 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 8);
      if (*(long *)(lVar11 + 0x38) == 0) {
        FUN_02dcfd74(lVar11);
      }
      if (((0 < *(int *)(unaff_x21 + 0x20)) && (*(long *)(unaff_x21 + 0x18) != 0)) &&
         (lVar11 = FUN_036ec9d8(*(long *)(unaff_x21 + 0x18),*(undefined8 *)(unaff_x21 + 0x20),
                                *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x28)), lVar11 != 0)) {
        FUN_036ec8e4(*(undefined8 *)(unaff_x21 + 0x18),*(undefined8 *)(unaff_x21 + 0x20),
                     *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x18));
      }
      lVar12 = *(long *)
                Unity_Services_Vivox_ReadWriteDictionary<ChannelId,_IChannelSession,_ChannelSession>_TypeInfo
      ;
      lVar11 = *(long *)(lVar12 + 0x38);
      if (lVar11 == 0) {
        FUN_02dcfd74(lVar12);
        lVar11 = *(long *)(lVar12 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 8);
      if (*(long *)(lVar11 + 0x38) == 0) {
        FUN_02dcfd74(lVar11);
      }
      if (((0 < *(int *)(unaff_x21 + 0x30)) && (*(long *)(unaff_x21 + 0x28) != 0)) &&
         (lVar11 = FUN_036ec9dc(*(long *)(unaff_x21 + 0x28),*(undefined8 *)(unaff_x21 + 0x30),
                                *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x28)), lVar11 != 0)) {
        FUN_036ec8e8(*(undefined8 *)(unaff_x21 + 0x28),*(undefined8 *)(unaff_x21 + 0x30),
                     *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x18));
      }
      if (in_stack_00000088._4_4_ == 0) {
        bVar4 = 1;
        goto LAB_0569ad94;
      }
      uVar5 = 0;
      bVar4 = 1;
      goto LAB_0569aae8;
    }
    param_1 = (ulong)unaff_w20;
    param_2 = (ulong)unaff_w19;
    param_3 = unaff_x22 & 0xffffffff;
    unaff_x28 = unaff_x28 + 3;
  }
  bVar4 = 0;
  goto LAB_0569ad94;
LAB_0569aae8:
  do {
    if (piVar7 == (int *)0x0) {
LAB_0569adb8:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar1 = *piVar7;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        in_stack_00000068._4_4_ = 0;
        uVar8 = FUN_038d8f3c(unaff_w20,unaff_w19,uVar5 & 0xffffffff,piVar7,&stack0x00000070,
                             (long)&stack0x00000068 + 4,
                             *(undefined8 *)
                              UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControlLayout_ControlItem>_TypeInfo
                            );
        if (((uVar8 & 1) == 0) ||
           (uVar8 = FUN_0377528c(in_stack_00000068._4_4_,&stack0x00000060,
                                 *(undefined8 *)
                                  System_Collections_Generic_IEnumerable<Column>_TypeInfo),
           (uVar8 & 1) == 0)) {
          bVar4 = 0;
        }
        else {
          if ((*(long *)(unaff_x21 + 0x10) == 0) || (in_stack_00000060 == 0)) goto LAB_0569adb8;
          lVar11 = *(long *)(unaff_x21 + 0x58);
          in_stack_00000050 = 0;
          in_stack_00000058 = 0;
          FUN_03b3b344(&stack0x00000050,*(undefined4 *)(*(long *)(unaff_x21 + 0x10) + 0x18),
                       *(undefined8 *)(in_stack_00000060 + 0x30),
                       *(undefined8 *)
                        System_Collections_ObjectModel_ReadOnlyCollection<Expression>_TypeInfo);
          if (lVar11 == 0) goto LAB_0569adb8;
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar10 = *(long *)
                    System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_TypeInfo;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_0569adb8;
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar2 * 0x10;
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            puVar9 = (undefined8 *)(lVar12 + 0x28);
            *puVar9 = in_stack_00000058;
            *(undefined8 *)(lVar12 + 0x20) = in_stack_00000050;
            LeanTween__value(puVar9,0);
          }
          else {
            FUN_03eadc7c(lVar11,in_stack_00000050,in_stack_00000058,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = *plVar13;
          if (lVar11 == 0) goto LAB_0569adb8;
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar10 = *(long *)PTR_DAT_069fcea0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_0569adb8;
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
            *puVar9 = in_stack_00000070;
            LeanTween__value(puVar9);
          }
          else {
            FUN_040101ec(lVar11,in_stack_00000070,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          bVar4 = 1;
        }
      }
      else if (iVar1 == 1) {
        bVar4 = FUN_038d9cfc();
      }
      else {
LAB_0569accc:
        bVar4 = iVar1 != 0x7fffffff & bVar4;
      }
    }
    else if (iVar1 == 2) {
      bVar4 = FUN_038d9bb4();
    }
    else if (iVar1 == 3) {
      bVar4 = FUN_038d9e44();
    }
    else {
      if (iVar1 != 4) goto LAB_0569accc;
      bVar4 = FUN_038d9f94();
    }
    uVar5 = uVar5 + 1;
    piVar7 = piVar7 + 3;
  } while (uVar5 < in_stack_00000088._4_4_);
LAB_0569ad94:
  return bVar4 & 1;
}


