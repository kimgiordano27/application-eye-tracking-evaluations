/*
FUNCTION_NAME: Drawing.CommandBuilder.JobWireMesh.Execute_000000F5$PostfixBurstDelegate$$BeginInvoke
ENTRY_POINT: 01ed7c18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void Drawing_CommandBuilder_JobWireMesh_Execute_000000F5_PostfixBurstDelegate__BeginInvoke
               (ulong param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *in_x6;
  byte *in_x7;
  uint uVar8;
  dword *pdVar9;
  Elf64_Ehdr *pEVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  ulong in_x10;
  byte *pbVar16;
  ulong in_x11;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  long in_x12;
  ulong uVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  long in_x13;
  byte *pbVar24;
  byte *pbVar25;
  ulong in_x14;
  ulong uVar26;
  ulong in_x15;
  ulong uVar27;
  byte *pbVar28;
  byte *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int iVar29;
  long unaff_x26;
  long unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  double dVar30;
  double dVar31;
  double dVar32;
  double unaff_d9;
  byte bVar33;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  int *in_stack_00000020;
  int *in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000058;
  int *in_stack_00000070;
  Elf64_Ehdr *pEStack0000000000000078;
  Elf64_Ehdr *pEStack0000000000000080;
  Elf64_Ehdr *in_stack_00000088;
  int *in_stack_00000090;
  int *in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_00000da8;
  
code_r0x01ed7c18:
  uVar12 = in_x10 + in_x11;
  *(ulong *)(unaff_x29 + in_x15) = in_x12 << (in_x10 & 7) | in_x14;
  *unaff_x28 = uVar12;
  piVar15 = (int *)(in_x6 + in_x13 * 4);
LAB_01ed7d04:
  *piVar15 = *piVar15 + 1;
LAB_01ed7d10:
  uVar17 = uVar12 >> 3;
  uVar20 = uVar12 & 7;
  param_1 = param_1 - 1;
  uVar12 = uVar12 + *(byte *)(unaff_x23 + (ulong)*unaff_x19);
  *(ulong *)(unaff_x29 + uVar17) =
       (ulong)*(ushort *)(unaff_x27 + (ulong)*unaff_x19 * 2) << uVar20 |
       (ulong)*(byte *)(unaff_x29 + uVar17);
  *unaff_x28 = uVar12;
  unaff_x19 = unaff_x19 + 1;
joined_r0x01ed7d40:
  if (param_1 == 0) {
joined_r0x01ed7d4c:
    pbVar4 = in_x7;
    if (in_stack_00000088 == (Elf64_Ehdr *)0x0) {
      if (in_stack_00000010._4_4_ == 0) {
        *in_stack_00000030 = 0;
        *in_stack_00000008 = 0;
        FUN_01ed81f0(&stack0x000002a8,unaff_x21,in_stack_000000a0);
      }
      if (*(long *)(in_stack_00000018 + 0x28) != in_stack_00000da8) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar12 = *unaff_x28;
    pEStack0000000000000078 = in_stack_00000088;
    if ((Elf64_Ehdr *)0x17fff < in_stack_00000088) {
      pEStack0000000000000078 = (Elf64_Ehdr *)0x18000;
    }
    FUN_01eb255c(pEStack0000000000000078,0);
    uVar17 = *unaff_x28;
    uVar20 = uVar17 >> 3;
    *(ulong *)(unaff_x29 + uVar20) = (ulong)*(byte *)(unaff_x29 + uVar20);
    *unaff_x28 = uVar17 + 0xd;
    uVar17 = FUN_01ed8040(in_stack_00000038,pbVar4,pEStack0000000000000078,&stack0x00000ca8,
                          &stack0x000000a8);
    FUN_01ed81f0(&stack0x000002a8,unaff_x21,in_stack_000000a0);
    pbVar28 = pbVar4;
    unaff_x19 = pbVar4;
    pEStack0000000000000080 = pEStack0000000000000078;
    do {
      memcpy(&stack0x000002a8,&DAT_010d8300,0x200);
      in_x7 = pbVar28 + (long)pEStack0000000000000080;
      if ((Elf64_Ehdr *)0xf < pEStack0000000000000080) {
        pdVar9 = (dword *)((long)&pEStack0000000000000080[-1].e_shentsize + 1);
        pbVar16 = pbVar28 + 2;
        if (&in_stack_00000088[-1].e_flags <= pdVar9) {
          pdVar9 = &in_stack_00000088[-1].e_flags;
        }
        pbVar1 = pbVar28 + (long)pdVar9;
        if (pbVar16 <= pbVar1) {
          iVar11 = -1;
          pbVar25 = pbVar28;
LAB_01ed6e20:
          lVar14 = *(long *)(pbVar25 + 1);
          uVar20 = 0x21;
          pbVar25 = pbVar25 + 1;
          do {
            pbVar22 = pbVar16;
            pbVar16 = pbVar25 + -(long)iVar11;
            uVar27 = lVar14 * unaff_x25;
            lVar14 = *(long *)pbVar22;
            uVar27 = uVar27 >> 0x31;
            iVar29 = (int)unaff_x26;
            if (((*(int *)pbVar25 == *(int *)pbVar16) && (pbVar16 < pbVar25)) &&
               (pbVar25[4] == pbVar16[4])) {
              *(int *)(unaff_x24 + uVar27 * 4) = (int)pbVar25 - iVar29;
LAB_01ed6e74:
              if ((long)pbVar25 - (long)pbVar16 <= unaff_x22) goto LAB_01ed6ed0;
            }
            else {
              iVar13 = *(int *)(unaff_x24 + uVar27 * 4);
              *(int *)(unaff_x24 + uVar27 * 4) = (int)pbVar25 - iVar29;
              pbVar16 = (byte *)(unaff_x26 + iVar13);
              if ((*(int *)pbVar25 == *(int *)pbVar16) && (pbVar25[4] == pbVar16[4]))
              goto LAB_01ed6e74;
            }
            uVar27 = uVar20 >> 5;
            if (pbVar1 < pbVar22 + uVar27) break;
            uVar20 = (ulong)((int)uVar20 + 1);
            pbVar16 = pbVar22 + uVar27;
            pbVar25 = pbVar22;
          } while( true );
        }
      }
LAB_01ed798c:
      in_stack_00000088 = (Elf64_Ehdr *)((long)in_stack_00000088 - (long)pEStack0000000000000080);
      pEStack0000000000000080 = in_stack_00000088;
      if ((Elf64_Ehdr *)0xffff < in_stack_00000088) {
        pEStack0000000000000080 = (Elf64_Ehdr *)0x10000;
      }
      if ((in_stack_00000088 == (Elf64_Ehdr *)0x0) ||
         (pEStack0000000000000078 =
               (Elf64_Ehdr *)
               (pEStack0000000000000078->e_ident_magic_str +
               (long)(pEStack0000000000000080->e_ident_magic_str + -2)),
         &Elf64_Ehdr_00100000 < pEStack0000000000000078))
      goto Drawing_CommandBuilder_JobWireMesh_Execute_000000F5_PostfixBurstDelegate___ctor;
      memset(&stack0x000004a8,0,0x800);
      pEVar10 = (Elf64_Ehdr *)0x0;
      do {
        pbVar28 = in_x7 + (long)pEVar10;
        pEVar10 = (Elf64_Ehdr *)((long)&pEVar10->e_shoff + 3);
        *(long *)(&stack0x000004a8 + (ulong)*pbVar28 * 8) =
             *(long *)(&stack0x000004a8 + (ulong)*pbVar28 * 8) + 1;
      } while (pEVar10 < pEStack0000000000000080);
      uVar20 = (ulong)((long)&pEStack0000000000000080->e_shoff + 2U) / 0x2b;
      dVar32 = (double)uVar20;
      if (pEStack0000000000000080 < (Elf64_Ehdr *)0x2ad6) {
        dVar30 = (double)(&DAT_010d72f8)[uVar20];
      }
      else {
        dVar30 = log2(dVar32);
      }
      lVar14 = 0;
      dVar32 = dVar32 * (dVar30 + unaff_d9) + 200.0;
      do {
        uVar20 = *(ulong *)(&stack0x000004a8 + lVar14 * 8);
        bVar33 = *(byte *)(unaff_x23 + lVar14);
        if (uVar20 < 0x100) {
          dVar30 = (double)(&DAT_010d72f8)[uVar20];
        }
        else {
          dVar30 = log2((double)uVar20);
        }
        dVar31 = (double)NEON_ucvtf((ulong)bVar33);
        lVar14 = lVar14 + 1;
        dVar32 = dVar32 - (dVar30 + dVar31) * (double)uVar20;
      } while (lVar14 != 0x100);
      unaff_x21 = in_stack_00000058;
      if (dVar32 < 0.0)
      goto Drawing_CommandBuilder_JobWireMesh_Execute_000000F5_PostfixBurstDelegate___ctor;
      uVar27 = 0x14;
      uVar8 = (int)pEStack0000000000000078 - 1;
      uVar20 = uVar12 + 3;
      do {
        uVar5 = uVar20 & 7;
        uVar26 = uVar20 >> 3;
        uVar7 = uVar27;
        if (8 - uVar5 <= uVar27) {
          uVar7 = 8 - uVar5;
        }
        uVar21 = (uint)uVar7;
        uVar2 = uVar8 & (-1 << (ulong)(uVar21 & 0x1f) ^ 0xffffffffU);
        uVar27 = uVar27 - uVar7;
        uVar8 = uVar8 >> (ulong)(uVar21 & 0x1f);
        uVar20 = uVar7 + uVar20;
        *(byte *)(unaff_x29 + uVar26) =
             ((byte)(-1 << (ulong)(uVar21 + (int)uVar5 & 0x1f)) | (byte)(-1 << uVar5) ^ 0xff) &
             *(byte *)(unaff_x29 + uVar26) | (byte)(uVar2 << uVar5);
        pbVar28 = in_x7;
      } while (uVar27 != 0);
    } while( true );
  }
  goto LAB_01ed7d10;
LAB_01ed6ed0:
  pbVar24 = in_x7 + (-5 - (long)pbVar25);
  uVar20 = (ulong)pbVar24 >> 3;
  pbVar22 = pbVar25 + 5;
  if (uVar20 == 0) {
    uVar27 = 0;
    pbVar23 = pbVar22;
  }
  else {
    uVar27 = (ulong)pbVar24 & 0xfffffffffffffff8;
    lVar14 = 0;
    pbVar23 = pbVar22 + uVar27;
    do {
      if (*(ulong *)(pbVar22 + lVar14) != *(ulong *)(pbVar16 + lVar14 + 5)) {
        uVar20 = *(ulong *)(pbVar16 + lVar14 + 5) ^ *(ulong *)(pbVar22 + lVar14);
        uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        uVar20 = lVar14 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
        goto LAB_01ed6f28;
      }
      uVar20 = uVar20 - 1;
      lVar14 = lVar14 + 8;
    } while (uVar20 != 0);
  }
  uVar7 = (ulong)pbVar24 & 7;
  uVar20 = uVar27;
  if (uVar7 != 0) {
    uVar26 = uVar27 | uVar7;
    do {
      uVar20 = uVar27;
      if (pbVar16[uVar27 + 5] != *pbVar23) break;
      pbVar23 = pbVar23 + 1;
      uVar7 = uVar7 - 1;
      uVar27 = uVar27 + 1;
      uVar20 = uVar26;
    } while (uVar7 != 0);
  }
LAB_01ed6f28:
  uVar27 = (long)pbVar25 - (long)unaff_x19;
  if (uVar27 >> 1 < 0xc21) {
    if (5 < uVar27) {
      if (uVar27 < 0x82) {
        uVar5 = uVar27 - 2;
        uVar7 = *unaff_x28;
        uVar8 = ((uint)LZCOUNT((int)uVar5) ^ 0x1f) - 1;
        uVar19 = (ulong)uVar8;
        uVar6 = uVar5 >> (uVar19 & 0x3f);
        lVar14 = uVar8 * 2 + uVar6 + 0x2a;
        uVar26 = uVar7 + *(byte *)(unaff_x21 + lVar14);
        *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar7 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
        *unaff_x28 = uVar26;
        uVar7 = uVar26 + uVar19;
        *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
             uVar5 - (uVar6 << (uVar19 & 0x3f)) << (uVar26 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
        *unaff_x28 = uVar7;
        piVar15 = (int *)(&stack0x000002a8 + lVar14 * 4);
      }
      else {
        if (0x841 < uVar27) {
          uVar7 = *unaff_x28;
          uVar26 = uVar7 + *(byte *)(unaff_x21 + 0x3d);
          *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
               (ulong)*(ushort *)(in_stack_000000a0 + 0x7a) << (uVar7 & 7) |
               (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
          *unaff_x28 = uVar26;
          uVar7 = uVar26 + 0xc;
          *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
               uVar27 - 0x842 << (uVar26 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
          piVar15 = in_stack_00000070;
          goto LAB_01ed70d0;
        }
        uVar7 = *unaff_x28;
        uVar5 = (ulong)((uint)LZCOUNT((int)(uVar27 - 0x42)) ^ 0x1f);
        lVar14 = uVar5 + 0x32;
        uVar26 = uVar7 + *(byte *)(unaff_x21 + lVar14);
        *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar7 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
        *unaff_x28 = uVar26;
        uVar7 = uVar26 + uVar5;
        *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
             (-1L << uVar5) + (uVar27 - 0x42) << (uVar26 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
        *unaff_x28 = uVar7;
        piVar15 = (int *)(&stack0x000002a8 + lVar14 * 4);
      }
      goto LAB_01ed70d4;
    }
    uVar26 = *unaff_x28;
    lVar14 = uVar27 + 0x28;
    uVar7 = uVar26 + *(byte *)(unaff_x21 + lVar14);
    *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
         (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar26 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
    *unaff_x28 = uVar7;
    *(int *)(&stack0x000002a8 + lVar14 * 4) = *(int *)(&stack0x000002a8 + lVar14 * 4) + 1;
    if (uVar27 == 0) goto LAB_01ed7114;
  }
  else {
    if ((0x3d4 < uVar17) &&
       (uVar7 = ((long)unaff_x19 - (long)pbVar4) * 0x32, uVar7 < uVar27 || uVar7 - uVar27 == 0)) {
      FUN_01ed7fac(pbVar4,pbVar25,uVar12);
      in_stack_00000088 = (Elf64_Ehdr *)(pbVar28 + ((long)in_stack_00000088 - (long)pbVar25));
      in_x7 = pbVar25;
      goto joined_r0x01ed7d4c;
    }
    if (uVar27 < 0x5842) {
      uVar7 = *unaff_x28;
      uVar26 = uVar7 + *(byte *)(unaff_x21 + 0x3e);
      *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + 0x7c) << (uVar7 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
      *unaff_x28 = uVar26;
      uVar7 = uVar26 + 0xe;
      *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
           uVar27 - 0x1842 << (uVar26 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
      piVar15 = in_stack_00000020;
    }
    else {
      uVar7 = *unaff_x28;
      uVar26 = uVar7 + *(byte *)(unaff_x21 + 0x3f);
      *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + 0x7e) << (uVar7 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
      *unaff_x28 = uVar26;
      uVar7 = uVar26 + 0x18;
      *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
           uVar27 - 0x5842 << (uVar26 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
      piVar15 = in_stack_00000028;
    }
LAB_01ed70d0:
    *unaff_x28 = uVar7;
LAB_01ed70d4:
    *piVar15 = *piVar15 + 1;
  }
  do {
    uVar26 = uVar7 >> 3;
    uVar5 = uVar7 & 7;
    uVar27 = uVar27 - 1;
    uVar7 = uVar7 + *(byte *)(unaff_x23 + (ulong)*unaff_x19);
    *(ulong *)(unaff_x29 + uVar26) =
         (ulong)*(ushort *)(unaff_x27 + (ulong)*unaff_x19 * 2) << uVar5 |
         (ulong)*(byte *)(unaff_x29 + uVar26);
    *unaff_x28 = uVar7;
    unaff_x19 = unaff_x19 + 1;
  } while (uVar27 != 0);
LAB_01ed7114:
  iVar13 = (int)((long)pbVar25 - (long)pbVar16);
  if (iVar11 == iVar13) {
    uVar26 = uVar7 + *(byte *)(unaff_x21 + 0x40);
    *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
         (ulong)*(ushort *)(in_stack_000000a0 + 0x80) << (uVar7 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
    piVar15 = in_stack_00000098;
    iVar13 = iVar11;
  }
  else {
    uVar27 = (long)iVar13 + 3;
    uVar8 = (uint)LZCOUNT((int)uVar27) ^ 0x1f;
    uVar19 = (ulong)(uVar8 - 1);
    uVar6 = uVar27 >> (uVar19 & 0x3f);
    lVar14 = ((ulong)(uVar8 * 2 - 4) | uVar6 & 1) + 0x50;
    uVar5 = uVar7 + *(byte *)(unaff_x21 + lVar14);
    *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
         (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar7 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
    *unaff_x28 = uVar5;
    uVar26 = uVar5 + uVar19;
    *(ulong *)(unaff_x29 + (uVar5 >> 3)) =
         uVar27 - ((uVar6 & 1 | 2) << (uVar19 & 0x3f)) << (uVar5 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar5 >> 3));
    piVar15 = (int *)(&stack0x000002a8 + lVar14 * 4);
  }
  *unaff_x28 = uVar26;
  uVar27 = uVar20 + 5;
  *piVar15 = *piVar15 + 1;
  if (uVar27 < 0xc) {
    lVar14 = uVar20 + 1;
    bVar33 = *(byte *)(unaff_x21 + lVar14);
    *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
         (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar26 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
    *unaff_x28 = uVar26 + bVar33;
    piVar15 = (int *)(&stack0x000002a8 + lVar14 * 4);
  }
  else if (uVar27 < 0x48) {
    uVar20 = uVar20 - 3;
    uVar8 = ((uint)LZCOUNT((int)uVar20) ^ 0x1f) - 1;
    uVar5 = (ulong)uVar8;
    uVar19 = uVar20 >> (uVar5 & 0x3f);
    lVar14 = uVar8 * 2 + uVar19 + 4;
    uVar7 = uVar26 + *(byte *)(unaff_x21 + lVar14);
    *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
         (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar26 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
    *unaff_x28 = uVar7;
    *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
         uVar20 - (uVar19 << (uVar5 & 0x3f)) << (uVar7 & 7) |
         (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
    *unaff_x28 = uVar7 + uVar5;
    piVar15 = (int *)(&stack0x000002a8 + lVar14 * 4);
  }
  else {
    piVar15 = in_stack_00000098;
    if (uVar27 < 0x88) {
      lVar14 = (uVar20 - 3 >> 5) + 0x1e;
      uVar5 = uVar26 + *(byte *)(unaff_x21 + lVar14);
      *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar26 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
      *unaff_x28 = uVar5;
      uVar7 = uVar5 + 5;
      *(ulong *)(unaff_x29 + (uVar5 >> 3)) =
           (uVar20 - 3 & 0x1f) << (uVar5 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar5 >> 3));
      *unaff_x28 = uVar7;
      bVar33 = *(byte *)(unaff_x21 + 0x40);
      *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + 0x80) << (uVar7 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
      *unaff_x28 = uVar7 + bVar33;
      *(int *)(&stack0x000002a8 + lVar14 * 4) = *(int *)(&stack0x000002a8 + lVar14 * 4) + 1;
    }
    else {
      uVar7 = uVar26 >> 3;
      if (uVar27 < 0x848) {
        uVar19 = (ulong)((uint)LZCOUNT((int)(uVar20 - 0x43)) ^ 0x1f);
        lVar14 = uVar19 + 0x1c;
        uVar5 = uVar26 + *(byte *)(unaff_x21 + lVar14);
        *(ulong *)(unaff_x29 + uVar7) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar26 & 7) |
             (ulong)*(byte *)(unaff_x29 + uVar7);
        *unaff_x28 = uVar5;
        uVar7 = uVar5 + uVar19;
        *(ulong *)(unaff_x29 + (uVar5 >> 3)) =
             (-1L << uVar19) + (uVar20 - 0x43) << (uVar5 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar5 >> 3));
        *unaff_x28 = uVar7;
        bVar33 = *(byte *)(unaff_x21 + 0x40);
        *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x80) << (uVar7 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
        *unaff_x28 = uVar7 + bVar33;
        *(int *)(&stack0x000002a8 + lVar14 * 4) = *(int *)(&stack0x000002a8 + lVar14 * 4) + 1;
      }
      else {
        uVar5 = uVar26 + *(byte *)(unaff_x21 + 0x27);
        *(ulong *)(unaff_x29 + uVar7) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x4e) << (uVar26 & 7) |
             (ulong)*(byte *)(unaff_x29 + uVar7);
        *unaff_x28 = uVar5;
        uVar7 = uVar5 + 0x18;
        *(ulong *)(unaff_x29 + (uVar5 >> 3)) =
             uVar20 - 0x843 << (uVar5 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar5 >> 3));
        *unaff_x28 = uVar7;
        bVar33 = *(byte *)(unaff_x21 + 0x40);
        *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x80) << (uVar5 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
        *unaff_x28 = uVar7 + bVar33;
      }
    }
  }
  unaff_x19 = pbVar25 + uVar27;
  *piVar15 = *piVar15 + 1;
  if (pbVar1 <= unaff_x19) goto LAB_01ed798c;
  uVar20 = *(ulong *)(unaff_x19 + -3);
  iVar3 = (int)unaff_x19 - iVar29;
  *(int *)(unaff_x24 + (uVar20 * unaff_x25 >> 0x2f & 0x1fffc)) = iVar3 + -3;
  *(int *)(unaff_x24 + ((uVar20 >> 8) * unaff_x25 >> 0x2f & 0x1fffc)) = iVar3 + -2;
  uVar27 = (uVar20 >> 0x18) * unaff_x25 >> 0x2f & 0x1fffc;
  *(int *)(unaff_x24 + ((uVar20 >> 0x10) * unaff_x25 >> 0x2f & 0x1fffc)) = iVar3 + -1;
  iVar11 = *(int *)(unaff_x24 + uVar27);
  *(int *)(unaff_x24 + uVar27) = iVar3;
  piVar15 = (int *)(unaff_x26 + iVar11);
  iVar11 = iVar13;
  if ((*(int *)unaff_x19 == *piVar15) && (unaff_x19[4] == *(byte *)(piVar15 + 1))) {
    do {
      pbVar25 = in_x7 + (-5 - (long)unaff_x19);
      uVar20 = (ulong)pbVar25 >> 3;
      pbVar16 = unaff_x19 + 5;
      if (uVar20 == 0) {
        uVar27 = 0;
        pbVar22 = pbVar16;
      }
      else {
        uVar27 = (ulong)pbVar25 & 0xfffffffffffffff8;
        lVar14 = 0;
        pbVar22 = pbVar16 + uVar27;
        do {
          uVar7 = *(ulong *)((long)piVar15 + lVar14 + 5);
          if (*(ulong *)(pbVar16 + lVar14) != uVar7) {
            uVar7 = uVar7 ^ *(ulong *)(pbVar16 + lVar14);
            uVar20 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar20 = lVar14 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
            goto LAB_01ed754c;
          }
          uVar20 = uVar20 - 1;
          lVar14 = lVar14 + 8;
        } while (uVar20 != 0);
      }
      uVar7 = (ulong)pbVar25 & 7;
      uVar20 = uVar27;
      if (uVar7 != 0) {
        uVar26 = uVar27 | uVar7;
        do {
          uVar20 = uVar27;
          if (*(byte *)((long)piVar15 + uVar27 + 5) != *pbVar22) break;
          pbVar22 = pbVar22 + 1;
          uVar7 = uVar7 - 1;
          uVar27 = uVar27 + 1;
          uVar20 = uVar26;
        } while (uVar7 != 0);
      }
LAB_01ed754c:
      iVar11 = iVar13;
      if (unaff_x22 < (long)unaff_x19 - (long)piVar15) break;
      uVar27 = uVar20 + 5;
      if (uVar27 < 10) {
        uVar26 = *unaff_x28;
        lVar14 = uVar20 + 0x13;
        uVar7 = uVar26 + *(byte *)(unaff_x21 + lVar14);
        *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar26 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
        *unaff_x28 = uVar7;
        piVar18 = (int *)(&stack0x000002a8 + lVar14 * 4);
      }
      else if (uVar27 < 0x86) {
        uVar20 = uVar20 - 1;
        uVar7 = *unaff_x28;
        uVar8 = ((uint)LZCOUNT((int)uVar20) ^ 0x1f) - 1;
        uVar5 = (ulong)uVar8;
        uVar19 = uVar20 >> (uVar5 & 0x3f);
        lVar14 = uVar8 * 2 + uVar19 + 0x14;
        uVar26 = uVar7 + *(byte *)(unaff_x21 + lVar14);
        *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar7 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
        *unaff_x28 = uVar26;
        uVar7 = uVar26 + uVar5;
        *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
             uVar20 - (uVar19 << (uVar5 & 0x3f)) << (uVar26 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
        *unaff_x28 = uVar7;
        piVar18 = (int *)(&stack0x000002a8 + lVar14 * 4);
      }
      else if (uVar27 < 0x846) {
        uVar7 = *unaff_x28;
        uVar5 = (ulong)((uint)LZCOUNT((int)(uVar20 - 0x41)) ^ 0x1f);
        lVar14 = uVar5 + 0x1c;
        uVar26 = uVar7 + *(byte *)(unaff_x21 + lVar14);
        *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar7 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
        *unaff_x28 = uVar26;
        uVar7 = uVar26 + uVar5;
        *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
             (-1L << uVar5) + (uVar20 - 0x41) << (uVar26 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
        *unaff_x28 = uVar7;
        piVar18 = (int *)(&stack0x000002a8 + lVar14 * 4);
      }
      else {
        uVar7 = *unaff_x28;
        uVar26 = uVar7 + *(byte *)(unaff_x21 + 0x27);
        *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x4e) << (uVar7 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
        *unaff_x28 = uVar26;
        uVar7 = uVar26 + 0x18;
        *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
             uVar20 - 0x841 << (uVar26 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
        *unaff_x28 = uVar7;
        piVar18 = in_stack_00000090;
      }
      iVar13 = (int)((long)unaff_x19 - (long)piVar15);
      uVar20 = (long)iVar13 + 3;
      uVar8 = (uint)LZCOUNT((int)uVar20) ^ 0x1f;
      uVar5 = (ulong)(uVar8 - 1);
      *piVar18 = *piVar18 + 1;
      uVar19 = uVar20 >> (uVar5 & 0x3f);
      lVar14 = ((ulong)(uVar8 * 2 - 4) | uVar19 & 1) + 0x50;
      uVar26 = uVar7 + *(byte *)(unaff_x21 + lVar14);
      *(ulong *)(unaff_x29 + (uVar7 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar7 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar7 >> 3));
      *unaff_x28 = uVar26;
      *(ulong *)(unaff_x29 + (uVar26 >> 3)) =
           uVar20 - ((uVar19 & 1 | 2) << (uVar5 & 0x3f)) << (uVar26 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar26 >> 3));
      *unaff_x28 = uVar26 + uVar5;
      unaff_x19 = unaff_x19 + uVar27;
      *(int *)(&stack0x000002a8 + lVar14 * 4) = *(int *)(&stack0x000002a8 + lVar14 * 4) + 1;
      if (pbVar1 <= unaff_x19) goto LAB_01ed798c;
      uVar20 = *(ulong *)(unaff_x19 + -3);
      iVar3 = (int)unaff_x19 - iVar29;
      *(int *)(unaff_x24 + (uVar20 * unaff_x25 >> 0x2f & 0x1fffc)) = iVar3 + -3;
      *(int *)(unaff_x24 + ((uVar20 >> 8) * unaff_x25 >> 0x2f & 0x1fffc)) = iVar3 + -2;
      uVar27 = (uVar20 >> 0x18) * unaff_x25 >> 0x2f & 0x1fffc;
      *(int *)(unaff_x24 + ((uVar20 >> 0x10) * unaff_x25 >> 0x2f & 0x1fffc)) = iVar3 + -1;
      iVar11 = *(int *)(unaff_x24 + uVar27);
      *(int *)(unaff_x24 + uVar27) = iVar3;
      piVar15 = (int *)(unaff_x26 + iVar11);
      iVar11 = iVar13;
      if ((*(int *)unaff_x19 != *piVar15) || (unaff_x19[4] != *(byte *)(piVar15 + 1))) break;
    } while( true );
  }
  pbVar16 = unaff_x19 + 2;
  pbVar25 = unaff_x19;
  if (pbVar1 < pbVar16) goto LAB_01ed798c;
  goto LAB_01ed6e20;
Drawing_CommandBuilder_JobWireMesh_Execute_000000F5_PostfixBurstDelegate___ctor:
  in_x6 = &stack0x000002a8;
  if (in_x7 <= unaff_x19) goto joined_r0x01ed7d4c;
  param_1 = (long)in_x7 - (long)unaff_x19;
  if (0xc20 < param_1 >> 1) {
    if ((uVar17 < 0x3d5) ||
       (uVar17 = ((long)unaff_x19 - (long)pbVar4) * 0x32, param_1 <= uVar17 && uVar17 - param_1 != 0
       )) {
      if (param_1 < 0x5842) {
        uVar17 = *unaff_x28;
        uVar12 = uVar17 + *(byte *)(unaff_x21 + 0x3e);
        *(ulong *)(unaff_x29 + (uVar17 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x7c) << (uVar17 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar17 >> 3));
        *unaff_x28 = uVar12;
        *(ulong *)(unaff_x29 + (uVar12 >> 3)) =
             param_1 - 0x1842 << (uVar12 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar12 >> 3));
        uVar12 = uVar12 + 0xe;
        piVar15 = in_stack_00000020;
      }
      else {
        uVar17 = *unaff_x28;
        uVar12 = uVar17 + *(byte *)(unaff_x21 + 0x3f);
        *(ulong *)(unaff_x29 + (uVar17 >> 3)) =
             (ulong)*(ushort *)(in_stack_000000a0 + 0x7e) << (uVar17 & 7) |
             (ulong)*(byte *)(unaff_x29 + (uVar17 >> 3));
        *unaff_x28 = uVar12;
        *(ulong *)(unaff_x29 + (uVar12 >> 3)) =
             param_1 - 0x5842 << (uVar12 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar12 >> 3));
        uVar12 = uVar12 + 0x18;
        piVar15 = in_stack_00000028;
      }
      *unaff_x28 = uVar12;
      *piVar15 = *piVar15 + 1;
      do {
        uVar17 = uVar12 >> 3;
        uVar20 = uVar12 & 7;
        param_1 = param_1 - 1;
        uVar12 = uVar12 + *(byte *)(unaff_x23 + (ulong)*unaff_x19);
        *(ulong *)(unaff_x29 + uVar17) =
             (ulong)*(ushort *)(unaff_x27 + (ulong)*unaff_x19 * 2) << uVar20 |
             (ulong)*(byte *)(unaff_x29 + uVar17);
        *unaff_x28 = uVar12;
        unaff_x19 = unaff_x19 + 1;
      } while (param_1 != 0);
    }
    else {
      FUN_01ed7fac(pbVar4,in_x7,uVar12);
    }
    goto joined_r0x01ed7d4c;
  }
  if (5 < param_1) {
    if (param_1 < 0x82) {
      uVar12 = param_1 - 2;
      uVar17 = *unaff_x28;
      uVar8 = ((uint)LZCOUNT((int)uVar12) ^ 0x1f) - 1;
      in_x11 = (ulong)uVar8;
      uVar20 = uVar12 >> (in_x11 & 0x3f);
      in_x13 = uVar8 * 2 + uVar20 + 0x2a;
      in_x12 = uVar12 - (uVar20 << (in_x11 & 0x3f));
      in_x10 = uVar17 + *(byte *)(unaff_x21 + in_x13);
      in_x15 = in_x10 >> 3;
      *(ulong *)(unaff_x29 + (uVar17 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + in_x13 * 2) << (uVar17 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar17 >> 3));
      *unaff_x28 = in_x10;
      in_x14 = (ulong)*(byte *)(unaff_x29 + in_x15);
      goto code_r0x01ed7c18;
    }
    if (param_1 < 0x842) {
      uVar12 = *unaff_x28;
      uVar20 = (ulong)((uint)LZCOUNT((int)(param_1 - 0x42)) ^ 0x1f);
      lVar14 = uVar20 + 0x32;
      uVar17 = uVar12 + *(byte *)(unaff_x21 + lVar14);
      *(ulong *)(unaff_x29 + (uVar12 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar12 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar12 >> 3));
      *unaff_x28 = uVar17;
      uVar12 = uVar17 + uVar20;
      *(ulong *)(unaff_x29 + (uVar17 >> 3)) =
           (-1L << uVar20) + (param_1 - 0x42) << (uVar17 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar17 >> 3));
      *unaff_x28 = uVar12;
      piVar15 = (int *)(in_x6 + lVar14 * 4);
    }
    else {
      uVar12 = *unaff_x28;
      uVar17 = uVar12 + *(byte *)(unaff_x21 + 0x3d);
      *(ulong *)(unaff_x29 + (uVar12 >> 3)) =
           (ulong)*(ushort *)(in_stack_000000a0 + 0x7a) << (uVar12 & 7) |
           (ulong)*(byte *)(unaff_x29 + (uVar12 >> 3));
      *unaff_x28 = uVar17;
      uVar12 = uVar17 + 0xc;
      *(ulong *)(unaff_x29 + (uVar17 >> 3)) =
           param_1 - 0x842 << (uVar17 & 7) | (ulong)*(byte *)(unaff_x29 + (uVar17 >> 3));
      *unaff_x28 = uVar12;
      piVar15 = in_stack_00000070;
    }
    goto LAB_01ed7d04;
  }
  uVar17 = *unaff_x28;
  lVar14 = param_1 + 0x28;
  uVar12 = uVar17 + *(byte *)(unaff_x21 + lVar14);
  *(ulong *)(unaff_x29 + (uVar17 >> 3)) =
       (ulong)*(ushort *)(in_stack_000000a0 + lVar14 * 2) << (uVar17 & 7) |
       (ulong)*(byte *)(unaff_x29 + (uVar17 >> 3));
  *unaff_x28 = uVar12;
  *(int *)(in_x6 + lVar14 * 4) = *(int *)(in_x6 + lVar14 * 4) + 1;
  goto joined_r0x01ed7d40;
}


