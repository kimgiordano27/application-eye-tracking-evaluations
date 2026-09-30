/*
FUNCTION_NAME: FUN_0681b738
ENTRY_POINT: 0681b738
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_5;strong_file_logging_hits_3
*/


void FUN_0681b738(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  bool bVar18;
  long lVar19;
  undefined8 *puVar20;
  int iVar21;
  long *plVar22;
  bool bVar23;
  undefined8 *puVar24;
  undefined1 auVar25 [16];
  int iStack_84;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  
  plVar22 = (long *)HurricaneVR_Framework_Core_Player_HVRJointHand_<StopHandsRoutine>d__38_TypeInfo;
  if ((bRam00000000071d6944 & 1) == 0) {
    FUN_02f07e70(
                UnityEngine_Rendering_UI_DebugUIHandlerEnumHistory_<RefreshAfterSanitization>d__4_TypeInfo
                );
    FUN_02f07e70(HurricaneVR_Framework_Core_Grabbers_HVRHandGrabber_<MoveGrab>d__334_TypeInfo);
    FUN_02f07e70(HurricaneVR_Framework_Core_Grabbers_HVRHandGrabber_<SwapGrabPoint>d__377_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3a4b0);
    FUN_02f07e70(PTR_DAT_06d3a4a8);
    FUN_02f07e70(
                HurricaneVR_Framework_Core_Utils_HVRObjectCollisionDisabler_<>c__DisplayClass3_0_TypeInfo
                );
    FUN_02f07e70(HurricaneVR_Framework_Weapons_Bow_HVRPhysicsBow_<>c__DisplayClass19_0_TypeInfo);
    FUN_02f07e70(HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68_TypeInfo);
    FUN_02f07e70(
                HurricaneVR_Framework_Core_Player_HVRPlayerController_<CorrectCamera>d__118_TypeInfo
                );
    FUN_02f07e70(
                HurricaneVR_Framework_Core_Player_HVRPlayerController_<CrouchRoutine>d__146_TypeInfo
                );
    FUN_02f07e70(HurricaneVR_Framework_Core_Player_HVRJointHand_<StopHandsRoutine>d__38_TypeInfo);
    FUN_02f07e70(HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d5e338);
    bRam00000000071d6944 = 1;
  }
  lVar11 = *plVar22;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_74 = 0;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar11 = *plVar22;
  }
  auVar7._8_8_ = auStack_70._8_8_;
  auVar7._0_8_ = auStack_70._0_8_;
  auVar25._8_8_ = auStack_70._8_8_;
  auVar25._0_8_ = auStack_70._0_8_;
  plVar16 = *(long **)(lVar11 + 0xb8);
  lVar11 = *plVar16;
  if (lVar11 != 0) {
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    lVar11 = plVar16[1];
    auStack_70 = auVar25;
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x18) = 0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      lVar11 = plVar16[2];
      auStack_70 = auVar7;
      if (lVar11 != 0) {
        iVar10 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar10) {
          FUN_05624da8(*(undefined8 *)(lVar11 + 0x10),0,iVar10,0);
          plVar16 = *(long **)(*plVar22 + 0xb8);
        }
        auVar8._8_8_ = auStack_70._8_8_;
        auVar8._0_8_ = auStack_70._0_8_;
        lVar11 = plVar16[3];
        if (lVar11 != 0) {
          *(undefined4 *)(lVar11 + 0x18) = 0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          auStack_70 = auVar8;
          if (param_1 != 0) {
            iStack_84 = 0;
            iVar1 = *(int *)(param_1 + 0x54);
            iVar10 = 0;
            bVar18 = false;
            plVar16 = (long *)
                      UnityEngine_Rendering_UI_DebugUIHandlerEnumHistory_<RefreshAfterSanitization>d__4_TypeInfo
            ;
            puVar20 = (undefined8 *)
                      HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68_TypeInfo
            ;
            puVar24 = (undefined8 *)
                      HurricaneVR_Framework_Core_Player_HVRPlayerController_<CorrectCamera>d__118_TypeInfo
            ;
            do {
              if (bVar18) goto LAB_0681bd70;
              if (*(int *)(*plVar16 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              lVar11 = FUN_06819770();
              if (lVar11 == 0) goto LAB_0681bdf0;
              auVar25 = FUN_04046718(lVar11,0,*puVar20);
              auStack_70 = auVar25;
              lVar11 = FUN_068196f8();
              if (lVar11 == 0) goto LAB_0681bdf0;
              uVar12 = FUN_0405ebbc(lVar11,0,*puVar24);
              lVar11 = FUN_06819680();
              if (lVar11 == 0) goto LAB_0681bdf0;
              uVar13 = FUN_0405ebbc(lVar11,0,*puVar24);
              lVar11 = FUN_068197e8();
              if (lVar11 == 0) goto LAB_0681bdf0;
              uVar9 = FUN_03f5b568(lVar11,0,*(undefined8 *)
                                             HurricaneVR_Framework_Core_Player_HVRPlayerController_<CrouchRoutine>d__146_TypeInfo
                                  );
              if (iVar10 < iVar1) {
                bVar23 = false;
                bVar3 = false;
                bVar6 = false;
                bVar5 = false;
                bVar4 = true;
                bVar18 = false;
                do {
                  iVar21 = iVar10;
                  iVar10 = FUN_06821b80(param_1,iVar21,0);
                  if (iVar10 < 4) {
                    if (iVar10 == 1) {
                      uVar15 = FUN_06821c94(param_1,iVar21,6,0);
                      if ((iStack_84 != 0) || ((uVar15 & 1) == 0)) goto LAB_0681ba9c;
                      FUN_068dfd9c(auStack_70,*(undefined8 *)PTR_DAT_06d5e338,0);
                      bVar6 = true;
                      bVar18 = true;
                    }
                    else if (iVar10 == 3) {
                      uVar14 = FUN_06822164(param_1,iVar21,0);
                      if (bVar23) {
                        if (!bVar3) {
                          uVar13 = uVar14;
                        }
                        bVar4 = (bool)(bVar4 & (bVar3 ^ 1U));
                        bVar23 = true;
                        bVar3 = true;
                      }
                      else {
                        bVar23 = true;
                        uVar12 = uVar14;
                      }
                    }
                    else {
LAB_0681ba9c:
                      bVar4 = false;
                    }
                  }
                  else {
                    if (iVar10 != 7) {
                      if (iVar10 != 0xb) goto LAB_0681ba9c;
                      iStack_84 = iStack_84 + 1;
                      break;
                    }
                    uVar14 = FUN_06821d38(param_1,iVar21,0);
                    if (!bVar5) {
                      if (*(int *)(*(long *)
                                    HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_02f12b58();
                      }
                      uVar15 = FUN_0681c130(4,uVar14,&uStack_74);
                      if ((uVar15 & 1) != 0) {
                        uVar9 = FUN_068bd4bc(uStack_74,0);
                        bVar5 = true;
                        goto LAB_0681bac4;
                      }
                    }
                    if (bVar6) {
                      bVar4 = false;
                    }
                    else {
                      FUN_068dfd9c(auStack_70,uVar14,0);
                    }
                    bVar6 = true;
                  }
LAB_0681bac4:
                  iVar10 = iVar21 + 1;
                } while (iVar21 + 1 < iVar1);
                iVar10 = iVar21 + 1;
                bVar23 = iVar10 < iVar1;
                plVar16 = (long *)
                          UnityEngine_Rendering_UI_DebugUIHandlerEnumHistory_<RefreshAfterSanitization>d__4_TypeInfo
                ;
                puVar20 = (undefined8 *)
                          HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68_TypeInfo
                ;
                plVar22 = (long *)
                          HurricaneVR_Framework_Core_Player_HVRJointHand_<StopHandsRoutine>d__38_TypeInfo
                ;
                puVar24 = (undefined8 *)
                          HurricaneVR_Framework_Core_Player_HVRPlayerController_<CorrectCamera>d__118_TypeInfo
                ;
              }
              else {
                bVar18 = false;
                bVar23 = false;
                bVar4 = true;
              }
              lVar11 = *plVar22;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
                lVar11 = *plVar22;
              }
              lVar11 = **(long **)(lVar11 + 0xb8);
              if (lVar11 == 0) goto LAB_0681bdf0;
              lVar17 = *(long *)(lVar11 + 0x10);
              lVar19 = *(long *)
                        HurricaneVR_Framework_Core_Grabbers_HVRHandGrabber_<MoveGrab>d__334_TypeInfo
              ;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_0681bdf0;
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
              }
              else {
                FUN_0405eeac(lVar11,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              lVar11 = *(long *)(*(long *)(*plVar22 + 0xb8) + 8);
              if (lVar11 == 0) goto LAB_0681bdf0;
              lVar17 = *(long *)(lVar11 + 0x10);
              lVar19 = *(long *)
                        HurricaneVR_Framework_Core_Grabbers_HVRHandGrabber_<MoveGrab>d__334_TypeInfo
              ;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_0681bdf0;
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
              }
              else {
                FUN_0405eeac(lVar11,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
              lVar11 = *(long *)(*(long *)(*plVar22 + 0xb8) + 0x10);
              if (lVar11 == 0) goto LAB_0681bdf0;
              lVar17 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_0681bdf0;
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                lVar17 = lVar17 + (long)(int)uVar2 * 0x10;
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                *(undefined1 (*) [16])(lVar17 + 0x20) = auStack_70;
                thunk_FUN_02f411dc(lVar17 + 0x28,0);
              }
              else {
                FUN_04046a34();
              }
              lVar11 = *(long *)(*(long *)(*plVar22 + 0xb8) + 0x18);
              if (lVar11 == 0) goto LAB_0681bdf0;
              lVar17 = *(long *)(lVar11 + 0x10);
              lVar19 = *(long *)
                        HurricaneVR_Framework_Core_Grabbers_HVRHandGrabber_<SwapGrabPoint>d__377_TypeInfo
              ;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_0681bdf0;
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                *(undefined4 *)(lVar17 + (long)(int)uVar2 * 4 + 0x20) = uVar9;
              }
              else {
                FUN_03f5b85c(lVar11,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            } while ((bool)(bVar23 & bVar4));
            if (bVar4) {
              lVar11 = *plVar22;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
                lVar11 = *plVar22;
              }
              *param_4 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
              thunk_FUN_02f411dc(param_4);
              *param_2 = **(undefined8 **)(*plVar22 + 0xb8);
              thunk_FUN_02f411dc(param_2);
              *param_3 = *(undefined8 *)(*(long *)(*plVar22 + 0xb8) + 8);
              thunk_FUN_02f411dc(param_3);
              *param_5 = *(undefined8 *)(*(long *)(*plVar22 + 0xb8) + 0x18);
            }
            else {
LAB_0681bd70:
              if (*(int *)(*plVar16 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar12 = FUN_06819770();
              *param_4 = uVar12;
              thunk_FUN_02f411dc();
              uVar12 = FUN_06819680();
              *param_2 = uVar12;
              thunk_FUN_02f411dc();
              uVar12 = FUN_068196f8();
              *param_3 = uVar12;
              thunk_FUN_02f411dc();
              uVar12 = FUN_068197e8();
              *param_5 = uVar12;
            }
            thunk_FUN_02f411dc(param_5);
            return;
          }
        }
      }
    }
  }
LAB_0681bdf0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


