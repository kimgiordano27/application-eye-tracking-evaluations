/*
FUNCTION_NAME: UnityEngine.UIElements.StyleValueCollection$$SetStyleValue
ENTRY_POINT: 041364e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x041365e8) */

void UnityEngine_UIElements_StyleValueCollection__SetStyleValue(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long lVar9;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  if (param_2 != 1) {
    if (unaff_x23 != (long *)0x0) {
      lVar9 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x041365d0;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238();
code_r0x041365d0:
      (*(code *)*puVar6)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch();
  lVar9 = *plVar4;
  __cxa_end_catch();
  iVar2 = 0;
  do {
    if (unaff_x23 != (long *)0x0) {
      lVar5 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0413635c;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(unaff_x23,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0413635c:
      (*(code *)*puVar6)(unaff_x23,puVar6[1]);
    }
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar9);
    }
    if ((iVar2 != 9) && (iVar2 != 0)) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x468) == 0) goto LAB_0413655c;
    uVar3 = FUN_030bac7c(*(long *)(unaff_x19 + 0x468),unaff_w22,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    if ((uVar3 & 1) == 0) {
      lVar9 = *(long *)(unaff_x19 + 0x468);
      if (lVar9 == 0) goto LAB_0413655c;
      lVar5 = *(long *)(lVar9 + 0x10);
      lVar7 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0413655c;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
      }
      else {
        FUN_030ba904(lVar9,unaff_w22,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *(long *)(unaff_x19 + 0x470);
      if (lVar9 == 0) goto LAB_0413655c;
      lVar5 = *(long *)(lVar9 + 0x10);
      lVar7 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0413655c;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
      }
      else {
        FUN_030ba904(lVar9,unaff_w20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *(long *)(unaff_x19 + 0x478);
      if (lVar9 == 0) goto LAB_0413655c;
      lVar5 = *(long *)(lVar9 + 0x10);
      lVar7 = *(long *)Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0413655c;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = unaff_x21;
        thunk_FUN_01f51358(puVar6,unaff_x21);
      }
      else {
        FUN_030f2bb4(lVar9,unaff_x21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
    }
    plVar4 = *(long **)(unaff_x19 + 0x448);
    unaff_w20 = unaff_w20 + 1;
    if ((plVar4 == (long *)0x0) ||
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400)),
       plVar4 == (long *)0x0)) {
LAB_0413655c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_04136158;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
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
    unaff_w22 = (**(code **)(*plVar4 + 0x1f8))(plVar4,unaff_w20,*(undefined8 *)(*plVar4 + 0x200));
    plVar4 = *(long **)(unaff_x19 + 0x448);
    if (plVar4 == (long *)0x0) goto LAB_0413655c;
    unaff_x21 = (**(code **)(*plVar4 + 0x208))(plVar4,unaff_w20,*(undefined8 *)(*plVar4 + 0x210));
    plVar4 = (long *)FUN_04133c3c();
    if (plVar4 == (long *)0x0) goto LAB_0413655c;
    lVar9 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04136208;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x27,0);
LAB_04136208:
    unaff_x23 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_0413621c:
    lVar9 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04136268;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x25,0);
LAB_04136268:
    uVar3 = (*(code *)*puVar6)(unaff_x23,puVar6[1]);
    if ((uVar3 & 1) != 0) {
      lVar9 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x28) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_041362c4;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(unaff_x23,*unaff_x28,0);
LAB_041362c4:
      plVar4 = (long *)(*(code *)*puVar6)(unaff_x23,puVar6[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)((long)plVar4 + 0x24) == unaff_w22) {
        (**(code **)(*plVar4 + 0x1b8))(plVar4,1,*(undefined8 *)(*plVar4 + 0x1c0));
      }
      goto LAB_0413621c;
    }
    lVar9 = 0;
    iVar2 = 9;
  } while( true );
}


