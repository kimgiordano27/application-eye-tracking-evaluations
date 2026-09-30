/*
FUNCTION_NAME: UnityEngine.UIElements.StyleLength$$.ctor
ENTRY_POINT: 041363c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04136374) */
/* WARNING: Removing unreachable block (ram,0x04136514) */
/* WARNING: Removing unreachable block (ram,0x04136560) */

void UnityEngine_UIElements_StyleLength___ctor(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_x9;
  long lVar9;
  int *piVar10;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  int unaff_w22;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  while( true ) {
    if ((uint)in_x10 < in_w11) {
      *(uint *)(param_2 + 0x18) = (uint)in_x10 + 1;
      *(int *)(param_1 + in_x10 * 4 + 0x20) = unaff_w22;
    }
    else {
      FUN_030ba904(param_2,unaff_w22,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    lVar4 = *(long *)(unaff_x19 + 0x470);
    if (lVar4 == 0) break;
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar9 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
    }
    else {
      FUN_030ba904(lVar4,unaff_w20,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
    lVar4 = *(long *)(unaff_x19 + 0x478);
    if (lVar4 == 0) break;
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar9 = *(long *)Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *puVar7 = unaff_x21;
      thunk_FUN_01f51358(puVar7,unaff_x21);
    }
    else {
      FUN_030f2bb4(lVar4,unaff_x21,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
    do {
      plVar5 = *(long **)(unaff_x19 + 0x448);
      unaff_w20 = unaff_w20 + 1;
      if ((plVar5 == (long *)0x0) ||
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400)),
         plVar5 == (long *)0x0)) goto LAB_0413655c;
      lVar4 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_04136158;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x26,1);
LAB_04136158:
      iVar2 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      if (iVar2 <= unaff_w20) {
        FUN_04138518();
        FUN_0422b58c();
        return;
      }
      plVar5 = *(long **)(unaff_x19 + 0x448);
      if (plVar5 == (long *)0x0) goto LAB_0413655c;
      unaff_w22 = (**(code **)(*plVar5 + 0x1f8))(plVar5,unaff_w20,*(undefined8 *)(*plVar5 + 0x200));
      plVar5 = *(long **)(unaff_x19 + 0x448);
      if (plVar5 == (long *)0x0) goto LAB_0413655c;
      unaff_x21 = (**(code **)(*plVar5 + 0x208))(plVar5,unaff_w20,*(undefined8 *)(*plVar5 + 0x210));
      plVar5 = (long *)FUN_04133c3c();
      if (plVar5 == (long *)0x0) goto LAB_0413655c;
      lVar4 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04136208;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x27,0);
LAB_04136208:
      plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_0413621c:
      lVar4 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04136268;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x25,0);
LAB_04136268:
      uVar8 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      if ((uVar8 & 1) != 0) {
        lVar4 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x28) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_041362c4;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x28,0);
LAB_041362c4:
        plVar3 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(int *)((long)plVar3 + 0x24) == unaff_w22) {
          (**(code **)(*plVar3 + 0x1b8))(plVar3,1,*(undefined8 *)(*plVar3 + 0x1c0));
        }
        goto LAB_0413621c;
      }
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0413635c;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar5,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0413635c:
        (*(code *)*puVar7)(plVar5,puVar7[1]);
      }
      if (*(long *)(unaff_x19 + 0x468) == 0) goto LAB_0413655c;
      uVar8 = FUN_030bac7c(*(long *)(unaff_x19 + 0x468),unaff_w22,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    } while ((uVar8 & 1) != 0);
    param_2 = *(long *)(unaff_x19 + 0x468);
    if (param_2 == 0) break;
    param_1 = *(long *)(param_2 + 0x10);
    in_x9 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (param_1 == 0) break;
    in_x10 = (long)*(int *)(param_2 + 0x18);
    in_w11 = *(uint *)(param_1 + 0x18);
  }
LAB_0413655c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


