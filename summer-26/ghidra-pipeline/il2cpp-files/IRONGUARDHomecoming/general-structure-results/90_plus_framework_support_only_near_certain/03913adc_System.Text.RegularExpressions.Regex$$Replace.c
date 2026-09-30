/*
FUNCTION_NAME: System.Text.RegularExpressions.Regex$$Replace
ENTRY_POINT: 03913adc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_1
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

undefined8 System_Text_RegularExpressions_Regex__Replace(void)

{
  undefined8 *puVar1;
  uint in_w8;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  undefined8 unaff_x22;
  long unaff_x23;
  
  if (in_w8 < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(unaff_x23 + 0x40) = *(undefined8 *)StringLiteral_3436;
  thunk_FUN_01f51358();
  if (*(uint *)(unaff_x23 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(unaff_x23 + 0x48) = unaff_x22;
  thunk_FUN_01f51358();
  if (*(uint *)(unaff_x23 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(unaff_x23 + 0x50) =
       *(undefined8 *)
        Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
  ;
  thunk_FUN_01f51358();
  FUN_0340efe8();
  FUN_0390b988();
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_03913bb4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03913bb4:
    (*(code *)*puVar1)();
  }
  return 0;
}


