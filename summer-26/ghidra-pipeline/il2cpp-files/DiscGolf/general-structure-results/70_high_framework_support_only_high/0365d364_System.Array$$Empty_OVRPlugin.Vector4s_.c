/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector4s>
ENTRY_POINT: 0365d364
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0365d8f4) */
/* WARNING: Removing unreachable block (ram,0x0365d908) */
/* WARNING: Removing unreachable block (ram,0x0365d8d8) */
/* WARNING: Removing unreachable block (ram,0x0365d8ec) */

long * System_Array__Empty<OVRPlugin_Vector4s>(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_x9;
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
  int unaff_w26;
  uint uVar10;
  long *unaff_x27;
  long *plVar11;
  long unaff_x29;
  
code_r0x0365d364:
  puVar6 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar6)(unaff_x27,puVar6[1]), (uVar1 & 1) != 0) {
    plVar11 = *(long **)(unaff_x29 + -0x30);
    if (plVar11 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
                    /* try { // try from 0365d38c to 0375d39f has its CatchHandler @ 0365d794 */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar5 = *plVar11;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 0365d3c0 to 0375d403 has its CatchHandler @ 0365d78c */
        if (*(long *)(piVar8 + -2) == lVar3) {
          lVar3 = lVar5 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0365d3ec;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    lVar3 = FUN_02dd004c(plVar11,lVar3,0);
LAB_0365d3ec:
    lVar3 = *(long *)(lVar3 + 8);
    *(void **)(unaff_x29 + -0x28) = unaff_x22;
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar11,unaff_x29 + -0x28);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (unaff_x20 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    puVar6 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x23;
    }
    puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
    uVar2 = *puVar4;
    pcVar7 = (code *)puVar4[2];
    *(undefined8 **)(unaff_x29 + -0x28) = puVar6;
    (*pcVar7)(uVar2);
    unaff_x27 = *(long **)(unaff_x29 + -0x30);
    unaff_w26 = unaff_w26 + (uint)*(byte *)(unaff_x29 + -0x1c);
    if (unaff_x27 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    param_1 = *unaff_x27;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
          in_x9 = (long)*piVar8;
          goto code_r0x0365d364;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(unaff_x27,*(long *)PTR_DAT_069fbff8,0);
  }
  plVar11 = *(long **)(unaff_x29 + -0x30);
  if (plVar11 == (long *)0x0) goto LAB_0365d4ec;
  lVar3 = *plVar11;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar1 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
        puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0365d4e0;
      }
      uVar1 = uVar1 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar1 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d4e0:
  (*(code *)*puVar6)(plVar11,puVar6[1]);
LAB_0365d4ec:
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  plVar11 = (long *)FUN_02d966a4(lVar3,unaff_w26);
  lVar3 = **(long **)(unaff_x19 + 0x38);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18(lVar3);
  }
  lVar5 = *unaff_x25;
  uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar1 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0365d57c;
      }
      uVar1 = uVar1 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar1 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c();
LAB_0365d57c:
  uVar2 = (*(code *)*puVar6)();
  uVar10 = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x38;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar2;
LAB_0365d59c:
  do {
    plVar9 = *(long **)(unaff_x29 + -0x38);
    if (plVar9 == (long *)0x0) break;
    lVar3 = *plVar9;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0365d5f8;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff8,0);
LAB_0365d5f8:
    uVar1 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    if ((uVar1 & 1) == 0) {
      plVar9 = *(long **)(unaff_x29 + -0x38);
      if (plVar9 == (long *)0x0) goto LAB_0365d7ec;
      lVar3 = *plVar9;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 == 0) goto LAB_0365d7c4;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
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
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar5 = *plVar9;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          lVar3 = lVar5 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0365d678;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    lVar3 = FUN_02dd004c(plVar9,lVar3,0);
LAB_0365d678:
    lVar3 = *(long *)(lVar3 + 8);
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar9,unaff_x29 + -0x18);
    memcpy(unaff_x24,unaff_x22,unaff_x21);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (unaff_x20 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    puVar6 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x23;
    }
    puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
    uVar2 = *puVar4;
    pcVar7 = (code *)puVar4[2];
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
    (*pcVar7)(uVar2);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      memcpy(unaff_x22,unaff_x24,unaff_x21);
      if (plVar11 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_0365d9d4;
      }
      if (uVar10 < *(uint *)(plVar11 + 3)) {
        lVar5 = (long)(int)uVar10;
        memcpy((void *)((long)plVar11 + (ulong)*(uint *)(*plVar11 + 0x104) * lVar5 + 0x20),unaff_x24
               ,unaff_x21);
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02dcfd18();
        }
        if (uVar10 < *(uint *)(plVar11 + 3)) {
          uVar10 = uVar10 + 1;
          FUN_02d96568(lVar3,(long)plVar11 + (ulong)*(uint *)(*plVar11 + 0x104) * lVar5 + 0x20);
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
    uVar1 = uVar1 - 1;
    piVar8 = piVar8 + 4;
    if (uVar1 == 0) break;
LAB_0365d7ac:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0365d7e0;
    }
  }
LAB_0365d7c4:
  puVar6 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d7e0:
  (*(code *)*puVar6)(plVar9,puVar6[1]);
LAB_0365d7ec:
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return plVar11;
  }
LAB_0365d9d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


