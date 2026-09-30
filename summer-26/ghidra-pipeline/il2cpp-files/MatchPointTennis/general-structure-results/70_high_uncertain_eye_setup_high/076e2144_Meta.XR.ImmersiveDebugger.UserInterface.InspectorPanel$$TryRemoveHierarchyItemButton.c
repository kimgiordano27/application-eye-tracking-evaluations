/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$TryRemoveHierarchyItemButton
ENTRY_POINT: 076e2144
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076e1f5c) */
/* WARNING: Removing unreachable block (ram,0x076e1f78) */
/* WARNING: Removing unreachable block (ram,0x076e1f80) */
/* WARNING: Removing unreachable block (ram,0x076e1f8c) */
/* WARNING: Removing unreachable block (ram,0x076e1f98) */
/* WARNING: Removing unreachable block (ram,0x076e1fa0) */
/* WARNING: Removing unreachable block (ram,0x076e1fac) */
/* WARNING: Removing unreachable block (ram,0x076e1fd4) */
/* WARNING: Removing unreachable block (ram,0x076e2088) */
/* WARNING: Removing unreachable block (ram,0x076e20b4) */
/* WARNING: Removing unreachable block (ram,0x076e20c4) */
/* WARNING: Removing unreachable block (ram,0x076e20c8) */
/* WARNING: Removing unreachable block (ram,0x076e20d4) */
/* WARNING: Removing unreachable block (ram,0x076e20e0) */
/* WARNING: Removing unreachable block (ram,0x076e20e8) */
/* WARNING: Removing unreachable block (ram,0x076e20f4) */
/* WARNING: Removing unreachable block (ram,0x076e211c) */
/* WARNING: Removing unreachable block (ram,0x076e21d4) */

void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__TryRemoveHierarchyItemButton(void)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 uVar11;
  uint uVar12;
  long unaff_x23;
  long *plVar13;
  int unaff_w24;
  uint uVar14;
  long *unaff_x27;
  long unaff_x29;
  ulong in_stack_00000008;
  
  while( true ) {
    lVar9 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar5 = *(uint *)(unaff_x22 + 0x18);
    if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_076e21a0;
    *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
    *(int *)(lVar9 + (long)(int)uVar5 * 4 + 0x20) = unaff_w24;
    while( true ) {
      *unaff_x19 = *unaff_x19 + 1;
      do {
        unaff_w24 = unaff_w24 + 1;
        if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
          uVar7 = FUN_078b4450(*unaff_x21,0);
          if ((uVar7 & 1) != 0) {
            return;
          }
          uVar11 = *unaff_x21;
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar5 = FUN_076e00e0(uVar11);
          lVar9 = *unaff_x27;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_044a54b4(lVar9);
            lVar9 = *unaff_x27;
          }
          plVar10 = *(long **)(lVar9 + 0xb8);
          if (*plVar10 == 0) goto LAB_076e2640;
          iVar6 = *(int *)(*plVar10 + 0x18);
          uVar5 = uVar5 ^ (int)uVar5 >> 0x1f;
          if ((in_stack_00000008 & 0x100000000) == 0) {
            if ((int)uVar5 < iVar6) {
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_044a54b4(lVar9);
                plVar10 = *(long **)(*unaff_x27 + 0xb8);
              }
              puVar2 = PTR_DAT_09f2ef68;
              if (*plVar10 == 0) goto LAB_076e2640;
              plVar13 = (long *)plVar10[6];
              lVar9 = FUN_05badb74(*plVar10,uVar5,*(undefined8 *)PTR_DAT_09f2ef68);
              if ((lVar9 == 0) || (plVar13 == (long *)0x0)) goto LAB_076e2640;
              uVar7 = (**(code **)(*plVar13 + 0x1c8))
                                (plVar13,*(undefined8 *)(lVar9 + 0x28),*unaff_x21,3,
                                 *(undefined8 *)(*plVar13 + 0x1d0));
              uVar14 = uVar5;
              if ((uVar7 & 1) != 0) goto LAB_076e242c;
            }
          }
          else if ((int)uVar5 < iVar6) {
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_044a54b4(lVar9);
              plVar10 = *(long **)(*unaff_x27 + 0xb8);
            }
            puVar2 = PTR_DAT_09f2ef68;
            if (*plVar10 == 0) goto LAB_076e2640;
            plVar13 = (long *)plVar10[6];
            lVar9 = FUN_05badb74(*plVar10,uVar5,*(undefined8 *)PTR_DAT_09f2ef68);
            if ((lVar9 == 0) || (plVar13 == (long *)0x0)) goto LAB_076e2640;
            iVar6 = (**(code **)(*plVar13 + 0x1a8))
                              (plVar13,*(undefined8 *)(lVar9 + 0x28),*unaff_x21,3,
                               *(undefined8 *)(*plVar13 + 0x1b0));
            uVar14 = uVar5;
            if (iVar6 == 0) goto LAB_076e22bc;
          }
          uVar14 = 0xffffffff;
          uVar12 = uVar5;
          puVar1 = PTR_DAT_09f2ef68;
          goto joined_r0x076e2530;
        }
        uVar4 = FUN_078aee34();
        if (*(int *)(*(long *)(unaff_x29 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)(unaff_x29 + 0x88));
        }
        uVar7 = FUN_079a0ce0(uVar4,0);
      } while ((uVar7 & 1) != 0);
      uVar4 = FUN_078aee34();
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*unaff_x27);
      }
      iVar6 = FUN_076e1bd4(uVar4);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*unaff_x27);
      }
      if (iVar6 < 0) break;
      unaff_w24 = FUN_076e1ca8();
      if ((unaff_w24 < *(int *)(unaff_x23 + 0x10) + -1) && (sVar3 = FUN_078aee34(), sVar3 == 0x2c))
      {
        unaff_w24 = unaff_w24 + 1;
      }
      if (unaff_x22 == 0) goto LAB_076e2640;
      lVar9 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_076e2640;
      uVar5 = *(uint *)(unaff_x22 + 0x18);
      if (uVar5 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
        *(int *)(lVar9 + (long)(int)uVar5 * 4 + 0x20) = unaff_w24 + 1;
      }
      else {
LAB_076e21a0:
        FUN_05b0481c();
      }
    }
    unaff_w24 = FUN_076e1de0();
    if (unaff_x22 == 0) break;
  }
LAB_076e2640:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
  while( true ) {
    lVar9 = *unaff_x27;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar9 = *unaff_x27;
    }
    lVar8 = **(long **)(lVar9 + 0xb8);
    if (lVar8 == 0) goto LAB_076e2640;
    plVar10 = (long *)(*(long **)(lVar9 + 0xb8))[6];
    lVar9 = FUN_05badb74(lVar8,uVar12 - 1,*(undefined8 *)puVar2);
    if ((lVar9 == 0) || (plVar10 == (long *)0x0)) goto LAB_076e2640;
    uVar7 = (**(code **)(*plVar10 + 0x1c8))
                      (plVar10,*(undefined8 *)(lVar9 + 0x28),*unaff_x21,3,
                       *(undefined8 *)(*plVar10 + 0x1d0));
    uVar14 = uVar12 - 1;
    if ((uVar7 & 1) == 0) break;
LAB_076e242c:
    uVar12 = uVar14;
    if ((int)uVar12 < 1) break;
  }
  do {
    uVar14 = uVar5;
    lVar9 = *unaff_x27;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar9 = *unaff_x27;
    }
    plVar10 = *(long **)(lVar9 + 0xb8);
    if (*plVar10 == 0) goto LAB_076e2640;
    puVar1 = PTR_DAT_09f2ef68;
    if (*(int *)(*plVar10 + 0x18) + -1 <= (int)uVar14) break;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      plVar10 = *(long **)(*unaff_x27 + 0xb8);
    }
    if (*plVar10 == 0) goto LAB_076e2640;
    plVar13 = (long *)plVar10[6];
    lVar9 = FUN_05badb74(*plVar10,uVar14 + 1,*(undefined8 *)puVar2);
    if ((lVar9 == 0) || (plVar13 == (long *)0x0)) goto LAB_076e2640;
    uVar7 = (**(code **)(*plVar13 + 0x1c8))
                      (plVar13,*(undefined8 *)(lVar9 + 0x28),*unaff_x21,3,
                       *(undefined8 *)(*plVar13 + 0x1d0));
    uVar5 = uVar14 + 1;
    puVar1 = PTR_DAT_09f2ef68;
  } while ((uVar7 & 1) != 0);
  goto joined_r0x076e2530;
  while( true ) {
    lVar9 = *unaff_x27;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar9 = *unaff_x27;
    }
    lVar8 = **(long **)(lVar9 + 0xb8);
    if (lVar8 == 0) goto LAB_076e2640;
    plVar10 = (long *)(*(long **)(lVar9 + 0xb8))[6];
    lVar9 = FUN_05badb74(lVar8,uVar12 - 1,*(undefined8 *)puVar2);
    if ((lVar9 == 0) || (plVar10 == (long *)0x0)) goto LAB_076e2640;
    iVar6 = (**(code **)(*plVar10 + 0x1a8))
                      (plVar10,*(undefined8 *)(lVar9 + 0x28),*unaff_x21,3,
                       *(undefined8 *)(*plVar10 + 0x1b0));
    uVar14 = uVar12 - 1;
    if (iVar6 != 0) break;
LAB_076e22bc:
    uVar12 = uVar14;
    if ((int)uVar12 < 1) break;
  }
  do {
    uVar14 = uVar5;
    lVar9 = *unaff_x27;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar9 = *unaff_x27;
    }
    plVar10 = *(long **)(lVar9 + 0xb8);
    if (*plVar10 == 0) goto LAB_076e2640;
    puVar1 = PTR_DAT_09f2ef68;
    if (*(int *)(*plVar10 + 0x18) + -1 <= (int)uVar14) break;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      plVar10 = *(long **)(*unaff_x27 + 0xb8);
    }
    if (*plVar10 == 0) goto LAB_076e2640;
    plVar13 = (long *)plVar10[6];
    lVar9 = FUN_05badb74(*plVar10,uVar14 + 1,*(undefined8 *)puVar2);
    if ((lVar9 == 0) || (plVar13 == (long *)0x0)) goto LAB_076e2640;
    iVar6 = (**(code **)(*plVar13 + 0x1a8))
                      (plVar13,*(undefined8 *)(lVar9 + 0x28),*unaff_x21,3,
                       *(undefined8 *)(*plVar13 + 0x1b0));
    uVar5 = uVar14 + 1;
    puVar1 = PTR_DAT_09f2ef68;
  } while (iVar6 == 0);
joined_r0x076e2530:
  do {
    puVar2 = PTR_DAT_09f2ef68;
    if ((int)uVar14 < (int)uVar12) {
      PTR_DAT_09f2ef68 = puVar1;
      return;
    }
    lVar9 = *unaff_x27;
    PTR_DAT_09f2ef68 = puVar1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar9 = *unaff_x27;
    }
    if (((**(long **)(lVar9 + 0xb8) == 0) ||
        (lVar9 = FUN_05badb74(**(long **)(lVar9 + 0xb8),uVar12,*(undefined8 *)puVar2), lVar9 == 0))
       || (*(long *)(lVar9 + 0x18) == 0)) goto LAB_076e2640;
    if (*unaff_x19 <= *(int *)(*(long *)(lVar9 + 0x18) + 0x18)) {
      lVar9 = *unaff_x27;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar9 = *unaff_x27;
      }
      if ((**(long **)(lVar9 + 0xb8) == 0) ||
         (uVar11 = FUN_05badb74(**(long **)(lVar9 + 0xb8),uVar12,*(undefined8 *)puVar2),
         unaff_x20 == 0)) goto LAB_076e2640;
      lVar9 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_076e2640;
      uVar5 = *(uint *)(unaff_x20 + 0x18);
      if (uVar5 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar5 * 8 + 0x20) = uVar11;
        thunk_FUN_044bb4b4();
      }
      else {
        FUN_05bade44();
      }
    }
    uVar12 = uVar12 + 1;
    puVar1 = PTR_DAT_09f2ef68;
    PTR_DAT_09f2ef68 = puVar2;
  } while( true );
}


