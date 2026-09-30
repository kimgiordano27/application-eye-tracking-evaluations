/*
FUNCTION_NAME: MessagePack.MessagePackSerializer.CompiledMethods.MessagePackReaderDeserialize$$Invoke
ENTRY_POINT: 07180200
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void MessagePack_MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize__Invoke(void)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
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
    puVar8 = (undefined8 *)*unaff_x21;
    do {
      pcVar14 = *(code **)(unaff_x24 + 0x10);
      *(undefined8 **)(unaff_x29 + -0x38) = puVar8;
      *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x28;
      *(undefined8 *)(unaff_x29 + -0x28) = unaff_x28;
      (*pcVar14)(unaff_x23,unaff_x24,unaff_x22,unaff_x29 + -0x38,unaff_x29 + -0x20);
      lVar10 = *(long *)PTR_DAT_08f6dba0;
      *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x20);
      if ((*(ushort *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      uVar9 = *unaff_x25;
      *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x98);
      *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar7 = FUN_0425a824(unaff_x29 + -0x50,uVar9);
      if ((uVar7 & 1) == 0) {
        uVar16 = *(undefined8 *)(unaff_x29 + -0x48);
        uVar9 = *(undefined8 *)(unaff_x29 + -0x50);
        *unaff_x19 = 2;
        *(undefined8 *)(unaff_x19 + 0x18) = uVar16;
        *(undefined8 *)(unaff_x19 + 0x16) = uVar9;
        lVar10 = *(long *)(unaff_x20 + 0x20);
        uVar3 = *(ushort *)(lVar10 + 0x135);
        if ((uVar3 & 1) == 0) {
          lVar11 = *(long *)(unaff_x29 + -0xa8);
          lVar10 = FUN_0406aaec();
          uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        }
        else {
          lVar11 = *(long *)(unaff_x29 + -0xa8);
        }
        pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x40);
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
        lVar10 = *(long *)(*(long *)PTR_DAT_08f6db90 + 0x20);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0406aaec();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0406aaec(lVar10);
        }
        lVar11 = *plVar15;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_07180308;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_0406ae20(plVar15,lVar10,0);
LAB_07180308:
        iVar6 = (*(code *)*puVar8)(plVar15,uVar4,puVar8[1]);
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
      lVar10 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec(lVar10);
      }
      lVar11 = *plVar15;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_071803b0;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar15,lVar10,1);
LAB_071803b0:
      auVar17 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      if ((*(ushort *)(*(long *)(*unaff_x27 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      uVar9 = *unaff_x26;
      *(undefined1 (*) [16])(unaff_x29 + -0x60) = auVar17;
      uVar7 = FUN_0425a2e4(unaff_x29 + -0x60,uVar9);
      if ((uVar7 & 1) == 0) {
        uVar16 = *(undefined8 *)(unaff_x29 + -0x58);
        uVar9 = *(undefined8 *)(unaff_x29 + -0x60);
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 0x1c) = uVar16;
        *(undefined8 *)(unaff_x19 + 0x1a) = uVar9;
        lVar10 = *(long *)(unaff_x20 + 0x20);
        uVar3 = *(ushort *)(lVar10 + 0x135);
        if ((uVar3 & 1) == 0) {
          lVar11 = *(long *)(unaff_x29 + -0xa8);
          lVar10 = FUN_0406aaec();
          uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        }
        else {
          lVar11 = *(long *)(unaff_x29 + -0xa8);
        }
        pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x58);
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
        lVar10 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0406aaec();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0406aaec(lVar10);
        }
        lVar11 = *plVar15;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_07180490;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_0406ae20(plVar15,lVar10,0);
LAB_07180490:
        uVar7 = (*(code *)*puVar8)(plVar15,uVar4,puVar8[1]);
        if ((uVar7 & 1) == 0) {
LAB_071804a4:
          plVar15 = *(long **)(unaff_x19 + 0x10);
          lVar11 = *(long *)(unaff_x29 + -0xa8);
          if (plVar15 == (long *)0x0) goto LAB_071804f8;
          lVar10 = *plVar15;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 == 0) goto LAB_071804e8;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
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
      lVar10 = *(long *)(unaff_x20 + 0x20);
      unaff_x22 = *(long *)(unaff_x19 + 0xc);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec(lVar10);
      }
      lVar11 = *plVar15;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            lVar10 = lVar11 + (long)*piVar13 * 0x10 + 0x138;
            goto LAB_07180160;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      lVar10 = FUN_0406ae20(plVar15,lVar10,0);
LAB_07180160:
      lVar10 = *(long *)(lVar10 + 8);
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
      (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar15,unaff_x29 + -0x20);
      if (unaff_x22 == 0) {
        if (*(long *)(*(long *)(unaff_x29 + -0xa8) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07180aa0;
      }
      lVar11 = *(long *)(unaff_x20 + 0x20);
      unaff_x28 = *(undefined8 *)(unaff_x19 + 10);
      uVar3 = *(ushort *)(lVar11 + 0x135);
      lVar10 = lVar11;
      if ((uVar3 & 1) == 0) {
        lVar10 = FUN_0406aaec();
        lVar11 = *(long *)(unaff_x20 + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x135);
      }
      unaff_x23 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x38);
      lVar10 = lVar11;
      if ((uVar3 & 1) == 0) {
        lVar10 = FUN_0406aaec();
        lVar11 = *(long *)(unaff_x20 + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x135);
      }
      unaff_x24 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x38);
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_0406aaec();
      }
      puVar8 = unaff_x21;
    } while (*(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x30) + 0x28) < 0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_071804d0:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f8cf80) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_071806fc;
    }
  }
LAB_071804e8:
  puVar8 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f8cf80,0);
LAB_071806fc:
  auVar17 = (*(code *)*puVar8)(plVar15,puVar8[1]);
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
      lVar10 = *plVar15;
      uVar4 = *(undefined2 *)(unaff_x29 + -0x68);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_0717fba4;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f67c08,2);
LAB_0717fba4:
      (*(code *)*puVar8)(plVar15,uVar4,puVar8[1]);
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
      lVar10 = FUN_07408528(plVar15,0);
      if (lVar10 == 0) {
        if (*(long *)(lVar11 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_07180aa0;
      }
      FUN_074085e8(lVar10,0);
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
      lVar10 = *(long *)(*(long *)PTR_DAT_08f8d0b8 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0406aaec(lVar10);
      }
      lVar12 = *plVar15;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_071806dc;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar15,lVar10,2);
LAB_071806dc:
      (*(code *)*puVar8)(plVar15,uVar1,puVar8[1]);
    }
  }
  else {
    lVar10 = *plVar15;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_071807d4;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f67c08,0);
LAB_071807d4:
    iVar6 = (*(code *)*puVar8)(plVar15,auVar17._8_8_ & 0xffffffff,puVar8[1]);
    if (iVar6 != 0) goto LAB_0717f964;
    uVar16 = *(undefined8 *)(unaff_x29 + -0x68);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x70);
    *unaff_x19 = 4;
    *(undefined8 *)(unaff_x19 + 0x20) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x1e) = uVar9;
    lVar10 = *(long *)(unaff_x20 + 0x20);
    uVar3 = *(ushort *)(lVar10 + 0x135);
    if ((uVar3 & 1) == 0) {
      lVar10 = FUN_0406aaec();
      uVar3 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    }
    pcVar14 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x60);
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


