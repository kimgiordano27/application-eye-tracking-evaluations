/*
FUNCTION_NAME: System.Diagnostics.Process$$OnExited
ENTRY_POINT: 0392d950
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 167
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0392ec98) */

void System_Diagnostics_Process__OnExited(void)

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
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar22;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  int iVar23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *plVar24;
  undefined8 *unaff_x29;
  long *plVar25;
  
  FUN_02ee8df4();
  FUN_03579868(*unaff_x24,0);
  FUN_02ee8df4();
  FUN_03579868(*unaff_x25,0);
  FUN_02ee8df4();
  FUN_03579868(*unaff_x26,0);
  FUN_02ee8df4();
  FUN_03579868(*unaff_x23,0);
  FUN_02ee8df4();
  FUN_03579868(*unaff_x22,0);
  FUN_02ee8df4();
  FUN_03579868(*unaff_x20,0);
  FUN_02ee8df4();
  FUN_03579868(*unaff_x29,0);
  FUN_02ee8df4();
  FUN_03579868(*unaff_x28,0);
  FUN_02ee8df4();
  FUN_03579868(*unaff_x27,0);
  FUN_02ee8df4();
  FUN_03579868(*(undefined8 *)
                Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceLeaveIntent>__,
               0);
  FUN_02ee8df4();
  FUN_03579868(*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
  FUN_02ee8df4();
  FUN_03579868(*(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<uint>__,0);
  FUN_02ee8df4();
  FUN_03579868(*(undefined8 *)StringLiteral_2925,0);
  FUN_02ee8df4();
  puVar1 = Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__;
  *(undefined8 *)
   (*(long *)(*(long *)
               Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__ +
             0xb8) + 8) = unaff_x19;
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
    uVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar9);
    FUN_02b6aa68(uVar14,*(undefined8 *)puVar2);
    puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *puVar15 = uVar14;
    thunk_FUN_01f51358(puVar15,uVar14);
    uVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
    FUN_02b6aa68(uVar14,*(undefined8 *)puVar3);
    puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
    *puVar15 = uVar14;
    thunk_FUN_01f51358(puVar15,uVar14);
    uVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
    FUN_02b6aa68(uVar14,*(undefined8 *)puVar5);
    puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
    *puVar15 = uVar14;
    thunk_FUN_01f51358(puVar15,uVar14);
    uVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
    FUN_02b6aa68(uVar14,*(undefined8 *)puVar4);
    puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
    *puVar15 = uVar14;
    thunk_FUN_01f51358(puVar15,uVar14);
    uVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
    FUN_02b6aa68(uVar14,*(undefined8 *)
                         Method_System_Collections_ArrayList_ReadOnlyArrayList_RemoveAt__);
    puVar15 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
    *puVar15 = uVar14;
    thunk_FUN_01f51358(puVar15,uVar14);
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
      uVar14 = FUN_035aee10(lVar12,0);
      lVar12 = *(long *)puVar7;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar12);
        lVar12 = *(long *)puVar7;
      }
      uVar22 = **(undefined8 **)(lVar12 + 0xb8);
      uVar16 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
      FUN_02e6c748(uVar16,uVar22,*(undefined8 *)puVar5,0);
      uVar14 = FUN_02303ad4(uVar14,uVar16,*(undefined8 *)puVar1);
      uVar22 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
      uVar16 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
      FUN_02e6c0a0(uVar16,uVar22,*(undefined8 *)puVar6,0);
      plVar13 = (long *)FUN_0230b6f4(uVar14,uVar16,*(undefined8 *)puVar2);
      if (plVar13 != (long *)0x0) {
        lVar12 = *plVar13;
        uVar20 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)StringLiteral_3653) {
              puVar15 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_0392de18;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar15 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)StringLiteral_3653,0);
LAB_0392de18:
        plVar13 = (long *)(*(code *)*puVar15)(plVar13,puVar15[1]);
        puVar3 = StringLiteral_3671;
        puVar2 = StringLiteral_3654;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar12 = *plVar13;
          uVar20 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
                puVar15 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_0392de94;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar15 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar1,0);
LAB_0392de94:
          uVar20 = (*(code *)*puVar15)(plVar13,puVar15[1]);
          if ((uVar20 & 1) == 0) {
            if (plVar13 == (long *)0x0) {
              return;
            }
            lVar12 = *plVar13;
            uVar20 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar20 == 0) goto LAB_0392ec38;
            piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_0392ec20;
          }
          lVar12 = *plVar13;
          uVar20 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                puVar15 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_0392def0;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar15 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_0392def0:
          lVar12 = (*(code *)*puVar15)(plVar13,puVar15[1]);
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
          uVar20 = FUN_03584674(plVar25,0);
          if ((uVar20 & 1) == 0) {
            uVar20 = FUN_03583944(plVar25,0);
            if ((uVar20 & 1) == 0) {
              uVar14 = *(undefined8 *)StringLiteral_3651;
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar14 = FUN_03579868(uVar14,0);
              if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar20 = FUN_0392f2ac(plVar25,uVar14);
              if ((uVar20 & 1) == 0) {
                FUN_042afc4c(*(undefined4 *)
                              (*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ +
                              0xe0));
                return;
              }
              uVar20 = (**(code **)(*plVar25 + 0x3c8))(plVar25,*(undefined8 *)(*plVar25 + 0x3d0));
              if ((uVar20 & 1) == 0) {
                lVar12 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar12 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
                }
                uVar14 = FUN_03584a50(plVar25,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),0);
                if (*(int *)(*(long *)
                              Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar20 = FUN_034b0da4(uVar14,0,0);
                if ((uVar20 & 1) == 0) {
                  uVar14 = *(undefined8 *)StringLiteral_3651;
                  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar14 = FUN_03579868(uVar14,0);
                  if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  lVar12 = FUN_0392f510(plVar25,uVar14);
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
                  uVar20 = FUN_0358471c(lVar12,0);
                  if ((uVar20 & 1) == 0) {
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar14 = FUN_0392f7cc(lVar12);
                    uVar14 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3666,uVar14,
                                          *(undefined8 *)StringLiteral_3665,0);
                    FUN_0392f0cc(plVar25,plVar24,uVar14);
                  }
                  else {
                    lVar17 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                + 0xb8) + 0x18);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar20 = FUN_02b6b4d8(lVar17,lVar12,*(undefined8 *)StringLiteral_3629);
                    if ((uVar20 & 1) == 0) {
                      lVar17 = FUN_03594a14(plVar25,0);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      uVar14 = *(undefined8 *)StringLiteral_3652;
                      plVar19 = (long *)thunk_FUN_01f116d0(lVar17,uVar14);
                      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08cfc(lVar17,uVar14);
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
                            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0
                               ) {
                              thunk_FUN_01ee6d7c();
                            }
                            uVar20 = FUN_034fc6b4(uVar11,0);
                            if ((uVar20 & 1) == 0) {
                              uVar14 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3662,lVar17,
                                                    *(undefined8 *)StringLiteral_3663,0);
                              FUN_0392f0cc(plVar25,plVar24,uVar14);
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
                          FUN_02b6b2d0(lVar18,lVar12,plVar19,*(undefined8 *)StringLiteral_3638);
                          lVar12 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x20);
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01f08a3c();
                          }
                          FUN_02b6b2d0(lVar12,lVar17,plVar19,*(undefined8 *)StringLiteral_3639);
                          lVar12 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x28);
                          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01f08a3c();
                          }
                          FUN_02b6b2d0(lVar12,plVar19,lVar17,*(undefined8 *)StringLiteral_3637);
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
                          *(long *)(lVar12 + 0x28) = lVar17;
                          thunk_FUN_01f51358((long *)(lVar12 + 0x28),lVar17);
                          if (*(uint *)(lVar12 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                            FUN_01f08a44();
                          }
                          *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)StringLiteral_3674;
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
                          uVar14 = thunk_FUN_01ecaf38(lVar17,0);
                          if (*(int *)(*(long *)
                                        Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__
                                      + 0xe0) == 0) {
                            thunk_FUN_01ee6d7c();
                          }
                          uVar14 = FUN_0392f7cc(uVar14);
                          if (*(uint *)(lVar12 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                            FUN_01f08a44();
                          }
                          *(undefined8 *)(lVar12 + 0x38) = uVar14;
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
                          uVar14 = FUN_0340efe8(lVar12,0);
                          FUN_0392f0cc(plVar25,plVar24,uVar14);
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
                      uVar14 = FUN_0392f7cc(plVar25);
                      if (*(uint *)(lVar17 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      *(undefined8 *)(lVar17 + 0x28) = uVar14;
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
                      lVar18 = FUN_02b6b264(lVar18,lVar12,*(undefined8 *)StringLiteral_3635);
                      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      thunk_FUN_01ecaf38(lVar18,0);
                      uVar14 = FUN_0392f7cc();
                      if (*(uint *)(lVar17 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      *(undefined8 *)(lVar17 + 0x48) = uVar14;
                      thunk_FUN_01f51358();
                      if (*(uint *)(lVar17 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      *(undefined8 *)(lVar17 + 0x50) = *(undefined8 *)StringLiteral_3673;
                      thunk_FUN_01f51358();
                      uVar14 = FUN_0392f7cc(lVar12);
                      if (*(uint *)(lVar17 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      *(undefined8 *)(lVar17 + 0x58) = uVar14;
                      thunk_FUN_01f51358();
                      if (*(uint *)(lVar17 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      *(undefined8 *)(lVar17 + 0x60) =
                           *(undefined8 *)
                            Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
                      thunk_FUN_01f51358();
                      uVar14 = FUN_0340efe8(lVar17,0);
                      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ +
                                  0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      FUN_0403f2cc(uVar14,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_0392ec20:
    if (*(long *)(piVar21 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar15 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_0392ec54;
    }
  }
LAB_0392ec38:
  puVar15 = (undefined8 *)
            FUN_01ecb238(plVar13,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_0392ec54:
  (*(code *)*puVar15)(plVar13,puVar15[1]);
  return;
}


