/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 04a475e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 143
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04a47ad0) */
/* WARNING: Removing unreachable block (ram,0x04a47adc) */
/* WARNING: Removing unreachable block (ram,0x04a47bfc) */
/* WARNING: Removing unreachable block (ram,0x04a47c0c) */

ulong Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition
                (long param_1,long *param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  uint uVar13;
  void *__s;
  undefined1 auVar14 [16];
  undefined8 uStack_20;
  long **pplStack_18;
  long *plStack_10;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  if ((DAT_066c6a39 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06322bc0);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(PTR_DAT_06313588);
    DAT_066c6a39 = 1;
  }
  puVar2 = PTR_DAT_06312f90;
  plStack_10 = (long *)0x0;
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (long *)0x0) goto LAB_04a47be8;
    lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218(lVar6);
    }
    lVar9 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04a47754;
        }
        uVar12 = uVar12 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02b7654c(param_2,lVar6,0);
LAB_04a47754:
    plVar7 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
    pplStack_18 = &plStack_10;
    uStack_20 = 0;
    plStack_10 = plVar7;
    if (plVar7 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a47cf8;
    }
    lVar9 = *plVar7;
    lVar6 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04a477c0;
        }
        uVar12 = uVar12 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02b7654c(plVar7,lVar6,0);
LAB_04a477c0:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    plVar7 = plStack_10;
    if ((uVar12 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      if (plStack_10 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a47cf8;
      }
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02b76218(lVar6);
      }
      lVar9 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04a47af0;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plVar7,lVar6,0);
LAB_04a47af0:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar3 = 1;
    }
    plVar7 = plStack_10;
    if (plStack_10 != (long *)0x0) {
      lVar6 = *plStack_10;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06312f78) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04a47b64;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plStack_10,*(long *)PTR_DAT_06312f78,0);
LAB_04a47b64:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
    uVar12 = 0;
  }
  else {
    uVar3 = FUN_0527e200(*(undefined4 *)(param_1 + 0x24),0);
    uVar12 = (ulong)uVar3;
    if ((int)uVar3 < 0x65) {
      uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
      if (uVar3 == 0) {
        __s = (void *)0x0;
      }
      else {
        __s = (void *)((long)&uStack_20 - (uVar12 + 0xf & 0xfffffffffffffff0));
      }
      memset(__s,0,uVar12);
      lVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06322bc0);
      FUN_0527e08c(lVar6,__s,uVar3,0);
    }
    else {
      uVar5 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,uVar12);
      lVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06322bc0);
      FUN_0527e0c4(lVar6,uVar5,uVar12,0);
    }
    if (param_2 == (long *)0x0) {
LAB_04a47be8:
      if (*(long *)(lVar1 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_04a47cf8;
    }
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02b76218(lVar9);
    }
    lVar10 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar9) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04a478e8;
        }
        uVar12 = uVar12 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02b7654c(param_2,lVar9,0);
LAB_04a478e8:
    plStack_10 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
    uVar13 = 0;
    uVar3 = 0;
    pplStack_18 = &plStack_10;
    uStack_20 = 0;
LAB_04a47908:
    do {
      plVar7 = plStack_10;
      if (plStack_10 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a47cf8;
      }
      lVar10 = *plStack_10;
      lVar9 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04a4795c;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plStack_10,lVar9,0);
LAB_04a4795c:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar7 = plStack_10;
      if ((uVar12 & 1) == 0) break;
      if (plStack_10 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_04a47cf8;
      }
      lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02b76218(lVar9);
      }
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04a479e0;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plVar7,lVar9,0);
LAB_04a479e0:
      auVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      iVar4 = FUN_04a47408(param_1,auVar14._0_8_,auVar14._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1b0));
      if (-1 < iVar4) {
        if (lVar6 == 0) {
          if (*(long *)(lVar1 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04a47cf8;
        }
        uVar12 = FUN_0527e17c(lVar6,iVar4,0);
        if ((uVar12 & 1) == 0) {
          FUN_0527e100(lVar6,iVar4,0);
          uVar13 = uVar13 + 1;
        }
        goto LAB_04a47908;
      }
      uVar3 = uVar3 + 1;
    } while ((param_3 & 1) == 0);
    plVar7 = plStack_10;
    if (plStack_10 != (long *)0x0) {
      lVar6 = *plStack_10;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06312f78) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04a47ab8;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plStack_10,*(long *)PTR_DAT_06312f78,0);
LAB_04a47ab8:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
    uVar12 = (ulong)uVar13;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_8) {
    return uVar12 | (ulong)uVar3 << 0x20;
  }
LAB_04a47cf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


