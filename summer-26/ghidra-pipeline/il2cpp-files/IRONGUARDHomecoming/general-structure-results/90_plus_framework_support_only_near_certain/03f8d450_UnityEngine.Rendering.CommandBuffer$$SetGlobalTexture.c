/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$SetGlobalTexture
ENTRY_POINT: 03f8d450
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f8d73c) */

undefined1  [16] UnityEngine_Rendering_CommandBuffer__SetGlobalTexture(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  undefined8 *unaff_x24;
  long *unaff_x25;
  bool bVar14;
  
  uVar4 = FUN_035028b4();
  plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
  FUN_03416d98(plVar5,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar6 = FUN_0359e654();
  if (lVar6 != 0) {
    plVar7 = (long *)FUN_0358ffe4(lVar6,0);
    puVar3 = Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar14 = true;
    do {
      lVar11 = *plVar7;
      lVar6 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03f8d518;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,0);
LAB_03f8d518:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar12 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01f116d0(plVar7,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                           );
        if (plVar7 == (long *)0x0) goto LAB_03f8d6a0;
        lVar6 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 == 0) goto LAB_03f8d64c;
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_03f8d634;
      }
      lVar11 = *plVar7;
      lVar6 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_03f8d578;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar6,1);
LAB_03f8d578:
      plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_035028b4(plVar9,0);
      if ((uVar12 != 0) && ((uVar12 & uVar4) == uVar12)) {
        if (!bVar14) {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03418748(plVar5,*(undefined8 *)puVar3,0);
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar10,uVar10);
        }
        FUN_03418748(plVar5,uVar10,0);
        bVar14 = false;
      }
    } while( true );
  }
  goto LAB_03f8d734;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar13 = piVar13 + 4;
    if (uVar4 == 0) break;
LAB_03f8d634:
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03f8d694;
    }
  }
LAB_03f8d64c:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03f8d694:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03f8d6a0:
  if (plVar5 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    lVar6 = thunk_FUN_01f117cc(*unaff_x24);
    FUN_035ac8e8(lVar6,0);
    *(undefined8 *)(lVar6 + 0x10) = uVar10;
    thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x10),uVar10);
    puVar2 = Method_System_DBNull_System_IConvertible_ToDecimal__;
    *unaff_x19 = lVar6;
    thunk_FUN_01f51358();
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar2;
    }
    return *(undefined1 (*) [16])(*(long *)(lVar6 + 0xb8) + 8);
  }
LAB_03f8d734:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


