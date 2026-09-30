/*
FUNCTION_NAME: System.Diagnostics.Process$$GetProcessById
ENTRY_POINT: 0392d73c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 186
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0392ec98) */

void System_Diagnostics_Process__GetProcessById(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar22;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  int iVar23;
  long *plVar24;
  long *plVar25;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xe10));
  thunk_FUN_01efb3a4(StringLiteral_3656);
  thunk_FUN_01efb3a4(StringLiteral_3657);
  thunk_FUN_01efb3a4(StringLiteral_3658);
  thunk_FUN_01efb3a4(StringLiteral_3659);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__);
  thunk_FUN_01efb3a4(StringLiteral_3660);
  thunk_FUN_01efb3a4(StringLiteral_3661);
  thunk_FUN_01efb3a4(StringLiteral_3662);
  thunk_FUN_01efb3a4(StringLiteral_3663);
  thunk_FUN_01efb3a4(StringLiteral_3664);
  thunk_FUN_01efb3a4(StringLiteral_3665);
  thunk_FUN_01efb3a4(StringLiteral_3666);
  thunk_FUN_01efb3a4(StringLiteral_3667);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                    );
  thunk_FUN_01efb3a4(StringLiteral_3668);
  thunk_FUN_01efb3a4(StringLiteral_3669);
  thunk_FUN_01efb3a4(StringLiteral_3670);
  thunk_FUN_01efb3a4(StringLiteral_3671);
  thunk_FUN_01efb3a4(StringLiteral_3672);
  thunk_FUN_01efb3a4(StringLiteral_3673);
  thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__);
  thunk_FUN_01efb3a4(StringLiteral_3674);
  thunk_FUN_01efb3a4(StringLiteral_3675);
  thunk_FUN_01efb3a4(StringLiteral_3676);
  *(undefined1 *)(unaff_x24 + 0x2c7) = 1;
  uVar12 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_02b53168(uVar12,*unaff_x19);
  puVar1 = Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__;
  **(undefined8 **)
    (*(long *)Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__ + 0xb8
    ) = uVar12;
  thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar12);
  lVar13 = thunk_FUN_01f117cc(*unaff_x22);
  FUN_02ee7c10(lVar13,*unaff_x21);
  uVar12 = *unaff_x20;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar12 = FUN_03579868(uVar12,0);
  puVar10 = Method_UnityEngine_GameObject_GetComponent<Selectable>__;
  puVar9 = Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__;
  puVar8 = Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__;
  puVar7 = Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
  puVar6 = Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__;
  puVar5 = Method_System_Globalization_CalendarData_GetJapaneseEraNames__;
  puVar4 = Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
  puVar3 = Method_System_Globalization_Calendar_ToFourDigitYear__;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
  if (lVar13 != 0) {
    FUN_02ee8df4(lVar13,uVar12,
                 *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Selectable>__);
    uVar12 = FUN_03579868(*(undefined8 *)puVar2,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)puVar1,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)puVar6,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)puVar8,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)puVar3,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)puVar9,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)puVar4,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)puVar7,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)puVar5,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)
                           Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                          ,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<uint>__,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    uVar12 = FUN_03579868(*(undefined8 *)StringLiteral_2925,0);
    FUN_02ee8df4(lVar13,uVar12,*(undefined8 *)puVar10);
    puVar1 = Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__;
    plVar14 = (long *)(*(long *)(*(long *)
                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                + 0xb8) + 8);
    *plVar14 = lVar13;
    thunk_FUN_01f51358(plVar14,lVar13);
    lVar13 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3650);
    FUN_02ea4684(lVar13,*(undefined8 *)StringLiteral_3649);
    puVar10 = StringLiteral_3648;
    puVar9 = StringLiteral_3643;
    puVar8 = StringLiteral_3642;
    puVar7 = StringLiteral_3641;
    puVar6 = StringLiteral_3640;
    puVar5 = StringLiteral_3634;
    puVar4 = StringLiteral_3633;
    puVar3 = StringLiteral_3632;
    puVar2 = StringLiteral_3631;
    if (lVar13 != 0) {
      FUN_02ea5888(lVar13,0x2c,*(undefined8 *)StringLiteral_3648);
      FUN_02ea5888(lVar13,0x28,*(undefined8 *)puVar10);
      FUN_02ea5888(lVar13,0x29,*(undefined8 *)puVar10);
      FUN_02ea5888(lVar13,0x5c,*(undefined8 *)puVar10);
      FUN_02ea5888(lVar13,0x7c,*(undefined8 *)puVar10);
      FUN_02ea5888(lVar13,0x2d,*(undefined8 *)puVar10);
      FUN_02ea5888(lVar13,0x2b,*(undefined8 *)puVar10);
      plVar14 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar14 = lVar13;
      thunk_FUN_01f51358(plVar14,lVar13);
      uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar9);
      FUN_02b6aa68(uVar12,*(undefined8 *)puVar2);
      puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *puVar15 = uVar12;
      thunk_FUN_01f51358(puVar15,uVar12);
      uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
      FUN_02b6aa68(uVar12,*(undefined8 *)puVar3);
      puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *puVar15 = uVar12;
      thunk_FUN_01f51358(puVar15,uVar12);
      uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
      FUN_02b6aa68(uVar12,*(undefined8 *)puVar5);
      puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      *puVar15 = uVar12;
      thunk_FUN_01f51358(puVar15,uVar12);
      uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
      FUN_02b6aa68(uVar12,*(undefined8 *)puVar4);
      puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      *puVar15 = uVar12;
      thunk_FUN_01f51358(puVar15,uVar12);
      uVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
      FUN_02b6aa68(uVar12,*(undefined8 *)
                           Method_System_Collections_ArrayList_ReadOnlyArrayList_RemoveAt__);
      puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
      *puVar15 = uVar12;
      thunk_FUN_01f51358(puVar15,uVar12);
      *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40) = 0;
      lVar13 = thunk_FUN_01ec9ab0(0);
      puVar7 = StringLiteral_3657;
      puVar6 = StringLiteral_3656;
      puVar5 = StringLiteral_3655;
      puVar4 = StringLiteral_3647;
      puVar3 = StringLiteral_3646;
      puVar2 = StringLiteral_3645;
      puVar1 = StringLiteral_3644;
      if (lVar13 != 0) {
        uVar12 = FUN_035aee10(lVar13,0);
        lVar13 = *(long *)puVar7;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar13);
          lVar13 = *(long *)puVar7;
        }
        uVar22 = **(undefined8 **)(lVar13 + 0xb8);
        uVar16 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
        FUN_02e6c748(uVar16,uVar22,*(undefined8 *)puVar5,0);
        uVar12 = FUN_02303ad4(uVar12,uVar16,*(undefined8 *)puVar1);
        uVar22 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        uVar16 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
        FUN_02e6c0a0(uVar16,uVar22,*(undefined8 *)puVar6,0);
        plVar14 = (long *)FUN_0230b6f4(uVar12,uVar16,*(undefined8 *)puVar2);
        if (plVar14 != (long *)0x0) {
          lVar13 = *plVar14;
          uVar20 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_3653) {
                puVar15 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_0392de18;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar15 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)StringLiteral_3653,0);
LAB_0392de18:
          plVar14 = (long *)(*(code *)*puVar15)(plVar14,puVar15[1]);
          puVar3 = StringLiteral_3671;
          puVar2 = StringLiteral_3654;
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar13 = *plVar14;
            uVar20 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
                  puVar15 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_0392de94;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar15 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar1,0);
LAB_0392de94:
            uVar20 = (*(code *)*puVar15)(plVar14,puVar15[1]);
            if ((uVar20 & 1) == 0) {
              if (plVar14 == (long *)0x0) {
                return;
              }
              lVar13 = *plVar14;
              uVar20 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar20 == 0) goto LAB_0392ec38;
              piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              goto LAB_0392ec20;
            }
            lVar13 = *plVar14;
            uVar20 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                  puVar15 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_0392def0;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar15 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar2,0);
LAB_0392def0:
            lVar13 = (*(code *)*puVar15)(plVar14,puVar15[1]);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar25 = *(long **)(*(long *)(lVar13 + 0x18) + 0x10);
            if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar24 = *(long **)(lVar13 + 0x10);
            uVar20 = FUN_03584674(plVar25,0);
            if ((uVar20 & 1) == 0) {
              uVar20 = FUN_03583944(plVar25,0);
              if ((uVar20 & 1) == 0) {
                uVar12 = *(undefined8 *)StringLiteral_3651;
                if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar12 = FUN_03579868(uVar12,0);
                if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar20 = FUN_0392f2ac(plVar25,uVar12);
                if ((uVar20 & 1) == 0) {
                  FUN_042afc4c(*(undefined4 *)
                                (*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__
                                + 0xe0));
                  return;
                }
                uVar20 = (**(code **)(*plVar25 + 0x3c8))(plVar25,*(undefined8 *)(*plVar25 + 0x3d0));
                if ((uVar20 & 1) == 0) {
                  lVar13 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar13 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
                  }
                  uVar12 = FUN_03584a50(plVar25,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),0);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar20 = FUN_034b0da4(uVar12,0,0);
                  if ((uVar20 & 1) == 0) {
                    uVar12 = *(undefined8 *)StringLiteral_3651;
                    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar12 = FUN_03579868(uVar12,0);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    lVar13 = FUN_0392f510(plVar25,uVar12);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    lVar13 = *(long *)(lVar13 + 0x20);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar20 = FUN_0358471c(lVar13,0);
                    if ((uVar20 & 1) == 0) {
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                  0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar12 = FUN_0392f7cc(lVar13);
                      uVar12 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3666,uVar12,
                                            *(undefined8 *)StringLiteral_3665,0);
                      FUN_0392f0cc(plVar25,plVar24,uVar12);
                    }
                    else {
                      lVar17 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x18);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      uVar20 = FUN_02b6b4d8(lVar17,lVar13,*(undefined8 *)StringLiteral_3629);
                      if ((uVar20 & 1) == 0) {
                        lVar17 = FUN_03594a14(plVar25,0);
                        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        uVar12 = *(undefined8 *)StringLiteral_3652;
                        plVar19 = (long *)thunk_FUN_01f116d0(lVar17,uVar12);
                        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08cfc(lVar17,uVar12);
                        }
                        lVar17 = *plVar19;
                        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar20 != 0) {
                          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_3652) {
                              puVar15 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                              goto LAB_0392e484;
                            }
                            uVar20 = uVar20 - 1;
                            piVar21 = piVar21 + 4;
                          } while (uVar20 != 0);
                        }
                        puVar15 = (undefined8 *)FUN_01ecb238(plVar19,*(long *)StringLiteral_3652,0);
LAB_0392e484:
                        lVar17 = (*(code *)*puVar15)(plVar19,puVar15[1]);
                        if (lVar17 == 0) {
                          FUN_0392f0cc(plVar25,plVar24,*(undefined8 *)StringLiteral_3667);
                        }
                        else if (*(int *)(lVar17 + 0x10) == 0) {
                          FUN_0392f0cc(plVar25,plVar24,*(undefined8 *)StringLiteral_3661);
                        }
                        else {
                          if (0 < *(int *)(lVar17 + 0x10)) {
                            iVar23 = 0;
                            do {
                              uVar11 = FUN_03409f80(lVar17,iVar23,0);
                              if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) ==
                                  0) {
                                thunk_FUN_01ee6d7c();
                              }
                              uVar20 = FUN_034fc6b4(uVar11,0);
                              if ((uVar20 & 1) == 0) {
                                uVar12 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3662,lVar17,
                                                      *(undefined8 *)StringLiteral_3663,0);
                                FUN_0392f0cc(plVar25,plVar24,uVar12);
                              }
                              iVar23 = iVar23 + 1;
                            } while (iVar23 < *(int *)(lVar17 + 0x10));
                          }
                          lVar18 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x20);
                          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01f08a3c();
                          }
                          uVar20 = FUN_02b6b4d8(lVar18,lVar17,*(undefined8 *)StringLiteral_3630);
                          if ((uVar20 & 1) == 0) {
                            lVar18 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x18);
                            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            FUN_02b6b2d0(lVar18,lVar13,plVar19,*(undefined8 *)StringLiteral_3638);
                            lVar13 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x20);
                            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            FUN_02b6b2d0(lVar13,lVar17,plVar19,*(undefined8 *)StringLiteral_3639);
                            lVar13 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x28);
                            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            FUN_02b6b2d0(lVar13,plVar19,lVar17,*(undefined8 *)StringLiteral_3637);
                          }
                          else {
                            lVar13 = FUN_01f08890(*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                                  ,5);
                            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a44();
                            }
                            *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)StringLiteral_3662;
                            thunk_FUN_01f51358();
                            if (*(uint *)(lVar13 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a44();
                            }
                            *(long *)(lVar13 + 0x28) = lVar17;
                            thunk_FUN_01f51358((long *)(lVar13 + 0x28),lVar17);
                            if (*(uint *)(lVar13 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a44();
                            }
                            *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)StringLiteral_3674;
                            thunk_FUN_01f51358();
                            lVar18 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x20);
                            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            lVar17 = FUN_02b6b264(lVar18,lVar17,*(undefined8 *)StringLiteral_3636);
                            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            uVar12 = thunk_FUN_01ecaf38(lVar17,0);
                            if (*(int *)(*(long *)
                                          Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__
                                        + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                            }
                            uVar12 = FUN_0392f7cc(uVar12);
                            if (*(uint *)(lVar13 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a44();
                            }
                            *(undefined8 *)(lVar13 + 0x38) = uVar12;
                            thunk_FUN_01f51358();
                            if (*(uint *)(lVar13 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a44();
                            }
                            *(undefined8 *)(lVar13 + 0x40) =
                                 *(undefined8 *)
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                            ;
                            thunk_FUN_01f51358();
                            uVar12 = FUN_0340efe8(lVar13,0);
                            FUN_0392f0cc(plVar25,plVar24,uVar12);
                          }
                        }
                      }
                      else {
                        lVar17 = FUN_01f08890(*(undefined8 *)
                                               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                              ,9);
                        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)StringLiteral_3670;
                        thunk_FUN_01f51358();
                        if (*(int *)(*(long *)
                                      Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                    0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        uVar12 = FUN_0392f7cc(plVar25);
                        if (*(uint *)(lVar17 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar17 + 0x28) = uVar12;
                        thunk_FUN_01f51358();
                        if (*(uint *)(lVar17 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)StringLiteral_3676;
                        thunk_FUN_01f51358();
                        if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        lVar18 = (**(code **)(*plVar24 + 0x268))
                                           (plVar24,*(undefined8 *)(*plVar24 + 0x270));
                        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        if (*(uint *)(lVar17 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)(lVar18 + 0x10);
                        thunk_FUN_01f51358();
                        if (*(uint *)(lVar17 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)StringLiteral_3664;
                        thunk_FUN_01f51358();
                        lVar18 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x18);
                        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        lVar18 = FUN_02b6b264(lVar18,lVar13,*(undefined8 *)StringLiteral_3635);
                        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        thunk_FUN_01ecaf38(lVar18,0);
                        uVar12 = FUN_0392f7cc();
                        if (*(uint *)(lVar17 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar17 + 0x48) = uVar12;
                        thunk_FUN_01f51358();
                        if (*(uint *)(lVar17 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar17 + 0x50) = *(undefined8 *)StringLiteral_3673;
                        thunk_FUN_01f51358();
                        uVar12 = FUN_0392f7cc(lVar13);
                        if (*(uint *)(lVar17 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar17 + 0x58) = uVar12;
                        thunk_FUN_01f51358();
                        if (*(uint *)(lVar17 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar17 + 0x60) =
                             *(undefined8 *)
                              Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
                        thunk_FUN_01f51358();
                        uVar12 = FUN_0340efe8(lVar17,0);
                        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ +
                                    0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        FUN_0403f2cc(uVar12,0);
                      }
                    }
                  }
                  else {
                    FUN_0392f0cc(plVar25,plVar24,*(undefined8 *)StringLiteral_3669);
                  }
                }
                else {
                  FUN_0392f0cc(plVar25,plVar24,*(undefined8 *)StringLiteral_3672);
                }
              }
              else {
                FUN_0392f0cc(plVar25,plVar24,*(undefined8 *)StringLiteral_3660);
              }
            }
            else {
              FUN_0392f0cc(plVar25,plVar24,*(undefined8 *)puVar3);
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_0392ec20:
    if (*(long *)(piVar21 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar15 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_0392ec54;
    }
  }
LAB_0392ec38:
  puVar15 = (undefined8 *)
            FUN_01ecb238(plVar14,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_0392ec54:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
  return;
}


