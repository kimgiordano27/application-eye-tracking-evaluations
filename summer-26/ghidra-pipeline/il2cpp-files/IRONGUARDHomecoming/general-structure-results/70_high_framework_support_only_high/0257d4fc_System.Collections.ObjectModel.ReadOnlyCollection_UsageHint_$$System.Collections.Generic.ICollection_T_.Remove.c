/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<UsageHint>$$System.Collections.Generic.ICollection<T>.Remove
ENTRY_POINT: 0257d4fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0257d748) */
/* WARNING: Removing unreachable block (ram,0x0257dabc) */

undefined4
System_Collections_ObjectModel_ReadOnlyCollection<UsageHint>__System_Collections_Generic_ICollection<T>_Remove
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  size_t unaff_x19;
  void *unaff_x20;
  undefined8 *unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  lVar1 = FUN_01ecaf44(param_2);
  lVar7 = *unaff_x24;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0257d550;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0257d550:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar1 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0257d5b0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x27,0);
LAB_0257d5b0:
    uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_0257d73c;
      lVar1 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar8 == 0) goto LAB_0257d714;
      piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44(lVar1);
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar1) {
          lVar1 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_0257d62c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar1 = FUN_01ecb238(plVar3,lVar1,0);
LAB_0257d62c:
    *(void **)(unaff_x29 + -0x18) = unaff_x20;
    lVar1 = *(long *)(lVar1 + 8);
    (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,plVar3,unaff_x29 + -0x18);
    memcpy(unaff_x23,unaff_x20,unaff_x19);
    plVar4 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x120);
    lVar1 = *plVar4;
    memcpy(unaff_x21,unaff_x23,unaff_x19);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0);
    puVar2 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x48) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x21;
    }
    puVar6 = *(undefined8 **)(lVar7 + 0x50);
    uVar5 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar6[2])(uVar5,puVar6,lVar1,unaff_x29 + -0x18,unaff_x29 + -0xc);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0257d730;
    }
  }
LAB_0257d714:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0257d730:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_0257d73c:
  puVar2 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) +
                                                   0xc0) + 0x80) + 0xe0);
  plVar3 = (long *)*puVar2;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44(lVar1);
  }
  lVar7 = *plVar3;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0257d7dc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar1,0);
LAB_0257d7dc:
  uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x140,uVar5);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
               0xfffffffd);
  do {
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x140);
    plVar3 = (long *)*puVar2;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0257d894;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x27,0);
LAB_0257d894:
    uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar8 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x20));
      FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x20),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                            0x80) + 0x140,0);
      uVar10 = 0;
      goto LAB_0257da70;
    }
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x140);
    plVar3 = (long *)*puVar2;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44(lVar1);
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar1) {
          lVar1 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_0257d934;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar1 = FUN_01ecb238(plVar3,lVar1,0);
LAB_0257d934:
    *(void **)(unaff_x29 + -0x18) = unaff_x20;
    lVar1 = *(long *)(lVar1 + 8);
    (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,plVar3,unaff_x29 + -0x18);
    memcpy(unaff_x22,unaff_x20,unaff_x19);
    plVar3 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x20),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0x120);
    lVar1 = *plVar3;
    memcpy(unaff_x21,unaff_x22,unaff_x19);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0);
    puVar2 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x48) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x21;
    }
    puVar6 = *(undefined8 **)(lVar7 + 0x58);
    uVar5 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar6[2])(uVar5,puVar6,lVar1,unaff_x29 + -0x18,unaff_x29 + -0x10);
  } while (*(char *)(unaff_x29 + -0x10) == '\0');
  memcpy(unaff_x20,unaff_x22,unaff_x19);
  FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar10 = 1;
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),1);
LAB_0257da70:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


