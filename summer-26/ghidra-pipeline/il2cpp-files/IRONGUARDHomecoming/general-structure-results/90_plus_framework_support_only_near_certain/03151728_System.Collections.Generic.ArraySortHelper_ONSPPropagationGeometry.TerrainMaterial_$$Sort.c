/*
FUNCTION_NAME: System.Collections.Generic.ArraySortHelper<ONSPPropagationGeometry.TerrainMaterial>$$Sort
ENTRY_POINT: 03151728
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03151b50) */
/* WARNING: Removing unreachable block (ram,0x03151b94) */

void System_Collections_Generic_ArraySortHelper<ONSPPropagationGeometry_TerrainMaterial>__Sort
               (ulong param_1,long *param_2,uint param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x23;
  undefined1 auVar11 [16];
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 03151738 to 03251747 has its CatchHandler @ 03151748 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* catch() { ... } // from try @ 031516f8 with catch @ 03151748
                       catch() { ... } // from try @ 03151738 with catch @ 03151748 */
                    /* try { // try from 0315174c to 0325174f has its CatchHandler @ 03151758 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 03151750 to 0325175b has its CatchHandler @ 03151680 */
    *(undefined1 *)(unaff_x23 + 0xcb4) = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0315174c with catch @ 03151758
                        */
  if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(6,0);
  }
  if (*(uint *)(param_2 + 3) < param_3) {
    FUN_0358b9a4(0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  plVar4 = (long *)thunk_FUN_01f116d0(param_4,lVar6);
  if (plVar4 == (long *)0x0) {
    if ((int)param_3 < (int)param_2[3]) {
      if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *param_4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_031519c0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(param_4,lVar6,0);
LAB_031519c0:
      plVar4 = (long *)(*(code *)*puVar5)(param_4,puVar5[1]);
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03151a28;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_03151a28:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) goto LAB_03151ad8;
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03151aa0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar6,0);
LAB_03151aa0:
        auVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        FUN_031514c4(param_2,param_3,auVar11._0_8_,auVar11._8_8_,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158));
        param_3 = param_3 + 1;
      } while( true );
    }
    FUN_031523f4(param_2,param_4,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03151880;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar6,0);
LAB_03151880:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_03150da4(param_2,(int)param_2[3] + iVar3,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78));
      iVar1 = (int)param_2[3] - param_3;
      if (iVar1 != 0 && (int)param_3 <= (int)param_2[3]) {
        FUN_0358d498(param_2[2],param_3,param_2[2],iVar3 + param_3,iVar1,0);
      }
      if (param_2 == plVar4) {
        FUN_0358d498(param_2[2],0,param_2[2],param_3,param_3,0);
        FUN_0358d498(param_2[2],iVar3 + param_3,param_2[2],param_3 << 1,(int)param_2[3] - param_3,0)
        ;
      }
      else {
        lVar7 = param_2[2];
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_03151990;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar6,5);
LAB_03151990:
        (*(code *)*puVar5)(plVar4,lVar7,param_3,puVar5[1]);
      }
      *(int *)(param_2 + 3) = (int)param_2[3] + iVar3;
    }
  }
LAB_03151b6c:
  *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
  return;
LAB_03151ad8:
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03151b38;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03151b38:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  goto LAB_03151b6c;
}


