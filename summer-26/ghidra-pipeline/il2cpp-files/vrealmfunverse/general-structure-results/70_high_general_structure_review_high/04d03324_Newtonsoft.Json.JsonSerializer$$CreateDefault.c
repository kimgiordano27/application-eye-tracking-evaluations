/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 04d03324
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__CreateDefault(void)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  long unaff_x19;
  uint uVar12;
  long unaff_x20;
  long lVar13;
  ulong unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined1 auVar14 [16];
  
  do {
    FUN_04d9bcc4(0);
    do {
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      uVar11 = (uint)unaff_x19;
      lVar13 = *(long *)PTR_DAT_0632fee0;
      if (unaff_w22 < uVar11) {
        FUN_04d9bcc4(0);
      }
      lVar13 = *(long *)(lVar13 + 0x20);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02b76218();
      }
      if ((int)unaff_x26 == (int)unaff_x24) {
LAB_04d036c4:
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_04d036dc;
      }
      lVar13 = *unaff_x28;
      puVar1 = (ushort *)(unaff_x23 + unaff_x24 * 2);
      uVar5 = *puVar1;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        lVar13 = thunk_FUN_02b9ad44();
      }
      uVar6 = (int)unaff_x26 - (int)unaff_x24;
      unaff_w22 = unaff_w22 - uVar11;
      *(long *)(unaff_x29 + -0x28) = *(long *)(unaff_x29 + -0x28) + unaff_x19;
      if ((uVar5 < 0x21) && ((unaff_x27 << ((ulong)uVar5 & 0x3f) & unaff_x21) != 0)) {
        if (uVar6 != 1) {
          uVar2 = uVar6;
          if (uVar6 < 2) {
            uVar2 = 1;
          }
          uVar12 = 1;
          while (uVar2 != uVar12) {
            lVar13 = *unaff_x28;
            uVar5 = puVar1[(int)uVar12];
            if (*(int *)(lVar13 + 0xe4) == 0) {
              lVar13 = thunk_FUN_02b9ad44();
            }
            if ((0x20 < uVar5) || ((unaff_x27 << ((ulong)uVar5 & 0x3f) & unaff_x21) == 0)) {
              lVar13 = *(long *)PTR_DAT_0632fed8;
              if (uVar6 < uVar12) {
                FUN_04d9bcc4(0);
              }
              goto LAB_04d03414;
            }
            uVar12 = uVar12 + 1;
            if (uVar6 == uVar12) goto LAB_04d03404;
          }
          goto LAB_04d036c4;
        }
LAB_04d03404:
        lVar13 = *(long *)PTR_DAT_0632fed8;
        uVar12 = uVar6;
LAB_04d03414:
        if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
          FUN_02b76218();
        }
        uVar6 = uVar6 - uVar12;
        unaff_x26 = (ulong)uVar6;
        if (uVar11 * -0x55555555 + 0x2aaaaaaa < 0x55555555) {
          lVar13 = (long)(int)uVar12 << 1;
          if (uVar6 != 0) goto LAB_04d032c4;
        }
        else if (uVar6 != 0) goto LAB_04d0367c;
LAB_04d0368c:
        lVar13 = 1;
        goto LAB_04d03690;
      }
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar3 = *(undefined8 *)(unaff_x29 + -0x48);
      uVar4 = *(undefined8 *)(unaff_x29 + -0x40);
      FUN_04d036e0(puVar1,uVar6,uVar3,uVar4,unaff_x29 + -0x14,unaff_x29 + -0x18);
      *(ulong *)(unaff_x29 + -0x50) = (ulong)*(uint *)(unaff_x29 + -0x18);
      if ((*(uint *)(unaff_x29 + -0x18) & 3) != 0) goto LAB_04d0367c;
      lVar13 = *(long *)PTR_DAT_06329588;
      if ((uint)uVar4 < (uint)*(undefined8 *)(unaff_x29 + -0x50)) {
        FUN_04d9bcc4(0);
      }
      if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      auVar14 = FUN_03e88ba4(uVar3,*(undefined8 *)(unaff_x29 + -0x50),
                             *(undefined8 *)PTR_DAT_06329590);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_04cfbd64(auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(unaff_x29 + -0x28),unaff_w22,
                           unaff_x29 + -0x1c,unaff_x29 + -0x20);
      puVar7 = PTR_DAT_0632fed8;
      if ((uVar8 & 1) == 0) goto LAB_04d0367c;
      uVar11 = *(uint *)(unaff_x29 + -0x20);
      uVar2 = *(uint *)(unaff_x29 + -0x14);
      iVar10 = **(int **)(unaff_x29 + -0x30);
      *(long *)(unaff_x29 + -0x40) = (long)(int)uVar2;
      lVar13 = *(long *)puVar7;
      **(int **)(unaff_x29 + -0x30) = uVar11 + iVar10;
      if (uVar6 < uVar2) {
        FUN_04d9bcc4(0);
      }
      if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      lVar13 = *(long *)PTR_DAT_0632fee0;
      if (unaff_w22 < uVar11) {
        FUN_04d9bcc4(0);
      }
      lVar13 = *(long *)(lVar13 + 0x20);
      *(long *)(unaff_x29 + -0x58) = (long)(int)uVar11;
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      lVar9 = *(long *)(unaff_x29 + -0x40);
      iVar10 = (int)*(long *)(unaff_x29 + -0x58);
      lVar13 = lVar9 << 1;
      uVar6 = uVar6 - (int)lVar9;
      unaff_x26 = (ulong)uVar6;
      unaff_w22 = unaff_w22 - iVar10;
      *(long *)(unaff_x29 + -0x28) = *(long *)(unaff_x29 + -0x28) + *(long *)(unaff_x29 + -0x58);
      if (0x55555554 < iVar10 * -0x55555555 + 0x2aaaaaaaU) {
        if ((int)uVar6 < 1) goto LAB_04d0368c;
        uVar8 = 0;
        goto LAB_04d0363c;
      }
      if (uVar6 == 0) goto LAB_04d0368c;
      *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x50);
LAB_04d032c4:
      unaff_x23 = (long)puVar1 + lVar13;
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_04cfbd64(unaff_x23,unaff_x26,*(undefined8 *)(unaff_x29 + -0x28),unaff_w22,
                           unaff_x29 + -0xc,unaff_x29 + -0x10);
      unaff_x19 = (long)*(int *)(unaff_x29 + -0x10);
      **(int **)(unaff_x29 + -0x30) = *(int *)(unaff_x29 + -0x10) + **(int **)(unaff_x29 + -0x30);
      if ((uVar8 & 1) != 0) goto LAB_04d0368c;
      unaff_x24 = (long)(int)*(uint *)(unaff_x29 + -0xc);
      unaff_x20 = *(long *)PTR_DAT_0632fed8;
    } while (*(uint *)(unaff_x29 + -0xc) <= (uint)unaff_x26);
  } while( true );
LAB_04d0367c:
  lVar13 = 0;
  **(undefined4 **)(unaff_x29 + -0x30) = 0;
  goto LAB_04d03690;
  while( true ) {
    uVar8 = uVar8 + 1;
    lVar13 = 1;
    if (unaff_x26 <= uVar8) break;
LAB_04d0363c:
    uVar5 = *(ushort *)(unaff_x23 + lVar9 * 2 + unaff_x24 * 2 + uVar8 * 2);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if ((0x20 < uVar5) || ((1L << ((ulong)uVar5 & 0x3f) & 0x100002600U) == 0)) goto LAB_04d0367c;
  }
LAB_04d03690:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04d036dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar13);
}


