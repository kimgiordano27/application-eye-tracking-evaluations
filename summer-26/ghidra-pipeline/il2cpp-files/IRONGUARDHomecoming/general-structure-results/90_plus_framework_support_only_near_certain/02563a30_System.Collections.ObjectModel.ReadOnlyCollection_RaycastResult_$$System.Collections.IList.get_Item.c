/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<RaycastResult>$$System.Collections.IList.get_Item
ENTRY_POINT: 02563a30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<RaycastResult>__System_Collections_IList_get_Item
          (void *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *plVar10;
  long unaff_x25;
  long unaff_x29;
  
  memset(param_1,0,unaff_x19);
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
  piVar2 = (int *)thunk_FUN_01ee7388();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0x60);
    plVar10 = (long *)*puVar5;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_02563b60;
        }
        uVar8 = uVar8 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_02563b60:
    uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x120,uVar4);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_02563ba8:
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0x120);
    plVar10 = (long *)*puVar5;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_02563c20;
        }
        uVar8 = uVar8 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02563c20:
    uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if ((uVar8 & 1) != 0) {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0x120);
      plVar10 = (long *)*puVar5;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar6) {
            lVar6 = lVar7 + (long)*piVar2 * 0x10 + 0x138;
            goto LAB_02563da0;
          }
          uVar8 = uVar8 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar8 != 0);
      }
      lVar6 = FUN_01ecb238(plVar10,lVar6,0);
LAB_02563da0:
      *(void **)(unaff_x29 + -0x10) = unaff_x21;
      lVar6 = *(long *)(lVar6 + 8);
      (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar10,unaff_x29 + -0x10);
      memcpy(unaff_x23,unaff_x21,unaff_x19);
      memcpy(unaff_x20,unaff_x23,unaff_x19);
      FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x20);
      uVar9 = 1;
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),1);
      goto FUN_02564050;
    }
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x18));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0x120,0);
    pcVar3 = (char *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0xa0);
    if (*pcVar3 != '\0') {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      plVar10 = (long *)*puVar5;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar2 * 0x10 + 0x138);
            goto LAB_02563e30;
          }
          uVar8 = uVar8 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_02563e30:
      uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x120,uVar4);
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                   0xfffffffc);
      goto LAB_02563e78;
    }
  }
  else {
    if (iVar1 == 1) {
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
      goto LAB_02563ba8;
    }
    if (iVar1 == 2) {
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                   0xfffffffc);
LAB_02563e78:
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0x120);
      plVar10 = (long *)*puVar5;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar2 * 0x10 + 0x138);
            goto LAB_02563ef0;
          }
          uVar8 = uVar8 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_02563ef0:
      uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      if ((uVar8 & 1) != 0) {
        puVar5 = (undefined8 *)
                 thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                    *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                   0x20) + 0xc0) + 0x80) + 0x120);
        plVar10 = (long *)*puVar5;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar2 + -2) == lVar6) {
              lVar6 = lVar7 + (long)*piVar2 * 0x10 + 0x138;
              goto LAB_02563fd0;
            }
            uVar8 = uVar8 - 1;
            piVar2 = piVar2 + 4;
          } while (uVar8 != 0);
        }
        lVar6 = FUN_01ecb238(plVar10,lVar6,0);
LAB_02563fd0:
        *(void **)(unaff_x29 + -0x10) = unaff_x21;
        lVar6 = *(long *)(lVar6 + 8);
        (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar10,unaff_x29 + -0x10);
        memcpy(unaff_x22,unaff_x21,unaff_x19);
        memcpy(unaff_x20,unaff_x22,unaff_x19);
        FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                              0x80) + 0x20);
        FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                     *(undefined8 *)
                      (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),2)
        ;
        uVar9 = 1;
        goto FUN_02564050;
      }
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x10))
                (*(undefined8 *)(unaff_x29 + -0x18));
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x120,0);
    }
  }
  uVar9 = 0;
FUN_02564050:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


