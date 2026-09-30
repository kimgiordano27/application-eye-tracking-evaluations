/*
FUNCTION_NAME: System.Array$$IndexOf<DrawingData.MeshWithType>
ENTRY_POINT: 022f14d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x022f1788) */

ulong System_Array__IndexOf<DrawingData_MeshWithType>(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  uint uVar9;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    FUN_01ecaf44(lVar4);
  }
  plVar2 = (long *)thunk_FUN_01f116d0();
  puVar1 = Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)thunk_FUN_01f116d0();
    if (plVar2 == (long *)0x0) {
      lVar4 = **(long **)(unaff_x20 + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar5 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto FUN_022f164c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
FUN_022f164c:
      plVar2 = (long *)(*(code *)*puVar3)();
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
              goto LAB_022f16bc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_022f16bc:
        uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar2 == (long *)0x0) goto LAB_022f1744;
          lVar4 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 == 0) goto LAB_022f171c;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_022f1704;
        }
        if (uVar9 == 0x7fffffff) {
          FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910();
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
          goto LAB_022f1624;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar6 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
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
LAB_022f1624:
          puVar3 = (undefined8 *)(lVar4 + 0x138);
          goto LAB_022f1628;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar6 = 0;
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar5,uVar6);
LAB_022f1628:
                    /* WARNING: Could not recover jumptable at 0x022f163c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar7;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_022f1704:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_022f1738;
    }
  }
LAB_022f171c:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_022f1738:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_022f1744:
  return (ulong)uVar9;
}


