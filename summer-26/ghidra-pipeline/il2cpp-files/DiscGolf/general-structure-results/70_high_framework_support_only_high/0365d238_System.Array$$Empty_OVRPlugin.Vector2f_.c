/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector2f>
ENTRY_POINT: 0365d238
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0365d8f4) */
/* WARNING: Removing unreachable block (ram,0x0365d908) */
/* WARNING: Removing unreachable block (ram,0x0365d8d8) */
/* WARNING: Removing unreachable block (ram,0x0365d8ec) */

long * System_Array__Empty<OVRPlugin_Vector2f>(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  ulong __n;
  undefined1 *__src;
  undefined8 *puVar9;
  void *__s;
  long *unaff_x25;
  long *plVar10;
  int iVar11;
  long *plVar12;
  uint uVar13;
  long unaff_x29;
  
  FUN_02dcfd74();
  plVar12 = *(long **)(unaff_x19 + 0x38);
  __n = (ulong)*(uint *)(plVar12[4] + 0xfc);
  uVar6 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar6;
  puVar9 = (undefined8 *)(__src + -uVar6);
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  __s = (void *)((long)puVar9 - uVar6);
  memset(__s,0,__n);
  if (unaff_x25 == (long *)0x0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else {
    lVar3 = *plVar12;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar5 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0365d2f4;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c();
LAB_0365d2f4:
    plVar12 = (long *)(*(code *)*puVar1)();
    *(long **)(unaff_x29 + -0x30) = plVar12;
    *(undefined8 *)(unaff_x29 + -0x48) = 0;
    *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x30;
    if (plVar12 != (long *)0x0) {
      iVar11 = 0;
      do {
        lVar3 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0365d36c;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_069fbff8,0);
LAB_0365d36c:
        uVar6 = (*(code *)*puVar1)(plVar12,puVar1[1]);
        if ((uVar6 & 1) == 0) {
          plVar12 = *(long **)(unaff_x29 + -0x30);
          if (plVar12 == (long *)0x0) goto LAB_0365d4ec;
          lVar3 = *plVar12;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar6 == 0) goto LAB_0365d4c4;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_0365d4ac;
        }
        plVar12 = *(long **)(unaff_x29 + -0x30);
        if (plVar12 == (long *)0x0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_0365d9d4;
        }
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02dcfd18(lVar3);
        }
        lVar5 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar3) {
              lVar3 = lVar5 + (long)*piVar8 * 0x10 + 0x138;
              goto LAB_0365d3ec;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        lVar3 = FUN_02dd004c(plVar12,lVar3,0);
LAB_0365d3ec:
        lVar3 = *(long *)(lVar3 + 8);
        *(undefined1 **)(unaff_x29 + -0x28) = __src;
        (**(code **)(lVar3 + 0x10))
                  (*(undefined8 *)(lVar3 + 8),lVar3,plVar12,unaff_x29 + -0x28,__src);
        memcpy(puVar9,__src,__n);
        if (unaff_x20 == 0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_0365d9d4;
        }
        puVar1 = puVar9;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
          puVar1 = (undefined8 *)*puVar9;
        }
        puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
        uVar2 = *puVar4;
        pcVar7 = (code *)puVar4[2];
        *(undefined8 **)(unaff_x29 + -0x28) = puVar1;
        (*pcVar7)(uVar2);
        plVar12 = *(long **)(unaff_x29 + -0x30);
        iVar11 = iVar11 + (uint)*(byte *)(unaff_x29 + -0x1c);
      } while (plVar12 != (long *)0x0);
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  goto LAB_0365d9d4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_0365d4ac:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0365d4e0;
    }
  }
LAB_0365d4c4:
  puVar1 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d4e0:
  (*(code *)*puVar1)(plVar12,puVar1[1]);
LAB_0365d4ec:
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  plVar12 = (long *)FUN_02d966a4(lVar3,iVar11);
  lVar3 = **(long **)(unaff_x19 + 0x38);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18(lVar3);
  }
  lVar5 = *unaff_x25;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0365d57c;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_02dd004c();
LAB_0365d57c:
  uVar2 = (*(code *)*puVar1)();
  uVar13 = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x38;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar2;
LAB_0365d59c:
  do {
    plVar10 = *(long **)(unaff_x29 + -0x38);
    if (plVar10 == (long *)0x0) break;
    lVar3 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0365d5f8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff8,0);
LAB_0365d5f8:
    uVar6 = (*(code *)*puVar1)(plVar10,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      plVar10 = *(long **)(unaff_x29 + -0x38);
      if (plVar10 == (long *)0x0) goto LAB_0365d7ec;
      lVar3 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_0365d7c4;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_0365d7ac;
    }
    plVar10 = *(long **)(unaff_x29 + -0x38);
    if (plVar10 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          lVar3 = lVar5 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0365d678;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    lVar3 = FUN_02dd004c(plVar10,lVar3,0);
LAB_0365d678:
    lVar3 = *(long *)(lVar3 + 8);
    *(undefined1 **)(unaff_x29 + -0x18) = __src;
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar10,unaff_x29 + -0x18,__src);
    memcpy(__s,__src,__n);
    memcpy(puVar9,__src,__n);
    if (unaff_x20 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    puVar1 = puVar9;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
      puVar1 = (undefined8 *)*puVar9;
    }
    puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
    uVar2 = *puVar4;
    pcVar7 = (code *)puVar4[2];
    *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
    (*pcVar7)(uVar2);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      memcpy(__src,__s,__n);
      if (plVar12 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_0365d9d4;
      }
      if (uVar13 < *(uint *)(plVar12 + 3)) {
        lVar5 = (long)(int)uVar13;
        memcpy((void *)((long)plVar12 + (ulong)*(uint *)(*plVar12 + 0x104) * lVar5 + 0x20),__s,__n);
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02dcfd18();
        }
        if (uVar13 < *(uint *)(plVar12 + 3)) {
          uVar13 = uVar13 + 1;
          FUN_02d96568(lVar3,(long)plVar12 + (ulong)*(uint *)(*plVar12 + 0x104) * lVar5 + 0x20,__src
                      );
          goto LAB_0365d59c;
        }
      }
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      goto LAB_0365d9d4;
    }
  } while( true );
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  goto LAB_0365d9d4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_0365d7ac:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar9 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0365d7e0;
    }
  }
LAB_0365d7c4:
  puVar9 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d7e0:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_0365d7ec:
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return plVar12;
  }
LAB_0365d9d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


