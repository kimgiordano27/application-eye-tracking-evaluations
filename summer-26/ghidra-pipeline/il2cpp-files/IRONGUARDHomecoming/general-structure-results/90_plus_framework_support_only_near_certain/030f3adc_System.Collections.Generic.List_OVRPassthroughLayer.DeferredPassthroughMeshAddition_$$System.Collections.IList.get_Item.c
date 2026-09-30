/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPassthroughLayer.DeferredPassthroughMeshAddition>$$System.Collections.IList.get_Item
ENTRY_POINT: 030f3adc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x030f3efc) */
/* WARNING: Removing unreachable block (ram,0x030f3f40) */

void System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>__System_Collections_IList_get_Item
               (ulong param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    *(undefined1 *)(unaff_x23 + 0xc7b) = 1;
  }
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(6,0);
  }
                    /* try { // try from 030f3b18 to 031f3b1b has its CatchHandler @ 030f3b48 */
                    /* try { // try from 030f3b1c to 031f3b2f has its CatchHandler @ 030f3b50 */
  if (*(uint *)(param_2 + 3) < param_3) {
    FUN_0358b9a4(0);
  }
                    /* try { // try from 030f3b30 to 031f3b3f has its CatchHandler @ 030f38f8 */
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    /* try { // try from 030f3b40 to 031f3b43 has its CatchHandler @ 030f3b44 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 030f3b40 with catch @ 030f3b44
                       try { // try from 030f3b44 to 031f3b67 has its CatchHandler @ 030f38f8 */
    FUN_01ecaf44(lVar7);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 030f3b18 with catch @ 030f3b48
                        */
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 030f3aa8 with catch @ 030f3b4c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 030f3b1c with catch @ 030f3b50
                        */
  plVar4 = (long *)thunk_FUN_01f116d0();
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 030f3bb8 to 031f3bbb has its CatchHandler @ 030f3bc4 */
                    /* try { // try from 030f3bbc to 031f3bc7 has its CatchHandler @ 030f38f8 */
    if ((int)param_3 < (int)param_2[3]) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f3bb8 with catch @ 030f3bc4
                        */
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *unaff_x22;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_030f3d70;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238();
LAB_030f3d70:
      plVar4 = (long *)(*(code *)*puVar5)();
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar7 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_030f3dd8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_030f3dd8:
        uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar10 & 1) == 0) goto LAB_030f3e84;
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar8 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_030f3e50;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,0);
LAB_030f3e50:
        uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        FUN_030f3888(param_2,param_3,uVar6,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158));
        param_3 = param_3 + 1;
      } while( true );
    }
    FUN_030f476c(param_2);
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
                    /* try { // try from 030f3b68 to 031f3b7f has its CatchHandler @ 030f3bb4 */
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar4;
                    /* try { // try from 030f3b80 to 031f3ba3 has its CatchHandler @ 030f38f8 */
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_030f3c30;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
                    /* try { // try from 030f3ba4 to 031f3bb3 has its CatchHandler @ 030f3bb4 */
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,0);
                    /* catch() { ... } // from try @ 030f3b68 with catch @ 030f3bb4
                       catch() { ... } // from try @ 030f3ba4 with catch @ 030f3bb4 */
LAB_030f3c30:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_030f3184(param_2,(int)param_2[3] + iVar3,
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
        lVar8 = param_2[2];
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
              goto 
              System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>__System_Collections_IList_Add
              ;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,5);

        System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>__System_Collections_IList_Add
        :
        (*(code *)*puVar5)(plVar4,lVar8,param_3,puVar5[1]);
      }
      *(int *)(param_2 + 3) = (int)param_2[3] + iVar3;
    }
  }
LAB_030f3f18:
  *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
  return;
LAB_030f3e84:
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_030f3ee4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_030f3ee4:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  goto LAB_030f3f18;
}


