/*
FUNCTION_NAME: Unity.VisualScripting.GradientCloner$$.ctor
ENTRY_POINT: 06388cb0
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


/* WARNING: Removing unreachable block (ram,0x06389b34) */
/* WARNING: Removing unreachable block (ram,0x06389b14) */
/* WARNING: Removing unreachable block (ram,0x06389390) */
/* WARNING: Removing unreachable block (ram,0x0638966c) */
/* WARNING: Removing unreachable block (ram,0x06389b2c) */
/* WARNING: Removing unreachable block (ram,0x0638981c) */
/* WARNING: Removing unreachable block (ram,0x06389ba0) */
/* WARNING: Removing unreachable block (ram,0x06389918) */
/* WARNING: Removing unreachable block (ram,0x063899fc) */
/* WARNING: Removing unreachable block (ram,0x06389b20) */
/* WARNING: Removing unreachable block (ram,0x06389a3c) */

void Unity_VisualScripting_GradientCloner___ctor(void)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x28;
  ulong unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
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
  
  iVar7 = 0;
  do {
                    /* try { // try from 06388cc0 to 06488ccb has its CatchHandler @ 06388cf8 */
    lVar8 = FUN_03fd09cc();
                    /* try { // try from 06388ccc to 06488ceb has its CatchHandler @ 06388b1c */
    if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
                    /* try { // try from 06388cec to 06488cef has its CatchHandler @ 06388cf4 */
                    /* try { // try from 06388cf0 to 06488d0b has its CatchHandler @ 06388b1c */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 06388cec with catch @ 06388cf4
                        */
    uVar9 = FUN_066ca6a0(lVar8,0,0);
    if ((uVar9 & 1) == 0) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar9 = FUN_066c5d00(lVar8,0);
      if ((uVar9 & 1) != 0) {
        FUN_037f26f8(lVar8,&stack0x00000700,
                     *(undefined8 *)PlayFab_ClientModels_GetTitlePublicKeyRequest_var);
        if (in_stack_00000700 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          lVar10 = FUN_0637ea78(in_stack_00000700,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          plVar11 = (long *)thunk_FUN_02ebbee0(lVar10,0);
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar9 = FUN_0561ab0c(plVar11);
        if ((uVar9 & 1) == 0) {
          if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          plVar11 = (long *)FUN_0637ea78(in_stack_00000700,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar6 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          if ((uVar6 >> 1 & 1) == 0) {
            lVar10 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,5);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)OVRSimpleJSON_JSONNode_KeyEnumerator_var
            ;
            thunk_FUN_02f411dc();
            uVar14 = FUN_066cd398(lVar8,0);
            if (*(uint *)(lVar10 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar10 + 0x28) = uVar14;
            thunk_FUN_02f411dc();
            if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar10 + 0x30) =
                 *(undefined8 *)UnityEngine_InputSystem_Users_InputUser_UserData_var;
            thunk_FUN_02f411dc();
            if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            plVar11 = (long *)thunk_FUN_02ebbee0();
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar14 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
            if (*(uint *)(lVar10 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar10 + 0x38) = uVar14;
            thunk_FUN_02f411dc();
            if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            *(undefined8 *)(lVar10 + 0x40) =
                 *(undefined8 *)
                  UnityEngine_XR_OpenXR_Features_Interactions_KHRSimpleControllerProfile_KHRSimpleController_var
            ;
            thunk_FUN_02f411dc();
            uVar14 = FUN_0546583c(lVar10,0);
            if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_06694324(uVar14,0);
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
                lVar8 = *(long *)PTR_DAT_06d38bf0;
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                  lVar8 = *(long *)PTR_DAT_06d38bf0;
                }
                bVar1 = **(byte **)(lVar8 + 0xb8);
                bVar5 = FUN_0638c8f8();
                **(byte **)(*(long *)PTR_DAT_06d38bf0 + 0xb8) = bVar1 | bVar5 & 1;
                in_stack_00000050._4_4_ = iVar7;
                if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                goto LAB_063891d0;
              }
            }
            uVar14 = FUN_066cd398(lVar8,0);
            if (in_stack_00000700 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            in_stack_00000058 = *(uint *)(in_stack_00000700 + 0x2c);
            uVar12 = thunk_FUN_02ef1438(*(undefined8 *)DebugInputActions_InputActions_var,
                                        &stack0x00000058);
            uVar12 = FUN_0545c378(*(undefined8 *)
                                   UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_var,uVar12
                                  ,0);
            uVar14 = FUN_05465734(*(undefined8 *)
                                   UnityEngine_InputSystem_Users_InputUser_OngoingAccountSelection_var
                                  ,uVar14,*(undefined8 *)PTR_DAT_06d09430,uVar12,0);
            if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_06694324(uVar14,0);
          }
        }
        else {
          lVar10 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,9);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          *(undefined8 *)(lVar10 + 0x20) =
               *(undefined8 *)UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_var;
          thunk_FUN_02f411dc();
          uVar14 = FUN_066cd398(lVar8,0);
          if (*(uint *)(lVar10 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          *(undefined8 *)(lVar10 + 0x28) = uVar14;
          thunk_FUN_02f411dc();
          if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          *(undefined8 *)(lVar10 + 0x30) =
               *(undefined8 *)Liv_Lck_Telemetry_LckTelemetry_TelemetryData_var;
          thunk_FUN_02f411dc();
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar14 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
          if (*(uint *)(lVar10 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          *(undefined8 *)(lVar10 + 0x38) = uVar14;
          thunk_FUN_02f411dc();
          if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          *(undefined8 *)(lVar10 + 0x40) =
               *(undefined8 *)UnityEngine_InputSystem_Users_InputUser_GlobalState_var;
          thunk_FUN_02f411dc();
          uVar14 = FUN_066cd398();
          if (*(uint *)(lVar10 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          *(undefined8 *)(lVar10 + 0x48) = uVar14;
          thunk_FUN_02f411dc();
          if (*(uint *)(lVar10 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)OVRSimpleJSON_JSONNode_ValueEnumerator_var
          ;
          thunk_FUN_02f411dc();
          if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar14 = (**(code **)(*unaff_x28 + 0x1b8))();
          if (*(uint *)(lVar10 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          *(undefined8 *)(lVar10 + 0x58) = uVar14;
          thunk_FUN_02f411dc();
          if (*(uint *)(lVar10 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)OVRSimpleJSON_JSONNode_Enumerator_var;
          thunk_FUN_02f411dc();
          uVar14 = FUN_0546583c(lVar10,0);
          if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_06694324(uVar14,0);
        }
      }
    }
    else {
      unaff_x29 = 1;
    }
LAB_063891d0:
    iVar7 = iVar7 + 1;
    if (*(int *)(unaff_x20 + 0x18) <= iVar7) {
      if ((unaff_x29 & 1) != 0) {
        if (in_stack_00000708 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_0637ed5c(in_stack_00000708,0);
      }
      FUN_066d09a8(0);
      if (*(int *)(*(long *)PTR_DAT_06d962e8 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar8 = FUN_0627df04(0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_062791a8(lVar8);
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_03f1f26c(&stack0x00000058,*(long *)(lVar8 + 0x10),
                   *(undefined8 *)UnityEngine_InputSystem_LowLevel_InputStateHistory_Enumerator_var)
      ;
      lVar10 = in_stack_00000070;
      puVar3 = PTR_DAT_06d38be0;
      bVar2 = false;
      while( true ) {
        uVar9 = FUN_04dd7bd4(&stack0x000006e0,
                             *(undefined8 *)
                              UnityEngine_InputSystem_InputManager_StateChangeMonitorTimeout_var);
        puVar4 = PTR_DAT_06d962e8;
        if ((uVar9 & 1) == 0) {
          FUN_04dd7bd0(&stack0x000006e0,
                       *(undefined8 *)
                        UnityEngine_InputSystem_InputManager_StateChangeMonitorListener_var);
          if (bVar2) {
            if (*(int *)(*(long *)PTR_DAT_06d96ab0 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar14 = FUN_062925b4(0);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_0627e0cc(uVar14);
            if (*(int *)(*(long *)PTR_DAT_06d96a10 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_066f0aec(&stack0x00000718,uVar14,0);
            FUN_066f0470(&stack0x00000718,0);
            FUN_062926f4(uVar14,0);
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_0627dffc(0);
          FUN_062a6cd8(&stack0x00000710,0);
          return;
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar9 = FUN_06278cf8(lVar10,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_0638c9c4();
          bVar2 = true;
        }
        lVar13 = *(long *)puVar3;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar13 = *(long *)puVar3;
        }
        in_stack_00000058 = in_stack_00000058 & 0xffffff00;
        FUN_062a6cd4(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),0);
        FUN_066ec2cc(in_stack_00000718);
        FUN_062a6cd8(&stack0x00000488,0);
        if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_06389fe8();
        FUN_0638a540();
        memcpy(&stack0x00000058,&stack0x000004d0,0x210);
        uVar9 = FUN_06278cf8(lVar10,0);
        if ((uVar9 & 1) != 0) {
          thunk_FUN_02f411dc(&stack0x00000648,lVar10);
          if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_0638cb68(&stack0x000004d0,&stack0x00000480);
          FUN_06279aec(lVar8,lVar10);
          FUN_0638cf04(&stack0x000004d0);
          if (*(int *)(*(long *)PlayFab_ClientModels_RegisterPlayFabUserResult_var + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_0638cf80();
          in_stack_00000648 = lVar10;
        }
        if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_0638a99c();
        if (*(int *)(*(long *)PlayFab_ClientModels_ReportPlayerClientResult_var + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_06929f88();
        uVar9 = FUN_06278cf8(lVar10,0);
        uVar6 = in_stack_00000030._4_4_;
        if ((uVar9 & 1) != 0) {
          uVar6 = FUN_0627c850(lVar10,0);
        }
        if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        lVar13 = FUN_0638870c();
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if ((uVar6 & *(char *)(lVar13 + 0x55) != '\0') != 0) {
          uVar14 = FUN_06690874();
          if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar9 = FUN_066ca6a0(uVar14,0,0);
          if (((uVar9 & 1) != 0) && (iVar7 = FUN_06690168(), iVar7 != 1)) {
            FUN_06690168();
          }
        }
        if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_0638b114(in_stack_00000718,&stack0x000004d0);
        lVar13 = *(long *)puVar3;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar13 = *(long *)puVar3;
        }
        in_stack_00000058 = in_stack_00000058 & 0xffffff00;
        FUN_062a6cd4(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18),0);
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
        if (in_stack_00000050._4_4_ != -1) {
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (0 < *(int *)(unaff_x20 + 0x18)) {
            iVar7 = 0;
            do {
              lVar13 = FUN_03fd09cc();
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar9 = FUN_066c5d00(lVar13,0);
              if ((uVar9 & 1) != 0) {
                FUN_037f26f8(lVar13,&stack0x00000478,
                             *(undefined8 *)PlayFab_ClientModels_GetTitlePublicKeyRequest_var);
                if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                uVar9 = FUN_066c971c(in_stack_00000478,0,0);
                if ((uVar9 & 1) != 0) {
                  memcpy(&stack0x00000268,&stack0x000004d0,0x210);
                  thunk_FUN_02f411dc(&stack0x00000328,lVar13);
                  thunk_FUN_02f411dc(&stack0x00000470);
                  if (in_stack_00000478 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f080c0();
                  }
                  uVar14 = FUN_0637e808(in_stack_00000478,0);
                  if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  FUN_0638c9c4(uVar14,lVar10);
                  lVar15 = *(long *)puVar3;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar15 = *(long *)puVar3;
                  }
                  in_stack_00000058 = in_stack_00000058 & 0xffffff00;
                  FUN_062a6cd4(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x10),0
                              );
                  FUN_066ec2cc(in_stack_00000718,lVar13,0);
                  FUN_062a6cd8(&stack0x00000488,0);
                  if (*(int *)(*(long *)PlayFab_ClientModels_ReportPlayerClientResult_var + 0xe0) ==
                      0) {
                    thunk_FUN_02f12b58();
                  }
                  FUN_06929f88(lVar13,0);
                  if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  FUN_06389fe8(lVar13,in_stack_00000478);
                  FUN_0638a99c(lVar13,in_stack_00000478,in_stack_00000050._4_4_ == iVar7,
                               &stack0x00000268);
                  FUN_06279aec(lVar8,in_stack_000003e0,lVar13,0);
                  FUN_0638b114(in_stack_00000718,&stack0x00000268);
                  lVar15 = *(long *)puVar3;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar15 = *(long *)puVar3;
                  }
                  in_stack_00000058 = in_stack_00000058 & 0xffffff00;
                  FUN_062a6cd4(&stack0x00000058,0,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x18),0
                              );
                  FUN_066ec518(in_stack_00000718,lVar13,0);
                  FUN_062a6cd8(&stack0x00000488,0);
                }
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < *(int *)(unaff_x20 + 0x18));
          }
        }
        if (in_stack_00000648 == 0) break;
        FUN_06278cf8(in_stack_00000648,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  } while( true );
}


