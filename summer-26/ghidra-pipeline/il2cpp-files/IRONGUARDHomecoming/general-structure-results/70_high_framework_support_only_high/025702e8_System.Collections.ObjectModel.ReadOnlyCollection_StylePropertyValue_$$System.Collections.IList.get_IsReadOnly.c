/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<StylePropertyValue>$$System.Collections.IList.get_IsReadOnly
ENTRY_POINT: 025702e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<StylePropertyValue>__System_Collections_IList_get_IsReadOnly
          (void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  long *plVar12;
  long *plVar13;
  long unaff_x23;
  long unaff_x29;
  
  piVar5 = (int *)thunk_FUN_01ee7388();
  if (*piVar5 == 0) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x120,0);
    puVar7 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0x60);
    plVar12 = (long *)*puVar7;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar5 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_025703ec;
        }
        uVar10 = uVar10 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_025703ec:
    uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x140,uVar6);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    plVar12 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    goto LAB_02570480;
  }
  if (*piVar5 == 1) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_025706f0:
    piVar5 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                       *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                      + 0x20) + 0xc0) + 0x80) +
                                       0x120);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x120,*piVar5 + 1);
    plVar12 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
LAB_02570480:
    do {
      puVar7 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0x140);
      plVar13 = (long *)*puVar7;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *plVar12) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_025704f0;
          }
          uVar10 = uVar10 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar13,*plVar12,0);
LAB_025704f0:
      uVar10 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      if ((uVar10 & 1) == 0) {
        (*(code *)**(undefined8 **)
                    (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
                  (*(undefined8 *)(unaff_x29 + -0x18));
        FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                              0x80) + 0x140,0);
        break;
      }
      puVar7 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0x140);
      plVar13 = (long *)*puVar7;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar5 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar8) {
            lVar8 = lVar9 + (long)*piVar5 * 0x10 + 0x138;
            goto LAB_02570590;
          }
          uVar10 = uVar10 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar10 != 0);
      }
      lVar8 = FUN_01ecb238(plVar13,lVar8,0);
LAB_02570590:
      *(void **)(unaff_x29 + -0x10) = unaff_x20;
      lVar8 = *(long *)(lVar8 + 8);
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar13,unaff_x29 + -0x10);
      memcpy(unaff_x21,unaff_x20,unaff_x19);
      piVar5 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                         *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20
                                                                                  ) + 0x20) + 0xc0)
                                                  + 0x80) + 0x120);
      iVar1 = *piVar5;
      piVar5 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                         *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20
                                                                                  ) + 0x20) + 0xc0)
                                                  + 0x80) + 0xa0);
      lVar8 = *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80) +
              0x120;
      if (*piVar5 <= iVar1) goto LAB_02570690;
      piVar5 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),lVar8);
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x120,*piVar5 + 1);
    } while( true );
  }
  uVar11 = 0;
LAB_0257044c:
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
LAB_02570690:
  piVar5 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),lVar8);
  iVar1 = *piVar5;
  piVar5 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                    0x20) + 0xc0) + 0x80) + 0xa0);
  iVar2 = *piVar5;
  piVar5 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                    0x20) + 0xc0) + 0x80) + 0xe0);
  iVar3 = *piVar5;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = (iVar1 - iVar2) / iVar3;
  }
  if (iVar1 - iVar2 == iVar4 * iVar3) goto LAB_02570740;
  goto LAB_025706f0;
LAB_02570740:
  memcpy(unaff_x20,unaff_x21,unaff_x19);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar11 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),1);
  goto LAB_0257044c;
}


