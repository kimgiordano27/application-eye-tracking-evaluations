/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector4f>
ENTRY_POINT: 0365d300
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0365d8f4) */
/* WARNING: Removing unreachable block (ram,0x0365d908) */
/* WARNING: Removing unreachable block (ram,0x0365d8d8) */
/* WARNING: Removing unreachable block (ram,0x0365d8ec) */

long * System_Array__Empty<OVRPlugin_Vector4f>(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  void *unaff_x24;
  long *unaff_x25;
  long *plVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  long unaff_x29;
  
                    /* try { // try from 0365d300 to 0375d313 has its CatchHandler @ 0365d7e8 */
  *(long **)(unaff_x29 + -0x30) = param_1;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x30;
  if (param_1 != (long *)0x0) {
    iVar10 = 0;
    do {
      lVar4 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
                    /* try { // try from 0365d334 to 0375d377 has its CatchHandler @ 0365d7e4 */
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0365d36c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_02dd004c(param_1,*(long *)PTR_DAT_069fbff8,0);
LAB_0365d36c:
      uVar6 = (*(code *)*puVar1)(param_1,puVar1[1]);
      if ((uVar6 & 1) == 0) {
        plVar12 = *(long **)(unaff_x29 + -0x30);
        if (plVar12 == (long *)0x0) goto LAB_0365d4ec;
        lVar4 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0) goto LAB_0365d4c4;
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
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
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02dcfd18(lVar4);
      }
      lVar5 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            lVar4 = lVar5 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_0365d3ec;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      lVar4 = FUN_02dd004c(plVar12,lVar4,0);
LAB_0365d3ec:
      lVar4 = *(long *)(lVar4 + 8);
      *(void **)(unaff_x29 + -0x28) = unaff_x22;
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar12,unaff_x29 + -0x28);
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
      puVar3 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
      uVar2 = *puVar3;
      pcVar7 = (code *)puVar3[2];
      *(undefined8 **)(unaff_x29 + -0x28) = puVar1;
      (*pcVar7)(uVar2);
      param_1 = *(long **)(unaff_x29 + -0x30);
      iVar10 = iVar10 + (uint)*(byte *)(unaff_x29 + -0x1c);
    } while (param_1 != (long *)0x0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  goto LAB_0365d9d4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_0365d4ac:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0365d4e0;
    }
  }
LAB_0365d4c4:
  puVar1 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d4e0:
  (*(code *)*puVar1)(plVar12,puVar1[1]);
LAB_0365d4ec:
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  plVar12 = (long *)FUN_02d966a4(lVar4,iVar10);
  lVar4 = **(long **)(unaff_x19 + 0x38);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18(lVar4);
  }
  lVar5 = *unaff_x25;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
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
  uVar11 = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x38;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar2;
LAB_0365d59c:
  do {
    plVar9 = *(long **)(unaff_x29 + -0x38);
    if (plVar9 == (long *)0x0) break;
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0365d5f8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff8,0);
LAB_0365d5f8:
    uVar6 = (*(code *)*puVar1)(plVar9,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      plVar9 = *(long **)(unaff_x29 + -0x38);
      if (plVar9 == (long *)0x0) goto LAB_0365d7ec;
      lVar4 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_0365d7c4;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_0365d7ac;
    }
    plVar9 = *(long **)(unaff_x29 + -0x38);
    if (plVar9 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0365d678;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_02dd004c(plVar9,lVar4,0);
LAB_0365d678:
    lVar4 = *(long *)(lVar4 + 8);
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,unaff_x29 + -0x18);
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
    puVar3 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
    uVar2 = *puVar3;
    pcVar7 = (code *)puVar3[2];
    *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
    (*pcVar7)(uVar2);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      memcpy(unaff_x22,unaff_x24,unaff_x21);
      if (plVar12 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_0365d9d4;
      }
      if (uVar11 < *(uint *)(plVar12 + 3)) {
        lVar5 = (long)(int)uVar11;
        memcpy((void *)((long)plVar12 + (ulong)*(uint *)(*plVar12 + 0x104) * lVar5 + 0x20),unaff_x24
               ,unaff_x21);
        lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02dcfd18();
        }
        if (uVar11 < *(uint *)(plVar12 + 3)) {
          uVar11 = uVar11 + 1;
          FUN_02d96568(lVar4,(long)plVar12 + (ulong)*(uint *)(*plVar12 + 0x104) * lVar5 + 0x20);
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
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0365d7e0;
    }
  }
LAB_0365d7c4:
  puVar1 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d7e0:
  (*(code *)*puVar1)(plVar9,puVar1[1]);
LAB_0365d7ec:
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return plVar12;
  }
LAB_0365d9d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


