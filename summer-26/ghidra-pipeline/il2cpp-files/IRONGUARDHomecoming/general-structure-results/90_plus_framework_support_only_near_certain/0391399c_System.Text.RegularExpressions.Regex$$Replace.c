/*
FUNCTION_NAME: System.Text.RegularExpressions.Regex$$Replace
ENTRY_POINT: 0391399c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 110
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03913bd0) */
/* WARNING: Removing unreachable block (ram,0x03913c28) */
/* WARNING: Removing unreachable block (ram,0x03913bd8) */
/* WARNING: Removing unreachable block (ram,0x03913c30) */
/* WARNING: Removing unreachable block (ram,0x03913c34) */
/* WARNING: Removing unreachable block (ram,0x03913be4) */
/* WARNING: Removing unreachable block (ram,0x03913c5c) */
/* WARNING: Removing unreachable block (ram,0x03913be8) */
/* WARNING: Removing unreachable block (ram,0x03913c48) */
/* WARNING: Removing unreachable block (ram,0x03913c68) */

undefined8 System_Text_RegularExpressions_Regex__Replace(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  long unaff_x19;
  undefined8 *puVar4;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar5;
  long *unaff_x26;
  undefined8 *unaff_x27;
  ulong uVar6;
  long *in_stack_00000008;
  
  puVar4 = *(undefined8 **)(unaff_x19 + 0x818);
  uVar6 = 0;
  param_1 = param_1 & 0xffffffff;
  do {
    if (param_1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uVar5 = *(undefined8 *)(unaff_x23 + 0x20 + uVar6 * 8);
    uVar1 = FUN_0340e600(unaff_x24,*unaff_x27,0);
    if ((uVar1 & 1) != 0) {
      unaff_x24 = FUN_03405678(unaff_x24,*puVar4,0);
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_0392f7cc(uVar5,0);
    unaff_x24 = FUN_03405678(unaff_x24,uVar5,0);
    param_1 = (ulong)*(uint *)(unaff_x23 + 0x18);
    uVar6 = uVar6 + 1;
  } while ((long)uVar6 < (long)(int)*(uint *)(unaff_x23 + 0x18));
  lVar2 = FUN_01f08890(*(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                       ,7);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)StringLiteral_3435;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar2 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar2 + 0x28) = unaff_x24;
  thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x28),unaff_x24);
  if (*(uint *)(lVar2 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)StringLiteral_3434;
  thunk_FUN_01f51358();
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_0392f7cc();
  if (*(uint *)(lVar2 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar2 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)StringLiteral_3436;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar2 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar2 + 0x48) = unaff_x22;
  thunk_FUN_01f51358();
  if (*(uint *)(lVar2 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(lVar2 + 0x50) =
       *(undefined8 *)
        Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
  ;
  thunk_FUN_01f51358();
  FUN_0340efe8(lVar2,0);
  FUN_0390b988();
  if (in_stack_00000008 != (long *)0x0) {
    lVar2 = *in_stack_00000008;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar3 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_03913bb4;
        }
        uVar6 = uVar6 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03913bb4:
    (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
  }
  return 0;
}


