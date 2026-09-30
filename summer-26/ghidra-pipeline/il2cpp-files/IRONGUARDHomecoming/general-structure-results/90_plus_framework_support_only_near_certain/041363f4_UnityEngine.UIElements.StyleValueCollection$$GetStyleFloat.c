/*
FUNCTION_NAME: UnityEngine.UIElements.StyleValueCollection$$GetStyleFloat
ENTRY_POINT: 041363f4
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

void UnityEngine_UIElements_StyleValueCollection__GetStyleFloat
               (long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
code_r0x041363f4:
  FUN_030ba904(param_1,param_2,param_3);
  do {
    lVar5 = *(long *)(unaff_x19 + 0x470);
    if (lVar5 == 0) {
LAB_0413655c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar10 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_0413655c;
    uVar3 = *(uint *)(lVar5 + 0x18);
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar3 + 1;
      *(int *)(lVar7 + (long)(int)uVar3 * 4 + 0x20) = unaff_w20;
    }
    else {
      FUN_030ba904(lVar5,unaff_w20,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    lVar5 = *(long *)(unaff_x19 + 0x478);
    if (lVar5 == 0) goto LAB_0413655c;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar10 = *(long *)Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_0413655c;
    uVar3 = *(uint *)(lVar5 + 0x18);
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar3 + 1;
      puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
      *puVar8 = unaff_x21;
      thunk_FUN_01f51358(puVar8,unaff_x21);
    }
    else {
      FUN_030f2bb4(lVar5,unaff_x21,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    do {
      plVar6 = *(long **)(unaff_x19 + 0x448);
      unaff_w20 = unaff_w20 + 1;
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)),
         plVar6 == (long *)0x0)) goto LAB_0413655c;
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_04136158;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x26,1);
LAB_04136158:
      iVar2 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      if (iVar2 <= unaff_w20) {
        FUN_04138518();
        FUN_0422b58c();
        return;
      }
      plVar6 = *(long **)(unaff_x19 + 0x448);
      if (plVar6 == (long *)0x0) goto LAB_0413655c;
      uVar3 = (**(code **)(*plVar6 + 0x1f8))(plVar6,unaff_w20,*(undefined8 *)(*plVar6 + 0x200));
      plVar6 = *(long **)(unaff_x19 + 0x448);
      if (plVar6 == (long *)0x0) goto LAB_0413655c;
      param_2 = (ulong)uVar3;
      unaff_x21 = (**(code **)(*plVar6 + 0x208))(plVar6,unaff_w20,*(undefined8 *)(*plVar6 + 0x210));
      plVar6 = (long *)FUN_04133c3c();
      if (plVar6 == (long *)0x0) goto LAB_0413655c;
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04136208;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x27,0);
LAB_04136208:
      plVar6 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_0413621c:
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x25) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04136268;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x25,0);
LAB_04136268:
      uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      if ((uVar9 & 1) != 0) {
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x28) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_041362c4;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x28,0);
LAB_041362c4:
        plVar4 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(uint *)((long)plVar4 + 0x24) == uVar3) {
          (**(code **)(*plVar4 + 0x1b8))(plVar4,1,*(undefined8 *)(*plVar4 + 0x1c0));
        }
        goto LAB_0413621c;
      }
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0413635c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0413635c:
        (*(code *)*puVar8)(plVar6,puVar8[1]);
      }
      if (*(long *)(unaff_x19 + 0x468) == 0) goto LAB_0413655c;
      uVar9 = FUN_030bac7c(*(long *)(unaff_x19 + 0x468),param_2,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    } while ((uVar9 & 1) != 0);
    param_1 = *(long *)(unaff_x19 + 0x468);
    if (param_1 == 0) goto LAB_0413655c;
    lVar5 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_0413655c;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (*(uint *)(lVar5 + 0x18) <= uVar1) break;
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    *(uint *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
  } while( true );
  param_3 = *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70);
  goto code_r0x041363f4;
}


