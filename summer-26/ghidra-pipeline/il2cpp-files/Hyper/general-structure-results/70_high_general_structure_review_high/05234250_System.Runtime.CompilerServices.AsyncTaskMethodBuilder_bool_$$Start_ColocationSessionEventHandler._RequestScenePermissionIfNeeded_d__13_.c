/*
FUNCTION_NAME: System.Runtime.CompilerServices.AsyncTaskMethodBuilder<bool>$$Start<ColocationSessionEventHandler.<RequestScenePermissionIfNeeded>d__13>
ENTRY_POINT: 05234250
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>__Start<ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>
               (long param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar13 [16];
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack000000000000005c;
  
  uVar4 = (**(code **)(param_1 + 0x138))();
  FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac377d8,uVar4,0);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar7 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac373e0) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_052342d8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_04980e68();
LAB_052342d8:
  uVar4 = (*(code *)*puVar5)();
  if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar9 = FUN_0a17b398(uVar4,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(unaff_x24 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_0a45f174(*(long *)(unaff_x24 + 0x40),uVar4,0);
  }
  FUN_08aac020(*(undefined8 *)(unaff_x24 + 0x58),0);
  iVar3 = 0;
  unaff_x19[0xc] = 0;
  do {
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar12 = *(long **)(*(long *)(unaff_x19 + 8) + 0x18);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0523472c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar12,*unaff_x26,0);
LAB_0523472c:
    lVar7 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    iVar2 = FUN_082baaa0(lVar7,*unaff_x25);
    if (iVar2 <= iVar3) {
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
LAB_05234770:
      plVar12 = *(long **)(unaff_x24 + 0x78);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar7 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_052347a8;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(unaff_x24 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(int *)(*(long *)(unaff_x24 + 0x50) + 0x18) <= (int)unaff_x19[0xc]) goto LAB_05234770;
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac379d0);
    FUN_08dbf2f0(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar12 = (long *)(lVar7 + 0x18);
    *plVar12 = *(long *)(unaff_x19 + 8);
    thunk_FUN_049ee3d8(plVar12);
    if (*(long *)(unaff_x24 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = FUN_06b7fba4(*(long *)(unaff_x24 + 0x50),unaff_x19[0xc],*unaff_x23);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = FUN_0a178414(lVar6,0);
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar12 = *(long **)(*plVar12 + 0x18);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = *plVar12;
    iVar3 = unaff_x19[0xc];
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05234500;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar12,*unaff_x26,0);
LAB_05234500:
    lVar8 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    iVar2 = FUN_082baaa0(lVar8,*unaff_x25);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_0a17ba14(lVar6,iVar3 < iVar2,0);
    *(undefined4 *)(lVar7 + 0x10) = unaff_x19[0xc];
    plVar12 = *(long **)(unaff_x24 + 0x80);
    uVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac37738);
    FUN_063d332c(uVar4,lVar7,*(undefined8 *)PTR_DAT_0ac379c8,0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *plVar12;
    uVar11 = *(undefined8 *)(unaff_x19 + 10);
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac37740) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_052345c4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac37740,0);
LAB_052345c4:
    auVar13 = (*(code *)*puVar5)(plVar12,uVar4,uVar11,puVar5[1]);
    if ((*(byte *)(*(long *)(*unaff_x28 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    thunk_FUN_049ee3d8();
    _in_stack_00000030 = auVar13;
    uVar9 = FUN_0523ffd8(&stack0x00000030,*unaff_x29);
    plVar12 = in_stack_00000030;
    if ((uVar9 & 1) == 0) {
      uStack000000000000005c = 0;
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000030;
      thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
      FUN_0524040c(unaff_x19 + 2,&stack0x00000030);
      return;
    }
    if (in_stack_00000030 != (long *)0x0) {
      uVar1 = in_stack_00000038._2_2_;
      lVar7 = *(long *)(*(long *)PTR_DAT_0ac377b0 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34(lVar7);
      }
      lVar6 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_052346b4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar12,lVar7,0);
LAB_052346b4:
      (*(code *)*puVar5)(plVar12,uVar1,puVar5[1]);
    }
    iVar3 = unaff_x19[0xc] + 1;
    unaff_x19[0xc] = iVar3;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *unaff_x26) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_05234800;
    }
  }
LAB_052347a8:
  puVar5 = (undefined8 *)FUN_04980e68(plVar12,*unaff_x26,0);
LAB_05234800:
  lVar7 = (*(code *)*puVar5)(plVar12,puVar5[1]);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar3 = FUN_082baaa0(lVar7,*unaff_x25);
  lVar7 = *(long *)(unaff_x24 + 0x50);
  while( true ) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(int *)(lVar7 + 0x18) <= iVar3) {
      FUN_08aac020(*(undefined8 *)(unaff_x24 + 0x60),0);
      *(undefined8 *)(unaff_x19 + 8) = 0;
      *unaff_x19 = 0xfffffffe;
      thunk_FUN_049ee3d8(unaff_x19 + 8,0);
      FUN_04a88bc0(unaff_x19 + 2,0);
      return;
    }
    lVar7 = FUN_06b7fba4(lVar7,iVar3,*unaff_x23);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = FUN_0a178414(lVar7,0);
    if (lVar7 == 0) break;
    FUN_0a17ba14(lVar7,0,0);
    lVar7 = *(long *)(unaff_x24 + 0x50);
    iVar3 = iVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


