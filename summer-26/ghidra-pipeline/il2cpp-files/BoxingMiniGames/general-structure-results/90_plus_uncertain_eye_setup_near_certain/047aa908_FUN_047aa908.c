/*
FUNCTION_NAME: FUN_047aa908
ENTRY_POINT: 047aa908
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 173
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_047aa908(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar4 = uVar3;
  do {
    uVar4 = uVar4 - 1;
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 0) {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      return;
    }
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 == 0) goto LAB_047aa9d0;
    if (*(uint *)(lVar2 + 0x18) <= uVar3)
    goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__ToArray;
    if (param_3 == 0) goto LAB_047aa9d0;
    lVar2 = lVar2 + (ulong)uVar4 * 0x20;
    uStack_58 = *(undefined8 *)(lVar2 + 0x28);
    local_60 = *(undefined8 *)(lVar2 + 0x20);
    uStack_48 = *(undefined8 *)(lVar2 + 0x38);
    uStack_50 = *(undefined8 *)(lVar2 + 0x30);
    uVar1 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),&local_60,*(undefined8 *)(param_3 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    if (uVar3 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (ulong)uVar4 * 0x20;
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      uVar7 = *(undefined8 *)(lVar2 + 0x38);
      uVar6 = *(undefined8 *)(lVar2 + 0x30);
      param_1[1] = *(undefined8 *)(lVar2 + 0x28);
      *param_1 = uVar5;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
      return;
    }
Unity_Collections_NativeArray<OVRPlugin_Vector4s>__ToArray:
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
LAB_047aa9d0:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


