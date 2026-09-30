/*
FUNCTION_NAME: FUN_022dd854
ENTRY_POINT: 022dd854
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x022ddb70) */

void FUN_022dd854(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ecafa0(param_3);
    }
  }
  puVar2 = Method_System_Collections_CollectionBase_System_Collections_IList_Remove__;
  if (*(int *)(*(long *)Method_System_Collections_CollectionBase_System_Collections_IList_Remove__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_0482fcee == '\0') {
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    DAT_0482fcee = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 8) == '\0') {
    return;
  }
  FUN_022df844(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *param_2;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)
           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
         ) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
        goto System_Array__BinarySearch<MultiColumnCollectionHeader_SortedColumnState>;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(param_2,*(long *)
                                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                        ,0);
System_Array__BinarySearch<MultiColumnCollectionHeader_SortedColumnState>:
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar5;
    lVar3 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022dd9e0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar3,0);
LAB_022dd9e0:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar8 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                         );
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 == 0) goto LAB_022ddb2c;
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar5;
    lVar3 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_022dda40;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar3,1);
LAB_022dda40:
    lVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    puVar1 = Method_System_Collections_CollectionBase_System_Collections_IList_get_Item__;
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_01efb3a4(
                                Method_System_Collections_CollectionBase_System_Collections_IList_get_Item__
                                );
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0482fcf1 == '\0') {
        thunk_FUN_01efb3a4(
                          Method_System_Collections_CollectionBase_System_Collections_IList_get_Item__
                          );
        DAT_0482fcf1 = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar3 = *(long *)puVar1;
      }
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x38);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      FUN_034efd98(uVar6,uVar11,uVar10,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,param_3);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_022ddb48;
    }
  }
LAB_022ddb2c:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_022ddb48:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


