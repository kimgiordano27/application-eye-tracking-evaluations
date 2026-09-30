/*
FUNCTION_NAME: FUN_03f8d2f8
ENTRY_POINT: 03f8d2f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 207
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f8d73c) */

undefined1  [16] FUN_03f8d2f8(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  bool bVar16;
  
  if ((DAT_0483b6c8 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__)
    ;
    thunk_FUN_01efb3a4(PTR_DAT_04581c48);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_DBufferRenderPass_OnCameraCleanup__);
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    DAT_0483b6c8 = 1;
  }
  puVar4 = Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__;
  puVar3 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x60), lVar12 == 0)) goto LAB_03f8d734;
  if (*(char *)(lVar12 + 0x41) != '\0') {
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_035028b4(param_2,0);
    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_03f8d830(lVar12,uVar6);
    goto LAB_03f8d6e4;
  }
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_DBufferRenderPass_OnCameraCleanup__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar12 = FUN_0246446c(param_4,*(undefined8 *)PTR_DAT_04581c48);
  if (lVar12 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_035028b4(param_2,0);
    plVar8 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__)
    ;
    FUN_03416d98(plVar8,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar12 = FUN_0359e654(param_4,0);
    if (lVar12 != 0) {
      plVar9 = (long *)FUN_0358ffe4(lVar12,0);
      puVar5 = Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar16 = true;
      do {
        lVar13 = *plVar9;
        lVar12 = *(long *)puVar2;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03f8d518;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,0);
LAB_03f8d518:
        uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar14 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                             );
          if (plVar9 == (long *)0x0) goto LAB_03f8d6a0;
          lVar12 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 == 0) goto LAB_03f8d64c;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03f8d634;
        }
        lVar13 = *plVar9;
        lVar12 = *(long *)puVar2;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_03f8d578;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar12,1);
LAB_03f8d578:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_035028b4(plVar11,0);
        if ((uVar14 != 0) && ((uVar14 & uVar7) == uVar14)) {
          if (!bVar16) {
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_03418748(plVar8,*(undefined8 *)puVar5,0);
          }
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar6,uVar6);
          }
          FUN_03418748(plVar8,uVar6,0);
          bVar16 = false;
        }
      } while( true );
    }
    goto LAB_03f8d734;
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_0359d008(param_4,param_2,0);
  goto LAB_03f8d6b8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar15 = piVar15 + 4;
    if (uVar7 == 0) break;
LAB_03f8d634:
    if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03f8d694;
    }
  }
LAB_03f8d64c:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_03f8d694:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03f8d6a0:
  if (plVar8 == (long *)0x0) {
LAB_03f8d734:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
LAB_03f8d6b8:
  lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_035ac8e8(lVar12,0);
  *(undefined8 *)(lVar12 + 0x10) = uVar6;
  thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x10),uVar6);
LAB_03f8d6e4:
  puVar3 = Method_System_DBNull_System_IConvertible_ToDecimal__;
  *param_3 = lVar12;
  thunk_FUN_01f51358(param_3,lVar12);
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar12 = *(long *)puVar3;
  }
  return *(undefined1 (*) [16])(*(long *)(lVar12 + 0xb8) + 8);
}


