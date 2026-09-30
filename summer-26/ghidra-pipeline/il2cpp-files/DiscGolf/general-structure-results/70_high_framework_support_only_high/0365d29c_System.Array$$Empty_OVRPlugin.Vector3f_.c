/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector3f>
ENTRY_POINT: 0365d29c
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

long * System_Array__Empty<OVRPlugin_Vector3f>(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  void *unaff_x24;
  long *unaff_x25;
  long *plVar10;
  int iVar11;
  uint uVar12;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_02dcfd18(param_3);
  }
  lVar5 = *unaff_x25;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0365d2f4;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_02dd004c();
LAB_0365d2f4:
  plVar2 = (long *)(*(code *)*puVar1)();
  *(long **)(unaff_x29 + -0x30) = plVar2;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x30;
  if (plVar2 != (long *)0x0) {
    iVar11 = 0;
    do {
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff8) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0365d36c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)FUN_02dd004c(plVar2,*(long *)PTR_DAT_069fbff8,0);
LAB_0365d36c:
      uVar7 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      if ((uVar7 & 1) == 0) {
        plVar2 = *(long **)(unaff_x29 + -0x30);
        if (plVar2 == (long *)0x0) goto LAB_0365d4ec;
        lVar5 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 == 0) goto LAB_0365d4c4;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_0365d4ac;
      }
      plVar2 = *(long **)(unaff_x29 + -0x30);
      if (plVar2 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_0365d9d4;
      }
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02dcfd18(lVar5);
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) {
            lVar5 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_0365d3ec;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      lVar5 = FUN_02dd004c(plVar2,lVar5,0);
LAB_0365d3ec:
      lVar5 = *(long *)(lVar5 + 8);
      *(void **)(unaff_x29 + -0x28) = unaff_x22;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar2,unaff_x29 + -0x28);
      memcpy(unaff_x23,unaff_x22,unaff_x21);
      if (unaff_x20 == 0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_0365d9d4;
      }
      puVar1 = unaff_x23;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
        puVar1 = (undefined8 *)*unaff_x23;
      }
      puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
      uVar3 = *puVar4;
      pcVar8 = (code *)puVar4[2];
      *(undefined8 **)(unaff_x29 + -0x28) = puVar1;
      (*pcVar8)(uVar3);
      plVar2 = *(long **)(unaff_x29 + -0x30);
      iVar11 = iVar11 + (uint)*(byte *)(unaff_x29 + -0x1c);
    } while (plVar2 != (long *)0x0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  goto LAB_0365d9d4;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_0365d4ac:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0365d4e0;
    }
  }
LAB_0365d4c4:
  puVar1 = (undefined8 *)FUN_02dd004c(plVar2,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d4e0:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
LAB_0365d4ec:
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18();
  }
  plVar2 = (long *)FUN_02d966a4(lVar5,iVar11);
  lVar5 = **(long **)(unaff_x19 + 0x38);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18(lVar5);
  }
  lVar6 = *unaff_x25;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar1 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0365d57c;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar1 = (undefined8 *)FUN_02dd004c();
LAB_0365d57c:
  uVar3 = (*(code *)*puVar1)();
  uVar12 = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x38;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar3;
LAB_0365d59c:
  do {
    plVar10 = *(long **)(unaff_x29 + -0x38);
    if (plVar10 == (long *)0x0) break;
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff8) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0365d5f8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff8,0);
LAB_0365d5f8:
    uVar7 = (*(code *)*puVar1)(plVar10,puVar1[1]);
    if ((uVar7 & 1) == 0) {
      plVar10 = *(long **)(unaff_x29 + -0x38);
      if (plVar10 == (long *)0x0) goto LAB_0365d7ec;
      lVar5 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_0365d7c4;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
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
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18(lVar5);
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_0365d678;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_02dd004c(plVar10,lVar5,0);
LAB_0365d678:
    lVar5 = *(long *)(lVar5 + 8);
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,unaff_x29 + -0x18);
    memcpy(unaff_x24,unaff_x22,unaff_x21);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (unaff_x20 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    puVar1 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
      puVar1 = (undefined8 *)*unaff_x23;
    }
    puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
    uVar3 = *puVar4;
    pcVar8 = (code *)puVar4[2];
    *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
    (*pcVar8)(uVar3);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      memcpy(unaff_x22,unaff_x24,unaff_x21);
      if (plVar2 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_0365d9d4;
      }
      if (uVar12 < *(uint *)(plVar2 + 3)) {
        lVar6 = (long)(int)uVar12;
        memcpy((void *)((long)plVar2 + (ulong)*(uint *)(*plVar2 + 0x104) * lVar6 + 0x20),unaff_x24,
               unaff_x21);
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02dcfd18();
        }
        if (uVar12 < *(uint *)(plVar2 + 3)) {
          uVar12 = uVar12 + 1;
          FUN_02d96568(lVar5,(long)plVar2 + (ulong)*(uint *)(*plVar2 + 0x104) * lVar6 + 0x20);
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
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
LAB_0365d7ac:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0365d7e0;
    }
  }
LAB_0365d7c4:
  puVar1 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d7e0:
  (*(code *)*puVar1)(plVar10,puVar1[1]);
LAB_0365d7ec:
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return plVar2;
  }
LAB_0365d9d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


