/*
FUNCTION_NAME: System.Diagnostics.Process$$SetProcessId
ENTRY_POINT: 0392dbf4
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

void System_Diagnostics_Process__SetProcessId(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 unaff_x19;
  undefined8 uVar19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  int iVar20;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *plVar21;
  undefined8 *unaff_x29;
  long *plVar22;
  
  *(undefined8 *)(param_1 + 0x10) = unaff_x19;
  thunk_FUN_01f51358();
  uVar9 = thunk_FUN_01f117cc(*unaff_x29);
  FUN_02b6aa68(uVar9,*unaff_x28);
  puVar10 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
  *puVar10 = uVar9;
  thunk_FUN_01f51358(puVar10,uVar9);
  uVar9 = thunk_FUN_01f117cc(*unaff_x27);
  FUN_02b6aa68(uVar9,*unaff_x26);
  puVar10 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20);
  *puVar10 = uVar9;
  thunk_FUN_01f51358(puVar10,uVar9);
  uVar9 = thunk_FUN_01f117cc(*unaff_x25);
  FUN_02b6aa68(uVar9,*unaff_x24);
  puVar10 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
  *puVar10 = uVar9;
  thunk_FUN_01f51358(puVar10,uVar9);
  uVar9 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_02b6aa68(uVar9,*unaff_x22);
  puVar10 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
  *puVar10 = uVar9;
  thunk_FUN_01f51358(puVar10,uVar9);
  uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
  FUN_02b6aa68(uVar9,*(undefined8 *)Method_System_Collections_ArrayList_ReadOnlyArrayList_RemoveAt__
              );
  puVar10 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
  *puVar10 = uVar9;
  thunk_FUN_01f51358(puVar10,uVar9);
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40) = 0;
  lVar11 = thunk_FUN_01ec9ab0(0);
  puVar7 = StringLiteral_3657;
  puVar6 = StringLiteral_3656;
  puVar5 = StringLiteral_3655;
  puVar4 = StringLiteral_3647;
  puVar3 = StringLiteral_3646;
  puVar2 = StringLiteral_3645;
  puVar1 = StringLiteral_3644;
  if (lVar11 != 0) {
    uVar9 = FUN_035aee10(lVar11,0);
    lVar11 = *(long *)puVar7;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar11);
      lVar11 = *(long *)puVar7;
    }
    uVar19 = **(undefined8 **)(lVar11 + 0xb8);
    uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_02e6c748(uVar12,uVar19,*(undefined8 *)puVar5,0);
    uVar9 = FUN_02303ad4(uVar9,uVar12,*(undefined8 *)puVar1);
    uVar19 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    uVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_02e6c0a0(uVar12,uVar19,*(undefined8 *)puVar6,0);
    plVar13 = (long *)FUN_0230b6f4(uVar9,uVar12,*(undefined8 *)puVar2);
    if (plVar13 != (long *)0x0) {
      lVar11 = *plVar13;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_3653) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0392de18;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)StringLiteral_3653,0);
LAB_0392de18:
      plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
      puVar3 = StringLiteral_3671;
      puVar2 = StringLiteral_3654;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar11 = *plVar13;
        uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0392de94;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar1,0);
LAB_0392de94:
        uVar17 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        if ((uVar17 & 1) == 0) {
          if (plVar13 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar13;
          uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar17 == 0) goto LAB_0392ec38;
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0392ec20;
        }
        lVar11 = *plVar13;
        uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0392def0;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_0392def0:
        lVar11 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar22 = *(long **)(*(long *)(lVar11 + 0x18) + 0x10);
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar21 = *(long **)(lVar11 + 0x10);
        uVar17 = FUN_03584674(plVar22,0);
        if ((uVar17 & 1) == 0) {
          uVar17 = FUN_03583944(plVar22,0);
          if ((uVar17 & 1) == 0) {
            uVar9 = *(undefined8 *)StringLiteral_3651;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_03579868(uVar9,0);
            if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar17 = FUN_0392f2ac(plVar22,uVar9);
            if ((uVar17 & 1) == 0) {
              FUN_042afc4c(*(undefined4 *)
                            (*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ +
                            0xe0));
              return;
            }
            uVar17 = (**(code **)(*plVar22 + 0x3c8))(plVar22,*(undefined8 *)(*plVar22 + 0x3d0));
            if ((uVar17 & 1) == 0) {
              lVar11 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar11 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
              }
              uVar9 = FUN_03584a50(plVar22,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10),0);
              if (*(int *)(*(long *)
                            Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar17 = FUN_034b0da4(uVar9,0,0);
              if ((uVar17 & 1) == 0) {
                uVar9 = *(undefined8 *)StringLiteral_3651;
                if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar9 = FUN_03579868(uVar9,0);
                if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                lVar11 = FUN_0392f510(plVar22,uVar9);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                lVar11 = *(long *)(lVar11 + 0x20);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar17 = FUN_0358471c(lVar11,0);
                if ((uVar17 & 1) == 0) {
                  if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar9 = FUN_0392f7cc(lVar11);
                  uVar9 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3666,uVar9,
                                       *(undefined8 *)StringLiteral_3665,0);
                  FUN_0392f0cc(plVar22,plVar21,uVar9);
                }
                else {
                  lVar14 = *(long *)(*(long *)(*(long *)
                                                Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                              + 0xb8) + 0x18);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar17 = FUN_02b6b4d8(lVar14,lVar11,*(undefined8 *)StringLiteral_3629);
                  if ((uVar17 & 1) == 0) {
                    lVar14 = FUN_03594a14(plVar22,0);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar9 = *(undefined8 *)StringLiteral_3652;
                    plVar16 = (long *)thunk_FUN_01f116d0(lVar14,uVar9);
                    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc(lVar14,uVar9);
                    }
                    lVar14 = *plVar16;
                    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_3652) {
                          puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_0392e484;
                        }
                        uVar17 = uVar17 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)StringLiteral_3652,0);
LAB_0392e484:
                    lVar14 = (*(code *)*puVar10)(plVar16,puVar10[1]);
                    if (lVar14 == 0) {
                      FUN_0392f0cc(plVar22,plVar21,*(undefined8 *)StringLiteral_3667);
                    }
                    else if (*(int *)(lVar14 + 0x10) == 0) {
                      FUN_0392f0cc(plVar22,plVar21,*(undefined8 *)StringLiteral_3661);
                    }
                    else {
                      if (0 < *(int *)(lVar14 + 0x10)) {
                        iVar20 = 0;
                        do {
                          uVar8 = FUN_03409f80(lVar14,iVar20,0);
                          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0)
                          {
                            thunk_FUN_01ee6d7c();
                          }
                          uVar17 = FUN_034fc6b4(uVar8,0);
                          if ((uVar17 & 1) == 0) {
                            uVar9 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3662,lVar14,
                                                 *(undefined8 *)StringLiteral_3663,0);
                            FUN_0392f0cc(plVar22,plVar21,uVar9);
                          }
                          iVar20 = iVar20 + 1;
                        } while (iVar20 < *(int *)(lVar14 + 0x10));
                      }
                      lVar15 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x20);
                      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a3c();
                      }
                      uVar17 = FUN_02b6b4d8(lVar15,lVar14,*(undefined8 *)StringLiteral_3630);
                      if ((uVar17 & 1) == 0) {
                        lVar15 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x18);
                        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        FUN_02b6b2d0(lVar15,lVar11,plVar16,*(undefined8 *)StringLiteral_3638);
                        lVar11 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x20);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        FUN_02b6b2d0(lVar11,lVar14,plVar16,*(undefined8 *)StringLiteral_3639);
                        lVar11 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x28);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        FUN_02b6b2d0(lVar11,plVar16,lVar14,*(undefined8 *)StringLiteral_3637);
                      }
                      else {
                        lVar11 = FUN_01f08890(*(undefined8 *)
                                               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                              ,5);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)StringLiteral_3662;
                        thunk_FUN_01f51358();
                        if (*(uint *)(lVar11 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(long *)(lVar11 + 0x28) = lVar14;
                        thunk_FUN_01f51358((long *)(lVar11 + 0x28),lVar14);
                        if (*(uint *)(lVar11 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)StringLiteral_3674;
                        thunk_FUN_01f51358();
                        lVar15 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                  + 0xb8) + 0x20);
                        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        lVar14 = FUN_02b6b264(lVar15,lVar14,*(undefined8 *)StringLiteral_3636);
                        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a3c();
                        }
                        uVar9 = thunk_FUN_01ecaf38(lVar14,0);
                        if (*(int *)(*(long *)
                                      Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                    0xe0) == 0) {
                          thunk_FUN_01ee6d7c();
                        }
                        uVar9 = FUN_0392f7cc(uVar9);
                        if (*(uint *)(lVar11 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar11 + 0x38) = uVar9;
                        thunk_FUN_01f51358();
                        if (*(uint *)(lVar11 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08a44();
                        }
                        *(undefined8 *)(lVar11 + 0x40) =
                             *(undefined8 *)
                              Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                        ;
                        thunk_FUN_01f51358();
                        uVar9 = FUN_0340efe8(lVar11,0);
                        FUN_0392f0cc(plVar22,plVar21,uVar9);
                      }
                    }
                  }
                  else {
                    lVar14 = FUN_01f08890(*(undefined8 *)
                                           Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                          ,9);
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)StringLiteral_3670;
                    thunk_FUN_01f51358();
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar9 = FUN_0392f7cc(plVar22);
                    if (*(uint *)(lVar14 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar14 + 0x28) = uVar9;
                    thunk_FUN_01f51358();
                    if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)StringLiteral_3676;
                    thunk_FUN_01f51358();
                    if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar15 = (**(code **)(*plVar21 + 0x268))
                                       (plVar21,*(undefined8 *)(*plVar21 + 0x270));
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    if (*(uint *)(lVar14 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(lVar15 + 0x10);
                    thunk_FUN_01f51358();
                    if (*(uint *)(lVar14 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)StringLiteral_3664;
                    thunk_FUN_01f51358();
                    lVar15 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                + 0xb8) + 0x18);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar15 = FUN_02b6b264(lVar15,lVar11,*(undefined8 *)StringLiteral_3635);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    thunk_FUN_01ecaf38(lVar15,0);
                    uVar9 = FUN_0392f7cc();
                    if (*(uint *)(lVar14 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar14 + 0x48) = uVar9;
                    thunk_FUN_01f51358();
                    if (*(uint *)(lVar14 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)StringLiteral_3673;
                    thunk_FUN_01f51358();
                    uVar9 = FUN_0392f7cc(lVar11);
                    if (*(uint *)(lVar14 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar14 + 0x58) = uVar9;
                    thunk_FUN_01f51358();
                    if (*(uint *)(lVar14 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar14 + 0x60) =
                         *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
                    thunk_FUN_01f51358();
                    uVar9 = FUN_0340efe8(lVar14,0);
                    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    FUN_0403f2cc(uVar9,0);
                  }
                }
              }
              else {
                FUN_0392f0cc(plVar22,plVar21,*(undefined8 *)StringLiteral_3669);
              }
            }
            else {
              FUN_0392f0cc(plVar22,plVar21,*(undefined8 *)StringLiteral_3672);
            }
          }
          else {
            FUN_0392f0cc(plVar22,plVar21,*(undefined8 *)StringLiteral_3660);
          }
        }
        else {
          FUN_0392f0cc(plVar22,plVar21,*(undefined8 *)puVar3);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_0392ec20:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0392ec54;
    }
  }
LAB_0392ec38:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar13,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_0392ec54:
  (*(code *)*puVar10)(plVar13,puVar10[1]);
  return;
}


