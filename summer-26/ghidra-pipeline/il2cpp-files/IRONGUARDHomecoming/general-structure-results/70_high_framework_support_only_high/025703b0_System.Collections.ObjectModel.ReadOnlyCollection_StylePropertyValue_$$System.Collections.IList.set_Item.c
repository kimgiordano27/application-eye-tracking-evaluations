/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<StylePropertyValue>$$System.Collections.IList.set_Item
ENTRY_POINT: 025703b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<StylePropertyValue>__System_Collections_IList_set_Item
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  undefined4 uVar12;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  long *plVar13;
  long unaff_x23;
  long unaff_x29;
  
  piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_025703ec;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_025703ec:
  uVar7 = (*(code *)*puVar6)();
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80)
               + 0x140,uVar7);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  plVar5 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0x140);
    plVar13 = (long *)*puVar6;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *plVar5) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_025704f0;
        }
        uVar11 = uVar11 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar13,*plVar5,0);
LAB_025704f0:
    uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x18));
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x140,0);
      uVar12 = 0;
LAB_0257044c:
      if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar12;
    }
    puVar6 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0x140);
    plVar13 = (long *)*puVar6;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          lVar9 = lVar10 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02570590;
        }
        uVar11 = uVar11 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar11 != 0);
    }
    lVar9 = FUN_01ecb238(plVar13,lVar9,0);
LAB_02570590:
    *(void **)(unaff_x29 + -0x10) = unaff_x20;
    lVar9 = *(long *)(lVar9 + 8);
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar13,unaff_x29 + -0x10);
    memcpy(unaff_x21,unaff_x20,unaff_x19);
    piVar8 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                       *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                      + 0x20) + 0xc0) + 0x80) +
                                       0x120);
    iVar1 = *piVar8;
    piVar8 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                       *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                      + 0x20) + 0xc0) + 0x80) + 0xa0
                                      );
    lVar9 = *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80) +
            0x120;
    if (iVar1 < *piVar8) {
      piVar8 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),lVar9);
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x120,*piVar8 + 1);
    }
    else {
      piVar8 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),lVar9);
      iVar1 = *piVar8;
      piVar8 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                         *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20
                                                                                  ) + 0x20) + 0xc0)
                                                  + 0x80) + 0xa0);
      iVar2 = *piVar8;
      piVar8 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                         *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20
                                                                                  ) + 0x20) + 0xc0)
                                                  + 0x80) + 0xe0);
      iVar3 = *piVar8;
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = (iVar1 - iVar2) / iVar3;
      }
      if (iVar1 - iVar2 == iVar4 * iVar3) {
        memcpy(unaff_x20,unaff_x21,unaff_x19);
        FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                              0x80) + 0x20);
        uVar12 = 1;
        FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                     *(undefined8 *)
                      (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),1)
        ;
        goto LAB_0257044c;
      }
      piVar8 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                         *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20
                                                                                  ) + 0x20) + 0xc0)
                                                  + 0x80) + 0x120);
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x120,*piVar8 + 1);
      plVar5 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    }
  } while( true );
}


