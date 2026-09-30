/*
FUNCTION_NAME: System.Diagnostics.Process$$GetCurrentProcess
ENTRY_POINT: 0392d8d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 167
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0392ec98) */

void System_Diagnostics_Process__GetCurrentProcess(void)

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
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  int *piVar20;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  long *plVar24;
  long *plVar25;
  
  FUN_02ee7c10();
  uVar21 = *unaff_x20;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar21,0);
  puVar9 = Method_UnityEngine_Component_GetComponent<TeleportOrientationHandlerThumbstick>__;
  puVar8 = Method_UnityEngine_Component_GetComponent<TeleportInputHandlerTouch>__;
  puVar7 = Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
  puVar6 = Method_Oculus_Platform_Callback_SetNotificationCallback<AssetFileDownloadUpdate>__;
  puVar5 = Method_System_Globalization_CalendarData_GetJapaneseEraNames__;
  puVar4 = Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
  puVar3 = Method_System_Globalization_Calendar_ToFourDigitYear__;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__;
  if (unaff_x19 != 0) {
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)puVar2,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)puVar1,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)puVar6,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)puVar8,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)puVar3,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)puVar9,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)puVar4,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)puVar7,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)puVar5,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)
                  Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__
                 ,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<uint>__,0);
    FUN_02ee8df4();
    FUN_03579868(*(undefined8 *)StringLiteral_2925,0);
    FUN_02ee8df4();
    puVar1 = Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__;
    *(long *)(*(long *)(*(long *)
                         Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                       + 0xb8) + 8) = unaff_x19;
    thunk_FUN_01f51358();
    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3650);
    FUN_02ea4684(lVar12,*(undefined8 *)StringLiteral_3649);
    puVar10 = StringLiteral_3648;
    puVar9 = StringLiteral_3643;
    puVar8 = StringLiteral_3642;
    puVar7 = StringLiteral_3641;
    puVar6 = StringLiteral_3640;
    puVar5 = StringLiteral_3634;
    puVar4 = StringLiteral_3633;
    puVar3 = StringLiteral_3632;
    puVar2 = StringLiteral_3631;
    if (lVar12 != 0) {
      FUN_02ea5888(lVar12,0x2c,*(undefined8 *)StringLiteral_3648);
      FUN_02ea5888(lVar12,0x28,*(undefined8 *)puVar10);
      FUN_02ea5888(lVar12,0x29,*(undefined8 *)puVar10);
      FUN_02ea5888(lVar12,0x5c,*(undefined8 *)puVar10);
      FUN_02ea5888(lVar12,0x7c,*(undefined8 *)puVar10);
      FUN_02ea5888(lVar12,0x2d,*(undefined8 *)puVar10);
      FUN_02ea5888(lVar12,0x2b,*(undefined8 *)puVar10);
      plVar13 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar13 = lVar12;
      thunk_FUN_01f51358(plVar13,lVar12);
      uVar21 = thunk_FUN_01f117cc(*(undefined8 *)puVar9);
      FUN_02b6aa68(uVar21,*(undefined8 *)puVar2);
      puVar14 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *puVar14 = uVar21;
      thunk_FUN_01f51358(puVar14,uVar21);
      uVar21 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
      FUN_02b6aa68(uVar21,*(undefined8 *)puVar3);
      puVar14 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *puVar14 = uVar21;
      thunk_FUN_01f51358(puVar14,uVar21);
      uVar21 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
      FUN_02b6aa68(uVar21,*(undefined8 *)puVar5);
      puVar14 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      *puVar14 = uVar21;
      thunk_FUN_01f51358(puVar14,uVar21);
      uVar21 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
      FUN_02b6aa68(uVar21,*(undefined8 *)puVar4);
      puVar14 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      *puVar14 = uVar21;
      thunk_FUN_01f51358(puVar14,uVar21);
      uVar21 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
      FUN_02b6aa68(uVar21,*(undefined8 *)
                           Method_System_Collections_ArrayList_ReadOnlyArrayList_RemoveAt__);
      puVar14 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
      *puVar14 = uVar21;
      thunk_FUN_01f51358(puVar14,uVar21);
      *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40) = 0;
      lVar12 = thunk_FUN_01ec9ab0(0);
      puVar7 = StringLiteral_3657;
      puVar6 = StringLiteral_3656;
      puVar5 = StringLiteral_3655;
      puVar4 = StringLiteral_3647;
      puVar3 = StringLiteral_3646;
      puVar2 = StringLiteral_3645;
      puVar1 = StringLiteral_3644;
      if (lVar12 != 0) {
        uVar21 = FUN_035aee10(lVar12,0);
        lVar12 = *(long *)puVar7;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar12);
          lVar12 = *(long *)puVar7;
        }
        uVar22 = **(undefined8 **)(lVar12 + 0xb8);
        uVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
        FUN_02e6c748(uVar15,uVar22,*(undefined8 *)puVar5,0);
        uVar21 = FUN_02303ad4(uVar21,uVar15,*(undefined8 *)puVar1);
        uVar22 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        uVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
        FUN_02e6c0a0(uVar15,uVar22,*(undefined8 *)puVar6,0);
        plVar13 = (long *)FUN_0230b6f4(uVar21,uVar15,*(undefined8 *)puVar2);
        if (plVar13 != (long *)0x0) {
          lVar12 = *plVar13;
          uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_3653) {
                puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_0392de18;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)StringLiteral_3653,0);
LAB_0392de18:
          plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
          puVar3 = StringLiteral_3671;
          puVar2 = StringLiteral_3654;
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar12 = *plVar13;
            uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                  puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0392de94;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar1,0);
LAB_0392de94:
            uVar19 = (*(code *)*puVar14)(plVar13,puVar14[1]);
            if ((uVar19 & 1) == 0) {
              if (plVar13 == (long *)0x0) {
                return;
              }
              lVar12 = *plVar13;
              uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar19 == 0) goto LAB_0392ec38;
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              goto LAB_0392ec20;
            }
            lVar12 = *plVar13;
            uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                  puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0392def0;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_0392def0:
            lVar12 = (*(code *)*puVar14)(plVar13,puVar14[1]);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar25 = *(long **)(*(long *)(lVar12 + 0x18) + 0x10);
            if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar24 = *(long **)(lVar12 + 0x10);
            uVar19 = FUN_03584674(plVar25,0);
            if ((uVar19 & 1) == 0) {
              uVar19 = FUN_03583944(plVar25,0);
              if ((uVar19 & 1) == 0) {
                uVar21 = *(undefined8 *)StringLiteral_3651;
                if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar21 = FUN_03579868(uVar21,0);
                if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar19 = FUN_0392f2ac(plVar25,uVar21);
                if ((uVar19 & 1) == 0) {
                  FUN_042afc4c(*(undefined4 *)
                                (*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__
                                + 0xe0));
                  return;
                }
                uVar19 = (**(code **)(*plVar25 + 0x3c8))(plVar25,*(undefined8 *)(*plVar25 + 0x3d0));
                if ((uVar19 & 1) == 0) {
                  lVar12 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar12 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
                  }
                  uVar21 = FUN_03584a50(plVar25,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),0);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar19 = FUN_034b0da4(uVar21,0,0);
                  if ((uVar19 & 1) == 0) {
                    uVar21 = *(undefined8 *)StringLiteral_3651;
                    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar21 = FUN_03579868(uVar21,0);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    lVar12 = FUN_0392f510(plVar25,uVar21);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    lVar12 = *(long *)(lVar12 + 0x20);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar19 = FUN_0358471c(lVar12,0);
                    if ((uVar19 & 1) == 0) {
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                  0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar21 = FUN_0392f7cc(lVar12);
                      uVar21 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3666,uVar21,
                                            *(undefined8 *)StringLiteral_3665,0);
                      FUN_0392f0cc(plVar25,plVar24,uVar21);
                    }
                    else {
                      lVar16 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x18);
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      uVar19 = FUN_02b6b4d8(lVar16,lVar12,*(undefined8 *)StringLiteral_3629);
                      if ((uVar19 & 1) == 0) {
                        lVar16 = FUN_03594a14(plVar25,0);
                        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        uVar21 = *(undefined8 *)StringLiteral_3652;
                        plVar18 = (long *)thunk_FUN_01f116d0(lVar16,uVar21);
                        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08cfc(lVar16,uVar21);
                        }
                        lVar16 = *plVar18;
                        uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                        if (uVar19 != 0) {
                          piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar20 + -2) == *(long *)StringLiteral_3652) {
                              puVar14 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                              goto LAB_0392e484;
                            }
                            uVar19 = uVar19 - 1;
                            piVar20 = piVar20 + 4;
                          } while (uVar19 != 0);
                        }
                        puVar14 = (undefined8 *)FUN_01ecb238(plVar18,*(long *)StringLiteral_3652,0);
LAB_0392e484:
                        lVar16 = (*(code *)*puVar14)(plVar18,puVar14[1]);
                        if (lVar16 == 0) {
                          FUN_0392f0cc(plVar25,plVar24,*(undefined8 *)StringLiteral_3667);
                        }
                        else if (*(int *)(lVar16 + 0x10) == 0) {
                          FUN_0392f0cc(plVar25,plVar24,*(undefined8 *)StringLiteral_3661);
                        }
                        else {
                          if (0 < *(int *)(lVar16 + 0x10)) {
                            iVar23 = 0;
                            do {
                              uVar11 = FUN_03409f80(lVar16,iVar23,0);
                              if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) ==
                                  0) {
                                thunk_FUN_01ee6d7c();
                              }
                              uVar19 = FUN_034fc6b4(uVar11,0);
                              if ((uVar19 & 1) == 0) {
                                uVar21 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3662,lVar16,
                                                      *(undefined8 *)StringLiteral_3663,0);
                                FUN_0392f0cc(plVar25,plVar24,uVar21);
                              }
                              iVar23 = iVar23 + 1;
                            } while (iVar23 < *(int *)(lVar16 + 0x10));
                          }
                          lVar17 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x20);
                          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01f08a3c();
                          }
                          uVar19 = FUN_02b6b4d8(lVar17,lVar16,*(undefined8 *)StringLiteral_3630);
                          if ((uVar19 & 1) == 0) {
                            lVar17 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x18);
                            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            FUN_02b6b2d0(lVar17,lVar12,plVar18,*(undefined8 *)StringLiteral_3638);
                            lVar12 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x20);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            FUN_02b6b2d0(lVar12,lVar16,plVar18,*(undefined8 *)StringLiteral_3639);
                            lVar12 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x28);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            FUN_02b6b2d0(lVar12,plVar18,lVar16,*(undefined8 *)StringLiteral_3637);
                          }
                          else {
                            lVar12 = FUN_01f08890(*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                                  ,5);
                            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a44();
                            }
                            *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)StringLiteral_3662;
                            thunk_FUN_01f51358();
                            if (*(uint *)(lVar12 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a44();
                            }
                            *(long *)(lVar12 + 0x28) = lVar16;
                            thunk_FUN_01f51358((long *)(lVar12 + 0x28),lVar16);
                            if (*(uint *)(lVar12 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a44();
                            }
                            *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)StringLiteral_3674;
                            thunk_FUN_01f51358();
                            lVar17 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x20);
                            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            lVar16 = FUN_02b6b264(lVar17,lVar16,*(undefined8 *)StringLiteral_3636);
                            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a3c();
                            }
                            uVar21 = thunk_FUN_01ecaf38(lVar16,0);
                            if (*(int *)(*(long *)
                                          Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__
                                        + 0xe0) == 0) {
                              thunk_FUN_01ee6d7c();
                            }
                            uVar21 = FUN_0392f7cc(uVar21);
                            if (*(uint *)(lVar12 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a44();
                            }
                            *(undefined8 *)(lVar12 + 0x38) = uVar21;
                            thunk_FUN_01f51358();
                            if (*(uint *)(lVar12 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                              FUN_01f08a44();
                            }
                            *(undefined8 *)(lVar12 + 0x40) =
                                 *(undefined8 *)
                                  Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                            ;
                            thunk_FUN_01f51358();
                            uVar21 = FUN_0340efe8(lVar12,0);
                            FUN_0392f0cc(plVar25,plVar24,uVar21);
                          }
                        }
                      }
                      else {
                        lVar16 = FUN_01f08890(*(undefined8 *)
                                               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                              ,9);
                        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)StringLiteral_3670;
                        thunk_FUN_01f51358();
                        if (*(int *)(*(long *)
                                      Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                    0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        uVar21 = FUN_0392f7cc(plVar25);
                        if (*(uint *)(lVar16 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar16 + 0x28) = uVar21;
                        thunk_FUN_01f51358();
                        if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)StringLiteral_3676;
                        thunk_FUN_01f51358();
                        if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        lVar17 = (**(code **)(*plVar24 + 0x268))
                                           (plVar24,*(undefined8 *)(*plVar24 + 0x270));
                        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        if (*(uint *)(lVar16 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)(lVar17 + 0x10);
                        thunk_FUN_01f51358();
                        if (*(uint *)(lVar16 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)StringLiteral_3664;
                        thunk_FUN_01f51358();
                        lVar17 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x18);
                        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        lVar17 = FUN_02b6b264(lVar17,lVar12,*(undefined8 *)StringLiteral_3635);
                        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        thunk_FUN_01ecaf38(lVar17,0);
                        uVar21 = FUN_0392f7cc();
                        if (*(uint *)(lVar16 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar16 + 0x48) = uVar21;
                        thunk_FUN_01f51358();
                        if (*(uint *)(lVar16 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar16 + 0x50) = *(undefined8 *)StringLiteral_3673;
                        thunk_FUN_01f51358();
                        uVar21 = FUN_0392f7cc(lVar12);
                        if (*(uint *)(lVar16 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar16 + 0x58) = uVar21;
                        thunk_FUN_01f51358();
                        if (*(uint *)(lVar16 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar16 + 0x60) =
                             *(undefined8 *)
                              Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
                        thunk_FUN_01f51358();
                        uVar21 = FUN_0340efe8(lVar16,0);
                        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ +
                                    0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        FUN_0403f2cc(uVar21,0);
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
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_0392ec20:
    if (*(long *)(piVar20 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar14 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_0392ec54;
    }
  }
LAB_0392ec38:
  puVar14 = (undefined8 *)
            FUN_01ecb238(plVar13,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_0392ec54:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
  return;
}


