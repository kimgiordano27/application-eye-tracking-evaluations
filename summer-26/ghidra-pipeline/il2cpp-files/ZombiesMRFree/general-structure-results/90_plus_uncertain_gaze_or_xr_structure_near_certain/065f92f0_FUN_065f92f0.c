/*
FUNCTION_NAME: FUN_065f92f0
ENTRY_POINT: 065f92f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_065f92f0(byte *param_1,int param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  undefined8 *puVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar37 [12];
  ulong local_1a0;
  undefined8 uStack_198;
  int local_190;
  int local_18c;
  undefined4 uStack_188;
  int local_184;
  undefined8 local_180;
  ulong local_170;
  undefined4 local_168;
  ulong local_160;
  ulong uStack_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong auStack_118 [14];
  undefined8 local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar9 = System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo;
  puVar8 = System_Action<ulong,_bool>_TypeInfo;
  puVar7 = System_Action<Task,_object>_TypeInfo;
  puVar6 = System_Action<string,_InputControlLayoutChange>_TypeInfo;
  puVar5 = System_Action<KeyboardNavigationOperation,_EventBase>_TypeInfo;
  puVar4 = System_Action<int,_string>_TypeInfo;
  if ((DAT_073a08f6 & 1) == 0) {
    FUN_02fe925c(System_Action<Vector3,_Vector3>_TypeInfo);
    FUN_02fe925c(System_Action<VisualElement,_MatchResultInfo>_TypeInfo);
    FUN_02fe925c(System_Action<VisualElement,_StyleValues>_TypeInfo);
    FUN_02fe925c(System_Action<PointerEvent>_TypeInfo);
    FUN_02fe925c(System_Action<XRLayout,_Camera>_TypeInfo);
    FUN_02fe925c(System_Action<DebugManager_UIMode,_bool>_TypeInfo);
    FUN_02fe925c(System_Action<ScriptableRenderContext,_Camera>_TypeInfo);
    FUN_02fe925c(System_Action<PointerEventData>_TypeInfo);
    FUN_02fe925c(System_Action<Task,_object>_TypeInfo);
    FUN_02fe925c(System_Action<int,_string>_TypeInfo);
    FUN_02fe925c(System_Action<ulong,_OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_02fe925c(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    FUN_02fe925c(System_Action<object,_InputActionChange>_TypeInfo);
    FUN_02fe925c(
                System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_02fe925c(System_Action<Column,_int,_int>_TypeInfo);
    FUN_02fe925c(System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo);
    FUN_02fe925c(System_Action<string,_string,_LogType>_TypeInfo);
    FUN_02fe925c(System_Action<string,_InputControlLayoutChange>_TypeInfo);
    FUN_02fe925c(System_Action<ulong,_bool>_TypeInfo);
    FUN_02fe925c(System_Action<KeyboardNavigationOperation,_EventBase>_TypeInfo);
    FUN_02fe925c(System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f8dec8);
    FUN_02fe925c(PTR_DAT_06f98d20);
    DAT_073a08f6 = 1;
  }
  local_168 = 0;
  local_170 = 0;
  local_180 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  local_184 = 0;
  local_190 = 0;
  local_18c = 0;
  auStack_118[2] = 0;
  auStack_118[1] = 0;
  auStack_118[4] = 0;
  auStack_118[3] = 0;
  auStack_118[6] = 0;
  auStack_118[5] = 0;
  auStack_118[8] = 0;
  auStack_118[7] = 0;
  auStack_118[10] = 0;
  auStack_118[9] = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  auStack_118[0] = 0;
  local_120 = 0;
  lVar24 = thunk_FUN_0301080c(*(undefined8 *)puVar6);
  FUN_04569318(lVar24,*(undefined8 *)puVar7);
  lVar25 = thunk_FUN_0301080c(*(undefined8 *)puVar5);
  FUN_045664bc(lVar25,*(undefined8 *)puVar4);
  lVar26 = thunk_FUN_0301080c(*(undefined8 *)puVar8);
  FUN_045637c4(lVar26,*(undefined8 *)puVar9);
  pbVar1 = param_1 + param_2;
  if (param_1 < pbVar1) {
    iVar36 = -1;
    puVar34 = (undefined8 *)PTR_DAT_06f8dec8;
    do {
      uVar30 = (uint)*param_1;
      if (uVar30 == 0xfe) {
        thunk_FUN_03037804(PTR_DAT_06f6d548);
        uVar27 = thunk_FUN_0301080c();
        uVar29 = thunk_FUN_03037804(System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo);
        FUN_05af1770(uVar27,uVar29,0);
        uVar29 = thunk_FUN_03037804(
                                   System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar27,uVar29);
      }
      uVar14 = uVar30 & 0xfc;
      uVar30 = uVar30 & 3;
      pbVar2 = param_1 + 1;
      if (uVar14 < 0x55) {
        if (uVar14 < 0x19) {
          if (uVar14 < 9) {
            if (uVar14 == 4) {
              uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
              local_a8 = 0;
              FUN_0481dc04(&local_a8,uVar10,*puVar34);
              local_160 = local_a8;
            }
            else if (uVar14 == 8) {
              uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
              FUN_065f9eec(auStack_118 + 1,uVar10);
            }
          }
          else if (uVar14 == 0x14) {
            uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0481dc04(&local_a8,uVar10,*puVar34);
            uStack_158 = local_a8;
          }
          else if (uVar14 == 0x18) {
            uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0481dc04(&local_a8,uVar10,*puVar34);
            auStack_118[2] = local_a8;
          }
        }
        else if (uVar14 < 0x29) {
          if (uVar14 == 0x24) {
            uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0481dc04(&local_a8,uVar10,*puVar34);
            local_150 = local_a8;
          }
          else if (uVar14 == 0x28) {
            uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0481dc04(&local_a8,uVar10,*puVar34);
            auStack_118[3] = local_a8;
          }
        }
        else if (uVar14 == 0x34) {
          uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_0481dc04(&local_a8,uVar10,*puVar34);
          local_148 = local_a8;
        }
        else if (uVar14 == 0x44) {
          uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_0481dc04(&local_a8,uVar10,*puVar34);
          local_140 = local_a8;
        }
        else if (uVar14 == 0x54) {
          uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_0481dc04(&local_a8,uVar10,*puVar34);
          uStack_138 = local_a8;
        }
      }
      else if (uVar14 < 0x85) {
        if (uVar14 < 0x75) {
          if (uVar14 == 100) {
            uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0481dc04(&local_a8,uVar10,*puVar34);
            local_130 = local_a8;
          }
          else if (uVar14 == 0x74) {
            uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0481dc04(&local_a8,uVar10,*puVar34);
            local_128 = local_a8;
          }
        }
        else {
          if (uVar14 == 0x80) {
            uVar10 = 1;
            goto LAB_065f9900;
          }
          if (uVar14 == 0x84) {
            uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
            local_a8 = 0;
            FUN_0481dc04(&local_a8,uVar10,*puVar34);
            auStack_118[0] = local_a8;
          }
        }
      }
      else if (uVar14 < 0x95) {
        if (uVar14 == 0x90) {
          uVar10 = 2;
LAB_065f9900:
          uVar11 = FUN_065fa278(auStack_118[0],uVar10,lVar24);
          if (lVar24 == 0) goto LAB_065f9dd4;
          auVar37 = FUN_0456987c(lVar24,uVar11,
                                 *(undefined8 *)
                                  System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                                );
          iVar12 = auVar37._8_4_;
          iVar33 = iVar12;
          if ((char)auStack_118[0] != '\0') {
            iVar33 = 8;
          }
          if (iVar12 != 0) {
            iVar33 = iVar12;
          }
          iVar12 = FUN_0481dc48(&local_120,1,
                                *(undefined8 *)
                                 System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo);
          uVar13 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
          if (0 < iVar12) {
            iVar35 = 0;
            do {
              uVar14 = FUN_065fa0f8(auStack_118 + 1,iVar35);
              uVar15 = FUN_065fa06c(&local_160,iVar35,auStack_118 + 1);
              puVar4 = System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo;
              iVar16 = FUN_0481dc48(&local_128,8,
                                    *(undefined8 *)
                                     System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo);
              uVar17 = FUN_0481dc48(auStack_118,1,*(undefined8 *)puVar4);
              iVar18 = FUN_0481dc48((ulong)&local_160 | 8,0,*(undefined8 *)puVar4);
              iVar19 = FUN_0481dc48(&local_150,0,*(undefined8 *)puVar4);
              uVar20 = FUN_065fa400(&local_160);
              iVar21 = FUN_065fa4c4(&local_160);
              iVar22 = FUN_0481dc48(&uStack_138,0,*(undefined8 *)puVar4);
              uVar23 = FUN_0481dc48(&local_130,0,*(undefined8 *)puVar4);
              if (lVar25 == 0) goto LAB_065f9dd4;
              auStack_118[0xc] = 0;
              auStack_118[0xb] = 0;
              lVar31 = *(long *)(lVar25 + 0x10);
              lVar32 = *(long *)System_Action<PointerEvent>_TypeInfo;
              *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
              if (lVar31 == 0) goto LAB_065f9dd4;
              uVar3 = *(uint *)(lVar25 + 0x18);
              if (uVar3 < *(uint *)(lVar31 + 0x18)) {
                lVar31 = lVar31 + (long)(int)uVar3 * 0x48;
                *(uint *)(lVar25 + 0x18) = uVar3 + 1;
                *(uint *)(lVar31 + 0x20) = uVar14 & 0xffff;
                *(undefined4 *)(lVar31 + 0x24) = uVar15;
                *(undefined4 *)(lVar31 + 0x28) = uVar23;
                *(int *)(lVar31 + 0x2c) = iVar22;
                *(int *)(lVar31 + 0x30) = iVar18;
                *(int *)(lVar31 + 0x34) = iVar19;
                *(undefined4 *)(lVar31 + 0x38) = uVar20;
                *(int *)(lVar31 + 0x3c) = iVar21;
                *(undefined4 *)(lVar31 + 0x40) = uVar10;
                *(undefined4 *)(lVar31 + 0x44) = 0;
                *(undefined4 *)(lVar31 + 0x48) = uVar17;
                *(int *)(lVar31 + 0x4c) = iVar16;
                *(int *)(lVar31 + 0x50) = iVar33;
                *(undefined4 *)(lVar31 + 0x54) = uVar13;
                *(undefined8 *)(lVar31 + 0x60) = 0;
                *(undefined8 *)(lVar31 + 0x58) = 0;
              }
              else {
                local_a8 = CONCAT44(uVar15,uVar14) & 0xffffffff0000ffff;
                uStack_84 = 0;
                uStack_68 = 0;
                local_70 = 0;
                uStack_a0 = uVar23;
                iStack_9c = iVar22;
                local_98 = iVar18;
                local_94 = iVar19;
                local_90 = uVar20;
                local_8c = iVar21;
                local_88 = uVar10;
                local_80 = uVar17;
                local_7c = iVar16;
                local_78 = iVar33;
                local_74 = uVar13;
                FUN_04566dd8(lVar25,&local_a8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
              }
              iVar35 = iVar35 + 1;
              iVar33 = iVar16 + iVar33;
            } while (iVar12 != iVar35);
          }
          FUN_045698dc(lVar24,uVar11,auVar37._0_8_,iVar33,
                       *(undefined8 *)System_Action<string,_string,_LogType>_TypeInfo);
          FUN_065fa208(auStack_118 + 1);
          puVar34 = (undefined8 *)PTR_DAT_06f8dec8;
        }
        else if (uVar14 == 0x94) {
          uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
          local_a8 = 0;
          FUN_0481dc04(&local_a8,uVar10,*puVar34);
          local_120 = local_a8;
        }
      }
      else if (uVar14 == 0xa0) {
        if (lVar26 == 0) goto LAB_065f9dd4;
        iVar33 = *(int *)(lVar26 + 0x18);
        uVar10 = FUN_065f9e84(uVar30,pbVar2,pbVar1);
        uVar11 = FUN_065fa06c(&local_160,0,auStack_118 + 1);
        uVar13 = FUN_065fa0f8(auStack_118 + 1,0);
        if (lVar25 == 0) goto LAB_065f9dd4;
        iVar12 = *(int *)(lVar25 + 0x18);
        lVar31 = *(long *)(lVar26 + 0x10);
        lVar32 = *(long *)System_Action<XRLayout,_Camera>_TypeInfo;
        *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
        if (lVar31 == 0) goto LAB_065f9dd4;
        uVar14 = *(uint *)(lVar26 + 0x18);
        if (uVar14 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + (long)(int)uVar14 * 0x18;
          *(uint *)(lVar26 + 0x18) = uVar14 + 1;
          *(undefined4 *)(lVar31 + 0x20) = uVar10;
          *(undefined4 *)(lVar31 + 0x24) = uVar13;
          *(undefined4 *)(lVar31 + 0x28) = uVar11;
          *(int *)(lVar31 + 0x2c) = iVar36;
          *(undefined4 *)(lVar31 + 0x30) = 0;
          *(int *)(lVar31 + 0x34) = iVar12;
        }
        else {
          local_a8 = CONCAT44(uVar13,uVar10);
          local_98 = 0;
          uStack_a0 = uVar11;
          iStack_9c = iVar36;
          local_94 = iVar12;
          FUN_045640c4(lVar26,&local_a8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar32 + 0x20) + 0xc0) + 0x70));
        }
        FUN_065fa208(auStack_118 + 1);
        puVar34 = (undefined8 *)PTR_DAT_06f8dec8;
        iVar36 = iVar33;
      }
      else {
        if (uVar14 == 0xb0) {
          uVar10 = 3;
          goto LAB_065f9900;
        }
        if (uVar14 == 0xc0) {
          if (iVar36 == -1) {
            return 0;
          }
          if (lVar26 == 0) goto LAB_065f9dd4;
          FUN_04563d28(&local_a8,lVar26,iVar36,
                       *(undefined8 *)System_Action<Column,_int,_int>_TypeInfo);
          iVar33 = iStack_9c;
          local_168 = uStack_a0;
          local_170 = local_a8;
          if (lVar25 == 0) goto LAB_065f9dd4;
          local_98 = *(int *)(lVar25 + 0x18) - local_94;
          FUN_04563d90(lVar26,iVar36,&local_a8,
                       *(undefined8 *)
                        System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo);
          FUN_065fa208(auStack_118 + 1);
          iVar36 = iVar33;
        }
      }
      param_1 = param_1 + 5;
      if (uVar30 != 3) {
        param_1 = pbVar2 + uVar30;
      }
    } while (param_1 < pbVar1);
  }
  if (lVar25 != 0) {
    uVar27 = FUN_04568cd0(lVar25,*(undefined8 *)System_Action<PointerEventData>_TypeInfo);
    *(undefined8 *)(param_3 + 0x20) = uVar27;
    thunk_FUN_03048534();
    puVar6 = System_Action<DebugManager_UIMode,_bool>_TypeInfo;
    puVar5 = System_Action<VisualElement,_MatchResultInfo>_TypeInfo;
    puVar4 = System_Action<Vector3,_Vector3>_TypeInfo;
    if (lVar26 != 0) {
      uVar27 = FUN_04565e88(lVar26,*(undefined8 *)
                                    System_Action<ScriptableRenderContext,_Camera>_TypeInfo);
      *(undefined8 *)(param_3 + 0x28) = uVar27;
      thunk_FUN_03048534();
      FUN_04564cf8(&local_a8,lVar26,*(undefined8 *)puVar6);
      uStack_198 = CONCAT44(iStack_9c,uStack_a0);
      local_180 = CONCAT44(uStack_84,local_88);
      local_1a0 = local_a8;
      uStack_188 = local_90;
      local_184 = local_8c;
      local_190 = local_98;
      local_18c = local_94;
      do {
        uVar28 = FUN_0556b644(&local_1a0,*(undefined8 *)puVar5);
        if ((uVar28 & 1) == 0) goto LAB_065f9d9c;
      } while ((local_190 != 1) || (local_184 != -1));
      *(ulong *)(param_3 + 8) = CONCAT44(uStack_188,local_18c);
LAB_065f9d9c:
      FUN_0556b640(&local_1a0,*(undefined8 *)puVar4);
      return 1;
    }
  }
LAB_065f9dd4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


