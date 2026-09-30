/*
FUNCTION_NAME: FUN_0855f020
ENTRY_POINT: 0855f020
PROGRAM: cac-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_0855f020(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *in_x10;
  int *piVar16;
  long *unaff_x20;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *unaff_x29;
  
  uVar15 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *in_x10) {
        puVar7 = (undefined8 *)(param_1 + (long)*piVar16 * 0x10 + 0x138);
        goto FUN_0855f068;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_03f4b594();
FUN_0855f068:
  (*(code *)*puVar7)();
  if (unaff_x29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  (**(code **)(*unaff_x29 + 0x188))();
  puVar3 = PTR_DAT_0918af38;
  plVar17 = (long *)unaff_x20[4];
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar13 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0918af38) {
        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 3) * 0x10 + 0x138);
        goto LAB_0855f0f0;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_03f4b594(plVar17,*(long *)PTR_DAT_0918af38,3);
LAB_0855f0f0:
  plVar17 = (long *)(*(code *)*puVar7)(plVar17,puVar7[1]);
  puVar4 = PTR_DAT_091948f8;
  if (plVar17 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0918af30 + 0x130);
    if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0918af30))
    {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac(plVar17);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_091948f8 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  FUN_0841f7f0();
  plVar8 = (long *)FUN_0855fe3c();
  lVar13 = unaff_x20[2];
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  plVar18 = (long *)unaff_x20[4];
  uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar13 = *plVar18;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
        goto LAB_0855f1f8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_03f4b594(plVar18,*(long *)puVar3,6);
LAB_0855f1f8:
  (*(code *)*puVar7)(plVar18,plVar17,uVar9,puVar7[1]);
  plVar18 = unaff_x29 + 4;
  *plVar18 = plVar8[4];
  thunk_FUN_03f86000(plVar18);
  puVar5 = PTR_DAT_09194958;
  puVar2 = PTR_DAT_0918af08;
  do {
    plVar8 = (long *)unaff_x20[3];
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar14 = *plVar8;
    lVar13 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0855f28c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f4b594(plVar8,lVar13,1);
LAB_0855f28c:
    iVar6 = (*(code *)*puVar7)(plVar8,1,puVar7[1]);
    plVar8 = (long *)unaff_x20[3];
    if (iVar6 - 0x2bU < 0xfffffffd) {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 == 0) goto LAB_0855f8d4;
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar14 = *plVar8;
    lVar13 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0855f300;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f4b594(plVar8,lVar13,1);
LAB_0855f300:
    iVar6 = (*(code *)*puVar7)(plVar8,1,puVar7[1]);
    lVar13 = unaff_x20[3];
    if (iVar6 == 0x28) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar13 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar13 == 0) {
        lVar14 = 0;
      }
      else {
        uVar9 = *(undefined8 *)PTR_DAT_0918af18;
        lVar14 = thunk_FUN_03f4e590(lVar13,uVar9);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(lVar13,uVar9);
        }
      }
      plVar8 = (long *)unaff_x20[4];
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0855f5dc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f4b594(plVar8,*(long *)puVar3,0);
LAB_0855f5dc:
      plVar8 = (long *)(*(code *)*puVar7)(plVar8,lVar14,puVar7[1]);
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0918af30 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0918af30
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(plVar8);
        }
      }
      plVar19 = (long *)unaff_x20[4];
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
            goto LAB_0855f74c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f4b594(plVar19,*(long *)puVar3,6);
LAB_0855f74c:
      (*(code *)*puVar7)(plVar19,plVar17,plVar8,puVar7[1]);
      uVar9 = 0xc;
    }
    else if (iVar6 == 0x29) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar13 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar13 == 0) {
        lVar14 = 0;
      }
      else {
        uVar9 = *(undefined8 *)PTR_DAT_0918af18;
        lVar14 = thunk_FUN_03f4e590(lVar13,uVar9);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(lVar13,uVar9);
        }
      }
      plVar8 = (long *)unaff_x20[4];
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0855f53c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f4b594(plVar8,*(long *)puVar3,0);
LAB_0855f53c:
      plVar8 = (long *)(*(code *)*puVar7)(plVar8,lVar14,puVar7[1]);
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0918af30 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0918af30
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(plVar8);
        }
      }
      plVar19 = (long *)unaff_x20[4];
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
            goto 
            UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000C6F_PostfixBurstDelegate__EndInvoke
            ;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f4b594(plVar19,*(long *)puVar3,6);

      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000C6F_PostfixBurstDelegate__EndInvoke
      :
      (*(code *)*puVar7)(plVar19,plVar17,plVar8,puVar7[1]);
      uVar9 = 0xb;
    }
    else {
      if (iVar6 != 0x2a) {
        thunk_FUN_03f786f8(PTR_DAT_0918af90);
        uVar9 = thunk_FUN_03f4e68c();
        uVar10 = thunk_FUN_03f786f8(PTR_DAT_0910b580);
        FUN_0841bf14(uVar9,uVar10,0xf,0,lVar13,0);
        uVar10 = thunk_FUN_03f786f8(PTR_DAT_09194bc0);
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar9,uVar10);
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar13 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar13 == 0) {
        lVar14 = 0;
      }
      else {
        uVar9 = *(undefined8 *)PTR_DAT_0918af18;
        lVar14 = thunk_FUN_03f4e590(lVar13,uVar9);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(lVar13,uVar9);
        }
      }
      plVar8 = (long *)unaff_x20[4];
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0855f67c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f4b594(plVar8,*(long *)puVar3,0);
LAB_0855f67c:
      plVar8 = (long *)(*(code *)*puVar7)(plVar8,lVar14,puVar7[1]);
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0918af30 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0918af30
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(plVar8);
        }
      }
      plVar19 = (long *)unaff_x20[4];
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
            goto LAB_0855f778;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f4b594(plVar19,*(long *)puVar3,6);
LAB_0855f778:
      (*(code *)*puVar7)(plVar19,plVar17,plVar8,puVar7[1]);
      uVar9 = 10;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    FUN_0841f7f0();
    plVar8 = (long *)FUN_0855fe3c();
    lVar13 = unaff_x20[2];
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    plVar19 = (long *)unaff_x20[4];
    uVar10 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar13 = *plVar19;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 6) * 0x10 + 0x138);
          goto FUN_0855f848;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f4b594(plVar19,*(long *)puVar3,6);
FUN_0855f848:
    (*(code *)*puVar7)(plVar19,plVar17,uVar10,puVar7[1]);
    lVar14 = *plVar18;
    lVar20 = plVar8[4];
    lVar13 = thunk_FUN_03f4e68c(*(undefined8 *)puVar5);
    FUN_0854b434(lVar13,uVar9,lVar14,lVar20);
    *plVar18 = lVar13;
    thunk_FUN_03f86000(plVar18,lVar13);
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0918af10) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0855f8f0;
    }
  }
LAB_0855f8d4:
  puVar7 = (undefined8 *)FUN_03f4b594(plVar8,*(long *)PTR_DAT_0918af10,0);
LAB_0855f8f0:
  uVar9 = (*(code *)*puVar7)(plVar8,0xffffffff,puVar7[1]);
  (**(code **)(*unaff_x29 + 0x1a8))(unaff_x29,uVar9,*(undefined8 *)(*unaff_x29 + 0x1b0));
  plVar8 = (long *)unaff_x20[4];
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar13 = *plVar8;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 8) * 0x10 + 0x138);
        goto LAB_0855f96c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_03f4b594(plVar8,*(long *)puVar3,8);
LAB_0855f96c:
  plVar17 = (long *)(*(code *)*puVar7)(plVar8,plVar17,puVar7[1]);
  if (plVar17 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0918af30 + 0x130);
    if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0918af30))
    {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac(plVar17);
    }
  }
  (**(code **)(*unaff_x29 + 0x1c8))(unaff_x29,plVar17,*(undefined8 *)(*unaff_x29 + 0x1d0));
  plVar17 = (long *)unaff_x20[4];
  uVar9 = (**(code **)(*unaff_x29 + 0x1b8))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x1c0));
  lVar13 = (**(code **)(*unaff_x29 + 0x178))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x180));
  lVar14 = (**(code **)(*unaff_x29 + 0x198))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x1a0));
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar20 = *(long *)puVar3;
  uVar10 = *(undefined8 *)PTR_DAT_0918af18;
  if (lVar13 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = thunk_FUN_03f4e590(lVar13,uVar10);
    if (lVar11 == 0) goto LAB_0855fa60;
    uVar10 = *(undefined8 *)PTR_DAT_0918af18;
  }
  if (lVar14 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = thunk_FUN_03f4e590(lVar14,uVar10);
    lVar13 = lVar14;
    if (lVar12 == 0) {
LAB_0855fa60:
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac(lVar13,uVar10);
    }
  }
  lVar13 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == lVar20) {
        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0x13) * 0x10 + 0x138);
        goto LAB_0855fac8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar7 = (undefined8 *)FUN_03f4b594(plVar17,lVar20,0x13);
LAB_0855fac8:
  (*(code *)*puVar7)(plVar17,uVar9,lVar11,lVar12,puVar7[1]);
  return unaff_x29;
}


