/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyAnimationSystem.Values<Background>$$QueueTransitionEndEvent
ENTRY_POINT: 027d0b58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x027d10c4) */

void UnityEngine_UIElements_StylePropertyAnimationSystem_Values<Background>__QueueTransitionEndEvent
               (long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  undefined1 *__src;
  long unaff_x21;
  void *unaff_x22;
  code *pcVar11;
  undefined8 uVar12;
  ulong __n;
  int iVar13;
  undefined8 unaff_x25;
  undefined1 *__s;
  long *plVar14;
  long unaff_x27;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(**(long **)(param_1 + 0xc0) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar8;
  __s = __src + -uVar8;
  memset(__s,0,__n);
  uVar1 = *(ushort *)(unaff_x19 + 0x135);
  lVar6 = unaff_x19;
  if ((uVar1 & 1) == 0) {
    unaff_x19 = FUN_01ecaf44();
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(unaff_x19 + 0xc0) + 0x78);
  if ((uVar1 & 1) == 0) {
    FUN_01ecaf44(lVar6);
  }
  uVar8 = (*pcVar11)();
  if ((uVar8 & 1) != 0) {
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    puVar5 = (undefined8 *)thunk_FUN_01ee7388();
    plVar10 = (long *)*puVar5;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_027d0c98;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar6,0);
LAB_027d0c98:
    pcVar11 = (code *)*puVar5;
    uVar12 = puVar5[1];
    *(undefined8 *)(unaff_x29 + -0x30) = unaff_x25;
    *(long *)(unaff_x29 + -0x28) = unaff_x27;
    plVar10 = (long *)(*pcVar11)(plVar10,uVar12);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar13 = 0;
    do {
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_027d0d08;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_027d0d08:
      uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      if ((uVar8 & 1) == 0) {
        unaff_x27 = *(long *)(unaff_x29 + -0x28);
        if (plVar10 == (long *)0x0) break;
        goto LAB_027d1028;
      }
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x68);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_027d0d8c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar6 = FUN_01ecb238(plVar10,lVar6,0);
LAB_027d0d8c:
      *(undefined1 **)(unaff_x29 + -0x20) = __src;
      lVar6 = *(long *)(lVar6 + 8);
      (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar10,unaff_x29 + -0x20,__src);
      memcpy(__s,__src,__n);
      lVar7 = *(long *)(unaff_x21 + 0x20);
      uVar1 = *(ushort *)(lVar7 + 0x135);
      lVar6 = lVar7;
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_01ecaf44();
        lVar7 = *(long *)(unaff_x21 + 0x20);
        uVar1 = *(ushort *)(lVar7 + 0x135);
      }
      pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x48);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      iVar3 = (*pcVar11)(__s,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48));
      lVar6 = *(long *)(unaff_x21 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_01ecaf44();
        uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
      }
      pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x48);
      if ((uVar1 & 1) == 0) {
        FUN_01ecaf44();
      }
      iVar4 = (*pcVar11)();
      if (iVar3 == iVar4) goto LAB_027d0e7c;
      iVar13 = iVar13 + 1;
    } while( true );
  }
  goto LAB_027d108c;
LAB_027d0e7c:
  lVar6 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    unaff_x27 = *(long *)(unaff_x29 + -0x28);
    lVar6 = FUN_01ecaf44();
    uVar12 = *(undefined8 *)(unaff_x29 + -0x30);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x29 + -0x30);
    unaff_x27 = *(long *)(unaff_x29 + -0x28);
  }
  puVar5 = (undefined8 *)
           thunk_FUN_01ee7388(uVar12,*(long *)(**(long **)(lVar6 + 0xc0) + 0x80) + 0x40);
  plVar14 = (long *)*puVar5;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *plVar14;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_027d0f34;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar14,lVar6,4);
LAB_027d0f34:
  (*(code *)*puVar5)(plVar14,iVar13,puVar5[1]);
  lVar6 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  puVar5 = (undefined8 *)
           thunk_FUN_01ee7388(uVar12,*(long *)(**(long **)(lVar6 + 0xc0) + 0x80) + 0x40);
  plVar14 = (long *)*puVar5;
  memcpy(__src,unaff_x22,__n);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  *(int *)(unaff_x29 + -0xc) = iVar13;
  lVar7 = *plVar14;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        lVar6 = lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138;
        goto LAB_027d1000;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  lVar6 = FUN_01ecb238(plVar14,lVar6,3);
LAB_027d1000:
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(undefined1 **)(unaff_x29 + -0x18) = __src;
  lVar6 = *(long *)(lVar6 + 8);
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,plVar14,unaff_x29 + -0x20,__src);
  if (plVar10 != (long *)0x0) {
LAB_027d1028:
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_027d107c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_027d107c:
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
LAB_027d108c:
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


