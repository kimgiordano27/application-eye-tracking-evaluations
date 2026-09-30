/*
FUNCTION_NAME: UnityEngine.UIElements.StyleValueCollection$$GetStyleInt
ENTRY_POINT: 04136460
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04136374) */
/* WARNING: Removing unreachable block (ram,0x04136514) */
/* WARNING: Removing unreachable block (ram,0x04136560) */

void UnityEngine_UIElements_StyleValueCollection__GetStyleInt(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  while( true ) {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar9 = *(long *)Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = unaff_x21;
      thunk_FUN_01f51358(puVar6,unaff_x21);
    }
    else {
      FUN_030f2bb4(param_1,unaff_x21,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    do {
      plVar4 = *(long **)(unaff_x19 + 0x448);
      unaff_w20 = unaff_w20 + 1;
      if ((plVar4 == (long *)0x0) ||
         (plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400)),
         plVar4 == (long *)0x0)) goto LAB_0413655c;
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_04136158;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x26,1);
LAB_04136158:
      iVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
      if (iVar2 <= unaff_w20) {
        FUN_04138518();
        FUN_0422b58c();
        return;
      }
      plVar4 = *(long **)(unaff_x19 + 0x448);
      if (plVar4 == (long *)0x0) goto LAB_0413655c;
      iVar2 = (**(code **)(*plVar4 + 0x1f8))(plVar4,unaff_w20,*(undefined8 *)(*plVar4 + 0x200));
      plVar4 = *(long **)(unaff_x19 + 0x448);
      if (plVar4 == (long *)0x0) goto LAB_0413655c;
      unaff_x21 = (**(code **)(*plVar4 + 0x208))(plVar4,unaff_w20,*(undefined8 *)(*plVar4 + 0x210));
      plVar4 = (long *)FUN_04133c3c();
      if (plVar4 == (long *)0x0) goto LAB_0413655c;
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04136208;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x27,0);
LAB_04136208:
      plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_0413621c:
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04136268;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x25,0);
LAB_04136268:
      uVar7 = (*(code *)*puVar6)(plVar4,puVar6[1]);
      if ((uVar7 & 1) != 0) {
        lVar5 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x28) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_041362c4;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x28,0);
LAB_041362c4:
        plVar3 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(int *)((long)plVar3 + 0x24) == iVar2) {
          (**(code **)(*plVar3 + 0x1b8))(plVar3,1,*(undefined8 *)(*plVar3 + 0x1c0));
        }
        goto LAB_0413621c;
      }
      if (plVar4 != (long *)0x0) {
        lVar5 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0413635c;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar4,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0413635c:
        (*(code *)*puVar6)(plVar4,puVar6[1]);
      }
      if (*(long *)(unaff_x19 + 0x468) == 0) goto LAB_0413655c;
      uVar7 = FUN_030bac7c(*(long *)(unaff_x19 + 0x468),iVar2,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    } while ((uVar7 & 1) != 0);
    lVar5 = *(long *)(unaff_x19 + 0x468);
    if (lVar5 == 0) break;
    lVar9 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar2;
    }
    else {
      FUN_030ba904(lVar5,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    lVar5 = *(long *)(unaff_x19 + 0x470);
    if (lVar5 == 0) break;
    lVar9 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
    }
    else {
      FUN_030ba904(lVar5,unaff_w20,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                  );
    }
    param_1 = *(long *)(unaff_x19 + 0x478);
    if (param_1 == 0) break;
  }
LAB_0413655c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


