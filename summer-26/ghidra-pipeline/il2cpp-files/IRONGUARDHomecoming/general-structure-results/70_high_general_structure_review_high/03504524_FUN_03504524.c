/*
FUNCTION_NAME: FUN_03504524
ENTRY_POINT: 03504524
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_03504524(undefined8 param_1,ulong param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint local_34;
  
  if ((DAT_04832f7b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_System_UnitySerializationHolder__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_PointableCanvasModule_<Start>b__31_0__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_04832f7b = 1;
  }
  puVar2 = Method_System_UnitySerializationHolder__ctor__;
  puVar1 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
  if (param_3 < 2) {
    if ((int)param_2 == 0) {
      lVar5 = **(long **)(*(long *)
                           Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8
                         );
    }
    else {
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_035046d4(param_2 & 0xffffffff,param_3 == 1);
      lVar5 = thunk_FUN_01ecbcb8(uVar4,0);
      uVar4 = FUN_0238dccc(param_1,param_2,*(undefined8 *)puVar2);
      if (lVar5 == 0) {
        lVar8 = 0;
      }
      else {
        iVar3 = thunk_FUN_01ed2e78(0);
        lVar8 = lVar5 + iVar3;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03504784(lVar8,uVar4,0,param_2 & 0xffffffff,param_3 == 1);
    }
    return lVar5;
  }
  local_34 = param_3;
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar4 = thunk_FUN_01f113fc(uVar4,&local_34);
  uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectsOfType<DecalProjector>__);
  uVar4 = FUN_03406290(uVar6,uVar4,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar6 = thunk_FUN_01f117cc();
  uVar7 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeList_SetCapacity<AllocatorManager_AllocatorHandle>__
                            );
  FUN_034efd98(uVar6,uVar4,uVar7);
  uVar4 = thunk_FUN_01efb3a4(
                            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<bool>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar4);
}


