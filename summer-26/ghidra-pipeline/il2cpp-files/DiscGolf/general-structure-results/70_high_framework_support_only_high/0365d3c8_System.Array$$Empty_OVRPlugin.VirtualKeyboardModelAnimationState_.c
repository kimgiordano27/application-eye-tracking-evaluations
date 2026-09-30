/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 0365d3c8
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

long * System_Array__Empty<OVRPlugin_VirtualKeyboardModelAnimationState>
                 (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  code *pcVar7;
  int *in_x10;
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
  
code_r0x0365d3c8:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_0365d3b8;
LAB_0365d3d0:
  lVar1 = FUN_02dd004c(unaff_x27,param_3,0);
  do {
    lVar1 = *(long *)(lVar1 + 8);
    *(void **)(unaff_x29 + -0x28) = unaff_x22;
    (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,unaff_x27,unaff_x29 + -0x28);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
                    /* try { // try from 0365d418 to 0375d42b has its CatchHandler @ 0365d7e4 */
    if (unaff_x20 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    puVar4 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x23;
    }
    puVar3 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
    uVar2 = *puVar3;
    pcVar7 = (code *)puVar3[2];
    *(undefined8 **)(unaff_x29 + -0x28) = puVar4;
    (*pcVar7)(uVar2);
    plVar11 = *(long **)(unaff_x29 + -0x30);
    unaff_w26 = unaff_w26 + (uint)*(byte *)(unaff_x29 + -0x1c);
    if (plVar11 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    lVar1 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
          puVar4 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0365d36c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fbff8,0);
LAB_0365d36c:
    uVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      plVar11 = *(long **)(unaff_x29 + -0x30);
      if (plVar11 == (long *)0x0) goto LAB_0365d4ec;
      lVar1 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar6 == 0) goto LAB_0365d4c4;
      piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    unaff_x27 = *(long **)(unaff_x29 + -0x30);
    if (unaff_x27 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    param_3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_02dcfd18(param_3);
    }
    param_1 = *unaff_x27;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_0365d3d0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0365d3b8:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x0365d3c8;
    }
    lVar1 = param_1 + (long)*in_x10 * 0x10 + 0x138;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar4 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0365d4e0;
    }
  }
LAB_0365d4c4:
  puVar4 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d4e0:
  (*(code *)*puVar4)(plVar11,puVar4[1]);
LAB_0365d4ec:
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  plVar11 = (long *)FUN_02d966a4(lVar1,unaff_w26);
  lVar1 = **(long **)(unaff_x19 + 0x38);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18(lVar1);
  }
  lVar5 = *unaff_x25;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar1) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0365d57c;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02dd004c();
LAB_0365d57c:
  uVar2 = (*(code *)*puVar4)();
  uVar10 = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x38;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar2;
LAB_0365d59c:
  do {
    plVar9 = *(long **)(unaff_x29 + -0x38);
    if (plVar9 == (long *)0x0) break;
    lVar1 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
          puVar4 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0365d5f8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff8,0);
LAB_0365d5f8:
    uVar6 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      plVar9 = *(long **)(unaff_x29 + -0x38);
      if (plVar9 == (long *)0x0) goto LAB_0365d7ec;
      lVar1 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar6 == 0) goto LAB_0365d7c4;
      piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
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
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18(lVar1);
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar1) {
          lVar1 = lVar5 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0365d678;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    lVar1 = FUN_02dd004c(plVar9,lVar1,0);
LAB_0365d678:
    lVar1 = *(long *)(lVar1 + 8);
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,plVar9,unaff_x29 + -0x18);
    memcpy(unaff_x24,unaff_x22,unaff_x21);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (unaff_x20 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_0365d9d4;
    }
    puVar4 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x23;
    }
    puVar3 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
    uVar2 = *puVar3;
    pcVar7 = (code *)puVar3[2];
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
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
        lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_02dcfd18();
        }
        if (uVar10 < *(uint *)(plVar11 + 3)) {
          uVar10 = uVar10 + 1;
          FUN_02d96568(lVar1,(long)plVar11 + (ulong)*(uint *)(*plVar11 + 0x104) * lVar5 + 0x20);
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
      puVar4 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0365d7e0;
    }
  }
LAB_0365d7c4:
  puVar4 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff0,0);
LAB_0365d7e0:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
LAB_0365d7ec:
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return plVar11;
  }
LAB_0365d9d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


