/*
FUNCTION_NAME: System.Text.RegularExpressions.Regex$$Replace
ENTRY_POINT: 03913814
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 113
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03913c68) */

long * System_Text_RegularExpressions_Regex__Replace(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int in_w9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar11;
  uint uVar12;
  long unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 uVar13;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000010;
  char in_stack_00000018;
  long in_stack_00000020;
  
  while (unaff_w25 < in_w9) {
    FUN_030f28e4(param_1,unaff_w25,*unaff_x28);
    uVar5 = (**(code **)(*unaff_x23 + 0x188))();
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_03582560(uVar5,0,0);
    if ((uVar6 & 1) != 0) goto LAB_03913b54;
    lVar8 = *(long *)(unaff_x24 + 0x10);
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar12 = *(uint *)(unaff_x24 + 0x18);
    if (uVar12 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x24 + 0x18) = uVar12 + 1;
      puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
      *puVar7 = uVar5;
      thunk_FUN_01f51358(puVar7,uVar5);
    }
    else {
      FUN_030f2bb4();
    }
    unaff_w25 = unaff_w25 + 1;
    if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = in_stack_00000020;
    in_w9 = *(int *)(in_stack_00000020 + 0x18);
  }
  lVar8 = FUN_030f4630();
  puVar4 = Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__;
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03949d10();
  puVar3 = 
  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
  ;
  puVar2 = Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
  if ((uVar6 & 1) == 0) {
    if (unaff_x21 != 0) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = *(undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar6 = 0;
        uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar13 = *(undefined8 *)(lVar8 + 0x20 + uVar6 * 8);
          uVar9 = FUN_0340e600(uVar5,*(undefined8 *)puVar2,0);
          if ((uVar9 & 1) != 0) {
            uVar5 = FUN_03405678(uVar5,*(undefined8 *)puVar3,0);
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar13 = FUN_0392f7cc(uVar13,0);
          uVar5 = FUN_03405678(uVar5,uVar13,0);
          uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      lVar8 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                           ,7);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)StringLiteral_3435;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x28) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),uVar5);
      if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)StringLiteral_3434;
      thunk_FUN_01f51358();
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_0392f7cc();
      if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x38) = uVar5;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)StringLiteral_3436;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x48) = unaff_x22;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + 0x50) =
           *(undefined8 *)
            Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
      ;
      thunk_FUN_01f51358();
      FUN_0340efe8(lVar8,0);
      FUN_0390b988();
    }
LAB_03913b54:
    uVar11 = 9;
    uVar12 = 9;
  }
  else {
    unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x928))();
    iVar1 = *(int *)(unaff_x24 + 0x18);
    *(undefined4 *)(unaff_x24 + 0x18) = 0;
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0358d1e4(*(undefined8 *)(unaff_x24 + 0x10),0,iVar1,0);
    }
    uVar11 = 4;
    uVar12 = 4;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar8 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03913bb4;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(unaff_x19,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03913bb4:
    (*(code *)*puVar7)(unaff_x19,puVar7[1]);
    uVar12 = uVar11;
  }
  if ((uVar12 | 4) == 4) {
    if (in_stack_00000018 != '\0') {
      if (in_stack_00000010._4_4_ == 1) {
        if (unaff_x20 == (long *)0x0) {
LAB_03913c5c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x8f8))
                                      (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x900));
      }
      else {
        if (unaff_x20 == (long *)0x0) goto LAB_03913c5c;
        unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x908))
                                      (unaff_x20,in_stack_00000010._4_4_,
                                       *(undefined8 *)(*unaff_x20 + 0x910));
      }
    }
  }
  else {
    unaff_x20 = (long *)0x0;
  }
  return unaff_x20;
}


