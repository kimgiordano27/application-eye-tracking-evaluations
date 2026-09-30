/*
FUNCTION_NAME: FUN_0392e00c
ENTRY_POINT: 0392e00c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 173
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0392ec98) */

void FUN_0392e00c(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int in_w8;
  long lVar6;
  ulong uVar7;
  undefined8 *in_x9;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  
  uVar9 = *in_x9;
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar9 = FUN_03579868(uVar9,0);
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar9 = FUN_0392f420(uVar9);
  FUN_0340ebc0(*(undefined8 *)StringLiteral_3668,uVar9,*(undefined8 *)StringLiteral_3675,0);
  FUN_0392f0cc();
  do {
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x20) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0392de94;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0392de94:
    uVar7 = (*(code *)*puVar2)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0392ec38;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0392def0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0392def0:
    lVar6 = (*(code *)*puVar2)();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar12 = *(long **)(*(long *)(lVar6 + 0x18) + 0x10);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar11 = *(long **)(lVar6 + 0x10);
    uVar7 = FUN_03584674(plVar12,0);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_03583944(plVar12,0);
      if ((uVar7 & 1) == 0) {
        uVar9 = *(undefined8 *)StringLiteral_3651;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_03579868(uVar9,0);
        if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_0392f2ac(plVar12,uVar9);
        if ((uVar7 & 1) == 0) {
          FUN_042afc4c(*(undefined4 *)
                        (*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0))
          ;
          return;
        }
        uVar7 = (**(code **)(*plVar12 + 0x3c8))(plVar12,*(undefined8 *)(*plVar12 + 0x3d0));
        if ((uVar7 & 1) == 0) {
          lVar6 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar6 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
          }
          uVar9 = FUN_03584a50(plVar12,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),0);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar7 = FUN_034b0da4(uVar9,0,0);
          if ((uVar7 & 1) == 0) {
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
            lVar6 = FUN_0392f510(plVar12,uVar9);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar6 = *(long *)(lVar6 + 0x20);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar7 = FUN_0358471c(lVar6,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar9 = FUN_0392f7cc(lVar6);
              uVar9 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3666,uVar9,
                                   *(undefined8 *)StringLiteral_3665,0);
              FUN_0392f0cc(plVar12,plVar11,uVar9);
            }
            else {
              lVar3 = *(long *)(*(long *)(*(long *)
                                           Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                         + 0xb8) + 0x18);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar7 = FUN_02b6b4d8(lVar3,lVar6,*(undefined8 *)StringLiteral_3629);
              if ((uVar7 & 1) == 0) {
                lVar3 = FUN_03594a14(plVar12,0);
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar9 = *(undefined8 *)StringLiteral_3652;
                plVar5 = (long *)thunk_FUN_01f116d0(lVar3,uVar9);
                if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc(lVar3,uVar9);
                }
                lVar3 = *plVar5;
                uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_3652) {
                      puVar2 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_0392e484;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar2 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)StringLiteral_3652,0);
LAB_0392e484:
                lVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
                if (lVar3 == 0) {
                  FUN_0392f0cc(plVar12,plVar11,*(undefined8 *)StringLiteral_3667);
                }
                else if (*(int *)(lVar3 + 0x10) == 0) {
                  FUN_0392f0cc(plVar12,plVar11,*(undefined8 *)StringLiteral_3661);
                }
                else {
                  if (0 < *(int *)(lVar3 + 0x10)) {
                    iVar10 = 0;
                    do {
                      uVar1 = FUN_03409f80(lVar3,iVar10,0);
                      if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                      }
                      uVar7 = FUN_034fc6b4(uVar1,0);
                      if ((uVar7 & 1) == 0) {
                        uVar9 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3662,lVar3,
                                             *(undefined8 *)StringLiteral_3663,0);
                        FUN_0392f0cc(plVar12,plVar11,uVar9);
                      }
                      iVar10 = iVar10 + 1;
                    } while (iVar10 < *(int *)(lVar3 + 0x10));
                  }
                  lVar4 = *(long *)(*(long *)(*(long *)
                                               Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                             + 0xb8) + 0x20);
                  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar7 = FUN_02b6b4d8(lVar4,lVar3,*(undefined8 *)StringLiteral_3630);
                  if ((uVar7 & 1) == 0) {
                    lVar4 = *(long *)(*(long *)(*(long *)
                                                 Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                               + 0xb8) + 0x18);
                    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_02b6b2d0(lVar4,lVar6,plVar5,*(undefined8 *)StringLiteral_3638);
                    lVar6 = *(long *)(*(long *)(*(long *)
                                                 Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                               + 0xb8) + 0x20);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_02b6b2d0(lVar6,lVar3,plVar5,*(undefined8 *)StringLiteral_3639);
                    lVar6 = *(long *)(*(long *)(*(long *)
                                                 Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                               + 0xb8) + 0x28);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    FUN_02b6b2d0(lVar6,plVar5,lVar3,*(undefined8 *)StringLiteral_3637);
                  }
                  else {
                    lVar6 = FUN_01f08890(*(undefined8 *)
                                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                         ,5);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)StringLiteral_3662;
                    thunk_FUN_01f51358();
                    if (*(uint *)(lVar6 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(long *)(lVar6 + 0x28) = lVar3;
                    thunk_FUN_01f51358((long *)(lVar6 + 0x28),lVar3);
                    if (*(uint *)(lVar6 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)StringLiteral_3674;
                    thunk_FUN_01f51358();
                    lVar4 = *(long *)(*(long *)(*(long *)
                                                 Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                               + 0xb8) + 0x20);
                    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    lVar3 = FUN_02b6b264(lVar4,lVar3,*(undefined8 *)StringLiteral_3636);
                    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    uVar9 = thunk_FUN_01ecaf38(lVar3,0);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                                0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar9 = FUN_0392f7cc(uVar9);
                    if (*(uint *)(lVar6 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar6 + 0x38) = uVar9;
                    thunk_FUN_01f51358();
                    if (*(uint *)(lVar6 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    *(undefined8 *)(lVar6 + 0x40) =
                         *(undefined8 *)
                          Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                    ;
                    thunk_FUN_01f51358();
                    uVar9 = FUN_0340efe8(lVar6,0);
                    FUN_0392f0cc(plVar12,plVar11,uVar9);
                  }
                }
              }
              else {
                lVar3 = FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                     ,9);
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)StringLiteral_3670;
                thunk_FUN_01f51358();
                if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar9 = FUN_0392f7cc(plVar12);
                if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar3 + 0x28) = uVar9;
                thunk_FUN_01f51358();
                if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)StringLiteral_3676;
                thunk_FUN_01f51358();
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar4 = (**(code **)(*plVar11 + 0x268))(plVar11,*(undefined8 *)(*plVar11 + 0x270));
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar4 + 0x10);
                thunk_FUN_01f51358();
                if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)StringLiteral_3664;
                thunk_FUN_01f51358();
                lVar4 = *(long *)(*(long *)(*(long *)
                                             Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                           + 0xb8) + 0x18);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar4 = FUN_02b6b264(lVar4,lVar6,*(undefined8 *)StringLiteral_3635);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                thunk_FUN_01ecaf38(lVar4,0);
                uVar9 = FUN_0392f7cc();
                if (*(uint *)(lVar3 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar3 + 0x48) = uVar9;
                thunk_FUN_01f51358();
                if (*(uint *)(lVar3 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)StringLiteral_3673;
                thunk_FUN_01f51358();
                uVar9 = FUN_0392f7cc(lVar6);
                if (*(uint *)(lVar3 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar3 + 0x58) = uVar9;
                thunk_FUN_01f51358();
                if (*(uint *)(lVar3 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined8 *)(lVar3 + 0x60) =
                     *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
                thunk_FUN_01f51358();
                uVar9 = FUN_0340efe8(lVar3,0);
                if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                    == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_0403f2cc(uVar9,0);
              }
            }
          }
          else {
            FUN_0392f0cc(plVar12,plVar11,*(undefined8 *)StringLiteral_3669);
          }
        }
        else {
          FUN_0392f0cc(plVar12,plVar11,*(undefined8 *)StringLiteral_3672);
        }
      }
      else {
        FUN_0392f0cc(plVar12,plVar11,*(undefined8 *)StringLiteral_3660);
      }
    }
    else {
      FUN_0392f0cc(plVar12,plVar11,*unaff_x22);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0392ec54;
    }
  }
LAB_0392ec38:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0392ec54:
  (*(code *)*puVar2)();
  return;
}


