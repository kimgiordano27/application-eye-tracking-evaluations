/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$CreateNewColocatedSpace
ENTRY_POINT: 04ac1c48
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04ac21f4) */
/* WARNING: Removing unreachable block (ram,0x04ac2208) */

void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__CreateNewColocatedSpace(void)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x21;
  undefined1 *__src;
  undefined1 *__s;
  long *unaff_x24;
  code *pcVar10;
  int iVar11;
  long unaff_x29;
  
  lVar4 = FUN_02b76218();
  uVar9 = unaff_x21 + 0xf & 0x1fffffff0;
  uVar1 = *(uint *)(**(long **)(lVar4 + 0xc0) + 0xfc);
  __src = &stack0x00000000 + -uVar9;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  __s = __src + -uVar9;
  memset(__s,0,unaff_x21);
  memset(unaff_x20,0,(ulong)uVar1);
  lVar8 = *(long *)(unaff_x19 + 0x20);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar4 = lVar8;
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_02b76218(lVar8);
    uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    FUN_02b76218(lVar4);
  }
  (*pcVar10)();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218(*(long *)(unaff_x19 + 0x20));
  }
  FUN_02766590();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  piVar5 = (int *)thunk_FUN_02b9b29c();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar2 = *(ushort *)(lVar4 + 0x135);
  if (1 < *piVar5) {
    if ((uVar2 & 1) == 0) {
      FUN_02b76218(lVar4);
    }
    piVar5 = (int *)thunk_FUN_02b9b29c();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    iVar11 = *piVar5;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    FUN_02b3c908(lVar4,iVar11 + -1);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(ushort *)(lVar4 + 0x135);
  }
  if ((uVar2 & 1) == 0) {
    FUN_02b76218(lVar4);
  }
  FUN_02761d30();
  if (unaff_x24 == (long *)0x0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    lVar8 = *unaff_x24;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04ac1e98;
        }
        uVar9 = uVar9 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02b7654c();
LAB_04ac1e98:
    plVar7 = (long *)(*(code *)*puVar6)();
    *(long **)(unaff_x29 + -0x18) = plVar7;
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x18;
    puVar3 = PTR_DAT_06312f90;
    if (plVar7 != (long *)0x0) {
      iVar11 = 0;
      do {
        lVar4 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_04ac1f10;
            }
            uVar9 = uVar9 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)puVar3,0);
LAB_04ac1f10:
        uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar7 = *(long **)(unaff_x29 + -0x18);
          if (plVar7 == (long *)0x0) goto LAB_04ac215c;
          lVar4 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar9 == 0) goto LAB_04ac2134;
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_04ac211c;
        }
        plVar7 = *(long **)(unaff_x29 + -0x18);
        if (plVar7 == (long *)0x0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04ac227c;
        }
        lVar4 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218(lVar4);
        }
        lVar8 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar4) {
              lVar4 = lVar8 + (long)*piVar5 * 0x10 + 0x138;
              goto LAB_04ac1fa4;
            }
            uVar9 = uVar9 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar9 != 0);
        }
        lVar4 = FUN_02b7654c(plVar7,lVar4,0);
LAB_04ac1fa4:
        lVar4 = *(long *)(lVar4 + 8);
        *(undefined1 **)(unaff_x29 + -0x10) = __src;
        (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar7,unaff_x29 + -0x10,__src)
        ;
        memcpy(__s,__src,unaff_x21);
        uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
        if (iVar11 != 0) {
          if ((uVar2 & 1) == 0) {
            FUN_02b76218();
          }
          puVar6 = (undefined8 *)thunk_FUN_02b9b29c();
          plVar7 = (long *)*puVar6;
          memcpy(__src,__s,unaff_x21);
          if (plVar7 == (long *)0x0) {
            if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
          }
          else {
            uVar1 = iVar11 - 1;
            if (uVar1 < *(uint *)(plVar7 + 3)) {
              memcpy((void *)((long)plVar7 +
                             (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20),__s,
                     unaff_x21);
              lVar4 = *(long *)(unaff_x19 + 0x20);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_02b76218();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_02b76218();
              }
              if (uVar1 < *(uint *)(plVar7 + 3)) {
                FUN_02b3c7cc(lVar4,(long)plVar7 +
                                   (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20,__src
                            );
                goto LAB_04ac20c8;
              }
            }
            if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
          }
          goto LAB_04ac227c;
        }
        if ((uVar2 & 1) == 0) {
          FUN_02b76218();
        }
        FUN_02b3c844();
LAB_04ac20c8:
        plVar7 = *(long **)(unaff_x29 + -0x18);
        iVar11 = iVar11 + 1;
      } while (plVar7 != (long *)0x0);
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  goto LAB_04ac227c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar5 = piVar5 + 4;
    if (uVar9 == 0) break;
LAB_04ac211c:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04ac2150;
    }
  }
LAB_04ac2134:
  puVar6 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_06312f78,0);
LAB_04ac2150:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_04ac215c:
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04ac227c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


