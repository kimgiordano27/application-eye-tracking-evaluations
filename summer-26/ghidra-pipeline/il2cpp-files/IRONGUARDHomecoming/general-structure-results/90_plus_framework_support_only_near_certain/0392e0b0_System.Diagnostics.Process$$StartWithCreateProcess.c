/*
FUNCTION_NAME: System.Diagnostics.Process$$StartWithCreateProcess
ENTRY_POINT: 0392e0b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 153
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0392ec98) */

void System_Diagnostics_Process__StartWithCreateProcess(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar10;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    uVar3 = FUN_03584a50(param_1,param_2,0);
    if (*(int *)(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_034b0da4(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
      uVar3 = *(undefined8 *)StringLiteral_3651;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_03579868(uVar3,0);
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_0392f510(unaff_x29,uVar3);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = FUN_0358471c(lVar8,0);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar3 = FUN_0392f7cc(lVar8);
        uVar3 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3666,uVar3,
                             *(undefined8 *)StringLiteral_3665,0);
        FUN_0392f0cc(unaff_x29,unaff_x28,uVar3);
      }
      else {
        lVar5 = *(long *)(*(long *)(*(long *)
                                     Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                   + 0xb8) + 0x18);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar4 = FUN_02b6b4d8(lVar5,lVar8,*(undefined8 *)StringLiteral_3629);
        if ((uVar4 & 1) == 0) {
          lVar5 = FUN_03594a14(unaff_x29,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar3 = *(undefined8 *)StringLiteral_3652;
          plVar7 = (long *)thunk_FUN_01f116d0(lVar5,uVar3);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar5,uVar3);
          }
          lVar5 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_3652) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0392e484;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)StringLiteral_3652,0);
LAB_0392e484:
          lVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
          if (lVar5 == 0) {
            FUN_0392f0cc(unaff_x29,unaff_x28,*(undefined8 *)StringLiteral_3667);
          }
          else if (*(int *)(lVar5 + 0x10) == 0) {
            FUN_0392f0cc(unaff_x29,unaff_x28,*(undefined8 *)StringLiteral_3661);
          }
          else {
            if (0 < *(int *)(lVar5 + 0x10)) {
              iVar10 = 0;
              do {
                uVar1 = FUN_03409f80(lVar5,iVar10,0);
                if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar4 = FUN_034fc6b4(uVar1,0);
                if ((uVar4 & 1) == 0) {
                  uVar3 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3662,lVar5,
                                       *(undefined8 *)StringLiteral_3663,0);
                  FUN_0392f0cc(unaff_x29,unaff_x28,uVar3);
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < *(int *)(lVar5 + 0x10));
            }
            lVar6 = *(long *)(*(long *)(*(long *)
                                         Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                       + 0xb8) + 0x20);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar4 = FUN_02b6b4d8(lVar6,lVar5,*(undefined8 *)StringLiteral_3630);
            if ((uVar4 & 1) == 0) {
              lVar6 = *(long *)(*(long *)(*(long *)
                                           Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                         + 0xb8) + 0x18);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_02b6b2d0(lVar6,lVar8,plVar7,*(undefined8 *)StringLiteral_3638);
              lVar8 = *(long *)(*(long *)(*(long *)
                                           Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                         + 0xb8) + 0x20);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_02b6b2d0(lVar8,lVar5,plVar7,*(undefined8 *)StringLiteral_3639);
              lVar8 = *(long *)(*(long *)(*(long *)
                                           Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                         + 0xb8) + 0x28);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_02b6b2d0(lVar8,plVar7,lVar5,*(undefined8 *)StringLiteral_3637);
            }
            else {
              lVar8 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                   ,5);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)StringLiteral_3662;
              thunk_FUN_01f51358();
              if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(long *)(lVar8 + 0x28) = lVar5;
              thunk_FUN_01f51358((long *)(lVar8 + 0x28),lVar5);
              if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)StringLiteral_3674;
              thunk_FUN_01f51358();
              lVar6 = *(long *)(*(long *)(*(long *)
                                           Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                         + 0xb8) + 0x20);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar5 = FUN_02b6b264(lVar6,lVar5,*(undefined8 *)StringLiteral_3636);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar3 = thunk_FUN_01ecaf38(lVar5,0);
              if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar3 = FUN_0392f7cc(uVar3);
              if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined8 *)(lVar8 + 0x38) = uVar3;
              thunk_FUN_01f51358();
              if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined8 *)(lVar8 + 0x40) =
                   *(undefined8 *)
                    Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
              ;
              thunk_FUN_01f51358();
              uVar3 = FUN_0340efe8(lVar8,0);
              FUN_0392f0cc(unaff_x29,unaff_x28,uVar3);
            }
          }
        }
        else {
          lVar5 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,9);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)StringLiteral_3670;
          thunk_FUN_01f51358();
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar3 = FUN_0392f7cc(unaff_x29);
          if (*(uint *)(lVar5 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar5 + 0x28) = uVar3;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar5 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)StringLiteral_3676;
          thunk_FUN_01f51358();
          if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar6 = (**(code **)(*unaff_x28 + 0x268))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x270));
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar5 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar6 + 0x10);
          thunk_FUN_01f51358();
          if (*(uint *)(lVar5 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)StringLiteral_3664;
          thunk_FUN_01f51358();
          lVar6 = *(long *)(*(long *)(*(long *)
                                       Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                                     + 0xb8) + 0x18);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar6 = FUN_02b6b264(lVar6,lVar8,*(undefined8 *)StringLiteral_3635);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          thunk_FUN_01ecaf38(lVar6,0);
          uVar3 = FUN_0392f7cc();
          if (*(uint *)(lVar5 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar5 + 0x48) = uVar3;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar5 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)StringLiteral_3673;
          thunk_FUN_01f51358();
          uVar3 = FUN_0392f7cc(lVar8);
          if (*(uint *)(lVar5 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar5 + 0x58) = uVar3;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar5 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar5 + 0x60) =
               *(undefined8 *)Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
          thunk_FUN_01f51358();
          uVar3 = FUN_0340efe8(lVar5,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar3,0);
        }
      }
    }
    else {
      FUN_0392f0cc(unaff_x29,unaff_x28,*(undefined8 *)StringLiteral_3669);
    }
LAB_0392de48:
    lVar8 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x20) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0392de94;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0392de94:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar8 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 == 0) goto LAB_0392ec38;
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0392def0;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0392def0:
    lVar8 = (*(code *)*puVar2)();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *(long **)(*(long *)(lVar8 + 0x18) + 0x10);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x28 = *(long **)(lVar8 + 0x10);
    uVar4 = FUN_03584674(param_1,0);
    if ((uVar4 & 1) != 0) {
      FUN_0392f0cc(param_1,unaff_x28,*unaff_x22);
      goto LAB_0392de48;
    }
    uVar4 = FUN_03583944(param_1,0);
    if ((uVar4 & 1) != 0) {
      FUN_0392f0cc(param_1,unaff_x28,*(undefined8 *)StringLiteral_3660);
      goto LAB_0392de48;
    }
    uVar3 = *(undefined8 *)StringLiteral_3651;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_03579868(uVar3,0);
    if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_0392f2ac(param_1,uVar3);
    if ((uVar4 & 1) == 0) {
      FUN_042afc4c(*(undefined4 *)
                    (*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0));
      return;
    }
    uVar4 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
    if ((uVar4 & 1) != 0) {
      FUN_0392f0cc(param_1,unaff_x28,*(undefined8 *)StringLiteral_3672);
      goto LAB_0392de48;
    }
    lVar8 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    }
    param_2 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
    unaff_x29 = param_1;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0392ec54;
    }
  }
LAB_0392ec38:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0392ec54:
  (*(code *)*puVar2)();
  return;
}


