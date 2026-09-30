/*
FUNCTION_NAME: Unity.VisualScripting.FakeSerializationCloner.<>c$$.ctor
ENTRY_POINT: 06388b24
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_5;eye_or_gaze_keyword_boost_only
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

void Unity_VisualScripting_FakeSerializationCloner_<>c___ctor(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  int iStack0000000000000054;
  uint in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined8 in_stack_000003e0;
  long in_stack_00000478;
  long in_stack_00000648;
  long in_stack_00000700;
  long in_stack_00000708;
  undefined8 in_stack_00000718;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar9 = FUN_066c971c(in_stack_00000708,0,0);
  if ((uVar9 & 1) == 0) {
    if (in_stack_00000708 != 0) goto LAB_06388b6c;
    lVar10 = 0;
LAB_06388bb8:
    lVar18 = 0;
  }
  else {
    if (in_stack_00000708 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(int *)(in_stack_00000708 + 0x2c) == 1) goto LAB_06389ae4;
LAB_06388b6c:
    lVar10 = FUN_0637ea78(in_stack_00000708,0);
    if (lVar10 == 0) goto LAB_06388bb8;
    uVar7 = FUN_06344ea0(lVar10,0,0);
    lVar18 = 0;
    if ((in_stack_00000708 != 0) && (((uVar7 ^ 1) & 1) == 0)) {
      lVar18 = FUN_0637e8f4(in_stack_00000708,0);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar9 = FUN_066c971c(in_stack_00000708,0,0);
  if (((uVar9 & 1) != 0) && (in_stack_00000708 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  bVar4 = FUN_0638c7e8();
  lVar11 = FUN_0638870c();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(long *)(lVar11 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (lVar18 == 0) {
LAB_063891f8:
    iStack0000000000000054 = -1;
  }
  else {
    if (in_stack_00000708 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      lVar11 = FUN_0637ea78(in_stack_00000708,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar12 = (long *)thunk_FUN_02ebbee0(lVar11,0);
    }
    lVar11 = *(long *)PTR_DAT_06d38bf0;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar11 = *(long *)PTR_DAT_06d38bf0;
    }
    **(undefined1 **)(lVar11 + 0xb8) = 0;
    puVar2 = PTR_DAT_06d01eb0;
    if (*(int *)(lVar18 + 0x18) < 1) goto LAB_063891f8;
    iStack0000000000000054 = -1;
    bVar1 = false;
    iVar8 = 0;
    do {
      lVar11 = FUN_03fd09cc(lVar18,iVar8,*(undefined8 *)PTR_DAT_06d5ea50);
      if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_066ca6a0(lVar11,0,0);
      if ((uVar9 & 1) == 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar9 = FUN_066c5d00(lVar11,0);
        if ((uVar9 & 1) != 0) {
          FUN_037f26f8(lVar11,&stack0x00000700,
                       *(undefined8 *)PlayFab_ClientModels_GetTitlePublicKeyRequest_var);
          if (in_stack_00000700 == 0) {
            plVar13 = (long *)0x0;
          }
          else {
            lVar15 = FUN_0637ea78(in_stack_00000700,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            plVar13 = (long *)thunk_FUN_02ebbee0(lVar15,0);
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar9 = FUN_0561ab0c(plVar13,plVar12,0);
          if ((uVar9 & 1) == 0) {
            if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            plVar13 = (long *)FUN_0637ea78(in_stack_00000700,0);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
            if ((uVar7 >> 1 & 1) == 0) {
              lVar15 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,5);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              *(undefined8 *)(lVar15 + 0x20) =
                   *(undefined8 *)OVRSimpleJSON_JSONNode_KeyEnumerator_var;
              thunk_FUN_02f411dc();
              uVar16 = FUN_066cd398(lVar11,0);
              if (*(uint *)(lVar15 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              *(undefined8 *)(lVar15 + 0x28) = uVar16;
              thunk_FUN_02f411dc();
              if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              *(undefined8 *)(lVar15 + 0x30) =
                   *(undefined8 *)UnityEngine_InputSystem_Users_InputUser_UserData_var;
              thunk_FUN_02f411dc();
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              plVar13 = (long *)thunk_FUN_02ebbee0(lVar10,0);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar16 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
              if (*(uint *)(lVar15 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              *(undefined8 *)(lVar15 + 0x38) = uVar16;
              thunk_FUN_02f411dc();
              if (*(uint *)(lVar15 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              *(undefined8 *)(lVar15 + 0x40) =
                   *(undefined8 *)
                    UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile_KHRSimpleController_var
              ;
              thunk_FUN_02f411dc();
              uVar16 = FUN_0546583c(lVar15,0);
              if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_06694324(uVar16,0);
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar9 = FUN_066ca6a0(in_stack_00000700,0,0);
              if ((uVar9 & 1) == 0) {
                if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                if (*(int *)(in_stack_00000700 + 0x2c) == 1) {
                  lVar11 = *(long *)PTR_DAT_06d38bf0;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar11 = *(long *)PTR_DAT_06d38bf0;
                  }
                  bVar6 = **(byte **)(lVar11 + 0xb8);
                  bVar5 = FUN_0638c8f8();
                  **(byte **)(*(long *)PTR_DAT_06d38bf0 + 0xb8) = bVar6 | bVar5 & 1;
                  iStack0000000000000054 = iVar8;
                  if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f080c0();
                  }
                  goto LAB_063891d0;
                }
              }
              uVar16 = FUN_066cd398(lVar11,0);
              if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              in_stack_00000058 = *(uint *)(in_stack_00000700 + 0x2c);
              uVar14 = thunk_FUN_02ef1438(*(undefined8 *)DebugInputActions_InputActions_var,
                                          &stack0x00000058);
              uVar14 = FUN_0545c378(*(undefined8 *)
                                     UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_var,
                                    uVar14,0);
              uVar16 = FUN_05465734(*(undefined8 *)
                                     UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var
                                    ,uVar16,*(undefined8 *)PTR_DAT_06d09430,uVar14,0);
              if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_06694324(uVar16,0);
            }
          }
          else {
            lVar15 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,9);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar15 + 0x20) =
                 *(undefined8 *)UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_var;
            thunk_FUN_02f411dc();
            uVar16 = FUN_066cd398(lVar11,0);
            if (*(uint *)(lVar15 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar15 + 0x28) = uVar16;
            thunk_FUN_02f411dc();
            if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar15 + 0x30) =
                 *(undefined8 *)Liv_Lck_Telemetry_LckTelemetry_TelemetryData_var;
            thunk_FUN_02f411dc();
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar16 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
            if (*(uint *)(lVar15 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar15 + 0x38) = uVar16;
            thunk_FUN_02f411dc();
            if (*(uint *)(lVar15 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar15 + 0x40) =
                 *(undefined8 *)UnityEngine_InputSystem_Users_InputUser_GlobalState_var;
            thunk_FUN_02f411dc();
            uVar16 = FUN_066cd398();
            if (*(uint *)(lVar15 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar15 + 0x48) = uVar16;
            thunk_FUN_02f411dc();
            if (*(uint *)(lVar15 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar15 + 0x50) =
                 *(undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var;
            thunk_FUN_02f411dc();
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar16 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
            if (*(uint *)(lVar15 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar15 + 0x58) = uVar16;
            thunk_FUN_02f411dc();
            if (*(uint *)(lVar15 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)OVRSimpleJSON_JSONNode_Enumerator_var;
            thunk_FUN_02f411dc();
            uVar16 = FUN_0546583c(lVar15,0);
            if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_06694324(uVar16,0);
          }
        }
      }
      else {
        bVar1 = true;
      }
LAB_063891d0:
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar18 + 0x18));
    if (bVar1) {
      if (in_stack_00000708 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_0637ed5c(in_stack_00000708,0);
    }
  }
  FUN_066d09a8(0);
  if (*(int *)(*(long *)PTR_DAT_06d962e8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar10 = FUN_0627df04(0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_062791a8(lVar10);
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_03f1f26c(&stack0x00000058,*(long *)(lVar10 + 0x10),
               *(undefined8 *)UnityEngine_InputSystem_LowLevel_InputStateHistory_Enumerator_var);
  lVar11 = in_stack_00000070;
  puVar2 = PTR_DAT_06d38be0;
  bVar1 = false;
  while (uVar9 = FUN_04dd7bd4(&stack0x000006e0,
                              *(undefined8 *)
                               UnityEngine_InputSystem_InputManager_StateChangeMonitorTimeout_var),
        puVar3 = PTR_DAT_06d962e8, (uVar9 & 1) != 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar9 = FUN_06278cf8(lVar11,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_0638c9c4();
      bVar1 = true;
    }
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar15 = *(long *)puVar2;
    }
    in_stack_00000058 = in_stack_00000058 & 0xffffff00;
    FUN_062a6cd4(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10),0);
    FUN_066ec2cc(in_stack_00000718);
    FUN_062a6cd8(&stack0x00000488,0);
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06389fe8();
    FUN_0638a540();
    memcpy(&stack0x00000058,&stack0x000004d0,0x210);
    uVar9 = FUN_06278cf8(lVar11,0);
    if ((uVar9 & 1) != 0) {
      thunk_FUN_02f411dc(&stack0x00000648,lVar11);
      if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_0638cb68(&stack0x000004d0,&stack0x00000480);
      FUN_06279aec(lVar10,lVar11);
      FUN_0638cf04(&stack0x000004d0);
      if (*(int *)(*(long *)PlayFab_ClientModels_RegisterPlayFabUserResult_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_0638cf80();
      in_stack_00000648 = lVar11;
    }
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0638a99c();
    if (*(int *)(*(long *)PlayFab_ClientModels_ReportPlayerClientResult_var + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06929f88();
    uVar9 = FUN_06278cf8(lVar11,0);
    bVar6 = bVar4;
    if ((uVar9 & 1) != 0) {
      bVar6 = FUN_0627c850(lVar11,0);
    }
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar15 = FUN_0638870c();
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if ((bVar6 & *(char *)(lVar15 + 0x55) != '\0') != 0) {
      uVar16 = FUN_06690874();
      if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar9 = FUN_066ca6a0(uVar16,0,0);
      if (((uVar9 & 1) != 0) && (iVar8 = FUN_06690168(), iVar8 != 1)) {
        FUN_06690168();
      }
    }
    if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0638b114(in_stack_00000718,&stack0x000004d0);
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar15 = *(long *)puVar2;
    }
    in_stack_00000058 = in_stack_00000058 & 0xffffff00;
    FUN_062a6cd4(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x18),0);
    FUN_066ec518(in_stack_00000718);
    FUN_062a6cd8(&stack0x00000488,0);
    if (in_stack_00000648 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar9 = FUN_06278cf8(in_stack_00000648,0);
    if ((uVar9 & 1) != 0) {
      FUN_0638cf04(&stack0x000004d0);
      if (*(int *)(*(long *)PlayFab_ClientModels_RegisterPlayFabUserResult_var + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_0638d050();
    }
    if (iStack0000000000000054 != -1) {
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (0 < *(int *)(lVar18 + 0x18)) {
        iVar8 = 0;
        do {
          lVar15 = FUN_03fd09cc(lVar18,iVar8,*(undefined8 *)PTR_DAT_06d5ea50);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar9 = FUN_066c5d00(lVar15,0);
          if ((uVar9 & 1) != 0) {
            FUN_037f26f8(lVar15,&stack0x00000478,
                         *(undefined8 *)PlayFab_ClientModels_GetTitlePublicKeyRequest_var);
            if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar9 = FUN_066c971c(in_stack_00000478,0,0);
            if ((uVar9 & 1) != 0) {
              memcpy(&stack0x00000268,&stack0x000004d0,0x210);
              thunk_FUN_02f411dc(&stack0x00000328,lVar15);
              thunk_FUN_02f411dc(&stack0x00000470);
              if (in_stack_00000478 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar16 = FUN_0637e808(in_stack_00000478,0);
              if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_0638c9c4(uVar16,lVar11);
              lVar17 = *(long *)puVar2;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
                lVar17 = *(long *)puVar2;
              }
              in_stack_00000058 = in_stack_00000058 & 0xffffff00;
              FUN_062a6cd4(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x10),0);
              FUN_066ec2cc(in_stack_00000718,lVar15,0);
              FUN_062a6cd8(&stack0x00000488,0);
              if (*(int *)(*(long *)PlayFab_ClientModels_ReportPlayerClientResult_var + 0xe0) == 0)
              {
                thunk_FUN_02f12b58();
              }
              FUN_06929f88(lVar15,0);
              if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_06389fe8(lVar15,in_stack_00000478);
              FUN_0638a99c(lVar15,in_stack_00000478,iStack0000000000000054 == iVar8,&stack0x00000268
                          );
              FUN_06279aec(lVar10,in_stack_000003e0,lVar15,0);
              FUN_0638b114(in_stack_00000718,&stack0x00000268);
              lVar17 = *(long *)puVar2;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
                lVar17 = *(long *)puVar2;
              }
              in_stack_00000058 = in_stack_00000058 & 0xffffff00;
              FUN_062a6cd4(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x18),0);
              FUN_066ec518(in_stack_00000718,lVar15,0);
              FUN_062a6cd8(&stack0x00000488,0);
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar18 + 0x18));
      }
    }
    if (in_stack_00000648 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_06278cf8(in_stack_00000648,0);
  }
  FUN_04dd7bd0(&stack0x000006e0,
               *(undefined8 *)UnityEngine_InputSystem_InputManager_StateChangeMonitorListener_var);
  if (bVar1) {
    if (*(int *)(*(long *)PTR_DAT_06d96ab0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar16 = FUN_062925b4(0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_0627e0cc(uVar16);
    if (*(int *)(*(long *)PTR_DAT_06d96a10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066f0aec(&stack0x00000718,uVar16,0);
    FUN_066f0470(&stack0x00000718,0);
    FUN_062926f4(uVar16,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0627dffc(0);
LAB_06389ae4:
  FUN_062a6cd8(&stack0x00000710,0);
  return;
}


