/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<RendererList>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02565fb8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 140
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<RendererList>__System_Collections_IEnumerable_GetEnumerator
          (long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined4 uVar8;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long unaff_x25;
  long unaff_x29;
  
  plVar1 = (long *)thunk_FUN_01ee7388(param_2,*(long *)(**(long **)(*(long *)(param_1 + 0x20) + 0xc0
                                                                   ) + 0x80) + 0xa0);
  lVar5 = *plVar1;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
  if ((uVar2 & 1) != 0) {
    puVar3 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar1 = (long *)*puVar3;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0256610c;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar1,lVar5,0);
LAB_0256610c:
    uVar4 = (*(code *)*puVar3)(plVar1,puVar3[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x120,uVar4);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
    puVar3 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0x120);
    plVar1 = (long *)*puVar3;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025661cc;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_025661cc:
    uVar2 = (*(code *)*puVar3)(plVar1,puVar3[1]);
    if ((uVar2 & 1) != 0) {
      puVar3 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0x120);
      plVar1 = (long *)*puVar3;
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar1;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            lVar5 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
            goto LAB_025662ac;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      lVar5 = FUN_01ecb238(plVar1,lVar5,0);
LAB_025662ac:
      *(void **)(unaff_x29 + -0x10) = unaff_x21;
      lVar5 = *(long *)(lVar5 + 8);
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar1,unaff_x29 + -0x10);
      memcpy(unaff_x22,unaff_x21,unaff_x19);
      memcpy(unaff_x20,unaff_x22,unaff_x19);
      FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x20);
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),2);
      uVar8 = 1;
      goto LAB_0256632c;
    }
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x10))
              (*(undefined8 *)(unaff_x29 + -0x18));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x120,0);
  }
  uVar8 = 0;
LAB_0256632c:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


