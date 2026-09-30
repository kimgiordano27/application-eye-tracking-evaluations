/*
FUNCTION_NAME: FUN_0751303c
ENTRY_POINT: 0751303c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 279
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;ordered_eye_source_validity_pose_interaction_sink;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0751303c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_07ef4b4b & 1) == 0) {
    FUN_03642964(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                );
    FUN_03642964(
                Method_UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_CellStreamingRequest>_Release__
                );
    FUN_03642964(Method_Unity_InferenceEngine_Google_FlatBuffers_Offset<BackendPartitioning>__ctor__
                );
    FUN_03642964(Method_Unity_InferenceEngine_Google_FlatBuffers_Offset<Bool>__ctor__);
    FUN_03642964(
                Method_UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>__ctor__
                );
    FUN_03642964(Method_Unity_InferenceEngine_Google_FlatBuffers_Offset<BoolList>__ctor__);
    FUN_03642964(Method_Unity_InferenceEngine_Google_FlatBuffers_Offset<Buffer>__ctor__);
    FUN_03642964(Method_Unity_InferenceEngine_Google_FlatBuffers_Offset<Byte>__ctor__);
    FUN_03642964(PTR_DAT_079f7098);
    FUN_03642964(Method_System_Nullable<Pose>_get_Value__);
    DAT_07ef4b4b = 1;
  }
  lVar7 = *(long *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x68) == '\0') {
    if (lVar7 == 0) goto LAB_07513350;
    uVar3 = 0;
    *(undefined8 *)(lVar7 + 0x80) = 0;
  }
  else {
    uVar3 = FUN_071bd0d0(param_1,0);
    if (lVar7 == 0) goto LAB_07513350;
    *(undefined8 *)(lVar7 + 0x80) = uVar3;
  }
  thunk_FUN_036b7ad0(lVar7 + 0x80,uVar3);
  lVar6 = *(long *)(param_1 + 0x78);
  lVar5 = *(long *)(param_1 + 0x80);
  *(undefined1 *)(lVar7 + 0x88) = 1;
  puVar1 = Method_System_Nullable<Pose>_get_Value__;
  if (lVar6 == 0) {
    lVar7 = *(long *)Method_System_Nullable<Pose>_get_Value__;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar7 = *(long *)puVar1;
    }
    lVar6 = **(long **)(lVar7 + 0xb8);
  }
  if (lVar5 != 0) {
    FUN_075133a4(lVar5,lVar6);
    if ((*(long *)(param_1 + 0x80) != 0) &&
       (lVar7 = FUN_03c86eb8(*(long *)(param_1 + 0x80),
                             *(undefined8 *)
                              Method_Unity_InferenceEngine_Google_FlatBuffers_Offset<Bool>__ctor__),
       puVar1 = Method_Unity_InferenceEngine_Google_FlatBuffers_Offset<BoolList>__ctor__, lVar7 != 0
       )) {
      FUN_074f747c(lVar7,0);
      FUN_042aeefc(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)puVar1);
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (lVar7 = FUN_03c86eb8(*(long *)(param_1 + 0x80),
                               *(undefined8 *)
                                Method_UnityEngine_Rendering_ObjectPool<ProbeReferenceVolume_CellStreamingRequest>_Release__
                              ),
         puVar2 = Method_Unity_InferenceEngine_Google_FlatBuffers_Offset<Byte>__ctor__,
         puVar1 = PTR_DAT_079f7098, lVar7 != 0)) {
        FUN_04142fd8(lVar7,param_1,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_ObjectPool<Queue<EventDispatcher_EventRecord>>__ctor__
                    );
        lVar7 = *(long *)(param_1 + 0x80);
        plVar4 = (long *)FUN_03642a4c(*(undefined8 *)puVar1,2);
        uVar3 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)(PTR_DAT_079f4610 + 0xe0));
        }
        lVar6 = FUN_05e26f18(uVar3,0);
        if (plVar4 != (long *)0x0) {
                    /* try { // try from 0751322c to 07613353 has its CatchHandler @ 0751322c
                       catch() { ... } // from try @ 0751322c with catch @ 0751322c
                       catch() { ... } // from try @ 075133f8 with catch @ 0751322c
                       catch() { ... } // from try @ 075134b4 with catch @ 0751322c
                       catch() { ... } // from try @ 07513510 with catch @ 0751322c */
          if ((lVar6 != 0) &&
             (lVar5 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_07513358:
            uVar3 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar3,0);
          }
          puVar1 = Method_Unity_InferenceEngine_Google_FlatBuffers_Offset<Buffer>__ctor__;
          if ((int)plVar4[3] != 0) {
            plVar4[4] = lVar6;
            thunk_FUN_036b7ad0(plVar4 + 4,lVar6);
            lVar6 = FUN_05e26f18(*(undefined8 *)puVar1,0);
            if ((lVar6 != 0) &&
               (lVar5 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
            goto LAB_07513358;
            if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
              plVar4[5] = lVar6;
              thunk_FUN_036b7ad0(plVar4 + 5,lVar6);
              if ((lVar7 != 0) && (lVar7 = FUN_075101d0(lVar7,plVar4), lVar7 != 0)) {
                lVar7 = FUN_03c39a24(lVar7,*(undefined8 *)
                                            Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                                    );
                uVar3 = FUN_071bd1a0(param_1,0);
                if ((lVar7 != 0) &&
                   ((lVar7 = FUN_074feae8(lVar7,uVar3,0), lVar7 != 0 &&
                    (lVar7 = FUN_074f747c(lVar7,0), lVar7 != 0)))) {
                  FUN_07504a24(lVar7,0);
                  if ((*(long *)(param_1 + 0x80) != 0) &&
                     (lVar7 = FUN_03c86eb8(*(long *)(param_1 + 0x80),
                                           *(undefined8 *)
                                            Method_Unity_InferenceEngine_Google_FlatBuffers_Offset<BackendPartitioning>__ctor__
                                          ), lVar7 != 0)) {
                    FUN_074f747c(lVar7,0);
                    FUN_0750f704(param_1,param_2);
                    FUN_0750eeec(param_1,*(undefined8 *)(param_1 + 0x38),
                                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
                                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    return;
                  }
                }
              }
              goto LAB_07513350;
            }
          }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 07513354 to 0761337b has its CatchHandler @ 075134d4 */
          FUN_03642c20();
        }
      }
    }
  }
LAB_07513350:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


