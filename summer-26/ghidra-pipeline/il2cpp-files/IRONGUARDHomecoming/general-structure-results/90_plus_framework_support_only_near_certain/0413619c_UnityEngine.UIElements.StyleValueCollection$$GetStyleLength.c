/*
FUNCTION_NAME: UnityEngine.UIElements.StyleValueCollection$$GetStyleLength
ENTRY_POINT: 0413619c
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

void UnityEngine_UIElements_StyleValueCollection__GetStyleLength(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w22;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  while( true ) {
    uVar3 = (**(code **)(in_x9 + 0x208))(param_1,param_2,*(undefined8 *)(in_x9 + 0x210));
    plVar4 = (long *)FUN_04133c3c();
    if (plVar4 == (long *)0x0) break;
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04136208;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x27,0);
LAB_04136208:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_0413621c:
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04136268;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x25,0);
LAB_04136268:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) != 0) {
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_041362c4;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x28,0);
LAB_041362c4:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)((long)plVar6 + 0x24) == unaff_w22) {
        (**(code **)(*plVar6 + 0x1b8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x1c0));
      }
      goto LAB_0413621c;
    }
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0413635c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0413635c:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    if (*(long *)(unaff_x19 + 0x468) == 0) break;
    uVar9 = FUN_030bac7c(*(long *)(unaff_x19 + 0x468),unaff_w22,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    if ((uVar9 & 1) == 0) {
      lVar7 = *(long *)(unaff_x19 + 0x468);
      if (lVar7 == 0) break;
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar10 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) break;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
      }
      else {
        FUN_030ba904(lVar7,unaff_w22,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      lVar7 = *(long *)(unaff_x19 + 0x470);
      if (lVar7 == 0) break;
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar10 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) break;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(uint *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
      }
      else {
        FUN_030ba904(lVar7,unaff_w20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      lVar7 = *(long *)(unaff_x19 + 0x478);
      if (lVar7 == 0) break;
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar10 = *(long *)Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__
      ;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) break;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        puVar5 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar5 = uVar3;
        thunk_FUN_01f51358(puVar5,uVar3);
      }
      else {
        FUN_030f2bb4(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
    plVar4 = *(long **)(unaff_x19 + 0x448);
    unaff_w20 = unaff_w20 + 1;
    if ((plVar4 == (long *)0x0) ||
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400)),
       plVar4 == (long *)0x0)) break;
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_04136158;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x26,1);
LAB_04136158:
    iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (iVar2 <= (int)unaff_w20) {
      FUN_04138518();
      FUN_0422b58c();
      return;
    }
    plVar4 = *(long **)(unaff_x19 + 0x448);
    if (plVar4 == (long *)0x0) break;
    unaff_w22 = (**(code **)(*plVar4 + 0x1f8))(plVar4,unaff_w20,*(undefined8 *)(*plVar4 + 0x200));
    param_1 = *(long **)(unaff_x19 + 0x448);
    if (param_1 == (long *)0x0) break;
    in_x9 = *param_1;
    param_2 = (ulong)unaff_w20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


