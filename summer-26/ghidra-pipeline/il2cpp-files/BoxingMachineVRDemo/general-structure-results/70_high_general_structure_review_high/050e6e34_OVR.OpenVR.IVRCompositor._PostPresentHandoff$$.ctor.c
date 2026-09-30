/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._PostPresentHandoff$$.ctor
ENTRY_POINT: 050e6e34
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050e7748) */
/* WARNING: Removing unreachable block (ram,0x050e7518) */
/* WARNING: Removing unreachable block (ram,0x050e775c) */
/* WARNING: Removing unreachable block (ram,0x050e731c) */

void OVR_OpenVR_IVRCompositor__PostPresentHandoff___ctor(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x23;
  
  puVar10 = (undefined8 *)(*(long *)(param_1 + 0xb8) + 0x10);
  *puVar10 = param_2;
  thunk_FUN_02dd37b4(puVar10,param_2);
  plVar7 = (long *)thunk_FUN_02d9d534(*unaff_x20);
  FUN_039f8474(plVar7,*unaff_x19);
  puVar1 = PTR_DAT_06760760;
  if (plVar7 != (long *)0x0) {
    iVar17 = *(int *)((long)plVar7 + 0x1c);
    lVar12 = plVar7[2];
    lVar11 = *(long *)PTR_DAT_06760760;
    *(int *)((long)plVar7 + 0x1c) = iVar17 + 1;
    if (lVar12 != 0) {
      uVar16 = *(uint *)(plVar7 + 3);
      if (uVar16 < *(uint *)(lVar12 + 0x18)) {
        uVar14 = uVar16 + 1;
        iVar17 = iVar17 + 2;
        *(uint *)(plVar7 + 3) = uVar14;
        *(undefined2 *)(lVar12 + (long)(int)uVar16 * 2 + 0x20) = 10;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
      }
      else {
        FUN_039f8cc8(plVar7,10,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        uVar14 = *(uint *)(plVar7 + 3);
        lVar11 = *(long *)puVar1;
        lVar12 = plVar7[2];
        iVar17 = *(int *)((long)plVar7 + 0x1c) + 1;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
        if (lVar12 == 0) goto LAB_050e7740;
      }
      if (uVar14 < *(uint *)(lVar12 + 0x18)) {
        uVar16 = uVar14 + 1;
        iVar17 = iVar17 + 1;
        *(uint *)(plVar7 + 3) = uVar16;
        *(undefined2 *)(lVar12 + (long)(int)uVar14 * 2 + 0x20) = 0xd;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
      }
      else {
        FUN_039f8cc8(plVar7,0xd,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        uVar16 = *(uint *)(plVar7 + 3);
        lVar11 = *(long *)puVar1;
        lVar12 = plVar7[2];
        iVar17 = *(int *)((long)plVar7 + 0x1c) + 1;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
        if (lVar12 == 0) goto LAB_050e7740;
      }
      if (uVar16 < *(uint *)(lVar12 + 0x18)) {
        uVar14 = uVar16 + 1;
        iVar17 = iVar17 + 1;
        *(uint *)(plVar7 + 3) = uVar14;
        *(undefined2 *)(lVar12 + (long)(int)uVar16 * 2 + 0x20) = 9;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
      }
      else {
        FUN_039f8cc8(plVar7,9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        uVar14 = *(uint *)(plVar7 + 3);
        lVar11 = *(long *)puVar1;
        lVar12 = plVar7[2];
        iVar17 = *(int *)((long)plVar7 + 0x1c) + 1;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
        if (lVar12 == 0) goto LAB_050e7740;
      }
      if (uVar14 < *(uint *)(lVar12 + 0x18)) {
        uVar16 = uVar14 + 1;
        iVar17 = iVar17 + 1;
        *(uint *)(plVar7 + 3) = uVar16;
        *(undefined2 *)(lVar12 + (long)(int)uVar14 * 2 + 0x20) = 0x5c;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
      }
      else {
        FUN_039f8cc8(plVar7,0x5c,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
        uVar16 = *(uint *)(plVar7 + 3);
        lVar11 = *(long *)puVar1;
        lVar12 = plVar7[2];
        iVar17 = *(int *)((long)plVar7 + 0x1c) + 1;
        *(int *)((long)plVar7 + 0x1c) = iVar17;
        if (lVar12 == 0) goto LAB_050e7740;
      }
      if (uVar16 < *(uint *)(lVar12 + 0x18)) {
        uVar14 = uVar16 + 1;
        *(uint *)(plVar7 + 3) = uVar14;
        *(undefined2 *)(lVar12 + (long)(int)uVar16 * 2 + 0x20) = 0xc;
        *(int *)((long)plVar7 + 0x1c) = iVar17 + 1;
      }
      else {
        FUN_039f8cc8(plVar7,0xc,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        uVar14 = *(uint *)(plVar7 + 3);
        lVar11 = *(long *)puVar1;
        lVar12 = plVar7[2];
        *(int *)((long)plVar7 + 0x1c) = *(int *)((long)plVar7 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_050e7740;
      }
      if (uVar14 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(plVar7 + 3) = uVar14 + 1;
        *(undefined2 *)(lVar12 + (long)(int)uVar14 * 2 + 0x20) = 8;
      }
      else {
        FUN_039f8cc8(plVar7,8,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      puVar5 = PTR_DAT_0677f6f0;
      puVar2 = PTR_DAT_0677f6e8;
      puVar4 = PTR_DAT_0677f6e0;
      puVar3 = PTR_DAT_06760700;
      puVar1 = PTR_DAT_0675f3d0;
      iVar17 = 0;
      do {
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_050e7108;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,2);
LAB_050e7108:
        (*(code *)*puVar10)(plVar7,iVar17,puVar10[1]);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 0x20);
      lVar11 = FUN_02d60934(*(undefined8 *)puVar3,1);
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x18) == 0)
        goto OVR_OpenVR_IVRCompositor__GetCurrentFadeColor__BeginInvoke;
        *(undefined2 *)(lVar11 + 0x20) = 0x27;
        plVar8 = (long *)FUN_033b7fd4(plVar7,lVar11,*(undefined8 *)puVar4);
        if (plVar8 != (long *)0x0) {
          lVar11 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_050e71a8;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar5,0);
LAB_050e71a8:
          plVar8 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
          puVar6 = PTR_DAT_0677f6f8;
          puVar2 = PTR_DAT_0675f3d8;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          do {
            lVar11 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                  puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_050e721c;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar2,0);
LAB_050e721c:
            uVar13 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            if ((uVar13 & 1) == 0) {
              if (plVar8 == (long *)0x0) goto LAB_050e7310;
              lVar11 = *plVar8;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 == 0) goto LAB_050e72e8;
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              goto LAB_050e72d0;
            }
            lVar11 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
                  puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_050e7278;
                }
                uVar13 = uVar13 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar6,0);
LAB_050e7278:
            uVar13 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            lVar11 = **(long **)(*unaff_x23 + 0xb8);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            if (*(uint *)(lVar11 + 0x18) <= ((uint)uVar13 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            *(undefined1 *)(lVar11 + (uVar13 & 0xffff) + 0x20) = 1;
          } while( true );
        }
      }
    }
  }
  goto LAB_050e7740;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_050e72d0:
    if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto FUN_050e7304;
    }
  }
LAB_050e72e8:
  puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar1,0);
FUN_050e7304:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
LAB_050e7310:
  lVar11 = FUN_02d60934(*(undefined8 *)puVar3,1);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) == 0) {
OVR_OpenVR_IVRCompositor__GetCurrentFadeColor__BeginInvoke:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(undefined2 *)(lVar11 + 0x20) = 0x22;
    plVar8 = (long *)FUN_033b7fd4(plVar7,lVar11,*(undefined8 *)puVar4);
    if (plVar8 != (long *)0x0) {
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_050e73a4;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar5,0);
LAB_050e73a4:
      plVar8 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
      puVar6 = PTR_DAT_0677f6f8;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      do {
        lVar11 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto OVR_OpenVR_IVRCompositor__GetCumulativeStats__BeginInvoke;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar2,0);
OVR_OpenVR_IVRCompositor__GetCumulativeStats__BeginInvoke:
        uVar13 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_050e750c;
          lVar11 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 == 0) goto OVR_OpenVR_IVRCompositor__FadeToColor___ctor;
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_050e74cc;
        }
        lVar11 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_050e7474;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar6,0);
LAB_050e7474:
        uVar13 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        lVar11 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(lVar11 + 0x18) <= ((uint)uVar13 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined1 *)(lVar11 + (uVar13 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_050e7740;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_050e76c8:
    if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_050e76fc;
    }
  }
LAB_050e76e0:
  puVar10 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
LAB_050e76fc:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_050e74cc:
    if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_050e7500;
    }
  }
OVR_OpenVR_IVRCompositor__FadeToColor___ctor:
  puVar10 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar1,0);
LAB_050e7500:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
LAB_050e750c:
  uVar9 = FUN_02d60934(*(undefined8 *)puVar3,5);
  FUN_04f2efa4(uVar9,*(undefined8 *)PTR_DAT_0677f700,0);
  plVar7 = (long *)FUN_033b7fd4(plVar7,uVar9,*(undefined8 *)puVar4);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_050e75a4;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar5,0);
LAB_050e75a4:
    plVar7 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
    puVar4 = PTR_DAT_0677f6f8;
    puVar3 = PTR_DAT_0675f3d8;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    do {
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_050e7618;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar3,0);
LAB_050e7618:
      uVar13 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar7 == (long *)0x0) {
          return;
        }
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 == 0) goto LAB_050e76e0;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_050e76c8;
      }
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_050e7674;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar4,0);
LAB_050e7674:
      uVar13 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      lVar11 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar11 + 0x18) <= ((uint)uVar13 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined1 *)(lVar11 + (uVar13 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_050e7740:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


