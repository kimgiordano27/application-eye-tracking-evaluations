/*
FUNCTION_NAME: FUN_063888d8
ENTRY_POINT: 063888d8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_14;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06389ba0) */
/* WARNING: Removing unreachable block (ram,0x0638966c) */
/* WARNING: Removing unreachable block (ram,0x06389390) */
/* WARNING: Removing unreachable block (ram,0x06389b14) */
/* WARNING: Removing unreachable block (ram,0x06389b34) */
/* WARNING: Removing unreachable block (ram,0x06389b2c) */
/* WARNING: Removing unreachable block (ram,0x0638981c) */
/* WARNING: Removing unreachable block (ram,0x06389918) */
/* WARNING: Removing unreachable block (ram,0x063899fc) */
/* WARNING: Removing unreachable block (ram,0x06389b20) */
/* WARNING: Removing unreachable block (ram,0x06389a3c) */

void FUN_063888d8(undefined8 param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  char cVar20;
  int local_72c;
  uint local_728;
  undefined4 uStack_724;
  undefined8 uStack_720;
  undefined8 local_718;
  long lStack_710;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined4 local_620;
  undefined1 auStack_518 [192];
  long local_458 [22];
  byte local_3a5;
  undefined8 local_3a0;
  byte local_38f;
  long local_310;
  long local_308;
  long local_300;
  undefined1 local_2f8 [8];
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined1 auStack_2b0 [216];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  byte local_142;
  byte local_13f;
  byte local_13d;
  long local_138 [2];
  byte local_127;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  
  puVar3 = PlayFab_DataModels_FinalizeFileUploadsRequest_var;
                    /* try { // try from 0638890c to 06488913 has its CatchHandler @ 06388964 */
  local_68 = param_1;
  if ((DAT_071cd405 & 1) == 0) {
    FUN_02f07e70(DebugInputActions_InputActions_var);
                    /* try { // try from 06388924 to 0648892f has its CatchHandler @ 06388960 */
    FUN_02f07e70(PTR_DAT_06d96ab0);
                    /* try { // try from 06388930 to 06488953 has its CatchHandler @ 063887f0 */
    FUN_02f07e70(PlayFab_ClientModels_GetTitlePublicKeyRequest_var);
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(UnityEngine_InputSystem_InputManager_StateChangeMonitorListener_var);
                    /* try { // try from 06388954 to 06488957 has its CatchHandler @ 0638895c */
    FUN_02f07e70(UnityEngine_InputSystem_InputManager_StateChangeMonitorTimeout_var);
                    /* try { // try from 06388958 to 06488977 has its CatchHandler @ 063887f0 */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 06388954 with catch @ 0638895c
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 06388924 with catch @ 06388960
                        */
    FUN_02f07e70(UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice_var);
    FUN_02f07e70(UnityEngine_InputSystem_LowLevel_InputStateHistory_Enumerator_var);
    FUN_02f07e70(PTR_DAT_06d5ea48);
    FUN_02f07e70(PTR_DAT_06d5ea50);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(PTR_DAT_06d38be0);
    FUN_02f07e70(PlayFab_DataModels_FinalizeFileUploadsRequest_var);
    FUN_02f07e70(PTR_DAT_06d96a10);
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(PTR_DAT_06d38bf0);
    FUN_02f07e70(PlayFab_ClientModels_ReportPlayerClientResult_var);
    FUN_02f07e70(PlayFab_ClientModels_RegisterPlayFabUserResult_var);
    FUN_02f07e70(PTR_DAT_06d962e8);
    FUN_02f07e70(PTR_DAT_06d09430);
    FUN_02f07e70(UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_var);
    FUN_02f07e70(UnityEngine_InputSystem_Users_InputUser_GlobalState_var);
    FUN_02f07e70(UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var);
    FUN_02f07e70(UnityEngine_InputSystem_Users_InputUser_UserData_var);
    FUN_02f07e70(OVRSimpleJSON_JSONNode_Enumerator_var);
    FUN_02f07e70(OVRSimpleJSON_JSONNode_KeyEnumerator_var);
    FUN_02f07e70(OVRSimpleJSON_JSONNode_ValueEnumerator_var);
    FUN_02f07e70(UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_var);
    FUN_02f07e70(
                UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile_KHRSimpleController_var
                );
    FUN_02f07e70(Liv_Lck_Telemetry_LckTelemetry_TelemetryData_var);
    DAT_071cd405 = 1;
  }
  local_70[0] = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  memset(auStack_2b0,0,0x210);
  local_2c0 = 0;
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  local_2f8[0] = 0;
  local_300 = 0;
  local_308 = 0;
  memset(auStack_518,0,0x210);
  uVar10 = FUN_03b59e58(2,*(undefined8 *)puVar3);
  FUN_062a6cd4(local_70,0,uVar10,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_037f26f8(param_2,&local_78,*(undefined8 *)PlayFab_ClientModels_GetTitlePublicKeyRequest_var);
  lVar12 = local_78;
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar11 = FUN_066c971c(lVar12,0,0);
  if ((uVar11 & 1) == 0) {
    if (local_78 != 0) goto LAB_06388b6c;
    lVar12 = 0;
LAB_06388bb8:
    lVar19 = 0;
  }
  else {
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(int *)(local_78 + 0x2c) == 1) goto LAB_06389ae4;
LAB_06388b6c:
    lVar12 = FUN_0637ea78(local_78,0);
    if (lVar12 == 0) goto LAB_06388bb8;
    uVar8 = FUN_06344ea0(lVar12,0,0);
    lVar19 = 0;
    if ((local_78 != 0) && (((uVar8 ^ 1) & 1) == 0)) {
      lVar19 = FUN_0637e8f4(local_78,0);
    }
  }
  lVar13 = local_78;
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar11 = FUN_066c971c(lVar13,0,0);
  if ((uVar11 & 1) == 0) {
    bVar5 = false;
  }
  else {
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    bVar5 = *(char *)(local_78 + 0x4c) != '\0';
  }
  if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  bVar6 = FUN_0638c7e8();
  lVar13 = FUN_0638870c();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (lVar19 == 0) {
LAB_063891f8:
    local_72c = -1;
  }
  else {
    if (local_78 == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      lVar13 = FUN_0637ea78(local_78,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar14 = (long *)thunk_FUN_02ebbee0(lVar13,0);
    }
    lVar13 = *(long *)PTR_DAT_06d38bf0;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar13 = *(long *)PTR_DAT_06d38bf0;
    }
    **(undefined1 **)(lVar13 + 0xb8) = 0;
    puVar3 = PTR_DAT_06d01eb0;
    if (*(int *)(lVar19 + 0x18) < 1) goto LAB_063891f8;
    local_72c = -1;
    bVar2 = false;
    iVar9 = 0;
    do {
      lVar13 = FUN_03fd09cc(lVar19,iVar9,*(undefined8 *)PTR_DAT_06d5ea50);
      if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar11 = FUN_066ca6a0(lVar13,0,0);
      if ((uVar11 & 1) == 0) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar11 = FUN_066c5d00(lVar13,0);
        if ((uVar11 & 1) != 0) {
          FUN_037f26f8(lVar13,&local_80,
                       *(undefined8 *)PlayFab_ClientModels_GetTitlePublicKeyRequest_var);
          if (local_80 == 0) {
            plVar15 = (long *)0x0;
          }
          else {
            lVar17 = FUN_0637ea78(local_80,0);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            plVar15 = (long *)thunk_FUN_02ebbee0(lVar17,0);
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar11 = FUN_0561ab0c(plVar15,plVar14,0);
          if ((uVar11 & 1) == 0) {
            if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            plVar15 = (long *)FUN_0637ea78(local_80,0);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar8 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
            lVar17 = local_80;
            if ((uVar8 >> 1 & 1) == 0) {
              lVar17 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,5);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              *(undefined8 *)(lVar17 + 0x20) =
                   *(undefined8 *)OVRSimpleJSON_JSONNode_KeyEnumerator_var;
              thunk_FUN_02f411dc();
              uVar10 = FUN_066cd398(lVar13,0);
              if (*(uint *)(lVar17 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              *(undefined8 *)(lVar17 + 0x28) = uVar10;
              thunk_FUN_02f411dc();
              if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              *(undefined8 *)(lVar17 + 0x30) =
                   *(undefined8 *)UnityEngine_InputSystem_Users_InputUser_UserData_var;
              thunk_FUN_02f411dc();
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              plVar15 = (long *)thunk_FUN_02ebbee0(lVar12,0);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar10 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
              if (*(uint *)(lVar17 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              *(undefined8 *)(lVar17 + 0x38) = uVar10;
              thunk_FUN_02f411dc();
              if (*(uint *)(lVar17 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              *(undefined8 *)(lVar17 + 0x40) =
                   *(undefined8 *)
                    UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile_KHRSimpleController_var
              ;
              thunk_FUN_02f411dc();
              uVar10 = FUN_0546583c(lVar17,0);
              if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_06694324(uVar10,0);
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar11 = FUN_066ca6a0(lVar17,0,0);
              if ((uVar11 & 1) == 0) {
                if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                if (*(int *)(local_80 + 0x2c) == 1) {
                  lVar13 = *(long *)PTR_DAT_06d38bf0;
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar13 = *(long *)PTR_DAT_06d38bf0;
                  }
                  bVar1 = **(byte **)(lVar13 + 0xb8);
                  bVar7 = FUN_0638c8f8();
                  **(byte **)(*(long *)PTR_DAT_06d38bf0 + 0xb8) = bVar1 | bVar7 & 1;
                  if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f080c0();
                  }
                  bVar5 = (bool)(bVar5 | *(char *)(local_80 + 0x4c) != '\0');
                  local_72c = iVar9;
                  goto LAB_063891d0;
                }
              }
              uVar10 = FUN_066cd398(lVar13,0);
              if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              local_728 = *(uint *)(local_80 + 0x2c);
              uVar16 = thunk_FUN_02ef1438(*(undefined8 *)DebugInputActions_InputActions_var,
                                          &local_728);
              uVar16 = FUN_0545c378(*(undefined8 *)
                                     UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_var,
                                    uVar16,0);
              uVar10 = FUN_05465734(*(undefined8 *)
                                     UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var
                                    ,uVar10,*(undefined8 *)PTR_DAT_06d09430,uVar16,0);
              if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_06694324(uVar10,0);
            }
          }
          else {
            lVar17 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,9);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar17 + 0x20) =
                 *(undefined8 *)UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_var;
            thunk_FUN_02f411dc();
            uVar10 = FUN_066cd398(lVar13,0);
            if (*(uint *)(lVar17 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar17 + 0x28) = uVar10;
            thunk_FUN_02f411dc();
            if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar17 + 0x30) =
                 *(undefined8 *)Liv_Lck_Telemetry_LckTelemetry_TelemetryData_var;
            thunk_FUN_02f411dc();
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar10 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
            if (*(uint *)(lVar17 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar17 + 0x38) = uVar10;
            thunk_FUN_02f411dc();
            if (*(uint *)(lVar17 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar17 + 0x40) =
                 *(undefined8 *)UnityEngine_InputSystem_Users_InputUser_GlobalState_var;
            thunk_FUN_02f411dc();
            uVar10 = FUN_066cd398(param_2,0);
            if (*(uint *)(lVar17 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar17 + 0x48) = uVar10;
            thunk_FUN_02f411dc();
            if (*(uint *)(lVar17 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar17 + 0x50) =
                 *(undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
            thunk_FUN_02f411dc();
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar10 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
            if (*(uint *)(lVar17 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar17 + 0x58) = uVar10;
            thunk_FUN_02f411dc();
            if (*(uint *)(lVar17 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar17 + 0x60) = *(undefined8 *)OVRSimpleJSON_JSONNode_Enumerator_var;
            thunk_FUN_02f411dc();
            uVar10 = FUN_0546583c(lVar17,0);
            if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_06694324(uVar10,0);
          }
        }
      }
      else {
        bVar2 = true;
      }
LAB_063891d0:
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar19 + 0x18));
    if (bVar2) {
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_0637ed5c(local_78,0);
    }
  }
  iVar9 = FUN_066d09a8(0);
  if (local_78 == 0) {
    cVar20 = '\x01';
  }
  else {
    cVar20 = *(char *)(local_78 + 0x5b);
  }
  if (*(int *)(*(long *)PTR_DAT_06d962e8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar12 = FUN_0627df04(0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_062791a8(lVar12,param_2,cVar20 != '\0',0);
  if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_03f1f26c(&local_728,*(long *)(lVar12 + 0x10),
               *(undefined8 *)UnityEngine_InputSystem_LowLevel_InputStateHistory_Enumerator_var);
  puVar3 = PTR_DAT_06d38be0;
  bVar2 = false;
  local_a0 = CONCAT44(uStack_724,local_728);
  bVar1 = bVar5 & iVar9 != 8;
  uStack_98 = uStack_720;
  local_88 = lStack_710;
  uStack_90 = local_718;
  while (uVar11 = FUN_04dd7bd4(&local_a0,
                               *(undefined8 *)
                                UnityEngine_InputSystem_InputManager_StateChangeMonitorTimeout_var),
        lVar13 = local_88, puVar4 = PTR_DAT_06d962e8, (uVar11 & 1) != 0) {
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar11 = FUN_06278cf8(local_88,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_0638c9c4(param_2,lVar13);
      bVar2 = true;
    }
    lVar17 = *(long *)puVar3;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar17 = *(long *)puVar3;
    }
    local_728 = local_728 & 0xffffff00;
    FUN_062a6cd4(&local_728,0,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x10),0);
    local_2f8[0] = (undefined1)local_728;
    FUN_066ec2cc(local_68,param_2,0);
    FUN_062a6cd8(local_2f8,0);
    lVar17 = local_78;
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06389fe8(param_2,lVar17);
    FUN_0638a540(param_2,local_78,0,auStack_2b0);
    memcpy(&local_728,auStack_2b0,0x210);
    local_2c0 = local_620;
    uStack_2d8 = uStack_638;
    local_2e0 = local_640;
    uStack_2c8 = uStack_628;
    uStack_2d0 = uStack_630;
    uStack_2e8 = uStack_648;
    local_2f0 = local_650;
    uVar11 = FUN_06278cf8(lVar13,0);
    if ((uVar11 & 1) != 0) {
      local_138[0] = lVar13;
      thunk_FUN_02f411dc(local_138,lVar13);
      local_300 = local_138[0];
      if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_0638cb68(auStack_2b0,&local_300);
      FUN_06279aec(lVar12,local_138[0],param_2,0);
      uVar10 = FUN_0638cf04(auStack_2b0);
      if (*(int *)(*(long *)PlayFab_ClientModels_RegisterPlayFabUserResult_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_0638cf80(param_2,uVar10);
    }
    lVar17 = local_78;
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0638a99c(param_2,lVar17,local_72c == -1,auStack_2b0);
    if (*(int *)(*(long *)PlayFab_ClientModels_ReportPlayerClientResult_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06929f88(param_2,0);
    local_13f = **(byte **)(*(long *)PTR_DAT_06d38bf0 + 0xb8) | local_13f;
    uVar11 = FUN_06278cf8(lVar13,0);
    bVar7 = bVar6;
    if ((uVar11 & 1) != 0) {
      bVar7 = FUN_0627c850(lVar13,0);
    }
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar17 = FUN_0638870c();
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if ((bVar7 & *(char *)(lVar17 + 0x55) != '\0') == 0) {
Unity_VisualScripting_ListCloner___ctor:
      bVar7 = 0;
    }
    else {
      uVar10 = FUN_06690874(param_2,0);
      if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar11 = FUN_066ca6a0(uVar10,0,0);
      if (((uVar11 & 1) == 0) ||
         ((iVar9 = FUN_06690168(param_2,0), iVar9 != 1 &&
          (iVar9 = FUN_06690168(param_2,0), iVar9 != 8))))
      goto Unity_VisualScripting_ListCloner___ctor;
      bVar7 = local_142 & 1;
    }
    uVar10 = local_68;
    local_13d = bVar7;
    local_127 = bVar1;
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0638b114(uVar10,auStack_2b0);
    lVar17 = *(long *)puVar3;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar17 = *(long *)puVar3;
    }
    local_728 = local_728 & 0xffffff00;
    FUN_062a6cd4(&local_728,0,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x18),0);
    local_2f8[0] = (undefined1)local_728;
    FUN_066ec518(local_68,param_2,0);
    FUN_062a6cd8(local_2f8,0);
    if (local_138[0] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar11 = FUN_06278cf8(local_138[0],0);
    if ((uVar11 & 1) != 0) {
      uVar10 = FUN_0638cf04(auStack_2b0);
      if (*(int *)(*(long *)PlayFab_ClientModels_RegisterPlayFabUserResult_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_0638d050(param_2,uVar10);
    }
    if (local_72c != -1) {
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (0 < *(int *)(lVar19 + 0x18)) {
        iVar9 = 0;
        do {
          lVar17 = FUN_03fd09cc(lVar19,iVar9,*(undefined8 *)PTR_DAT_06d5ea50);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar11 = FUN_066c5d00(lVar17,0);
          if ((uVar11 & 1) != 0) {
            FUN_037f26f8(lVar17,&local_308,
                         *(undefined8 *)PlayFab_ClientModels_GetTitlePublicKeyRequest_var);
            lVar18 = local_308;
            if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar11 = FUN_066c971c(lVar18,0,0);
            if ((uVar11 & 1) != 0) {
              memcpy(auStack_518,auStack_2b0,0x210);
              local_458[0] = lVar17;
              thunk_FUN_02f411dc(local_458,lVar17);
              local_310 = param_2;
              thunk_FUN_02f411dc(&local_310,param_2);
              if (local_308 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar10 = FUN_0637e808(local_308,0);
              if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_0638c9c4(uVar10,lVar13);
              lVar18 = *(long *)puVar3;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
                lVar18 = *(long *)puVar3;
              }
              local_728 = local_728 & 0xffffff00;
              FUN_062a6cd4(&local_728,0,*(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x10),0);
              local_2f8[0] = (undefined1)local_728;
              FUN_066ec2cc(local_68,lVar17,0);
              FUN_062a6cd8(local_2f8,0);
              if (*(int *)(*(long *)PlayFab_ClientModels_ReportPlayerClientResult_var + 0xe0) == 0)
              {
                thunk_FUN_02f12b58();
              }
              FUN_06929f88(lVar17,0);
              lVar18 = local_308;
              if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_06389fe8(lVar17,lVar18);
              FUN_0638a99c(lVar17,local_308,local_72c == iVar9,auStack_518);
              local_3a5 = bVar7;
              local_38f = bVar1;
              FUN_06279aec(lVar12,local_3a0,lVar17,0);
              FUN_0638b114(local_68,auStack_518);
              lVar18 = *(long *)puVar3;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
                lVar18 = *(long *)puVar3;
              }
              local_728 = local_728 & 0xffffff00;
              FUN_062a6cd4(&local_728,0,*(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x18),0);
              local_2f8[0] = (undefined1)local_728;
              FUN_066ec518(local_68,lVar17,0);
              FUN_062a6cd8(local_2f8,0);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(lVar19 + 0x18));
      }
    }
    if (local_138[0] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar11 = FUN_06278cf8(local_138[0],0);
    if ((uVar11 & 1) != 0) {
      local_1a8 = local_2c0;
      uStack_1c0 = uStack_2d8;
      local_1c8 = local_2e0;
      uStack_1b0 = uStack_2c8;
      uStack_1b8 = uStack_2d0;
      uStack_1d0 = uStack_2e8;
      local_1d8 = local_2f0;
    }
  }
  FUN_04dd7bd0(&local_a0,
               *(undefined8 *)UnityEngine_InputSystem_InputManager_StateChangeMonitorListener_var);
  if (bVar2) {
    if (*(int *)(*(long *)PTR_DAT_06d96ab0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar10 = FUN_062925b4(0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0627e0cc(uVar10,param_2,0);
    if (*(int *)(*(long *)PTR_DAT_06d96a10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066f0aec(&local_68,uVar10,0);
    FUN_066f0470(&local_68,0);
    FUN_062926f4(uVar10,0);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0627dffc(0);
LAB_06389ae4:
  FUN_062a6cd8(local_70,0);
  return;
}


