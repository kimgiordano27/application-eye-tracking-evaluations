/*
FUNCTION_NAME: FUN_039135c8
ENTRY_POINT: 039135c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 186
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03913c68) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_039135c8(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  int local_7c;
  char local_78 [4];
  char local_74 [4];
  long local_70;
  undefined8 local_68;
  
  puVar1 = StringLiteral_3389;
  if ((DAT_04838226 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_3430);
    thunk_FUN_01efb3a4(StringLiteral_3431);
    thunk_FUN_01efb3a4(StringLiteral_3389);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__);
    thunk_FUN_01efb3a4(StringLiteral_3432);
    thunk_FUN_01efb3a4(StringLiteral_3433);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>_ParseChoiceList__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_3434);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3435);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3436);
    thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
    DAT_04838226 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_74[0] = '\0';
  local_78[0] = '\0';
  local_7c = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_03913f90(param_2,&local_68,local_74,&local_70,local_78,&local_7c);
  if ((uVar4 & 1) == 0) {
    return (long *)0x0;
  }
  plVar5 = (long *)(**(code **)(*param_1 + 0x188))
                             (param_1,local_68,param_3,*(undefined8 *)(*param_1 + 400));
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  uVar4 = FUN_03582560(plVar5,0,0);
  if ((uVar4 & 1) != 0) {
    return (long *)0x0;
  }
  if (local_74[0] != '\0') {
    if (plVar5 == (long *)0x0) goto LAB_03913c5c;
    uVar4 = (**(code **)(*plVar5 + 0x3c8))(plVar5,*(undefined8 *)(*plVar5 + 0x3d0));
    if ((uVar4 & 1) == 0) {
      return (long *)0x0;
    }
    if (*(int *)(*(long *)StringLiteral_3431 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar6 = (long *)FUN_029da4a8(*(undefined8 *)StringLiteral_3430);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar15 = plVar6[3];
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar16 = *(int *)(lVar15 + 0x18);
    *(undefined4 *)(lVar15 + 0x18) = 0;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (0 < iVar16) {
      FUN_0358d1e4(*(undefined8 *)(lVar15 + 0x10),0,iVar16,0);
    }
    puVar3 = Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
    puVar2 = Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__;
    if (local_70 == 0) {
LAB_039138d4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar16 = 0;
    while (iVar16 < *(int *)(local_70 + 0x18)) {
      uVar7 = FUN_030f28e4(local_70,iVar16,*(undefined8 *)puVar3);
      uVar7 = (**(code **)(*param_1 + 0x188))(param_1,uVar7,param_3,*(undefined8 *)(*param_1 + 400))
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_03582560(uVar7,0,0);
      if ((uVar4 & 1) != 0) goto LAB_03913b54;
      lVar9 = *(long *)(lVar15 + 0x10);
      lVar11 = *(long *)puVar2;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar14 = *(uint *)(lVar15 + 0x18);
      if (uVar14 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar14 + 1;
        puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
        *puVar8 = uVar7;
        thunk_FUN_01f51358(puVar8,uVar7);
      }
      else {
        FUN_030f2bb4(lVar15,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
      iVar16 = iVar16 + 1;
      if (local_70 == 0) goto LAB_039138d4;
    }
    lVar9 = FUN_030f4630(lVar15,*(undefined8 *)StringLiteral_3433);
    puVar1 = Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__;
    if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03949d10(plVar5,lVar9,0);
    puVar3 = 
    Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
    ;
    puVar2 = Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
    if ((uVar4 & 1) == 0) {
      if (param_3 != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = *(undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__
        ;
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          uVar4 = 0;
          uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar17 = *(undefined8 *)(lVar9 + 0x20 + uVar4 * 8);
            uVar10 = FUN_0340e600(uVar7,*(undefined8 *)puVar2,0);
            if ((uVar10 & 1) != 0) {
              uVar7 = FUN_03405678(uVar7,*(undefined8 *)puVar3,0);
            }
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar17 = FUN_0392f7cc(uVar17,0);
            uVar7 = FUN_03405678(uVar7,uVar17,0);
            uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
        lVar15 = FUN_01f08890(*(undefined8 *)
                               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                              ,7);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)StringLiteral_3435;
        thunk_FUN_01f51358();
        if (*(uint *)(lVar15 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar15 + 0x28) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x28),uVar7);
        if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)StringLiteral_3434;
        thunk_FUN_01f51358();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_0392f7cc(plVar5,0);
        if (*(uint *)(lVar15 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar15 + 0x38) = uVar7;
        thunk_FUN_01f51358();
        if (*(uint *)(lVar15 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)StringLiteral_3436;
        thunk_FUN_01f51358();
        if (*(uint *)(lVar15 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar15 + 0x48) = param_2;
        thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x48),param_2);
        if (*(uint *)(lVar15 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar15 + 0x50) =
             *(undefined8 *)
              Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
        ;
        thunk_FUN_01f51358();
        uVar7 = FUN_0340efe8(lVar15,0);
        FUN_0390b988(param_3,uVar7);
      }
LAB_03913b54:
      uVar13 = 9;
      uVar14 = 9;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x928))(plVar5,lVar9,*(undefined8 *)(*plVar5 + 0x930))
      ;
      iVar16 = *(int *)(lVar15 + 0x18);
      *(undefined4 *)(lVar15 + 0x18) = 0;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (0 < iVar16) {
        FUN_0358d1e4(*(undefined8 *)(lVar15 + 0x10),0,iVar16,0);
      }
      uVar13 = 4;
      uVar14 = 4;
    }
    if (plVar6 != (long *)0x0) {
      lVar15 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03913bb4;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03913bb4:
      (*(code *)*puVar8)(plVar6,puVar8[1]);
      uVar14 = uVar13;
    }
    if ((uVar14 | 4) != 4) {
      return (long *)0x0;
    }
  }
  if (local_78[0] == '\0') {
    return plVar5;
  }
  if (local_7c == 1) {
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x8f8))(plVar5,*(undefined8 *)(*plVar5 + 0x900));
      return plVar5;
    }
  }
  else if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x908))
                               (plVar5,local_7c,*(undefined8 *)(*plVar5 + 0x910));
    return plVar5;
  }
LAB_03913c5c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


