/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$AlignPlayerToAnchor
ENTRY_POINT: 04ac1cf0
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

void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__AlignPlayerToAnchor
               (long param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  code *unaff_x25;
  int iVar10;
  long unaff_x29;
  
  (*unaff_x25)(param_2,*(undefined8 *)(param_1 + 0x20));
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218(*(long *)(unaff_x19 + 0x20));
  }
  FUN_02766590();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  piVar4 = (int *)thunk_FUN_02b9b29c();
  lVar7 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  if (1 < *piVar4) {
    if ((uVar1 & 1) == 0) {
      FUN_02b76218(lVar7);
    }
    piVar4 = (int *)thunk_FUN_02b9b29c();
    lVar7 = *(long *)(unaff_x19 + 0x20);
    iVar10 = *piVar4;
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218();
    }
    FUN_02b3c908(lVar7,iVar10 + -1);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_02b76218(lVar7);
  }
  FUN_02761d30();
  if (unaff_x24 == (long *)0x0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    lVar8 = *unaff_x24;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04ac1e98;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c();
LAB_04ac1e98:
    plVar6 = (long *)(*(code *)*puVar5)();
    *(long **)(unaff_x29 + -0x18) = plVar6;
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x18;
    puVar3 = PTR_DAT_06312f90;
    if (plVar6 != (long *)0x0) {
      iVar10 = 0;
      do {
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_04ac1f10;
            }
            uVar9 = uVar9 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)puVar3,0);
LAB_04ac1f10:
        uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          plVar6 = *(long **)(unaff_x29 + -0x18);
          if (plVar6 == (long *)0x0) goto LAB_04ac215c;
          lVar7 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_04ac2134;
          piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_04ac211c;
        }
        plVar6 = *(long **)(unaff_x29 + -0x18);
        if (plVar6 == (long *)0x0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_04ac227c;
        }
        lVar7 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02b76218();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02b76218(lVar7);
        }
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == lVar7) {
              lVar7 = lVar8 + (long)*piVar4 * 0x10 + 0x138;
              goto LAB_04ac1fa4;
            }
            uVar9 = uVar9 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar9 != 0);
        }
        lVar7 = FUN_02b7654c(plVar6,lVar7,0);
LAB_04ac1fa4:
        lVar7 = *(long *)(lVar7 + 8);
        *(void **)(unaff_x29 + -0x10) = unaff_x22;
        (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar6,unaff_x29 + -0x10);
        memcpy(unaff_x23,unaff_x22,unaff_x21);
        uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
        if (iVar10 != 0) {
          if ((uVar1 & 1) == 0) {
            FUN_02b76218();
          }
          puVar5 = (undefined8 *)thunk_FUN_02b9b29c();
          plVar6 = (long *)*puVar5;
          memcpy(unaff_x22,unaff_x23,unaff_x21);
          if (plVar6 == (long *)0x0) {
            if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
          }
          else {
            uVar2 = iVar10 - 1;
            if (uVar2 < *(uint *)(plVar6 + 3)) {
              memcpy((void *)((long)plVar6 +
                             (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar2 + 0x20),unaff_x23,
                     unaff_x21);
              lVar7 = *(long *)(unaff_x19 + 0x20);
              if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_02b76218();
              }
              lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_02b76218();
              }
              if (uVar2 < *(uint *)(plVar6 + 3)) {
                FUN_02b3c7cc(lVar7,(long)plVar6 +
                                   (ulong)*(uint *)(*plVar6 + 0x104) * (long)(int)uVar2 + 0x20);
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
        if ((uVar1 & 1) == 0) {
          FUN_02b76218();
        }
        FUN_02b3c844();
LAB_04ac20c8:
        plVar6 = *(long **)(unaff_x29 + -0x18);
        iVar10 = iVar10 + 1;
      } while (plVar6 != (long *)0x0);
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  goto LAB_04ac227c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar4 = piVar4 + 4;
    if (uVar9 == 0) break;
LAB_04ac211c:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_04ac2150;
    }
  }
LAB_04ac2134:
  puVar5 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06312f78,0);
LAB_04ac2150:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_04ac215c:
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04ac227c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


