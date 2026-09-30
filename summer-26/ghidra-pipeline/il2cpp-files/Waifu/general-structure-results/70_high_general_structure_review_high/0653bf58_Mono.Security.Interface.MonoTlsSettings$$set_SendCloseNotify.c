/*
FUNCTION_NAME: Mono.Security.Interface.MonoTlsSettings$$set_SendCloseNotify
ENTRY_POINT: 0653bf58
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Mono_Security_Interface_MonoTlsSettings__set_SendCloseNotify(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  char in_NG;
  char in_OV;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  byte bVar13;
  int in_w8;
  undefined8 in_x9;
  undefined8 *puVar14;
  long *plVar15;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  uint in_stack_000000c0;
  undefined8 in_stack_000000c8;
  uint in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  uint in_stack_000000f0;
  undefined8 in_stack_000000f8;
  uint in_stack_00000108;
  long in_stack_00000110;
  undefined4 in_stack_00000118;
  uint in_stack_00000120;
  undefined8 in_stack_00000128;
  
  if (in_NG == in_OV) {
    FUN_033d1ba8(&DAT_083db7c0);
    uVar7 = thunk_FUN_03398a84();
    puVar11 = &DAT_08444588;
    goto LAB_0653c974;
  }
  puVar14 = (undefined8 *)(unaff_x19 + 0x40);
  *puVar14 = in_x9;
  if (in_w8 != 0) {
    puVar1 = (ulong *)(unaff_x26 + ((ulong)puVar14 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (unaff_x25 == 0) {
Mono_Security_Interface_MonoTlsSettings__get_DisallowUnauthenticatedCertificateRequest:
    bVar13 = 0;
  }
  else {
    bVar13 = 0;
    if (*(int *)(unaff_x25 + 0x10) != 0) {
      if ((unaff_x24 == 0) || (*(int *)(unaff_x24 + 0x10) == 0))
      goto Mono_Security_Interface_MonoTlsSettings__get_DisallowUnauthenticatedCertificateRequest;
      bVar13 = 1;
    }
  }
  if ((((unaff_x23 == 0) || (*(int *)(unaff_x23 + 0x10) == 0)) || (unaff_x22 == 0)) ||
     (*(int *)(unaff_x22 + 0x10) == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  if (((unaff_w21 < 7) && ((1 << (ulong)(unaff_w21 & 0x1f) & 0x55U) != 0)) ||
     ((bool)(bVar13 & unaff_w21 == 7))) {
    if (unaff_x25 == 0) goto LAB_0653c730;
    uVar7 = FUN_06670990();
    if (*(int *)(DAT_083d0698 + 0xe0) == 0) {
      FUN_033b9870(DAT_083d0698);
    }
    uVar8 = FUN_0714d568(uVar7,DAT_0844e010,0);
    if ((uVar8 & 1) == 0) {
      FUN_033d1ba8(&DAT_083db7c0);
      uVar7 = thunk_FUN_03398a84();
      puVar11 = &DAT_084481b8;
      goto LAB_0653c974;
    }
    lVar9 = FUN_06670990();
    if (lVar9 == 0) goto LAB_0653c730;
    uVar7 = FUN_0667305c(lVar9,0);
    puVar14 = (undefined8 *)(unaff_x19 + 0x28);
    *puVar14 = uVar7;
    unaff_x28 = &DAT_08908000;
    if (DAT_08908cd0 != 0) {
      puVar1 = (ulong *)(unaff_x26 + ((ulong)puVar14 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (unaff_x24 == 0) goto LAB_0653c730;
    uVar7 = FUN_06670990();
    if (*(int *)(DAT_083d0698 + 0xe0) == 0) {
      FUN_033b9870(DAT_083d0698);
    }
    uVar8 = FUN_0714d568(uVar7,DAT_0844e010,0);
    if ((uVar8 & 1) == 0) {
      FUN_033d1ba8(&DAT_083db7c0);
      uVar7 = thunk_FUN_03398a84();
      puVar11 = &DAT_08448318;
      goto LAB_0653c974;
    }
    lVar9 = FUN_06670990();
    if (lVar9 == 0) goto LAB_0653c730;
    uVar7 = FUN_0667305c(lVar9,0);
    puVar14 = (undefined8 *)(unaff_x19 + 0x30);
    *puVar14 = uVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = (ulong *)(unaff_x26 + ((ulong)puVar14 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((unaff_w21 & 0xfffffffe) != 6) {
      if (99 < in_stack_00000108) {
        FUN_033d1ba8(&DAT_083db7c0);
        uVar7 = thunk_FUN_03398a84();
        puVar11 = &DAT_084439e8;
        goto LAB_0653c974;
      }
      *(uint *)(unaff_x19 + 0x70) = in_stack_00000108;
    }
  }
  if (((unaff_w21 < 6) && ((1 << (ulong)(unaff_w21 & 0x1f) & 0x2aU) != 0)) ||
     ((bool)(bVar4 & unaff_w21 == 7))) {
    uVar8 = FUN_0652b784();
    if ((uVar8 & 1) == 0) {
      FUN_033d1ba8(&DAT_083db7c0);
      uVar7 = thunk_FUN_03398a84();
      puVar11 = &DAT_08447d78;
      goto LAB_0653c974;
    }
    if ((unaff_x23 == 0) || (lVar9 = FUN_06670990(), lVar9 == 0)) goto LAB_0653c730;
    uVar7 = FUN_0667305c(lVar9,0);
    puVar14 = (undefined8 *)(unaff_x19 + 0x18);
    *puVar14 = uVar7;
    if (*(int *)(unaff_x28 + 0xcd0) != 0) {
      puVar1 = (ulong *)(unaff_x26 + ((ulong)puVar14 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar8 = FUN_0652bd80();
    if ((uVar8 & 1) == 0) {
      FUN_033d1ba8(&DAT_083db7c0);
      uVar7 = thunk_FUN_03398a84();
      puVar11 = &DAT_08447bd8;
      goto LAB_0653c974;
    }
    if ((unaff_x22 == 0) || (lVar9 = FUN_06670990(), lVar9 == 0)) goto LAB_0653c730;
    uVar7 = FUN_0667305c(lVar9,0);
    lVar9 = in_stack_000000e0;
    puVar14 = (undefined8 *)(unaff_x19 + 0x20);
    *puVar14 = uVar7;
    iVar6 = *(int *)(unaff_x28 + 0xcd0);
    if (iVar6 != 0) {
      puVar1 = (ulong *)(unaff_x26 + ((ulong)puVar14 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (unaff_w21 == 7) goto LAB_0653c6fc;
    if (in_stack_00000110 == 0) goto LAB_0653c730;
    if (0x23 < *(int *)(in_stack_00000110 + 0x10)) {
      FUN_033d1ba8(&DAT_083db7c0);
      uVar7 = thunk_FUN_03398a84();
      puVar11 = &DAT_084455a0;
      goto LAB_0653c974;
    }
    plVar15 = (long *)(unaff_x19 + 0x38);
    *plVar15 = in_stack_00000110;
    if (iVar6 != 0) {
      puVar1 = (ulong *)(unaff_x26 + ((ulong)plVar15 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((in_stack_000000e0 != 0) && (*(int *)(in_stack_000000e0 + 0x10) != 0)) {
      uVar7 = FUN_06670990(in_stack_000000e0,DAT_0842d700,DAT_0842d1f0,0);
      if (*(int *)(DAT_083d0698 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d0698);
      }
      uVar8 = FUN_0714d568(uVar7,DAT_0844e028,0);
      if ((uVar8 & 1) == 0) {
        FUN_033d1ba8(&DAT_083db7c0);
        uVar7 = thunk_FUN_03398a84();
        puVar11 = &DAT_084484a8;
        goto LAB_0653c974;
      }
      iVar6 = *(int *)(unaff_x28 + 0xcd0);
    }
    lVar10 = in_stack_000000e8;
    plVar15 = (long *)(unaff_x19 + 0x48);
    *plVar15 = lVar9;
    if (iVar6 != 0) {
      puVar1 = (ulong *)(unaff_x26 + ((ulong)plVar15 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((in_stack_000000e8 != 0) && (*(int *)(in_stack_000000e8 + 0x10) != 0)) {
      uVar7 = FUN_06670990(in_stack_000000e8,DAT_0842d700,DAT_0842d1f0,0);
      if (*(int *)(DAT_083d0698 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d0698);
      }
      uVar8 = FUN_0714d568(uVar7,DAT_0844df80,0);
      if ((uVar8 & 1) == 0) {
        FUN_033d1ba8(&DAT_083db7c0);
        uVar7 = thunk_FUN_03398a84();
        puVar11 = &DAT_084489b0;
        goto LAB_0653c974;
      }
      iVar6 = *(int *)(unaff_x28 + 0xcd0);
    }
    plVar15 = (long *)(unaff_x19 + 0x50);
    *plVar15 = lVar10;
    if (iVar6 != 0) {
      puVar1 = (ulong *)(unaff_x26 + ((ulong)plVar15 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((in_stack_000000f0 & 0xff) != 0) {
      *(undefined8 *)(unaff_x19 + 0x88) = in_stack_000000f8;
    }
  }
  if ((unaff_w21 & 0xfffffffe) == 6) {
LAB_0653c6fc:
    if (*(long *)(unaff_x29 + 0x28) != in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(int *)(DAT_083ca520 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar9 = FUN_06894428(&stack0x00000028,0);
  if ((lVar9 == 0) || (lVar9 = FUN_06670990(lVar9,DAT_084303b8,DAT_08430a60,0), lVar9 == 0))
  goto LAB_0653c730;
  iVar6 = FUN_06673bf0(lVar9,DAT_08430a60,0,*(undefined4 *)(lVar9 + 0x10),4);
  if (-1 < iVar6) {
    if (*(int *)(DAT_083ca520 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar9 = FUN_06894428(&stack0x00000028,0);
    if (((lVar9 == 0) || (lVar9 = FUN_06670990(lVar9,DAT_084303b8,DAT_08430a60,0), lVar9 == 0)) ||
       (lVar9 = FUN_06670fd8(lVar9,0x2e,0,0), lVar9 == 0)) goto LAB_0653c730;
    if (*(uint *)(lVar9 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    if (*(long *)(lVar9 + 0x28) == 0) goto LAB_0653c730;
    in_stack_00000020._4_2_ = 0x30;
    lVar9 = FUN_0667333c(*(long *)(lVar9 + 0x28),(long)&stack0x00000020 + 4,1,1);
    if (lVar9 == 0) goto LAB_0653c730;
    if (2 < *(int *)(lVar9 + 0x10)) {
      FUN_033d1ba8(&DAT_083db7c0);
      uVar7 = thunk_FUN_03398a84();
      puVar11 = &DAT_08433748;
      goto LAB_0653c974;
    }
  }
  uVar12 = in_stack_00000030;
  uVar7 = in_stack_00000028;
  if (*(int *)(DAT_083ca520 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar8 = FUN_0689744c(uVar7,uVar12,0x20000,1,0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(DAT_083ca520 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar8 = FUN_06897570(uVar7,uVar12,0x20000,99999999999,0);
    uVar5 = in_stack_00000120;
    if ((uVar8 & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000030;
      *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000028;
      *(undefined4 *)(unaff_x19 + 0x78) = in_stack_00000118;
      if (*(int *)(DAT_083ca3d0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar7 = in_stack_00000128;
      if ((uVar5 & 0xff) == 0) {
        uVar7 = FUN_0680d6cc(0);
      }
      else {
        in_stack_00000018 = FUN_0680d99c(0);
        lVar9 = FUN_0680b8ac(&stack0x00000018,0);
        in_stack_00000018 = uVar7;
        lVar10 = FUN_0680b8ac(&stack0x00000018,0);
        if (lVar10 < lVar9) {
          FUN_033d1ba8(&DAT_083db7c0);
          uVar7 = thunk_FUN_03398a84();
          puVar11 = &DAT_0843a1e0;
          goto LAB_0653c974;
        }
      }
      *(undefined8 *)(unaff_x19 + 0x80) = uVar7;
      if ((unaff_w21 & 0xfffffffe) != 4) goto LAB_0653c6fc;
      if (in_stack_00000008 == 0) {
LAB_0653c730:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar7 = FUN_0667305c(in_stack_00000008,0);
      uVar8 = FUN_0666e380(uVar7,DAT_0843fd80);
      if ((uVar8 & 1) == 0) {
        uVar7 = FUN_0667305c(in_stack_00000008,0);
        uVar8 = FUN_0666e380(uVar7,DAT_0844c428);
        if ((uVar8 & 1) == 0) {
          FUN_033d1ba8(&DAT_083db7c0);
          uVar7 = thunk_FUN_03398a84();
          puVar11 = &DAT_08448c48;
          goto LAB_0653c974;
        }
      }
      plVar15 = (long *)(unaff_x19 + 0x58);
      *plVar15 = in_stack_00000008;
      if (*(int *)(unaff_x28 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x26 + ((ulong)plVar15 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (in_stack_00000000._4_4_ - 1U < 0x34) {
        *(int *)(unaff_x19 + 0x74) = in_stack_00000000._4_4_;
        if ((in_stack_000000c0 & 0xff) != 0) {
          *(undefined8 *)(unaff_x19 + 0x90) = in_stack_000000c8;
        }
        if ((in_stack_000000d0 & 0xff) != 0) {
          *(undefined8 *)(unaff_x19 + 0x98) = in_stack_000000d8;
        }
        goto LAB_0653c6fc;
      }
      FUN_033d1ba8(&DAT_083db7c0);
      uVar7 = thunk_FUN_03398a84();
      puVar11 = &DAT_08448c50;
      goto LAB_0653c974;
    }
  }
  FUN_033d1ba8(&DAT_083db7c0);
  uVar7 = thunk_FUN_03398a84();
  puVar11 = &DAT_08433740;
LAB_0653c974:
  uVar12 = FUN_033d1ba8(puVar11);
  FUN_0653cc18(uVar7,uVar12);
  uVar12 = FUN_033d1ba8(&DAT_08428748);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar7,uVar12);
}


