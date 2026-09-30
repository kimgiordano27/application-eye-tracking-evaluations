/*
FUNCTION_NAME: System.Diagnostics.Process$$StartWithShellExecuteEx
ENTRY_POINT: 0392dd4c
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

void System_Diagnostics_Process__StartWithShellExecuteEx(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  int iVar16;
  undefined8 *unaff_x27;
  long *plVar17;
  long *plVar18;
  
  uVar15 = *param_1;
  uVar5 = thunk_FUN_01f117cc(*unaff_x27);
  FUN_02e6c748(uVar5,uVar15,*unaff_x21,0);
  uVar5 = FUN_02303ad4();
  uVar14 = **(undefined8 **)(*unaff_x24 + 0xb8);
  uVar15 = thunk_FUN_01f117cc(*unaff_x25);
  FUN_02e6c0a0(uVar15,uVar14,*unaff_x23,0);
  plVar6 = (long *)FUN_0230b6f4(uVar5,uVar15,*unaff_x22);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = *plVar6;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_3653) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0392de18;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)StringLiteral_3653,0);
LAB_0392de18:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar3 = StringLiteral_3671;
  puVar2 = StringLiteral_3654;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0392de94;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_0392de94:
    uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_0392ec38;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0392def0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_0392def0:
    lVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar18 = *(long **)(*(long *)(lVar11 + 0x18) + 0x10);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar17 = *(long **)(lVar11 + 0x10);
    uVar12 = FUN_03584674(plVar18,0);
    if ((uVar12 & 1) == 0) {
      uVar12 = FUN_03583944(plVar18,0);
      if ((uVar12 & 1) == 0) {
        uVar5 = *(undefined8 *)StringLiteral_3651;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_03579868(uVar5,0);
        if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_0392f2ac(plVar18,uVar5);
        if ((uVar12 & 1) == 0) {
          FUN_042afc4c(*(undefined4 *)
                        (*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0))
          ;
          return;
        }
        uVar12 = (**(code **)(*plVar18 + 0x3c8))(plVar18,*(undefined8 *)(*plVar18 + 0x3d0));
        if ((uVar12 & 1) == 0) {
          lVar11 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
          }
          uVar5 = FUN_03584a50(plVar18,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10),0);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_034b0da4(uVar5,0,0);
          if ((uVar12 & 1) == 0) {
            uVar5 = *(undefined8 *)StringLiteral_3651;
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar5 = FUN_03579868(uVar5,0);
            if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar11 = FUN_0392f510(plVar18,uVar5);
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
            uVar12 = FUN_0358471c(lVar11,0);
            if ((uVar12 & 1) == 0) {
              if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar5 = FUN_0392f7cc(lVar11);
              uVar5 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3666,uVar5,
                                   *(undefined8 *)StringLiteral_3665,0);
              FUN_0392f0cc(plVar18,plVar17,uVar5);
            }
            else {
              lVar8 = *(long *)(*(long *)(*(long *)
                                           Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                         + 0xb8) + 0x18);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar12 = FUN_02b6b4d8(lVar8,lVar11,*(undefined8 *)StringLiteral_3629);
              if ((uVar12 & 1) == 0) {
                lVar8 = FUN_03594a14(plVar18,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar5 = *(undefined8 *)StringLiteral_3652;
                plVar10 = (long *)thunk_FUN_01f116d0(lVar8,uVar5);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(lVar8,uVar5);
                }
                lVar8 = *plVar10;
                uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_3652) {
                      puVar7 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_0392e484;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar7 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)StringLiteral_3652,0);
LAB_0392e484:
                lVar8 = (*(code *)*puVar7)(plVar10,puVar7[1]);
                if (lVar8 == 0) {
                  FUN_0392f0cc(plVar18,plVar17,*(undefined8 *)StringLiteral_3667);
                }
                else if (*(int *)(lVar8 + 0x10) == 0) {
                  FUN_0392f0cc(plVar18,plVar17,*(undefined8 *)StringLiteral_3661);
                }
                else {
                  if (0 < *(int *)(lVar8 + 0x10)) {
                    iVar16 = 0;
                    do {
                      uVar4 = FUN_03409f80(lVar8,iVar16,0);
                      if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar12 = FUN_034fc6b4(uVar4,0);
                      if ((uVar12 & 1) == 0) {
                        uVar5 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3662,lVar8,
                                             *(undefined8 *)StringLiteral_3663,0);
                        FUN_0392f0cc(plVar18,plVar17,uVar5);
                      }
                      iVar16 = iVar16 + 1;
                    } while (iVar16 < *(int *)(lVar8 + 0x10));
                  }
                  lVar9 = *(long *)(*(long *)(*(long *)
                                               Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                             + 0xb8) + 0x20);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar12 = FUN_02b6b4d8(lVar9,lVar8,*(undefined8 *)StringLiteral_3630);
                  if ((uVar12 & 1) == 0) {
                    lVar9 = *(long *)(*(long *)(*(long *)
                                                 Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                               + 0xb8) + 0x18);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_02b6b2d0(lVar9,lVar11,plVar10,*(undefined8 *)StringLiteral_3638);
                    lVar11 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                + 0xb8) + 0x20);
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_02b6b2d0(lVar11,lVar8,plVar10,*(undefined8 *)StringLiteral_3639);
                    lVar11 = *(long *)(*(long *)(*(long *)
                                                  Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                                + 0xb8) + 0x28);
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_02b6b2d0(lVar11,plVar10,lVar8,*(undefined8 *)StringLiteral_3637);
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
                    *(long *)(lVar11 + 0x28) = lVar8;
                    thunk_FUN_01f51358((long *)(lVar11 + 0x28),lVar8);
                    if (*(uint *)(lVar11 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)StringLiteral_3674;
                    thunk_FUN_01f51358();
                    lVar9 = *(long *)(*(long *)(*(long *)
                                                 Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                               + 0xb8) + 0x20);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar8 = FUN_02b6b264(lVar9,lVar8,*(undefined8 *)StringLiteral_3636);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar5 = thunk_FUN_01ecaf38(lVar8,0);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar5 = FUN_0392f7cc(uVar5);
                    if (*(uint *)(lVar11 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar11 + 0x38) = uVar5;
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
                    uVar5 = FUN_0340efe8(lVar11,0);
                    FUN_0392f0cc(plVar18,plVar17,uVar5);
                  }
                }
              }
              else {
                lVar8 = FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                     ,9);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)StringLiteral_3670;
                thunk_FUN_01f51358();
                if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar5 = FUN_0392f7cc(plVar18);
                if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar8 + 0x28) = uVar5;
                thunk_FUN_01f51358();
                if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)StringLiteral_3676;
                thunk_FUN_01f51358();
                if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar9 = (**(code **)(*plVar17 + 0x268))(plVar17,*(undefined8 *)(*plVar17 + 0x270));
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar9 + 0x10);
                thunk_FUN_01f51358();
                if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)StringLiteral_3664;
                thunk_FUN_01f51358();
                lVar9 = *(long *)(*(long *)(*(long *)
                                             Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                           + 0xb8) + 0x18);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar9 = FUN_02b6b264(lVar9,lVar11,*(undefined8 *)StringLiteral_3635);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                thunk_FUN_01ecaf38(lVar9,0);
                uVar5 = FUN_0392f7cc();
                if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar8 + 0x48) = uVar5;
                thunk_FUN_01f51358();
                if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)StringLiteral_3673;
                thunk_FUN_01f51358();
                uVar5 = FUN_0392f7cc(lVar11);
                if (*(uint *)(lVar8 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar8 + 0x58) = uVar5;
                thunk_FUN_01f51358();
                if (*(uint *)(lVar8 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar8 + 0x60) =
                     *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
                thunk_FUN_01f51358();
                uVar5 = FUN_0340efe8(lVar8,0);
                if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                    == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_0403f2cc(uVar5,0);
              }
            }
          }
          else {
            FUN_0392f0cc(plVar18,plVar17,*(undefined8 *)StringLiteral_3669);
          }
        }
        else {
          FUN_0392f0cc(plVar18,plVar17,*(undefined8 *)StringLiteral_3672);
        }
      }
      else {
        FUN_0392f0cc(plVar18,plVar17,*(undefined8 *)StringLiteral_3660);
      }
    }
    else {
      FUN_0392f0cc(plVar18,plVar17,*(undefined8 *)puVar3);
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0392ec54;
    }
  }
LAB_0392ec38:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0392ec54:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


