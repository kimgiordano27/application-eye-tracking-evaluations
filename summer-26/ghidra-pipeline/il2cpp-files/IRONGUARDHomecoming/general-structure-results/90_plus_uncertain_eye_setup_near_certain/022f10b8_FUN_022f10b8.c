/*
FUNCTION_NAME: FUN_022f10b8
ENTRY_POINT: 022f10b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x022f13bc) */

ulong FUN_022f10b8(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
    ;
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_01ecafa0(param_2);
    }
  }
  if (param_1 == (long *)0x0) {
    uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    uVar6 = FUN_03971094(uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_2);
  }
  lVar4 = *(long *)(*(long *)(param_2 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,lVar4);
  puVar1 = Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      lVar4 = **(long **)(param_2 + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar5 = *param_1;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_022f1280;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(param_1,lVar4,0);
LAB_022f1280:
      plVar2 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = 0;
      do {
        lVar4 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_022f12f0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_022f12f0:
        uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar2 == (long *)0x0) goto LAB_022f1378;
          lVar4 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 == 0) goto LAB_022f1350;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_022f1338;
        }
        if (uVar9 == 0x7fffffff) {
          uVar6 = FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar6,param_2);
        }
        uVar9 = uVar9 + 1;
      } while( true );
    }
    lVar4 = *plVar2;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar4 = lVar4 + (long)(*piVar8 + 1) * 0x10;
          goto LAB_022f1258;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar6 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar4 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar4 = lVar4 + (long)*piVar8 * 0x10;
LAB_022f1258:
          puVar3 = (undefined8 *)(lVar4 + 0x138);
          goto LAB_022f125c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar6 = 0;
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar5,uVar6);
LAB_022f125c:
                    /* WARNING: Could not recover jumptable at 0x022f1270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar7;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_022f1338:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_022f136c;
    }
  }
LAB_022f1350:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022f136c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_022f1378:
  return (ulong)uVar9;
}


