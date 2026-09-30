/*
FUNCTION_NAME: FUN_0855f848
ENTRY_POINT: 0855f848
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


long * FUN_0855f848(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  undefined4 unaff_w23;
  long *plVar10;
  long *unaff_x24;
  long lVar11;
  long *unaff_x25;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000008;
  
LAB_0855f234:
  do {
    (*(code *)*param_1)(unaff_x25);
    uVar12 = *unaff_x22;
    lVar13 = unaff_x24[4];
    uVar5 = thunk_FUN_03f4e68c(*unaff_x29);
    FUN_0854b434(uVar5,unaff_w23,uVar12,lVar13);
    *unaff_x22 = uVar5;
    thunk_FUN_03f86000();
    plVar10 = (long *)unaff_x20[3];
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar13 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar13 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0855f28c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f4b594(plVar10,*unaff_x28,1);
LAB_0855f28c:
    iVar2 = (*(code *)*puVar3)(plVar10,1,puVar3[1]);
    plVar10 = (long *)unaff_x20[3];
    if (iVar2 - 0x2bU < 0xfffffffd) {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 == 0) goto LAB_0855f8d4;
      piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar13 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar13 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0855f300;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f4b594(plVar10,*unaff_x28,1);
LAB_0855f300:
    iVar2 = (*(code *)*puVar3)(plVar10,1,puVar3[1]);
    lVar13 = unaff_x20[3];
    if (iVar2 == 0x28) {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar13 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar13 == 0) {
        lVar4 = 0;
      }
      else {
        uVar5 = *(undefined8 *)PTR_DAT_0918af18;
        lVar4 = thunk_FUN_03f4e590(lVar13,uVar5);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(lVar13,uVar5);
        }
      }
      plVar10 = (long *)unaff_x20[4];
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0855f5dc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f4b594(plVar10,*unaff_x27,0);
LAB_0855f5dc:
      plVar10 = (long *)(*(code *)*puVar3)(plVar10,lVar4,puVar3[1]);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0918af30 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_0918af30)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(plVar10);
        }
      }
      plVar10 = (long *)unaff_x20[4];
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar13 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto LAB_0855f74c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f4b594(plVar10,*unaff_x27,6);
LAB_0855f74c:
      (*(code *)*puVar3)(plVar10);
      unaff_w23 = 0xc;
    }
    else if (iVar2 == 0x29) {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar13 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar13 == 0) {
        lVar4 = 0;
      }
      else {
        uVar5 = *(undefined8 *)PTR_DAT_0918af18;
        lVar4 = thunk_FUN_03f4e590(lVar13,uVar5);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(lVar13,uVar5);
        }
      }
      plVar10 = (long *)unaff_x20[4];
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0855f53c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f4b594(plVar10,*unaff_x27,0);
LAB_0855f53c:
      plVar10 = (long *)(*(code *)*puVar3)(plVar10,lVar4,puVar3[1]);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0918af30 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_0918af30)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(plVar10);
        }
      }
      plVar10 = (long *)unaff_x20[4];
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar13 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto 
            UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000C6F_PostfixBurstDelegate__EndInvoke
            ;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f4b594(plVar10,*unaff_x27,6);

      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000C6F_PostfixBurstDelegate__EndInvoke
      :
      (*(code *)*puVar3)(plVar10);
      unaff_w23 = 0xb;
    }
    else {
      if (iVar2 != 0x2a) {
        thunk_FUN_03f786f8(PTR_DAT_0918af90);
        uVar5 = thunk_FUN_03f4e68c();
        uVar12 = thunk_FUN_03f786f8(PTR_DAT_0910b580);
        FUN_0841bf14(uVar5,uVar12,0xf,0,lVar13,0);
        uVar12 = thunk_FUN_03f786f8(PTR_DAT_09194bc0);
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar5,uVar12);
      }
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      lVar13 = (**(code **)(*unaff_x20 + 0x1b8))();
      if (lVar13 == 0) {
        lVar4 = 0;
      }
      else {
        uVar5 = *(undefined8 *)PTR_DAT_0918af18;
        lVar4 = thunk_FUN_03f4e590(lVar13,uVar5);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(lVar13,uVar5);
        }
      }
      plVar10 = (long *)unaff_x20[4];
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0855f67c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f4b594(plVar10,*unaff_x27,0);
LAB_0855f67c:
      plVar10 = (long *)(*(code *)*puVar3)(plVar10,lVar4,puVar3[1]);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0918af30 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_0918af30)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f139ac(plVar10);
        }
      }
      plVar10 = (long *)unaff_x20[4];
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar13 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar13 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto LAB_0855f778;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f4b594(plVar10,*unaff_x27,6);
LAB_0855f778:
      (*(code *)*puVar3)(plVar10);
      unaff_w23 = 10;
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    FUN_0841f7f0();
    unaff_x24 = (long *)FUN_0855fe3c();
    lVar13 = unaff_x20[2];
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    unaff_x25 = (long *)unaff_x20[4];
    (**(code **)(*unaff_x24 + 0x1b8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x1c0));
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar13 = *unaff_x25;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          param_1 = (undefined8 *)(lVar13 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_0855f234;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    param_1 = (undefined8 *)FUN_03f4b594(unaff_x25,*unaff_x27,6);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0918af10) {
      puVar3 = (undefined8 *)(lVar13 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0855f8f0;
    }
  }
LAB_0855f8d4:
  puVar3 = (undefined8 *)FUN_03f4b594(plVar10,*(long *)PTR_DAT_0918af10,0);
LAB_0855f8f0:
  uVar5 = (*(code *)*puVar3)(plVar10,0xffffffff,puVar3[1]);
  (**(code **)(*in_stack_00000008 + 0x1a8))
            (in_stack_00000008,uVar5,*(undefined8 *)(*in_stack_00000008 + 0x1b0));
  plVar10 = (long *)unaff_x20[4];
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar13 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x27) {
        puVar3 = (undefined8 *)(lVar13 + (long)(*piVar9 + 8) * 0x10 + 0x138);
        goto LAB_0855f96c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f4b594(plVar10,*unaff_x27,8);
LAB_0855f96c:
  plVar10 = (long *)(*(code *)*puVar3)(plVar10);
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0918af30 + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0918af30))
    {
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac(plVar10);
    }
  }
  (**(code **)(*in_stack_00000008 + 0x1c8))
            (in_stack_00000008,plVar10,*(undefined8 *)(*in_stack_00000008 + 0x1d0));
  plVar10 = (long *)unaff_x20[4];
  uVar5 = (**(code **)(*in_stack_00000008 + 0x1b8))
                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1c0));
  lVar13 = (**(code **)(*in_stack_00000008 + 0x178))
                     (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x180));
  lVar4 = (**(code **)(*in_stack_00000008 + 0x198))
                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1a0));
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar11 = *unaff_x27;
  uVar12 = *(undefined8 *)PTR_DAT_0918af18;
  if (lVar13 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = thunk_FUN_03f4e590(lVar13,uVar12);
    if (lVar6 == 0) goto LAB_0855fa60;
    uVar12 = *(undefined8 *)PTR_DAT_0918af18;
  }
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = thunk_FUN_03f4e590(lVar4,uVar12);
    lVar13 = lVar4;
    if (lVar7 == 0) {
LAB_0855fa60:
                    /* WARNING: Subroutine does not return */
      FUN_03f139ac(lVar13,uVar12);
    }
  }
  lVar13 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar11) {
        puVar3 = (undefined8 *)(lVar13 + (long)(*piVar9 + 0x13) * 0x10 + 0x138);
        goto LAB_0855fac8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f4b594(plVar10,lVar11,0x13);
LAB_0855fac8:
  (*(code *)*puVar3)(plVar10,uVar5,lVar6,lVar7,puVar3[1]);
  return in_stack_00000008;
}


