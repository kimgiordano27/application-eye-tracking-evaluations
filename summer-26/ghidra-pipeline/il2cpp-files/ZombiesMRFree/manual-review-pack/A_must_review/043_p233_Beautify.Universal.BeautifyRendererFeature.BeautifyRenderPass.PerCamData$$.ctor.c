/*
FUNCTION_NAME: Beautify.Universal.BeautifyRendererFeature.BeautifyRenderPass.PerCamData$$.ctor
ENTRY_POINT: 065f9338
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 156
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


undefined8
Beautify_Universal_BeautifyRendererFeature_BeautifyRenderPass_PerCamData___ctor
          (ulong param_1,byte *param_2,int param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long unaff_x20;
  undefined8 *puVar30;
  long unaff_x21;
  undefined8 *puVar31;
  long unaff_x22;
  undefined8 *puVar32;
  int iVar33;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  int iVar34;
  int iVar35;
  undefined1 auVar36 [12];
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  int in_stack_000000d0;
  int iStack00000000000000d4;
  undefined4 in_stack_000000d8;
  int iStack00000000000000dc;
  undefined8 in_stack_000000e0;
  ulong in_stack_000000f0;
  undefined4 in_stack_000000f8;
  ulong in_stack_00000100;
  ulong in_stack_00000108;
  ulong in_stack_00000110;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  ulong in_stack_00000128;
  ulong in_stack_00000130;
  ulong in_stack_00000138;
  ulong in_stack_00000140;
  char cStack0000000000000148;
  undefined8 in_stack_00000150;
  ulong in_stack_00000158;
  ulong in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  ulong in_stack_000001b8;
  undefined4 uStack00000000000001c0;
  int iStack00000000000001c4;
  int iStack00000000000001c8;
  int iStack00000000000001cc;
  undefined4 uStack00000000000001d0;
  int iStack00000000000001d4;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  undefined4 uStack00000000000001e0;
  int iStack00000000000001e4;
  int iStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  
  puVar32 = *(undefined8 **)(unaff_x22 + 0xee0);
  puVar31 = *(undefined8 **)(unaff_x21 + 0xf50);
  puVar30 = *(undefined8 **)(unaff_x20 + 0xf58);
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x26 + 0x8f6) = 1;
  }
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  iStack00000000000000dc = 0;
  in_stack_000000d0 = 0;
  iStack00000000000000d4 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  _cStack0000000000000148 = 0;
  in_stack_00000140 = 0;
  lVar21 = thunk_FUN_0301080c(*unaff_x25);
  FUN_04569318(lVar21,*unaff_x24);
  lVar22 = thunk_FUN_0301080c(*unaff_x23);
  FUN_045664bc(lVar22,*puVar32);
  lVar23 = thunk_FUN_0301080c(*puVar31);
  FUN_045637c4(lVar23,*puVar30);
  pbVar1 = param_2 + param_3;
  if (param_2 < pbVar1) {
    iVar35 = -1;
    puVar30 = (undefined8 *)PTR_DAT_06f8dec8;
    do {
      uVar27 = (uint)*param_2;
      if (uVar27 == 0xfe) {
        thunk_FUN_03037804(PTR_DAT_06f6d548);
        uVar24 = thunk_FUN_0301080c();
        uVar26 = thunk_FUN_03037804(System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo);
        FUN_05af1770(uVar24,uVar26,0);
        uVar26 = thunk_FUN_03037804(
                                   System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar24,uVar26);
      }
      uVar11 = uVar27 & 0xfc;
      uVar27 = uVar27 & 3;
      pbVar2 = param_2 + 1;
      if (uVar11 < 0x55) {
        if (uVar11 < 0x19) {
          if (uVar11 < 9) {
            if (uVar11 == 4) {
              uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
              in_stack_000001b8 = 0;
              FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
              in_stack_00000100 = in_stack_000001b8;
            }
            else if (uVar11 == 8) {
              uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
              FUN_065f9eec(&stack0x00000150,uVar7);
            }
          }
          else if (uVar11 == 0x14) {
            uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
            in_stack_000001b8 = 0;
            FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
            in_stack_00000108 = in_stack_000001b8;
          }
          else if (uVar11 == 0x18) {
            uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
            in_stack_000001b8 = 0;
            FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
            in_stack_00000158 = in_stack_000001b8;
          }
        }
        else if (uVar11 < 0x29) {
          if (uVar11 == 0x24) {
            uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
            in_stack_000001b8 = 0;
            FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
            in_stack_00000110 = in_stack_000001b8;
          }
          else if (uVar11 == 0x28) {
            uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
            in_stack_000001b8 = 0;
            FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
            in_stack_00000160 = in_stack_000001b8;
          }
        }
        else if (uVar11 == 0x34) {
          uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
          in_stack_000001b8 = 0;
          FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
          in_stack_00000118 = in_stack_000001b8;
        }
        else if (uVar11 == 0x44) {
          uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
          in_stack_000001b8 = 0;
          FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
          in_stack_00000120 = in_stack_000001b8;
        }
        else if (uVar11 == 0x54) {
          uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
          in_stack_000001b8 = 0;
          FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
          in_stack_00000128 = in_stack_000001b8;
        }
      }
      else if (uVar11 < 0x85) {
        if (uVar11 < 0x75) {
          if (uVar11 == 100) {
            uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
            in_stack_000001b8 = 0;
            FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
            in_stack_00000130 = in_stack_000001b8;
          }
          else if (uVar11 == 0x74) {
            uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
            in_stack_000001b8 = 0;
            FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
            in_stack_00000138 = in_stack_000001b8;
          }
        }
        else {
          if (uVar11 == 0x80) {
            uVar7 = 1;
            goto LAB_065f9900;
          }
          if (uVar11 == 0x84) {
            uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
            in_stack_000001b8 = 0;
            FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
            _cStack0000000000000148 = in_stack_000001b8;
          }
        }
      }
      else if (uVar11 < 0x95) {
        if (uVar11 == 0x90) {
          uVar7 = 2;
LAB_065f9900:
          uVar8 = FUN_065fa278(_cStack0000000000000148,uVar7,lVar21);
          if (lVar21 == 0) goto LAB_065f9dd4;
          auVar36 = FUN_0456987c(lVar21,uVar8,
                                 *(undefined8 *)
                                  System_Action<OVRSpatialAnchor_OperationResult,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                                );
          iVar9 = auVar36._8_4_;
          iVar33 = iVar9;
          if (cStack0000000000000148 != '\0') {
            iVar33 = 8;
          }
          if (iVar9 != 0) {
            iVar33 = iVar9;
          }
          iVar9 = FUN_0481dc48(&stack0x00000140,1,
                               *(undefined8 *)
                                System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo);
          uVar10 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
          if (0 < iVar9) {
            iVar34 = 0;
            do {
              uVar11 = FUN_065fa0f8(&stack0x00000150,iVar34);
              uVar12 = FUN_065fa06c(&stack0x00000100,iVar34,&stack0x00000150);
              puVar4 = System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo;
              iVar13 = FUN_0481dc48(&stack0x00000138,8,
                                    *(undefined8 *)
                                     System_Action<TimelineClip,_GameObject,_Playable>_TypeInfo);
              uVar14 = FUN_0481dc48(&stack0x00000148,1,*(undefined8 *)puVar4);
              iVar15 = FUN_0481dc48((ulong)&stack0x00000100 | 8,0,*(undefined8 *)puVar4);
              iVar16 = FUN_0481dc48(&stack0x00000110,0,*(undefined8 *)puVar4);
              uVar17 = FUN_065fa400(&stack0x00000100);
              iVar18 = FUN_065fa4c4(&stack0x00000100);
              iVar19 = FUN_0481dc48(&stack0x00000128,0,*(undefined8 *)puVar4);
              uVar20 = FUN_0481dc48(&stack0x00000130,0,*(undefined8 *)puVar4);
              if (lVar22 == 0) goto LAB_065f9dd4;
              in_stack_000001a8 = 0;
              in_stack_000001a0 = 0;
              lVar28 = *(long *)(lVar22 + 0x10);
              lVar29 = *(long *)System_Action<PointerEvent>_TypeInfo;
              *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
              if (lVar28 == 0) goto LAB_065f9dd4;
              uVar3 = *(uint *)(lVar22 + 0x18);
              if (uVar3 < *(uint *)(lVar28 + 0x18)) {
                lVar28 = lVar28 + (long)(int)uVar3 * 0x48;
                *(uint *)(lVar22 + 0x18) = uVar3 + 1;
                *(uint *)(lVar28 + 0x20) = uVar11 & 0xffff;
                *(undefined4 *)(lVar28 + 0x24) = uVar12;
                *(undefined4 *)(lVar28 + 0x28) = uVar20;
                *(int *)(lVar28 + 0x2c) = iVar19;
                *(int *)(lVar28 + 0x30) = iVar15;
                *(int *)(lVar28 + 0x34) = iVar16;
                *(undefined4 *)(lVar28 + 0x38) = uVar17;
                *(int *)(lVar28 + 0x3c) = iVar18;
                *(undefined4 *)(lVar28 + 0x40) = uVar7;
                *(undefined4 *)(lVar28 + 0x44) = 0;
                *(undefined4 *)(lVar28 + 0x48) = uVar14;
                *(int *)(lVar28 + 0x4c) = iVar13;
                *(int *)(lVar28 + 0x50) = iVar33;
                *(undefined4 *)(lVar28 + 0x54) = uVar10;
                *(undefined8 *)(lVar28 + 0x60) = 0;
                *(undefined8 *)(lVar28 + 0x58) = 0;
              }
              else {
                in_stack_000001b8 = CONCAT44(uVar12,uVar11) & 0xffffffff0000ffff;
                uStack00000000000001dc = 0;
                uStack00000000000001c0 = uVar20;
                iStack00000000000001c4 = iVar19;
                iStack00000000000001c8 = iVar15;
                iStack00000000000001cc = iVar16;
                uStack00000000000001d0 = uVar17;
                iStack00000000000001d4 = iVar18;
                uStack00000000000001d8 = uVar7;
                uStack00000000000001e0 = uVar14;
                iStack00000000000001e4 = iVar13;
                iStack00000000000001e8 = iVar33;
                uStack00000000000001ec = uVar10;
                FUN_04566dd8(lVar22,&stack0x000001b8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
              }
              iVar34 = iVar34 + 1;
              iVar33 = iVar13 + iVar33;
            } while (iVar9 != iVar34);
          }
          FUN_045698dc(lVar21,uVar8,auVar36._0_8_,iVar33,
                       *(undefined8 *)System_Action<string,_string,_LogType>_TypeInfo);
          FUN_065fa208(&stack0x00000150);
          puVar30 = (undefined8 *)PTR_DAT_06f8dec8;
        }
        else if (uVar11 == 0x94) {
          uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
          in_stack_000001b8 = 0;
          FUN_0481dc04(&stack0x000001b8,uVar7,*puVar30);
          in_stack_00000140 = in_stack_000001b8;
        }
      }
      else if (uVar11 == 0xa0) {
        if (lVar23 == 0) goto LAB_065f9dd4;
        iVar33 = *(int *)(lVar23 + 0x18);
        uVar7 = FUN_065f9e84(uVar27,pbVar2,pbVar1);
        uVar8 = FUN_065fa06c(&stack0x00000100,0,&stack0x00000150);
        uVar10 = FUN_065fa0f8(&stack0x00000150,0);
        if (lVar22 == 0) goto LAB_065f9dd4;
        iVar9 = *(int *)(lVar22 + 0x18);
        lVar28 = *(long *)(lVar23 + 0x10);
        lVar29 = *(long *)System_Action<XRLayout,_Camera>_TypeInfo;
        *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
        if (lVar28 == 0) goto LAB_065f9dd4;
        uVar11 = *(uint *)(lVar23 + 0x18);
        if (uVar11 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + (long)(int)uVar11 * 0x18;
          *(uint *)(lVar23 + 0x18) = uVar11 + 1;
          *(undefined4 *)(lVar28 + 0x20) = uVar7;
          *(undefined4 *)(lVar28 + 0x24) = uVar10;
          *(undefined4 *)(lVar28 + 0x28) = uVar8;
          *(int *)(lVar28 + 0x2c) = iVar35;
          *(undefined4 *)(lVar28 + 0x30) = 0;
          *(int *)(lVar28 + 0x34) = iVar9;
        }
        else {
          in_stack_000001b8 = CONCAT44(uVar10,uVar7);
          iStack00000000000001c8 = 0;
          uStack00000000000001c0 = uVar8;
          iStack00000000000001c4 = iVar35;
          iStack00000000000001cc = iVar9;
          FUN_045640c4(lVar23,&stack0x000001b8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
        }
        FUN_065fa208(&stack0x00000150);
        puVar30 = (undefined8 *)PTR_DAT_06f8dec8;
        iVar35 = iVar33;
      }
      else {
        if (uVar11 == 0xb0) {
          uVar7 = 3;
          goto LAB_065f9900;
        }
        if (uVar11 == 0xc0) {
          if (iVar35 == -1) {
            return 0;
          }
          if (lVar23 == 0) goto LAB_065f9dd4;
          FUN_04563d28(&stack0x000001b8,lVar23,iVar35,
                       *(undefined8 *)System_Action<Column,_int,_int>_TypeInfo);
          iVar33 = iStack00000000000001c4;
          in_stack_000000f8 = uStack00000000000001c0;
          in_stack_000000f0 = in_stack_000001b8;
          if (lVar22 == 0) goto LAB_065f9dd4;
          iStack00000000000001c8 = *(int *)(lVar22 + 0x18) - iStack00000000000001cc;
          FUN_04563d90(lVar23,iVar35,&stack0x000001b8,
                       *(undefined8 *)
                        System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo);
          FUN_065fa208(&stack0x00000150);
          iVar35 = iVar33;
        }
      }
      param_2 = param_2 + 5;
      if (uVar27 != 3) {
        param_2 = pbVar2 + uVar27;
      }
    } while (param_2 < pbVar1);
  }
  if (lVar22 != 0) {
    uVar24 = FUN_04568cd0(lVar22,*(undefined8 *)System_Action<PointerEventData>_TypeInfo);
    *(undefined8 *)(param_4 + 0x20) = uVar24;
    thunk_FUN_03048534();
    puVar6 = System_Action<DebugManager_UIMode,_bool>_TypeInfo;
    puVar5 = System_Action<VisualElement,_MatchResultInfo>_TypeInfo;
    puVar4 = System_Action<Vector3,_Vector3>_TypeInfo;
    if (lVar23 != 0) {
      uVar24 = FUN_04565e88(lVar23,*(undefined8 *)
                                    System_Action<ScriptableRenderContext,_Camera>_TypeInfo);
      *(undefined8 *)(param_4 + 0x28) = uVar24;
      thunk_FUN_03048534();
      FUN_04564cf8(&stack0x000001b8,lVar23,*(undefined8 *)puVar6);
      in_stack_000000c8 = CONCAT44(iStack00000000000001c4,uStack00000000000001c0);
      in_stack_000000e0 = CONCAT44(uStack00000000000001dc,uStack00000000000001d8);
      in_stack_000000c0 = in_stack_000001b8;
      in_stack_000000d8 = uStack00000000000001d0;
      iStack00000000000000dc = iStack00000000000001d4;
      in_stack_000000d0 = iStack00000000000001c8;
      iStack00000000000000d4 = iStack00000000000001cc;
      do {
        uVar25 = FUN_0556b644(&stack0x000000c0,*(undefined8 *)puVar5);
        if ((uVar25 & 1) == 0) goto LAB_065f9d9c;
      } while ((in_stack_000000d0 != 1) || (iStack00000000000000dc != -1));
      *(ulong *)(param_4 + 8) = CONCAT44(in_stack_000000d8,iStack00000000000000d4);
LAB_065f9d9c:
      FUN_0556b640(&stack0x000000c0,*(undefined8 *)puVar4);
      return 1;
    }
  }
LAB_065f9dd4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


