/*
FUNCTION_NAME: MessagePack.MessagePackSerializer.CompiledMethods.MessagePackWriterSerialize$$EndInvoke
ENTRY_POINT: 071801e8
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void MessagePack_MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize__EndInvoke(void)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  code *pcVar14;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *plVar15;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  do {
    lVar7 = FUN_0406aaec();
    do {
      puVar10 = unaff_x21;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x28)) {
        puVar10 = (undefined8 *)*unaff_x21;
      }
      pcVar14 = *(code **)(unaff_x24 + 0x10);
      *(undefined8 **)(unaff_x29 + -0x38) = puVar10;
      *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x28;
      *(undefined8 *)(unaff_x29 + -0x28) = unaff_x28;
      (*pcVar14)(unaff_x23,unaff_x24,unaff_x22,unaff_x29 + -0x38,unaff_x29 + -0x20);
      lVar7 = *(long *)PTR_DAT_08f6dba0;
      *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x20);
      if ((*(ushort *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      uVar9 = *unaff_x25;
      *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x98);
      *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar8 = FUN_0425a824(unaff_x29 + -0x50,uVar9);
      if ((uVar8 & 1) == 0) {
        uVar16 = *(undefined8 *)(unaff_x29 + -0x48);
        uVar9 = *(undefined8 *)(unaff_x29 + -0x50);
        *unaff_x19 = 2;
        *(undefined8 *)(unaff_x19 + 0x18) = uVar16;
        *(undefined8 *)(unaff_x19 + 0x16) = uVar9;
        lVar7 = *(long *)(unaff_x20 + 0x20);
        uVar3 = *(ushort *)(lVar7 + 0x135);
        if ((uVar3 & 1) == 0) {
          lVar11 = *(long *)(unaff_x29 + -0xa8);
          lVar7 = FUN_0406aaec();
          uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        }
        else {
          lVar11 = *(long *)(unaff_x29 + -0xa8);
        }
        pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x40);
        if ((uVar3 & 1) == 0) {
          FUN_0406aaec();
        }
        (*pcVar14)(unaff_x19 + 2,unaff_x29 + -0x50);
        goto LAB_071800a8;
      }
      plVar15 = *(long **)(unaff_x29 + -0x50);
      if (plVar15 == (long *)0x0) {
        iVar6 = *(int *)(unaff_x29 + -0x48);
      }
      else {
        uVar4 = *(undefined2 *)(unaff_x29 + -0x44);
        lVar7 = *(long *)(*(long *)PTR_DAT_08f6db90 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0406aaec();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0406aaec(lVar7);
        }
        lVar11 = *plVar15;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_07180308;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_0406ae20(plVar15,lVar7,0);
LAB_07180308:
        iVar6 = (*(code *)*puVar10)(plVar15,uVar4,puVar10[1]);
      }
      if (iVar6 < (int)unaff_x19[0xe]) {
        unaff_x19[0xe] = iVar6;
      }
      plVar15 = *(long **)(unaff_x19 + 0x10);
      if (plVar15 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0xa8) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07180aa0;
      }
      lVar7 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec(lVar7);
      }
      lVar11 = *plVar15;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_071803b0;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(plVar15,lVar7,1);
LAB_071803b0:
      auVar17 = (*(code *)*puVar10)(plVar15,puVar10[1]);
      if ((*(ushort *)(*(long *)(*unaff_x27 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      uVar9 = *unaff_x26;
      *(undefined1 (*) [16])(unaff_x29 + -0x60) = auVar17;
      uVar8 = FUN_0425a2e4(unaff_x29 + -0x60,uVar9);
      if ((uVar8 & 1) == 0) {
        uVar16 = *(undefined8 *)(unaff_x29 + -0x58);
        uVar9 = *(undefined8 *)(unaff_x29 + -0x60);
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 0x1c) = uVar16;
        *(undefined8 *)(unaff_x19 + 0x1a) = uVar9;
        lVar7 = *(long *)(unaff_x20 + 0x20);
        uVar3 = *(ushort *)(lVar7 + 0x135);
        if ((uVar3 & 1) == 0) {
          lVar11 = *(long *)(unaff_x29 + -0xa8);
          lVar7 = FUN_0406aaec();
          uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        }
        else {
          lVar11 = *(long *)(unaff_x29 + -0xa8);
        }
        pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x58);
        if ((uVar3 & 1) == 0) {
          FUN_0406aaec();
        }
        (*pcVar14)(unaff_x19 + 2,unaff_x29 + -0x60);
        goto LAB_071800a8;
      }
      plVar15 = *(long **)(unaff_x29 + -0x60);
      if (plVar15 == (long *)0x0) {
        if (*(char *)(unaff_x29 + -0x58) == '\0') goto LAB_071804a4;
      }
      else {
        uVar4 = *(undefined2 *)(unaff_x29 + -0x56);
        lVar7 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0406aaec();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0406aaec(lVar7);
        }
        lVar11 = *plVar15;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_07180490;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)FUN_0406ae20(plVar15,lVar7,0);
LAB_07180490:
        uVar8 = (*(code *)*puVar10)(plVar15,uVar4,puVar10[1]);
        if ((uVar8 & 1) == 0) {
LAB_071804a4:
          plVar15 = *(long **)(unaff_x19 + 0x10);
          lVar11 = *(long *)(unaff_x29 + -0xa8);
          if (plVar15 == (long *)0x0) goto LAB_071804f8;
          lVar7 = *plVar15;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_071804e8;
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_071804d0;
        }
      }
      plVar15 = *(long **)(unaff_x19 + 0x10);
      if (plVar15 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0xa8) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07180aa0;
      }
      lVar7 = *(long *)(unaff_x20 + 0x20);
      unaff_x22 = *(long *)(unaff_x19 + 0xc);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec(lVar7);
      }
      lVar11 = *plVar15;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            lVar7 = lVar11 + (long)*piVar13 * 0x10 + 0x138;
            goto LAB_07180160;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      lVar7 = FUN_0406ae20(plVar15,lVar7,0);
LAB_07180160:
      lVar7 = *(long *)(lVar7 + 8);
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar15,unaff_x29 + -0x20);
      if (unaff_x22 == 0) {
        if (*(long *)(*(long *)(unaff_x29 + -0xa8) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07180aa0;
      }
      lVar7 = *(long *)(unaff_x20 + 0x20);
      unaff_x28 = *(undefined8 *)(unaff_x19 + 10);
      uVar3 = *(ushort *)(lVar7 + 0x135);
      lVar11 = lVar7;
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_0406aaec();
        lVar7 = *(long *)(unaff_x20 + 0x20);
        uVar3 = *(ushort *)(lVar7 + 0x135);
      }
      unaff_x23 = **(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x38);
      lVar11 = lVar7;
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_0406aaec();
        lVar7 = *(long *)(unaff_x20 + 0x20);
        uVar3 = *(ushort *)(lVar7 + 0x135);
      }
      unaff_x24 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x38);
    } while ((uVar3 & 1) != 0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar13 = piVar13 + 4;
    if (uVar8 == 0) break;
LAB_071804d0:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f8cf80) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_071806fc;
    }
  }
LAB_071804e8:
  puVar10 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f8cf80,0);
LAB_071806fc:
  auVar17 = (*(code *)*puVar10)(plVar15,puVar10[1]);
  puVar5 = PTR_DAT_08f67a58;
  plVar15 = auVar17._0_8_;
  if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  *(undefined1 (*) [16])(unaff_x29 + -0x70) = auVar17;
  if (DAT_09539e0c == '\0') {
    FUN_0403162c(PTR_DAT_08f67a58);
    DAT_09539e0c = '\x01';
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if (DAT_09539e0d == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    DAT_09539e0d = '\x01';
  }
  if (plVar15 == (long *)0x0) {
LAB_0717f964:
    if (DAT_09539e0e == '\0') {
      FUN_0403162c(PTR_DAT_08f67c08);
      DAT_09539e0e = '\x01';
    }
    plVar15 = *(long **)(unaff_x29 + -0x70);
    if (plVar15 != (long *)0x0) {
      lVar7 = *plVar15;
      uVar4 = *(undefined2 *)(unaff_x29 + -0x68);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_0717fba4;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f67c08,2);
LAB_0717fba4:
      (*(code *)*puVar10)(plVar15,uVar4,puVar10[1]);
    }
LAB_071804f8:
    plVar15 = *(long **)(unaff_x19 + 0x12);
    if (plVar15 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_08f65af8 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08f65af8)
         ) {
        *(long *)(unaff_x29 + -0xa8) = lVar11;
        if (*(long *)(lVar11 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_04031750();
        }
        goto LAB_07180aa0;
      }
      lVar7 = FUN_07408528(plVar15,0);
      if (lVar7 == 0) {
        if (*(long *)(lVar11 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07180aa0;
      }
      FUN_074085e8(lVar7,0);
    }
    plVar15 = *(long **)(unaff_x19 + 2);
    uVar1 = unaff_x19[0xe];
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    if (plVar15 == (long *)0x0) {
      unaff_x19[6] = uVar1;
    }
    else {
      lVar7 = *(long *)(*(long *)PTR_DAT_08f8d0b8 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0406aaec(lVar7);
      }
      lVar12 = *plVar15;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar8 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_071806dc;
          }
          uVar8 = uVar8 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(plVar15,lVar7,2);
LAB_071806dc:
      (*(code *)*puVar10)(plVar15,uVar1,puVar10[1]);
    }
  }
  else {
    lVar7 = *plVar15;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_071807d4;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f67c08,0);
LAB_071807d4:
    iVar6 = (*(code *)*puVar10)(plVar15,auVar17._8_8_ & 0xffffffff,puVar10[1]);
    if (iVar6 != 0) goto LAB_0717f964;
    uVar16 = *(undefined8 *)(unaff_x29 + -0x68);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x70);
    *unaff_x19 = 4;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x1e) = uVar9;
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar3 = *(ushort *)(lVar7 + 0x135);
    if ((uVar3 & 1) == 0) {
      lVar7 = FUN_0406aaec();
      uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    }
    pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
    if ((uVar3 & 1) == 0) {
      FUN_0406aaec();
    }
    (*pcVar14)(unaff_x19 + 2,unaff_x29 + -0x70);
  }
LAB_071800a8:
  if (*(long *)(lVar11 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
LAB_07180aa0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


