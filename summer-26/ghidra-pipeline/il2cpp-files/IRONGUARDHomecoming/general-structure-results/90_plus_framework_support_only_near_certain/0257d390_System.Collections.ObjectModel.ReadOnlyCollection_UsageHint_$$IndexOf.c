/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<UsageHint>$$IndexOf
ENTRY_POINT: 0257d390
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0257d748) */
/* WARNING: Removing unreachable block (ram,0x0257dabc) */

undefined4 System_Collections_ObjectModel_ReadOnlyCollection<UsageHint>__IndexOf(void)

{
  undefined *puVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  size_t unaff_x19;
  void *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined1 *__s;
  undefined1 *__s_00;
  long *plVar12;
  long unaff_x26;
  long unaff_x29;
  
  __s_00 = &stack0x00000000 + -unaff_x22;
  memset(__s_00,0,unaff_x19);
  __s = __s_00 + -unaff_x22;
  memset(__s,0,unaff_x19);
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x28;
  *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
  piVar2 = (int *)thunk_FUN_01ee7388();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*piVar2 == 0) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x60);
    uVar6 = *puVar5;
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x18
                            ) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    uVar3 = thunk_FUN_01f117cc();
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x20))
              (uVar3,uVar6);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80
                          ) + 0x120,uVar3);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    plVar12 = (long *)*puVar5;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar2 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_0257d550;
        }
        uVar10 = uVar10 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d550:
    plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar12;
      lVar7 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar2 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar2 * 0x10 + 0x138);
            goto LAB_0257d5b0;
          }
          uVar10 = uVar10 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d5b0:
      uVar10 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto LAB_0257d73c;
        lVar7 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_0257d714;
        piVar2 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_0257d6fc;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar2 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar7) {
            lVar7 = lVar9 + (long)*piVar2 * 0x10 + 0x138;
            goto LAB_0257d62c;
          }
          uVar10 = uVar10 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar10 != 0);
      }
      lVar7 = FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d62c:
      *(void **)(unaff_x29 + -0x18) = unaff_x20;
      lVar7 = *(long *)(lVar7 + 8);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar12,unaff_x29 + -0x18);
      memcpy(__s_00,unaff_x20,unaff_x19);
      plVar4 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                          *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 +
                                                                                   -0x28) + 0x20) +
                                                               0xc0) + 0x80) + 0x120);
      lVar7 = *plVar4;
      memcpy(unaff_x21,__s_00,unaff_x19);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0);
      puVar5 = unaff_x21;
      if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
        puVar5 = (undefined8 *)*unaff_x21;
      }
      puVar8 = *(undefined8 **)(lVar9 + 0x50);
      uVar6 = *puVar8;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
      (*(code *)puVar8[2])(uVar6,puVar8,lVar7,unaff_x29 + -0x18,unaff_x29 + -0xc);
    } while( true );
  }
  if (*piVar2 != 1) {
LAB_0257da6c:
    uVar11 = 0;
    goto LAB_0257da70;
  }
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  goto LAB_0257d824;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar2 = piVar2 + 4;
    if (uVar10 == 0) break;
LAB_0257d6fc:
    if (*(long *)(piVar2 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar2 * 0x10 + 0x138);
      goto LAB_0257d730;
    }
  }
LAB_0257d714:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0257d730:
  (*(code *)*puVar5)(plVar12,puVar5[1]);
LAB_0257d73c:
  puVar5 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) +
                                                   0xc0) + 0x80) + 0xe0);
  plVar12 = (long *)*puVar5;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar2 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == lVar7) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar2 * 0x10 + 0x138);
        goto LAB_0257d7dc;
      }
      uVar10 = uVar10 - 1;
      piVar2 = piVar2 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d7dc:
  uVar6 = (*(code *)*puVar5)(plVar12,puVar5[1]);
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x140,uVar6);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
LAB_0257d824:
  do {
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x140);
    plVar12 = (long *)*puVar5;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar12;
    lVar7 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar2 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_0257d894;
        }
        uVar10 = uVar10 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d894:
    uVar10 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x20));
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                            0x80) + 0x140,0);
      goto LAB_0257da6c;
    }
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x140);
    plVar12 = (long *)*puVar5;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar2 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == lVar7) {
          lVar7 = lVar9 + (long)*piVar2 * 0x10 + 0x138;
          goto LAB_0257d934;
        }
        uVar10 = uVar10 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar10 != 0);
    }
    lVar7 = FUN_01ecb238(plVar12,lVar7,0);
LAB_0257d934:
    *(void **)(unaff_x29 + -0x18) = unaff_x20;
    lVar7 = *(long *)(lVar7 + 8);
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar12,unaff_x29 + -0x18);
    memcpy(__s,unaff_x20,unaff_x19);
    plVar12 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                         *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28
                                                                                  ) + 0x20) + 0xc0)
                                                  + 0x80) + 0x120);
    lVar7 = *plVar12;
    memcpy(unaff_x21,__s,unaff_x19);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0);
    puVar5 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar9 + 0x48) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x21;
    }
    puVar8 = *(undefined8 **)(lVar9 + 0x58);
    uVar6 = *puVar8;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (*(code *)puVar8[2])(uVar6,puVar8,lVar7,unaff_x29 + -0x18,unaff_x29 + -0x10);
  } while (*(char *)(unaff_x29 + -0x10) == '\0');
  memcpy(unaff_x20,__s,unaff_x19);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar11 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),1);
LAB_0257da70:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}


