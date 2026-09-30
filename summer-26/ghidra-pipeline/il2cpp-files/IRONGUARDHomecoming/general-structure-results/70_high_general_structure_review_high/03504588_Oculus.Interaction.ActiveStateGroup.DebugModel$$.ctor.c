/*
FUNCTION_NAME: Oculus.Interaction.ActiveStateGroup.DebugModel$$.ctor
ENTRY_POINT: 03504588
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Oculus_Interaction_ActiveStateGroup_DebugModel___ctor(void)

{
  undefined *puVar1;
  bool in_CY;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_w19;
  int unaff_w20;
  long lVar7;
  
  puVar1 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
  if (!in_CY) {
    if (unaff_w19 == 0) {
      lVar4 = **(long **)(*(long *)
                           Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8
                         );
    }
    else {
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_035046d4(unaff_w19,unaff_w20 == 1);
      lVar4 = thunk_FUN_01ecbcb8(uVar3,0);
      uVar3 = FUN_0238dccc();
      if (lVar4 == 0) {
        lVar7 = 0;
      }
      else {
        iVar2 = thunk_FUN_01ed2e78(0);
        lVar7 = lVar4 + iVar2;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03504784(lVar7,uVar3,0,unaff_w19,unaff_w20 == 1);
    }
    return lVar4;
  }
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar3 = thunk_FUN_01f113fc(uVar3,&stack0x0000000c);
  uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_Object_FindObjectsOfType<DecalProjector>__);
  uVar3 = FUN_03406290(uVar5,uVar3,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar5 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeList_SetCapacity<AllocatorManager_AllocatorHandle>__
                            );
  FUN_034efd98(uVar5,uVar3,uVar6);
  uVar3 = thunk_FUN_01efb3a4(
                            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<bool>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar3);
}


