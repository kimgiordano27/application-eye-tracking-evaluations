/*
FUNCTION_NAME: Unity.Entities.EntityComponentStore.EntityBatchFromEntityChunkDataShared_00000639$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 03073d88
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Entities_EntityComponentStore_EntityBatchFromEntityChunkDataShared_00000639_PostfixBurstDelegate__Invoke
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int in_w8;
  long unaff_x22;
  long unaff_x23;
  long lVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_030525a0();
  uVar8 = in_stack_00000030;
  puVar4 = Unity_Services_Leaderboards_Internal_Models_LeaderboardVersions_var;
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)Unity_Services_Leaderboards_Internal_Models_LeaderboardVersions_var;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar4;
    }
    puVar1 = PTR_DAT_03cc1b88;
    lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar10 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)puVar4;
      }
      uVar11 = **(undefined8 **)(lVar6 + 0xb8);
      lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1628);
      FUN_021de1ac(lVar10,uVar11,*(undefined8 *)Unity_Entities_LinkedEntityGroup_var,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar7 = lVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar10);
    }
    uVar8 = FUN_01f71424(uVar8,lVar10,*(undefined8 *)puVar1);
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar6);
      lVar6 = *(long *)puVar4;
    }
    puVar2 = PTR_DAT_03ccf0d8;
    puVar1 = PTR_DAT_03cc4ca0;
    lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar10 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar6);
        lVar6 = *(long *)puVar4;
      }
      uVar11 = **(undefined8 **)(lVar6 + 0xb8);
      lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1b30);
      FUN_021de1ac(lVar10,uVar11,*(undefined8 *)System_Collections_Generic_LinkedList<T>_var,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      *plVar7 = lVar10;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar10);
    }
    uVar8 = FUN_01f6d39c(uVar8,lVar10,*(undefined8 *)puVar2);
    FUN_01f70920(uVar8,*(undefined8 *)puVar1);
    if ((unaff_x23 != 0) && (*(long *)(unaff_x23 + 0x20) != 0)) {
      FUN_02215a88(*(long *)(unaff_x23 + 0x20),*(undefined4 *)(unaff_x22 + 0x10),&stack0x00000038,
                   *(undefined8 *)UnityEngine_LazyLoadReference<T>_var);
      puVar3 = Liv_Lck_LckEarlyUpdate_var;
      puVar2 = PTR_DAT_03cebfe0;
      puVar1 = PTR_DAT_03cbe5e8;
      if (in_stack_00000038 != 0) {
        _in_stack_00000020 = FUN_01f7f7e8();
        _in_stack_00000010 = FUN_01f7f7e8();
        FUN_0222c7f8(&stack0x00000020,*(undefined8 *)puVar3);
        FUN_0222c7f8(&stack0x00000010,*(undefined8 *)puVar3);
        uVar8 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar1);
        }
        FUN_0277b678(uVar8,0);
        lVar6 = *(long *)puVar4;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar6);
          lVar6 = *(long *)puVar4;
        }
        if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x20) == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar6);
            lVar6 = *(long *)puVar4;
          }
          uVar11 = **(undefined8 **)(lVar6 + 0xb8);
          uVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                      Unity_Services_Leaderboards_Internal_Models_LeaderboardEntry_var
                                    );
          FUN_030734d8(uVar8,uVar11,*(undefined8 *)System_Collections_Generic_List<T>_var);
          puVar9 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
          *puVar9 = uVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar9,uVar8);
        }
        FUN_030720f8();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  thunk_FUN_01a6ca08(UnityEngine_ResourceManagement_ResourceProviders_JsonAssetProvider_var);
  uVar8 = thunk_FUN_01a89e68();
  uVar11 = thunk_FUN_01a6ca08(Mono_CSharp_ListenerProxy_var);
  thunk_FUN_030a1390(uVar8,uVar11,0);
  uVar11 = thunk_FUN_01a6ca08(Unity_Transforms_LocalToWorldSystem_var);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar8,uVar11);
}


