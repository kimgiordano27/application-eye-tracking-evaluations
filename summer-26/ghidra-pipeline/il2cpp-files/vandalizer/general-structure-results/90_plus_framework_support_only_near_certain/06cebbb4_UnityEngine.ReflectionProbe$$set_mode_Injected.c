/*
FUNCTION_NAME: UnityEngine.ReflectionProbe$$set_mode_Injected
ENTRY_POINT: 06cebbb4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_ReflectionProbe__set_mode_Injected(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0759b2a8;
  if ((DAT_07a50afc & 1) == 0) {
    FUN_031f20f4(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo);
    FUN_031f20f4(PTR_DAT_075dc320);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>_TypeInfo);
    FUN_031f20f4(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>_TypeInfo);
    DAT_07a50afc = 1;
  }
  plVar5 = (long *)(param_1 + 0x20);
  lVar6 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar3 = FUN_06e5ba28(lVar6,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_03d79130(param_1,*(undefined8 *)
                                  OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo
                        );
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    thunk_FUN_0329bf60(plVar5,uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar3 = FUN_06e5ba28(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_05c7ecc4(*(undefined8 *)
                            Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>_TypeInfo
                           ,param_1,0);
      goto LAB_06cebed4;
    }
  }
  lVar6 = FUN_06ceb810(param_1);
  if (lVar6 == 0) {
    uVar4 = *(undefined8 *)Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
    uVar4 = FUN_05c89614(*(undefined8 *)
                          Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>_TypeInfo
                         ,uVar4,param_1,0);
LAB_06cebed4:
    if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)PTR_DAT_0759b238);
    }
    FUN_06deee2c(uVar4,param_1,0);
    FUN_06e547e8(param_1,0,0);
    return;
  }
  if (*plVar5 == 0) goto LAB_06cebf24;
  FUN_06dffb20(*plVar5,*(undefined1 *)(param_1 + 0xa8),0);
  lVar6 = FUN_06e5502c(param_1,0);
  if (lVar6 == 0) goto LAB_06cebf24;
  uVar4 = thunk_FUN_06e6b484(lVar6,0);
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0xe0),uVar4);
  local_40 = 0;
  uStack_38 = 0;
  FUN_04adfe50(&local_40,3,4,1,*(undefined8 *)PTR_DAT_075dc320);
  *(undefined8 *)(param_1 + 0xd8) = uStack_38;
  *(undefined8 *)(param_1 + 0xd0) = local_40;
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar3 = FUN_06e5ba28(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_06e5502c(param_1,0);
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x40),uVar4);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  bVar2 = FUN_06e587d8(uVar4,0,0);
  *(byte *)(param_1 + 0x110) = bVar2 & 1;
  if (*(char *)(param_1 + 0xa9) == '\0') {
LAB_06cebe18:
    bVar2 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar3 = FUN_06e587d8(uVar4,0,0);
    if ((uVar3 & 1) == 0) goto LAB_06cebe18;
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    bVar2 = FUN_06e587d8(uVar4,0,0);
  }
  *(byte *)(param_1 + 0xfc) = bVar2 & 1;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar7 = FUN_06dff3f4(*(long *)(param_1 + 0x20),0);
    *(undefined4 *)(param_1 + 0x100) = uVar7;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar7 = FUN_06dff4f4(*(long *)(param_1 + 0x20),0);
      *(undefined4 *)(param_1 + 0x104) = uVar7;
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar4 = thunk_FUN_06e00f24(*(long *)(param_1 + 0x20),0);
        *(undefined8 *)(param_1 + 0x120) = uVar4;
        thunk_FUN_0329bf60(param_1 + 0x120);
        return;
      }
    }
  }
LAB_06cebf24:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


