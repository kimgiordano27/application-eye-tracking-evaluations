/*
FUNCTION_NAME: UnityEngine.UIElements.StyleValueCollection$$TryGetStyleValue
ENTRY_POINT: 04136210
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

void UnityEngine_UIElements_StyleValueCollection__TryGetStyleValue
               (code *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  int unaff_w22;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  do {
    plVar3 = (long *)(*param_1)(param_2,param_3);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_0413621c:
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04136268;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x25,0);
LAB_04136268:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) != 0) {
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_041362c4;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x28,0);
LAB_041362c4:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)((long)plVar5 + 0x24) == unaff_w22) {
        (**(code **)(*plVar5 + 0x1b8))(plVar5,1,*(undefined8 *)(*plVar5 + 0x1c0));
      }
      goto LAB_0413621c;
    }
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0413635c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0413635c:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    if (*(long *)(unaff_x19 + 0x468) == 0) goto LAB_0413655c;
    uVar8 = FUN_030bac7c(*(long *)(unaff_x19 + 0x468),unaff_w22,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    if ((uVar8 & 1) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x468);
      if (lVar6 == 0) goto LAB_0413655c;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0413655c;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
      }
      else {
        FUN_030ba904(lVar6,unaff_w22,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = *(long *)(unaff_x19 + 0x470);
      if (lVar6 == 0) goto LAB_0413655c;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0413655c;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
      }
      else {
        FUN_030ba904(lVar6,unaff_w20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = *(long *)(unaff_x19 + 0x478);
      if (lVar6 == 0) goto LAB_0413655c;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0413655c;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = unaff_x21;
        thunk_FUN_01f51358(puVar4,unaff_x21);
      }
      else {
        FUN_030f2bb4(lVar6,unaff_x21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    plVar3 = *(long **)(unaff_x19 + 0x448);
    unaff_w20 = unaff_w20 + 1;
    if ((plVar3 == (long *)0x0) ||
       (plVar3 = (long *)(**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400)),
       plVar3 == (long *)0x0)) {
LAB_0413655c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_04136158;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x26,1);
LAB_04136158:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (iVar2 <= unaff_w20) {
      FUN_04138518();
      FUN_0422b58c();
      return;
    }
    plVar3 = *(long **)(unaff_x19 + 0x448);
    if (plVar3 == (long *)0x0) goto LAB_0413655c;
    unaff_w22 = (**(code **)(*plVar3 + 0x1f8))(plVar3,unaff_w20,*(undefined8 *)(*plVar3 + 0x200));
    plVar3 = *(long **)(unaff_x19 + 0x448);
    if (plVar3 == (long *)0x0) goto LAB_0413655c;
    unaff_x21 = (**(code **)(*plVar3 + 0x208))(plVar3,unaff_w20,*(undefined8 *)(*plVar3 + 0x210));
    param_2 = (long *)FUN_04133c3c();
    if (param_2 == (long *)0x0) goto LAB_0413655c;
    lVar6 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04136208;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_2,*unaff_x27,0);
LAB_04136208:
    param_1 = (code *)*puVar4;
    param_3 = puVar4[1];
  } while( true );
}


