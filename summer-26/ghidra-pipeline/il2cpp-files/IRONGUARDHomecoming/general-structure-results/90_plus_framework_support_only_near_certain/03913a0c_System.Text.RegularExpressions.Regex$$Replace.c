/*
FUNCTION_NAME: System.Text.RegularExpressions.Regex$$Replace
ENTRY_POINT: 03913a0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03913c68) */
/* WARNING: Removing unreachable block (ram,0x03913bd0) */
/* WARNING: Removing unreachable block (ram,0x03913c28) */
/* WARNING: Removing unreachable block (ram,0x03913bd8) */
/* WARNING: Removing unreachable block (ram,0x03913c30) */
/* WARNING: Removing unreachable block (ram,0x03913c34) */
/* WARNING: Removing unreachable block (ram,0x03913be4) */
/* WARNING: Removing unreachable block (ram,0x03913c5c) */
/* WARNING: Removing unreachable block (ram,0x03913be8) */
/* WARNING: Removing unreachable block (ram,0x03913c48) */

undefined8 System_Text_RegularExpressions_Regex__Replace(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  undefined8 unaff_x22;
  long unaff_x23;
  long *unaff_x26;
  undefined8 *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
  while( true ) {
    unaff_x28 = unaff_x28 + 1;
    if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x28) break;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uVar2 = *(undefined8 *)(unaff_x29 + unaff_x28 * 8);
    uVar4 = FUN_0340e600(param_1,*unaff_x27,0);
    if ((uVar4 & 1) != 0) {
      param_1 = FUN_03405678(param_1,*unaff_x19,0);
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_0392f7cc(uVar2,0);
    param_1 = FUN_03405678(param_1,uVar2,0);
  }
  lVar1 = FUN_01f08890(*(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                       ,7);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)StringLiteral_3435;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar1 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  thunk_FUN_01f51358((undefined8 *)(lVar1 + 0x28),param_1);
  if (*(uint *)(lVar1 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)StringLiteral_3434;
  thunk_FUN_01f51358();
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = FUN_0392f7cc();
  if (*(uint *)(lVar1 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar1 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)StringLiteral_3436;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar1 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar1 + 0x48) = unaff_x22;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar1 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar1 + 0x50) =
       *(undefined8 *)
        Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
  ;
  thunk_FUN_01f51358();
  FUN_0340efe8(lVar1,0);
  FUN_0390b988();
  if (in_stack_00000008 != (long *)0x0) {
    lVar1 = *in_stack_00000008;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03913bb4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03913bb4:
    (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  }
  return 0;
}


