/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.HandTrackingDelegate$$.ctor
ENTRY_POINT: 059de9fc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059df15c) */
/* WARNING: Removing unreachable block (ram,0x059df3c0) */
/* WARNING: Removing unreachable block (ram,0x059def3c) */
/* WARNING: Removing unreachable block (ram,0x059df3c8) */

void Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  uVar7 = FUN_03188b1c();
  **(undefined8 **)(*unaff_x22 + 0xb8) = uVar7;
  uVar7 = FUN_03188b1c(*unaff_x21,0x80);
                    /* try { // try from 059dea24 to 05adea27 has its CatchHandler @ 059dea84 */
  uVar11 = *unaff_x21;
                    /* try { // try from 059dea28 to 05adea63 has its CatchHandler @ 059de960 */
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8) = uVar7;
  uVar7 = FUN_03188b1c(uVar11,0x80);
  uVar11 = *unaff_x20;
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = uVar7;
  plVar8 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (uVar11);
  FUN_04205b68(plVar8,*unaff_x19);
  puVar1 = PTR_DAT_070cf0d0;
  if (plVar8 != (long *)0x0) {
    iVar18 = *(int *)((long)plVar8 + 0x1c);
    lVar12 = plVar8[2];
    lVar13 = *(long *)PTR_DAT_070cf0d0;
    *(int *)((long)plVar8 + 0x1c) = iVar18 + 1;
    if (lVar12 != 0) {
      uVar17 = *(uint *)(plVar8 + 3);
      if (uVar17 < *(uint *)(lVar12 + 0x18)) {
        uVar15 = uVar17 + 1;
        iVar18 = iVar18 + 2;
        *(uint *)(plVar8 + 3) = uVar15;
        *(undefined2 *)(lVar12 + (long)(int)uVar17 * 2 + 0x20) = 10;
        *(int *)((long)plVar8 + 0x1c) = iVar18;
      }
      else {
        FUN_0420639c(plVar8,10,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        uVar15 = *(uint *)(plVar8 + 3);
        lVar12 = plVar8[2];
        lVar13 = *(long *)puVar1;
        iVar18 = *(int *)((long)plVar8 + 0x1c) + 1;
        *(int *)((long)plVar8 + 0x1c) = iVar18;
        if (lVar12 == 0) goto LAB_059df3b8;
      }
      if (uVar15 < *(uint *)(lVar12 + 0x18)) {
        uVar17 = uVar15 + 1;
        iVar18 = iVar18 + 1;
        *(uint *)(plVar8 + 3) = uVar17;
        *(undefined2 *)(lVar12 + (long)(int)uVar15 * 2 + 0x20) = 0xd;
        *(int *)((long)plVar8 + 0x1c) = iVar18;
      }
      else {
        FUN_0420639c(plVar8,0xd,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        uVar17 = *(uint *)(plVar8 + 3);
        lVar12 = plVar8[2];
        lVar13 = *(long *)puVar1;
        iVar18 = *(int *)((long)plVar8 + 0x1c) + 1;
        *(int *)((long)plVar8 + 0x1c) = iVar18;
        if (lVar12 == 0) goto LAB_059df3b8;
      }
      if (uVar17 < *(uint *)(lVar12 + 0x18)) {
        uVar15 = uVar17 + 1;
        iVar18 = iVar18 + 1;
        *(uint *)(plVar8 + 3) = uVar15;
        *(undefined2 *)(lVar12 + (long)(int)uVar17 * 2 + 0x20) = 9;
        *(int *)((long)plVar8 + 0x1c) = iVar18;
      }
      else {
        FUN_0420639c(plVar8,9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        uVar15 = *(uint *)(plVar8 + 3);
        lVar12 = plVar8[2];
        lVar13 = *(long *)puVar1;
        iVar18 = *(int *)((long)plVar8 + 0x1c) + 1;
        *(int *)((long)plVar8 + 0x1c) = iVar18;
        if (lVar12 == 0) goto LAB_059df3b8;
      }
      if (uVar15 < *(uint *)(lVar12 + 0x18)) {
        uVar17 = uVar15 + 1;
        iVar18 = iVar18 + 1;
        *(uint *)(plVar8 + 3) = uVar17;
        *(undefined2 *)(lVar12 + (long)(int)uVar15 * 2 + 0x20) = 0x5c;
        *(int *)((long)plVar8 + 0x1c) = iVar18;
      }
      else {
        FUN_0420639c(plVar8,0x5c,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
        uVar17 = *(uint *)(plVar8 + 3);
        lVar12 = plVar8[2];
        lVar13 = *(long *)puVar1;
        iVar18 = *(int *)((long)plVar8 + 0x1c) + 1;
        *(int *)((long)plVar8 + 0x1c) = iVar18;
        if (lVar12 == 0) goto LAB_059df3b8;
      }
      if (uVar17 < *(uint *)(lVar12 + 0x18)) {
        uVar15 = uVar17 + 1;
        *(uint *)(plVar8 + 3) = uVar15;
        *(undefined2 *)(lVar12 + (long)(int)uVar17 * 2 + 0x20) = 0xc;
        *(int *)((long)plVar8 + 0x1c) = iVar18 + 1;
      }
      else {
        FUN_0420639c(plVar8,0xc,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        uVar15 = *(uint *)(plVar8 + 3);
        lVar12 = plVar8[2];
        lVar13 = *(long *)puVar1;
        *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_059df3b8;
      }
      if (uVar15 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(plVar8 + 3) = uVar15 + 1;
        *(undefined2 *)(lVar12 + (long)(int)uVar15 * 2 + 0x20) = 8;
      }
      else {
        FUN_0420639c(plVar8,8,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      puVar5 = PTR_DAT_07109bd8;
      puVar3 = PTR_DAT_07109bd0;
      puVar4 = PTR_DAT_07109bc8;
      puVar2 = PTR_DAT_070c2e88;
      puVar1 = PTR_DAT_070c2920;
      iVar18 = 0;
      do {
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_059ded04;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar3,2);
LAB_059ded04:
        (*(code *)*puVar9)(plVar8,iVar18,puVar9[1]);
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0x20);
      lVar12 = FUN_03188b1c(*(undefined8 *)puVar1,1);
      if (lVar12 != 0) {
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_059df3bc;
        *(undefined2 *)(lVar12 + 0x20) = 0x27;
        plVar10 = (long *)FUN_03a928f8(plVar8,lVar12,*(undefined8 *)puVar4);
        if (plVar10 != (long *)0x0) {
          lVar12 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_059deda4;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar5,0);
LAB_059deda4:
          plVar10 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
          puVar6 = PTR_DAT_07109be0;
          puVar3 = PTR_DAT_070c7c80;
          do {
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar12 = *plVar10;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_059dee24;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar3,0);
LAB_059dee24:
            uVar14 = (*(code *)*puVar9)(plVar10,puVar9[1]);
            if ((uVar14 & 1) == 0) {
              if (plVar10 == (long *)0x0) goto LAB_059def30;
              lVar12 = *plVar10;
              uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar14 == 0) goto LAB_059def08;
              piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              goto LAB_059deef0;
            }
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar12 = *plVar10;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 != 0) {
              piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_059dee88;
                }
                uVar14 = uVar14 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar6,0);
LAB_059dee88:
            uVar14 = (*(code *)*puVar9)(plVar10,puVar9[1]);
            lVar12 = **(long **)(*unaff_x22 + 0xb8);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            if (*(uint *)(lVar12 + 0x18) <= ((uint)uVar14 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            *(undefined1 *)(lVar12 + (uVar14 & 0xffff) + 0x20) = 1;
          } while( true );
        }
      }
    }
  }
  goto LAB_059df3b8;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_059deef0:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_059def24;
    }
  }
LAB_059def08:
  puVar9 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar2,0);
LAB_059def24:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_059def30:
  lVar12 = FUN_03188b1c(*(undefined8 *)puVar1,1);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) == 0) {
LAB_059df3bc:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined2 *)(lVar12 + 0x20) = 0x22;
    plVar10 = (long *)FUN_03a928f8(plVar8,lVar12,*(undefined8 *)puVar4);
    if (plVar10 != (long *)0x0) {
      lVar12 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_059defc4;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar5,0);
LAB_059defc4:
      plVar10 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
      puVar6 = PTR_DAT_07109be0;
      puVar3 = PTR_DAT_070c7c80;
      do {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar12 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_059df044;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar3,0);
LAB_059df044:
        uVar14 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_059df150;
          lVar12 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 == 0) goto LAB_059df128;
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_059df110;
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar12 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_059df0a8;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar6,0);
LAB_059df0a8:
        uVar14 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        lVar12 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar12 + 0x18) <= ((uint)uVar14 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined1 *)(lVar12 + (uVar14 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_059df3b8;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_059df330:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_059df364;
    }
  }
LAB_059df348:
  puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar2,0);
LAB_059df364:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_059df110:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_059df144;
    }
  }
LAB_059df128:
  puVar9 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar2,0);
LAB_059df144:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_059df150:
  uVar7 = FUN_03188b1c(*(undefined8 *)puVar1,5);
  FUN_0585c08c(uVar7,*(undefined8 *)PTR_DAT_07109be8,0);
  plVar8 = (long *)FUN_03a928f8(plVar8,uVar7,*(undefined8 *)puVar4);
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_059df1e8;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar5,0);
LAB_059df1e8:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar4 = PTR_DAT_07109be0;
    puVar1 = PTR_DAT_070c7c80;
    do {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_059df268;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar1,0);
LAB_059df268:
      uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 == 0) goto LAB_059df348;
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_059df330;
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_059df2cc;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar4,0);
LAB_059df2cc:
      uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      lVar12 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar12 + 0x18) <= ((uint)uVar14 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined1 *)(lVar12 + (uVar14 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_059df3b8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


