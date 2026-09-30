/*
FUNCTION_NAME: System.Array$$BinarySearch<MultiColumnCollectionHeader.SortedColumnState>
ENTRY_POINT: 022dd978
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x022ddb70) */

void System_Array__BinarySearch<MultiColumnCollectionHeader_SortedColumnState>(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  
  plVar3 = (long *)(*(code *)*param_1)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar3;
    lVar6 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022dd9e0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,0);
LAB_022dd9e0:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar8 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01f116d0(plVar3,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                         );
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_022ddb2c;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar3;
    lVar6 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_022dda40;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,1);
LAB_022dda40:
    lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar1 = Method_System_Collections_CollectionBase_System_Collections_IList_get_Item__;
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_01efb3a4(
                                Method_System_Collections_CollectionBase_System_Collections_IList_get_Item__
                                );
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_0482fcf1 == '\0') {
        thunk_FUN_01efb3a4(
                          Method_System_Collections_CollectionBase_System_Collections_IList_get_Item__
                          );
        DAT_0482fcf1 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar1;
      }
      uVar10 = *(undefined8 *)(unaff_x21 + 0x10);
      uVar11 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      FUN_034efd98(uVar5,uVar11,uVar10,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_022ddb48;
    }
  }
LAB_022ddb2c:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_022ddb48:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


