/*
FUNCTION_NAME: System.Text.RegularExpressions.Regex$$Replace
ENTRY_POINT: 03913908
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 113
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03913c68) */

long * System_Text_RegularExpressions_Regex__Replace(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar9;
  uint uVar10;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x26;
  undefined8 in_stack_00000010;
  char in_stack_00000018;
  
  thunk_FUN_01ee6d7c();
  uVar4 = FUN_03949d10();
  puVar3 = 
  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
  ;
  puVar2 = Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
  if ((uVar4 & 1) == 0) {
    if (unaff_x21 != 0) {
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = *(undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
      if (0 < (int)*(ulong *)(unaff_x23 + 0x18)) {
        uVar4 = 0;
        uVar6 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar12 = *(undefined8 *)(unaff_x23 + 0x20 + uVar4 * 8);
          uVar6 = FUN_0340e600(uVar11,*(undefined8 *)puVar2,0);
          if ((uVar6 & 1) != 0) {
            uVar11 = FUN_03405678(uVar11,*(undefined8 *)puVar3,0);
          }
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_0392f7cc(uVar12,0);
          uVar11 = FUN_03405678(uVar11,uVar12,0);
          uVar6 = (ulong)*(uint *)(unaff_x23 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x23 + 0x18));
      }
      lVar7 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                           ,7);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)StringLiteral_3435;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar7 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar7 + 0x28) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28),uVar11);
      if (*(uint *)(lVar7 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)StringLiteral_3434;
      thunk_FUN_01f51358();
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_0392f7cc();
      if (*(uint *)(lVar7 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar7 + 0x38) = uVar11;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar7 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)StringLiteral_3436;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar7 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar7 + 0x48) = unaff_x22;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar7 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar7 + 0x50) =
           *(undefined8 *)
            Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
      ;
      thunk_FUN_01f51358();
      FUN_0340efe8(lVar7,0);
      FUN_0390b988();
    }
    uVar10 = 9;
    uVar9 = 9;
  }
  else {
    unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x928))();
    iVar1 = *(int *)(unaff_x24 + 0x18);
    *(undefined4 *)(unaff_x24 + 0x18) = 0;
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0358d1e4(*(undefined8 *)(unaff_x24 + 0x10),0,iVar1,0);
    }
    uVar10 = 4;
    uVar9 = 4;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03913bb4;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(unaff_x19,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03913bb4:
    (*(code *)*puVar5)(unaff_x19,puVar5[1]);
    uVar9 = uVar10;
  }
  if ((uVar9 | 4) == 4) {
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


