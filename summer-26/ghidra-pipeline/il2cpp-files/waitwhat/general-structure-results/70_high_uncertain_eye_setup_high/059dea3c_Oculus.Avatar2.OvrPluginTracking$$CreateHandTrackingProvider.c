/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateHandTrackingProvider
ENTRY_POINT: 059dea3c
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

void Oculus_Avatar2_OvrPluginTracking__CreateHandTrackingProvider(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long in_x9;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x22;
  
  uVar10 = *unaff_x20;
  *(undefined8 *)(in_x9 + 0x10) = param_1;
  plVar7 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (uVar10);
  FUN_04205b68(plVar7,*unaff_x19);
  puVar1 = PTR_DAT_070cf0d0;
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 059dea64 to 05adea67 has its CatchHandler @ 059dea84 */
    iVar17 = *(int *)((long)plVar7 + 0x1c);
                    /* try { // try from 059dea68 to 05adea73 has its CatchHandler @ 059de960 */
    lVar11 = plVar7[2];
    lVar12 = *(long *)PTR_DAT_070cf0d0;
                    /* try { // try from 059dea74 to 05adea77 has its CatchHandler @ 059dea7c */
    *(int *)((long)plVar7 + 0x1c) = iVar17 + 1;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059de9e8 with catch @ 059dea78
                       try { // try from 059dea78 to 05adea9f has its CatchHandler @ 059de960 */
    if (lVar11 != 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059dea74 with catch @ 059dea7c
                        */
      uVar16 = *(uint *)(plVar7 + 3);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059de9c8 with catch @ 059dea80
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 059dea24 with catch @ 059dea84
                       catch(type#1 @ 06cdc248) { ... } // from try @ 059dea64 with catch @ 059dea84
                        */
      if (uVar16 < *(uint *)(lVar11 + 0x18)) {
        uVar14 = uVar16 + 1;
        iVar17 = iVar17 + 2;
        *(uint *)(plVar7 + 3) = uVar14;
                    /* try { // try from 059deaa0 to 05adeaa3 has its CatchHandler @ 059deab0 */
        *(undefined2 *)(lVar11 + (long)(int)uVar16 * 2 + 0x20) = 10;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
      }
      else {
                    /* catch() { ... } // from try @ 059deaa0 with catch @ 059deab0 */
                    /* try { // try from 059deab4 to 05adeabb has its CatchHandler @ 059deac4 */
                    /* try { // try from 059deabc to 05adeac7 has its CatchHandler @ 059de960 */
        FUN_0420639c(plVar7,10,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059deab4 with catch @ 059deac4
                        */
        uVar14 = *(uint *)(plVar7 + 3);
        lVar11 = plVar7[2];
        lVar12 = *(long *)puVar1;
        iVar17 = *(int *)((long)plVar7 + 0x1c) + 1;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
        if (lVar11 == 0) goto LAB_059df3b8;
      }
      if (uVar14 < *(uint *)(lVar11 + 0x18)) {
        uVar16 = uVar14 + 1;
        iVar17 = iVar17 + 1;
        *(uint *)(plVar7 + 3) = uVar16;
        *(undefined2 *)(lVar11 + (long)(int)uVar14 * 2 + 0x20) = 0xd;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
      }
      else {
                    /* try { // try from 059deb08 to 05adeb4b has its CatchHandler @ 059deb08
                       catch() { ... } // from try @ 059deb08 with catch @ 059deb08
                       catch() { ... } // from try @ 059deb70 with catch @ 059deb08
                       catch() { ... } // from try @ 059debbc with catch @ 059deb08
                       catch() { ... } // from try @ 059debfc with catch @ 059deb08 */
        FUN_0420639c(plVar7,0xd,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        uVar16 = *(uint *)(plVar7 + 3);
        lVar11 = plVar7[2];
        lVar12 = *(long *)puVar1;
        iVar17 = *(int *)((long)plVar7 + 0x1c) + 1;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
        if (lVar11 == 0) goto LAB_059df3b8;
      }
      if (uVar16 < *(uint *)(lVar11 + 0x18)) {
        uVar14 = uVar16 + 1;
                    /* try { // try from 059deb4c to 05adeb57 has its CatchHandler @ 059debc4 */
        iVar17 = iVar17 + 1;
        *(uint *)(plVar7 + 3) = uVar14;
        *(undefined2 *)(lVar11 + (long)(int)uVar16 * 2 + 0x20) = 9;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
      }
      else {
        FUN_0420639c(plVar7,9,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        uVar14 = *(uint *)(plVar7 + 3);
        lVar11 = plVar7[2];
        lVar12 = *(long *)puVar1;
        iVar17 = *(int *)((long)plVar7 + 0x1c) + 1;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
        if (lVar11 == 0) goto LAB_059df3b8;
      }
      if (uVar14 < *(uint *)(lVar11 + 0x18)) {
        uVar16 = uVar14 + 1;
        iVar17 = iVar17 + 1;
        *(uint *)(plVar7 + 3) = uVar16;
        *(undefined2 *)(lVar11 + (long)(int)uVar14 * 2 + 0x20) = 0x5c;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
      }
      else {
        FUN_0420639c(plVar7,0x5c,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
        uVar16 = *(uint *)(plVar7 + 3);
        lVar11 = plVar7[2];
        lVar12 = *(long *)puVar1;
        iVar17 = *(int *)((long)plVar7 + 0x1c) + 1;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
        if (lVar11 == 0) goto LAB_059df3b8;
      }
      if (uVar16 < *(uint *)(lVar11 + 0x18)) {
        uVar14 = uVar16 + 1;
        *(uint *)(plVar7 + 3) = uVar14;
        *(undefined2 *)(lVar11 + (long)(int)uVar16 * 2 + 0x20) = 0xc;
        *(int *)((long)plVar7 + 0x1c) = iVar17 + 1;
      }
      else {
        FUN_0420639c(plVar7,0xc,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        uVar14 = *(uint *)(plVar7 + 3);
        lVar11 = plVar7[2];
        lVar12 = *(long *)puVar1;
        *(int *)((long)plVar7 + 0x1c) = *(int *)((long)plVar7 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_059df3b8;
      }
      if (uVar14 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(plVar7 + 3) = uVar14 + 1;
        *(undefined2 *)(lVar11 + (long)(int)uVar14 * 2 + 0x20) = 8;
      }
      else {
        FUN_0420639c(plVar7,8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      puVar5 = PTR_DAT_07109bd8;
      puVar3 = PTR_DAT_07109bd0;
      puVar4 = PTR_DAT_07109bc8;
      puVar2 = PTR_DAT_070c2e88;
      puVar1 = PTR_DAT_070c2920;
      iVar17 = 0;
      do {
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_059ded04;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar3,2);
LAB_059ded04:
        (*(code *)*puVar8)(plVar7,iVar17,puVar8[1]);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 0x20);
      lVar11 = FUN_03188b1c(*(undefined8 *)puVar1,1);
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_059df3bc;
        *(undefined2 *)(lVar11 + 0x20) = 0x27;
        plVar9 = (long *)FUN_03a928f8(plVar7,lVar11,*(undefined8 *)puVar4);
        if (plVar9 != (long *)0x0) {
          lVar11 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_059deda4;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar5,0);
LAB_059deda4:
          plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
          puVar6 = PTR_DAT_07109be0;
          puVar3 = PTR_DAT_070c7c80;
          do {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar11 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_059dee24;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar3,0);
LAB_059dee24:
            uVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
            if ((uVar13 & 1) == 0) {
              if (plVar9 == (long *)0x0) goto LAB_059def30;
              lVar11 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 == 0) goto LAB_059def08;
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              goto LAB_059deef0;
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar11 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_059dee88;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar6,0);
LAB_059dee88:
            uVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
            lVar11 = **(long **)(*unaff_x22 + 0xb8);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            if (*(uint *)(lVar11 + 0x18) <= ((uint)uVar13 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            *(undefined1 *)(lVar11 + (uVar13 & 0xffff) + 0x20) = 1;
          } while( true );
        }
      }
    }
  }
  goto LAB_059df3b8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_059deef0:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_059def24;
    }
  }
LAB_059def08:
  puVar8 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar2,0);
LAB_059def24:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_059def30:
  lVar11 = FUN_03188b1c(*(undefined8 *)puVar1,1);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) == 0) {
LAB_059df3bc:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined2 *)(lVar11 + 0x20) = 0x22;
    plVar9 = (long *)FUN_03a928f8(plVar7,lVar11,*(undefined8 *)puVar4);
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_059defc4;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar5,0);
LAB_059defc4:
      plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      puVar6 = PTR_DAT_07109be0;
      puVar3 = PTR_DAT_070c7c80;
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar11 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_059df044;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar3,0);
LAB_059df044:
        uVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_059df150;
          lVar11 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 == 0) goto LAB_059df128;
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_059df110;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar11 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_059df0a8;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar6,0);
LAB_059df0a8:
        uVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        lVar11 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(uint *)(lVar11 + 0x18) <= ((uint)uVar13 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        *(undefined1 *)(lVar11 + (uVar13 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_059df3b8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_059df330:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_059df364;
    }
  }
LAB_059df348:
  puVar8 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar2,0);
LAB_059df364:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_059df110:
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_059df144;
    }
  }
LAB_059df128:
  puVar8 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar2,0);
LAB_059df144:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_059df150:
  uVar10 = FUN_03188b1c(*(undefined8 *)puVar1,5);
  FUN_0585c08c(uVar10,*(undefined8 *)PTR_DAT_07109be8,0);
  plVar7 = (long *)FUN_03a928f8(plVar7,uVar10,*(undefined8 *)puVar4);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_059df1e8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar5,0);
LAB_059df1e8:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar4 = PTR_DAT_07109be0;
    puVar1 = PTR_DAT_070c7c80;
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_059df268;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar1,0);
LAB_059df268:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar7 == (long *)0x0) {
          return;
        }
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 == 0) goto LAB_059df348;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_059df330;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_059df2cc;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar4,0);
LAB_059df2cc:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      lVar11 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar11 + 0x18) <= ((uint)uVar13 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined1 *)(lVar11 + (uVar13 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_059df3b8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


