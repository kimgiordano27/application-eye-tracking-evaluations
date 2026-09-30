/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<TreeViewItemWrapper>$$System.Collections.IList.RemoveAt
ENTRY_POINT: 02577b78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Collections_ObjectModel_ReadOnlyCollection<TreeViewItemWrapper>__System_Collections_IList_RemoveAt
          (long param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  undefined4 uVar9;
  ulong unaff_x19;
  void *__dest;
  void *__src;
  void *__s;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x25;
  long unaff_x29;
  undefined1 auVar12 [16];
  
  uVar8 = in_x9 & 0x1fffffff0;
  __src = (void *)(param_1 - uVar8);
  __dest = (void *)((long)__src - uVar8);
  __s = (void *)((long)__dest - uVar8);
  memset(__s,0,unaff_x19);
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
  piVar2 = (int *)thunk_FUN_01ee7388();
  iVar1 = *piVar2;
  plVar3 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                      *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                     0x20) + 0xc0) + 0x80) + 0x40);
  if (iVar1 == 0) {
    lVar7 = *plVar3;
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(lVar7 + 0x10) != 0) {
      auVar12 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x28
                            ))();
      if (auVar12._0_8_ != 0) {
        puVar4 = *(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x38);
        (*(code *)puVar4[2])(*puVar4,puVar4,auVar12._0_8_,0,unaff_x29 + -0x68);
        *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x60);
        *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x68);
        *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x58);
        lVar7 = *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80)
        ;
        *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x60);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x58);
        FUN_01bc6c2c(*(undefined8 *)(unaff_x29 + -0x10),lVar7 + 0x60,unaff_x29 + -0x80);
        FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
                     *(undefined8 *)
                      (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                     0xfffffffd);
        goto FUN_02577ed0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(0,auVar12._8_8_,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (iVar1 == 1) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
    do {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                 0x20) + 0xc0) + 0x80) + 0x80);
      plVar3 = (long *)*puVar4;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar2 * 0x10 + 0x138);
            goto LAB_02577e88;
          }
          uVar8 = uVar8 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_02577e88:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar8 & 1) != 0) {
        puVar4 = (undefined8 *)
                 thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                    *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                   0x20) + 0xc0) + 0x80) + 0x80);
        plVar3 = (long *)*puVar4;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x70);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_02577fc8;
        piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_02577fb0;
      }
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x10));
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x10),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                            0x80) + 0x80,0);
FUN_02577ed0:
      plVar3 = *(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
      pcVar10 = *(code **)plVar3[0x11];
      uVar5 = thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),*(long *)(*plVar3 + 0x80) + 0x60
                                );
      uVar8 = (*pcVar10)(uVar5,*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                                0x88));
      plVar3 = *(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
      if ((uVar8 & 1) == 0) {
        (**(code **)plVar3[2])(*(undefined8 *)(unaff_x29 + -0x10));
        puVar4 = (undefined8 *)
                 thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),
                                    *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                   0x20) + 0xc0) + 0x80) + 0x60);
        uVar9 = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        goto 
        System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__System_Collections_Generic_IList<T>_RemoveAt
        ;
      }
      puVar4 = (undefined8 *)plVar3[9];
      uVar11 = *puVar4;
      uVar5 = thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x10),*(long *)(*plVar3 + 0x80) + 0x60
                                );
      (*(code *)puVar4[2])(uVar11,puVar4,uVar5,0,unaff_x29 + -0x50);
      plVar3 = *(long **)(unaff_x29 + -0x50);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar2 * 0x10 + 0x138);
            goto LAB_02577dc8;
          }
          uVar8 = uVar8 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar7,0);
LAB_02577dc8:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x10),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                            0x80) + 0x80,uVar5);
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                   0xfffffffc);
    } while( true );
  }
  uVar9 = 0;
  goto 
  System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__System_Collections_Generic_IList<T>_RemoveAt
  ;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar2 = piVar2 + 4;
    if (uVar8 == 0) break;
LAB_02577fb0:
    if (*(long *)(piVar2 + -2) == lVar7) {
      lVar7 = lVar6 + (long)*piVar2 * 0x10 + 0x138;
      goto LAB_02577fe4;
    }
  }
LAB_02577fc8:
  lVar7 = FUN_01ecb238(plVar3,lVar7,0);
LAB_02577fe4:
  *(void **)(unaff_x29 + -0x50) = __src;
  lVar7 = *(long *)(lVar7 + 8);
  (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar3,unaff_x29 + -0x50,__src);
  memcpy(__s,__src,unaff_x19);
  memcpy(__dest,__s,unaff_x19);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x10),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80)
               + 0x20,__dest,unaff_x19 & 0xffffffff);
  uVar9 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x10),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),1);

  System_Collections_ObjectModel_ReadOnlyCollection<UICharInfo>__System_Collections_Generic_IList<T>_RemoveAt
  :
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


