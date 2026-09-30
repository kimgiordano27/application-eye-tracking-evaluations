/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplDestroyMarkerHandle
ENTRY_POINT: 05162b08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05162f4c) */
/* WARNING: Removing unreachable block (ram,0x05162f50) */
/* WARNING: Removing unreachable block (ram,0x05162ff8) */

void OVRPlugin_OVRP_1_84_0__ovrp_QplDestroyMarkerHandle(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long lVar10;
  long unaff_x22;
  undefined8 *puVar11;
  long unaff_x23;
  undefined8 *puVar12;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *puVar13;
  long unaff_x26;
  undefined8 *puVar14;
  long unaff_x27;
  undefined8 *puVar15;
  long unaff_x28;
  undefined8 *puVar16;
  long unaff_x29;
  long *plVar17;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  long *plStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  long *plStack0000000000000050;
  
  plVar17 = *(long **)(unaff_x29 + 0x3b8);
  puVar11 = *(undefined8 **)(unaff_x22 + 0x528);
  puVar13 = *(undefined8 **)(unaff_x25 + 0x520);
  puVar14 = *(undefined8 **)(unaff_x26 + 0x510);
  puVar15 = *(undefined8 **)(unaff_x27 + 0xc98);
  puVar16 = *(undefined8 **)(unaff_x28 + 0xca0);
  puVar12 = *(undefined8 **)(unaff_x23 + 0x508);
  lVar10 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  plStack0000000000000050 = (long *)0x0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  plStack0000000000000030 = (long *)0x0;
  while (unaff_x20 != (long *)0x0) {
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_05162b8c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(unaff_x20,*unaff_x24,4);
LAB_05162b8c:
    unaff_x20 = (long *)(*(code *)*puVar3)(unaff_x20,puVar3[1]);
    if (unaff_x20 == (long *)0x0) {
      if (lVar10 != 0) {
        FUN_03aadce4(lVar10,*puVar11);
        FUN_03aaceb0(&stack0x00000008,lVar10,*puVar13);
        uStack0000000000000048 = in_stack_00000010;
        uStack0000000000000040 = in_stack_00000008;
        plStack0000000000000050 = in_stack_00000018;
        while (uVar7 = FUN_04a7a4a0(&stack0x00000040,*puVar14), plVar17 = plStack0000000000000050,
              (uVar7 & 1) != 0) {
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          (**(code **)(*unaff_x19 + 0x1d8))();
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar10 = *plVar17;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x24) {
                puVar11 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                goto LAB_05162d38;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_02d9a5d4(plVar17,*unaff_x24,3);
LAB_05162d38:
          lVar10 = (*(code *)*puVar11)(plVar17,puVar11[1]);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_03aaceb0(&stack0x00000008,lVar10,*puVar13);
          uStack0000000000000028 = in_stack_00000010;
          uStack0000000000000020 = in_stack_00000008;
          plStack0000000000000030 = in_stack_00000018;
          while (uVar7 = FUN_04a7a4a0(&stack0x00000020,*puVar14), plVar17 = plStack0000000000000030,
                (uVar7 & 1) != 0) {
            if (plStack0000000000000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar10 = *plStack0000000000000030;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x24) {
                  puVar11 = (undefined8 *)(lVar10 + (long)(*piVar9 + 8) * 0x10 + 0x138);
                  goto LAB_05162dcc;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_02d9a5d4(plStack0000000000000030,*unaff_x24,8);
LAB_05162dcc:
            uVar5 = (*(code *)*puVar11)(plVar17,puVar11[1]);
            uVar7 = thunk_FUN_04e8bd3c(uVar5,*puVar15,0);
            if ((uVar7 & 1) != 0) {
              lVar10 = *plVar17;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 != 0) {
                piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x24) {
                    puVar11 = (undefined8 *)(lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                    goto LAB_05162e38;
                  }
                  uVar7 = uVar7 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar7 != 0);
              }
              puVar11 = (undefined8 *)FUN_02d9a5d4(plVar17,*unaff_x24,1);
LAB_05162e38:
              uVar5 = (*(code *)*puVar11)(plVar17,puVar11[1]);
              uVar7 = FUN_04e8c024(uVar5,*puVar16,0);
              if ((uVar7 & 1) != 0) {
                lVar10 = *plVar17;
                uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar7 != 0) {
                  piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *unaff_x24) {
                      puVar11 = (undefined8 *)(lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                      goto LAB_05162ea4;
                    }
                    uVar7 = uVar7 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar7 != 0);
                }
                puVar11 = (undefined8 *)FUN_02d9a5d4(plVar17,*unaff_x24,1);
LAB_05162ea4:
                (*(code *)*puVar11)(plVar17,puVar11[1]);
                lVar10 = *plVar17;
                uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar7 != 0) {
                  piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *unaff_x24) {
                      puVar11 = (undefined8 *)(lVar10 + (long)(*piVar9 + 5) * 0x10 + 0x138);
                      goto LAB_05162f04;
                    }
                    uVar7 = uVar7 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar7 != 0);
                }
                puVar11 = (undefined8 *)FUN_02d9a5d4(plVar17,*unaff_x24,5);
LAB_05162f04:
                (*(code *)*puVar11)(plVar17,puVar11[1]);
                (**(code **)(*unaff_x19 + 0x1f8))();
              }
            }
          }
          FUN_04a7a49c(&stack0x00000020,*puVar12);
        }
        FUN_04a7a49c(&stack0x00000040,*puVar12);
      }
      return;
    }
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_05162bec;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(unaff_x20,*unaff_x24,0);
FUN_05162bec:
    iVar2 = (*(code *)*puVar3)(unaff_x20,puVar3[1]);
    if (iVar2 == 1) {
      if (lVar10 == 0) {
        lVar10 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823c8);
        FUN_03aabc60(lVar10,*(undefined8 *)PTR_DAT_06782428);
        if (lVar10 == 0) break;
      }
      lVar6 = *(long *)(lVar10 + 0x10);
      lVar8 = *plVar17;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar6 == 0) break;
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = (long)unaff_x20;
        thunk_FUN_02dd37b4(plVar4,unaff_x20);
      }
      else {
        FUN_03aac494(lVar10,unaff_x20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


