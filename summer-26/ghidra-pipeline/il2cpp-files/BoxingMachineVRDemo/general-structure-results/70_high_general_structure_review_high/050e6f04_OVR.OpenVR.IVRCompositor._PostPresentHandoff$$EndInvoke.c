/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._PostPresentHandoff$$EndInvoke
ENTRY_POINT: 050e6f04
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050e7748) */
/* WARNING: Removing unreachable block (ram,0x050e7518) */
/* WARNING: Removing unreachable block (ram,0x050e775c) */
/* WARNING: Removing unreachable block (ram,0x050e731c) */

void OVR_OpenVR_IVRCompositor__PostPresentHandoff__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  uint uVar11;
  int *piVar12;
  uint in_w11;
  uint uVar13;
  int in_w12;
  int iVar14;
  long *unaff_x19;
  long *unaff_x23;
  
  *(int *)((long)unaff_x19 + 0x1c) = in_w12;
  if (in_w11 < *(uint *)(in_x9 + 0x18)) {
    uVar11 = in_w11 + 1;
    iVar14 = in_w12 + 1;
    *(uint *)(unaff_x19 + 3) = uVar11;
    *(undefined2 *)(in_x9 + (long)(int)in_w11 * 2 + 0x20) = 9;
    *(int *)((long)unaff_x19 + 0x1c) = iVar14;
  }
  else {
    FUN_039f8cc8();
    uVar11 = *(uint *)(unaff_x19 + 3);
    in_x9 = unaff_x19[2];
    iVar14 = *(int *)((long)unaff_x19 + 0x1c) + 1;
    *(int *)((long)unaff_x19 + 0x1c) = iVar14;
    if (in_x9 == 0) goto LAB_050e7740;
  }
  if (uVar11 < *(uint *)(in_x9 + 0x18)) {
    uVar13 = uVar11 + 1;
    iVar14 = iVar14 + 1;
    *(uint *)(unaff_x19 + 3) = uVar13;
    *(undefined2 *)(in_x9 + (long)(int)uVar11 * 2 + 0x20) = 0x5c;
    *(int *)((long)unaff_x19 + 0x1c) = iVar14;
  }
  else {
    FUN_039f8cc8();
    uVar13 = *(uint *)(unaff_x19 + 3);
    in_x9 = unaff_x19[2];
    iVar14 = *(int *)((long)unaff_x19 + 0x1c) + 1;
    *(int *)((long)unaff_x19 + 0x1c) = iVar14;
    if (in_x9 == 0) goto LAB_050e7740;
  }
  if (uVar13 < *(uint *)(in_x9 + 0x18)) {
    uVar11 = uVar13 + 1;
    *(uint *)(unaff_x19 + 3) = uVar11;
    *(undefined2 *)(in_x9 + (long)(int)uVar13 * 2 + 0x20) = 0xc;
    *(int *)((long)unaff_x19 + 0x1c) = iVar14 + 1;
  }
  else {
    FUN_039f8cc8();
    uVar11 = *(uint *)(unaff_x19 + 3);
    in_x9 = unaff_x19[2];
    *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_050e7740;
  }
  if (uVar11 < *(uint *)(in_x9 + 0x18)) {
    *(uint *)(unaff_x19 + 3) = uVar11 + 1;
    *(undefined2 *)(in_x9 + (long)(int)uVar11 * 2 + 0x20) = 8;
  }
  else {
    FUN_039f8cc8();
  }
  puVar4 = PTR_DAT_0677f6f0;
  puVar2 = PTR_DAT_0677f6e8;
  puVar3 = PTR_DAT_06760700;
  puVar1 = PTR_DAT_0675f3d0;
  iVar14 = 0;
  do {
    lVar9 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_050e7108;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_050e7108:
    (*(code *)*puVar6)();
    iVar14 = iVar14 + 1;
  } while (iVar14 != 0x20);
  lVar9 = FUN_02d60934(*(undefined8 *)puVar3,1);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) == 0)
    goto OVR_OpenVR_IVRCompositor__GetCurrentFadeColor__BeginInvoke;
    *(undefined2 *)(lVar9 + 0x20) = 0x27;
    plVar7 = (long *)FUN_033b7fd4();
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_050e71a8;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar4,0);
LAB_050e71a8:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      puVar5 = PTR_DAT_0677f6f8;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      do {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_050e721c;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
LAB_050e721c:
        uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_050e7310;
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_050e72e8;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_050e72d0;
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_050e7278;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar5,0);
LAB_050e7278:
        uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        lVar9 = **(long **)(*unaff_x23 + 0xb8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(lVar9 + 0x18) <= ((uint)uVar10 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined1 *)(lVar9 + (uVar10 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_050e7740;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_050e72d0:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto FUN_050e7304;
    }
  }
LAB_050e72e8:
  puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
FUN_050e7304:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_050e7310:
  lVar9 = FUN_02d60934(*(undefined8 *)puVar3,1);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) == 0) {
OVR_OpenVR_IVRCompositor__GetCurrentFadeColor__BeginInvoke:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(undefined2 *)(lVar9 + 0x20) = 0x22;
    plVar7 = (long *)FUN_033b7fd4();
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_050e73a4;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar4,0);
LAB_050e73a4:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      puVar5 = PTR_DAT_0677f6f8;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      do {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto OVR_OpenVR_IVRCompositor__GetCumulativeStats__BeginInvoke;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
OVR_OpenVR_IVRCompositor__GetCumulativeStats__BeginInvoke:
        uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_050e750c;
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto OVR_OpenVR_IVRCompositor__FadeToColor___ctor;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_050e74cc;
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_050e7474;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar5,0);
LAB_050e7474:
        uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(lVar9 + 0x18) <= ((uint)uVar10 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined1 *)(lVar9 + (uVar10 & 0xffff) + 0x20) = 1;
      } while( true );
    }
  }
  goto LAB_050e7740;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_050e76c8:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_050e76fc;
    }
  }
LAB_050e76e0:
  puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
LAB_050e76fc:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_050e74cc:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_050e7500;
    }
  }
OVR_OpenVR_IVRCompositor__FadeToColor___ctor:
  puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0);
LAB_050e7500:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_050e750c:
  uVar8 = FUN_02d60934(*(undefined8 *)puVar3,5);
  FUN_04f2efa4(uVar8,*(undefined8 *)PTR_DAT_0677f700,0);
  plVar7 = (long *)FUN_033b7fd4();
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_050e75a4;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar4,0);
LAB_050e75a4:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    puVar2 = PTR_DAT_0677f6f8;
    puVar3 = PTR_DAT_0675f3d8;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    do {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_050e7618;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar3,0);
LAB_050e7618:
      uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar7 == (long *)0x0) {
          return;
        }
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_050e76e0;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_050e76c8;
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_050e7674;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
LAB_050e7674:
      uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar9 + 0x18) <= ((uint)uVar10 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined1 *)(lVar9 + (uVar10 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_050e7740:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


