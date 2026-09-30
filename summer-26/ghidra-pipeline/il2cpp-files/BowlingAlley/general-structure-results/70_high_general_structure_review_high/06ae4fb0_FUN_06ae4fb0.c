/*
FUNCTION_NAME: FUN_06ae4fb0
ENTRY_POINT: 06ae4fb0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_6
*/


void FUN_06ae4fb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  long local_28;
  
                    /* try { // try from 06ae4fb8 to 06be4fbf has its CatchHandler @ 06ae5128 */
                    /* try { // try from 06ae4fcc to 06be5097 has its CatchHandler @ 06ae5160 */
  if ((DAT_076e32ec & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_CAPI_ovrAvatar2LoadRequestInfo>_Invoke__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<WitRequestOptions>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<VoiceSession>_AddListener__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>_AddListener__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>_Invoke__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary_ValueCollection<Vector3Int,_List<ProbeBrickIndex_VoxelMeta>>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary_ValueCollection<XmlQualifiedName,_SchemaAttDef>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<float,_float>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<float,_float>_Invoke__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    DAT_076e32ec = 1;
  }
  local_28 = 0;
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
LAB_06ae51c8:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar4 = FUN_03d0ac40(*(long *)(param_1 + 0x38),param_2,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_ValueCollection<Vector3Int,_List<ProbeBrickIndex_VoxelMeta>>_GetEnumerator__
                      );
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_06ae51c8;
    uVar4 = FUN_050fa644(*(long *)(param_1 + 0x28),param_2,&local_28,
                         *(undefined8 *)
                          Method_UnityEngine_Events_UnityEvent<VoiceSession>_AddListener__);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_06ae51c8;
      System_Array_EmptyInternalEnumerator<OVRTask_CallbackWithState<OVRAnchor_Tracker_AsyncLock,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor_Tracker_AsyncLock>>>___ctor
                (*(long *)(param_1 + 0x28),param_2,
                 *(undefined8 *)Method_UnityEngine_Events_UnityEvent<WitRequestOptions>_Invoke__);
      if (local_28 != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_06ae51c8;
        FUN_050f8f40(&local_60,*(long *)(param_1 + 0x28),
                     *(undefined8 *)
                      Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_CAPI_ovrAvatar2LoadRequestInfo>_Invoke__
                    );
        puVar2 = 
        Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>_AddListener__;
        puVar1 = PTR_DAT_072794f0;
        do {
          do {
            uVar4 = FUN_05391a64(&local_60,*(undefined8 *)puVar2);
            uVar3 = local_50;
            if ((uVar4 & 1) == 0) {
              FUN_05391b84(&local_60,
                           *(undefined8 *)
                            Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>__ctor__
                          );
              if (*(long *)(param_1 + 0x30) != 0) {
                uVar4 = FUN_03d0ac40(*(long *)(param_1 + 0x30),local_28,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_ValueCollection<XmlQualifiedName,_SchemaAttDef>_GetEnumerator__
                                    );
                if ((uVar4 & 1) == 0) {
                  return;
                }
                lVar5 = *(long *)(param_1 + 0x18);
                if (lVar5 == 0) {
                  return;
                }
                (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),local_28,*(undefined8 *)(lVar5 + 0x28));
                return;
              }
              goto LAB_06ae51c8;
            }
          } while (local_28 != local_48);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar4 = FUN_06be9890(uVar3,0,0);
        } while ((uVar4 & 1) == 0);
        FUN_05391b84(&local_60,
                     *(undefined8 *)
                      Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>__ctor__
                    );
      }
    }
  }
  return;
}


