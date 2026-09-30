/*
FUNCTION_NAME: ES3Internal.ES3FileStream$$Dispose
ENTRY_POINT: 0337c140
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void ES3Internal_ES3FileStream__Dispose(ulong param_1,byte *param_2,long *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  uint *puVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  ulong unaff_x19;
  uint *puVar26;
  long unaff_x21;
  ulong uVar27;
  long unaff_x23;
  uint *unaff_x24;
  int iVar28;
  long unaff_x25;
  long unaff_x26;
  ulong uVar29;
  long unaff_x28;
  ulong uVar30;
  ulong unaff_x29;
  double dVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double unaff_d12;
  double unaff_d13;
  double unaff_d14;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined1 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  ulong *in_stack_000000b0;
  long *in_stack_000000b8;
  uint *in_stack_000000c0;
  byte *in_stack_000000c8;
  ulong in_stack_000000d0;
  long in_stack_000000d8;
  uint *in_stack_000000e0;
  long *in_stack_000000e8;
  undefined1 in_stack_000000f0 [16];
  int in_stack_000001f0;
  undefined8 in_stack_000009f8;
  undefined8 in_stack_00000a00;
  undefined8 in_stack_00000a08;
  undefined8 in_stack_00000a10;
  undefined8 in_stack_00000a18;
  undefined8 in_stack_00000a20;
  long in_stack_000012c8;
  
  do {
    puVar16 = unaff_x24 + 1;
    *unaff_x24 = (uint)param_1;
    memcpy(param_2,param_3,unaff_x19 & 0xffffffff);
    param_2 = param_2 + (unaff_x19 & 0xffffffff);
    plVar3 = in_stack_000000e8;
    do {
      in_stack_000000e8 = plVar3;
      uVar27 = (long)param_2 - (long)in_stack_000000c8;
      if ((double)uVar27 < (double)in_stack_000000d0 * unaff_d13) {
LAB_0337c3b8:
        uVar21 = (long)puVar16 - (long)in_stack_000000c0;
        FUN_033839f8(in_stack_000000d0,0,in_stack_000000b0,unaff_x26);
        uVar14 = *in_stack_000000b0;
        uVar29 = uVar14 >> 3;
        *(ulong *)(unaff_x26 + uVar29) = (ulong)*(byte *)(unaff_x26 + uVar29);
        *in_stack_000000b0 = uVar14 + 0xd;
        memset(&stack0x000003f8,0,0x400);
        in_stack_00000098[0xd] = 0;
        in_stack_00000098[0xc] = 0;
        in_stack_00000098[0xf] = 0;
        in_stack_00000098[0xe] = 0;
        in_stack_00000098[9] = 0;
        in_stack_00000098[8] = 0;
        in_stack_00000098[0xb] = 0;
        in_stack_00000098[10] = 0;
        in_stack_00000098[5] = 0;
        in_stack_00000098[4] = 0;
        in_stack_00000098[7] = 0;
        in_stack_00000098[6] = 0;
        in_stack_00000098[1] = 0;
        *in_stack_00000098 = 0;
        in_stack_00000098[3] = 0;
        in_stack_00000098[2] = 0;
        memset(&stack0x000000f0,0,0x200);
        pbVar18 = in_stack_000000c8;
        for (uVar14 = uVar27; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(int *)(&stack0x000003f8 + (ulong)*pbVar18 * 4) =
               *(int *)(&stack0x000003f8 + (ulong)*pbVar18 * 4) + 1;
          pbVar18 = pbVar18 + 1;
        }
        FUN_03391500(in_stack_00000088,&stack0x000003f8,uVar27,8,&stack0x00000f00,&stack0x000007f8,
                     in_stack_000000b0,unaff_x26);
        if (uVar21 == 0) {
          in_stack_000000f0._4_8_ = 0x100000001;
          in_stack_000001f0 = 1;
        }
        else {
          uVar27 = uVar21;
          if ((long)uVar21 < 0) {
            uVar27 = 0xffffffffffffffff;
          }
          if (0 < (long)uVar27) {
            uVar27 = 1;
          }
          uVar14 = (long)in_stack_000000c0 - (long)puVar16;
          if ((long)in_stack_000000c0 - (long)puVar16 <= (long)uVar21) {
            uVar14 = uVar21;
          }
          lVar19 = uVar27 * (uVar14 >> 2);
          puVar16 = in_stack_000000c0;
          do {
            lVar19 = lVar19 + -1;
            *(int *)(&stack0x000000f0 + (ulong)(byte)*puVar16 * 4) =
                 *(int *)(&stack0x000000f0 + (ulong)(byte)*puVar16 * 4) + 1;
            puVar16 = puVar16 + 1;
          } while (lVar19 != 0);
          in_stack_000000f0._4_8_ =
               CONCAT44(SUB84(in_stack_000000f0._4_8_,4) + 1,(int)in_stack_000000f0._4_8_ + 1);
          in_stack_000001f0 = in_stack_000001f0 + 1;
        }
        memset(&stack0x00001000,0,0x2c0);
        FUN_03394174(&stack0x000000f0,0x40,0xf,&stack0x00000a78,&stack0x00000e80);
        FUN_03394174(in_stack_00000080,0x40,0xe,&stack0x00000a78,in_stack_000000a0);
        FUN_03394b08(&stack0x00001000,0x40,&stack0x000009f8);
        uVar32 = *in_stack_00000060;
        in_stack_00000068[1] = in_stack_00000060[1];
        *in_stack_00000068 = uVar32;
        uVar32 = *in_stack_00000050;
        in_stack_00000058[1] = in_stack_00000050[1];
        *in_stack_00000058 = uVar32;
        uVar33 = in_stack_00000028[1];
        uVar32 = *in_stack_00000028;
        in_stack_00000038[3] = in_stack_00000a10;
        in_stack_00000038[2] = in_stack_00000a08;
        in_stack_00000038[5] = in_stack_00000a20;
        in_stack_00000038[4] = in_stack_00000a18;
        in_stack_00000038[1] = in_stack_00000a00;
        *in_stack_00000038 = in_stack_000009f8;
        uVar35 = in_stack_00000018[1];
        uVar34 = *in_stack_00000018;
        in_stack_00000030[1] = uVar33;
        *in_stack_00000030 = uVar32;
        in_stack_00000020[1] = uVar35;
        *in_stack_00000020 = uVar34;
        FUN_03394b08(in_stack_000000a0,0x40,in_stack_00000098);
        in_stack_00000048[6] = 0;
        in_stack_00000048[3] = 0;
        in_stack_00000048[2] = 0;
        in_stack_00000048[5] = 0;
        in_stack_00000048[4] = 0;
        in_stack_00000048[1] = 0;
        *in_stack_00000048 = 0;
        lVar19 = 0;
        puVar17 = in_stack_00000040;
        do {
          puVar1 = &stack0x00000e80 + lVar19;
          uVar7 = *(undefined1 *)(in_stack_00000010 + lVar19);
          uVar8 = ((undefined1 *)(in_stack_00000010 + lVar19))[8];
          lVar19 = lVar19 + 1;
          puVar17[-0x80] = *puVar1;
          *puVar17 = uVar7;
          puVar17[0xc0] = uVar8;
          puVar17 = puVar17 + 8;
        } while (lVar19 != 8);
        FUN_03391264(&stack0x00001000,0x2c0,&stack0x00000a78,in_stack_000000b0,unaff_x26);
        FUN_03391264(in_stack_000000a0,0x40,&stack0x00000a78,in_stack_000000b0,unaff_x26);
        if (uVar21 != 0) {
          uVar27 = *in_stack_000000b0;
          lVar19 = 0;
          pbVar18 = in_stack_000000c8;
          do {
            uVar29 = (ulong)in_stack_000000c0[lVar19] & 0xff;
            uVar25 = in_stack_000000c0[lVar19] >> 8;
            uVar14 = uVar27 + (byte)(&stack0x00000e80)[uVar29];
            *(ulong *)(unaff_x26 + (uVar27 >> 3)) =
                 (ulong)*(ushort *)(&stack0x000002f0 + uVar29 * 2) << (uVar27 & 7) |
                 (ulong)*(byte *)(unaff_x26 + (uVar27 >> 3));
            *in_stack_000000b0 = uVar14;
            uVar27 = uVar14 + *(uint *)(&DAT_01ae0378 + uVar29 * 4);
            *(ulong *)(unaff_x26 + (uVar14 >> 3)) =
                 (ulong)uVar25 << (uVar14 & 7) | (ulong)*(byte *)(unaff_x26 + (uVar14 >> 3));
            *in_stack_000000b0 = uVar27;
            if ((uint)uVar29 < 0x18) {
              for (iVar28 = *(int *)(&DAT_01ae0578 + uVar29 * 4) + uVar25; iVar28 != 0;
                  iVar28 = iVar28 + -1) {
                uVar14 = uVar27 >> 3;
                uVar29 = uVar27 & 7;
                uVar27 = uVar27 + (byte)(&stack0x00000f00)[*pbVar18];
                *(ulong *)(unaff_x26 + uVar14) =
                     (ulong)*(ushort *)(&stack0x000007f8 + (ulong)*pbVar18 * 2) << uVar29 |
                     (ulong)*(byte *)(unaff_x26 + uVar14);
                *in_stack_000000b0 = uVar27;
                pbVar18 = pbVar18 + 1;
              }
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 != (long)uVar21 >> 2);
        }
      }
      else {
        memset(&stack0x000003f8,0,0x400);
        uVar14 = 0;
        do {
          pbVar18 = (byte *)((long)in_stack_000000b8 + uVar14);
          uVar14 = uVar14 + 0x2b;
          *(int *)(&stack0x000003f8 + (ulong)*pbVar18 * 4) =
               *(int *)(&stack0x000003f8 + (ulong)*pbVar18 * 4) + 1;
        } while (uVar14 < in_stack_000000d0);
        uVar14 = 0;
        dVar38 = 0.0;
        puVar26 = (uint *)&stack0x000003f8;
        do {
          uVar25 = *puVar26;
          if (uVar25 < 0x100) {
            dVar37 = (double)(&DAT_01ab0ad8)[uVar25];
            dVar36 = (double)uVar25;
          }
          else {
            dVar36 = (double)uVar25;
            dVar37 = log2(dVar36);
          }
          uVar29 = (ulong)puVar26[1];
          if (puVar26[1] < 0x100) {
            dVar31 = (double)(&DAT_01ab0ad8)[uVar29];
          }
          else {
            dVar31 = log2((double)uVar29);
          }
          uVar14 = uVar14 + uVar25 + uVar29;
          puVar26 = puVar26 + 2;
          dVar38 = (dVar38 - dVar36 * dVar37) - dVar31 * (double)uVar29;
        } while (puVar26 < in_stack_000000e0);
        if (uVar14 == 0) {
          dVar37 = 0.0;
        }
        else {
          dVar37 = (double)uVar14;
          if (uVar14 < 0x100) {
            dVar36 = (double)(&DAT_01ab0ad8)[uVar14];
          }
          else {
            dVar36 = log2(dVar37);
          }
          dVar38 = dVar38 + dVar36 * dVar37;
        }
        if (dVar37 <= dVar38) {
          dVar37 = dVar38;
        }
        unaff_x26 = in_stack_00000090;
        if (dVar37 < ((double)in_stack_000000d0 * unaff_d12 * unaff_d13) / unaff_d14)
        goto LAB_0337c3b8;
        FUN_033839f8(in_stack_000000d0,1,in_stack_000000b0,in_stack_00000090);
        uVar25 = (int)*in_stack_000000b0 + 7;
        *in_stack_000000b0 = (ulong)uVar25 & 0xfffffff8;
        memcpy((void *)(in_stack_00000090 + (ulong)(uVar25 >> 3)),in_stack_000000b8,
               in_stack_000000d0);
        uVar27 = *in_stack_000000b0 + in_stack_000000d0 * 8;
        *in_stack_000000b0 = uVar27;
        *(undefined1 *)(in_stack_00000090 + (uVar27 >> 3)) = 0;
      }
      unaff_x29 = unaff_x29 - in_stack_000000d0;
      if (unaff_x29 == 0) {
        if (*(long *)(in_stack_00000008 + 0x28) != in_stack_000012c8) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      in_stack_000000d0 = unaff_x29;
      if (0x1ffff < unaff_x29) {
        in_stack_000000d0 = 0x20000;
      }
      plVar3 = (long *)((long)in_stack_000000e8 + in_stack_000000d0);
      param_2 = in_stack_000000c8;
      param_3 = in_stack_000000e8;
      puVar16 = in_stack_000000c0;
      if (0xf < in_stack_000000d0) {
        uVar14 = 0xffffffff;
        uVar27 = in_stack_000000d0 - 4;
        if (unaff_x29 - 0x10 <= in_stack_000000d0 - 4) {
          uVar27 = unaff_x29 - 0x10;
        }
        plVar4 = (long *)((long)in_stack_000000e8 + uVar27);
        do {
          lVar19 = *(long *)((long)param_3 + 1);
          uVar27 = 0x20;
          plVar5 = (long *)((long)param_3 + 1);
LAB_0337bb9c:
          do {
            plVar13 = plVar5;
            plVar5 = (long *)((long)plVar13 + (uVar27 >> 5));
            unaff_x26 = in_stack_00000090;
            if (plVar4 < plVar5) goto LAB_0337c124;
            uVar29 = lVar19 * unaff_x28;
            lVar19 = *plVar5;
            uVar29 = uVar29 >> 0x37;
            plVar20 = (long *)((long)plVar13 - (long)(int)uVar14);
            uVar27 = (ulong)((int)uVar27 + 1);
            iVar28 = (int)unaff_x25;
            iVar12 = (int)plVar13;
            if ((plVar20 < plVar13) && ((int)*plVar13 == (int)*plVar20)) {
              *(int *)(unaff_x21 + uVar29 * 4) = iVar12 - iVar28;
            }
            else {
              iVar9 = *(int *)(unaff_x21 + uVar29 * 4);
              *(int *)(unaff_x21 + uVar29 * 4) = iVar12 - iVar28;
              plVar20 = (long *)(unaff_x25 + iVar9);
              if ((int)*plVar13 != (int)*plVar20) goto LAB_0337bb9c;
            }
            uVar29 = (long)plVar13 - (long)plVar20;
          } while (unaff_x23 < (long)uVar29);
          uVar27 = (long)plVar3 + (-4 - (long)plVar13);
          uVar21 = uVar27 >> 3;
          piVar2 = (int *)((long)plVar13 + 4);
          if (uVar21 == 0) {
            uVar30 = 0;
            piVar15 = piVar2;
          }
          else {
            uVar30 = uVar27 & 0xfffffffffffffff8;
            lVar19 = 0;
            piVar15 = (int *)((long)piVar2 + uVar30);
            do {
              uVar23 = *(ulong *)((long)plVar20 + lVar19 + 4);
              if (*(ulong *)((long)piVar2 + lVar19) != uVar23) {
                uVar23 = uVar23 ^ *(ulong *)((long)piVar2 + lVar19);
                uVar27 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar19 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
                goto ES3Internal_ES3JSONReader__Read_bool;
              }
              uVar21 = uVar21 - 1;
              lVar19 = lVar19 + 8;
            } while (uVar21 != 0);
          }
          uVar27 = uVar27 & 7;
          uVar21 = uVar30;
          if (uVar27 != 0) {
            uVar23 = uVar30 | uVar27;
            do {
              uVar21 = uVar30;
              if (*(char *)((long)plVar20 + uVar30 + 4) != (char)*piVar15) break;
              piVar15 = (int *)((long)piVar15 + 1);
              uVar27 = uVar27 - 1;
              uVar30 = uVar30 + 1;
              uVar21 = uVar23;
            } while (uVar27 != 0);
          }
ES3Internal_ES3JSONReader__Read_bool:
          uVar24 = iVar12 - (int)param_3;
          uVar25 = uVar24;
          if (5 < uVar24) {
            if (uVar24 < 0x82) {
              uVar6 = uVar24 - 2;
              uVar10 = ((uint)LZCOUNT(uVar6) ^ 0x1f) - 1;
              uVar25 = uVar6 >> (ulong)(uVar10 & 0x1f);
              uVar25 = uVar25 + uVar10 * 2 + 2 |
                       (uVar6 - (uVar25 << (ulong)(uVar10 & 0x1f))) * 0x100;
            }
            else if (uVar24 < 0x842) {
              uVar25 = (uint)LZCOUNT(uVar24 - 0x42) ^ 0x1f;
              uVar25 = (uVar25 | ((-1 << (ulong)(uVar25 & 0x1f)) + (uVar24 - 0x42)) * 0x100) + 10;
            }
            else if (uVar24 >> 1 < 0xc21) {
              uVar25 = uVar24 * 0x100 - 0x841eb;
            }
            else {
              if (uVar24 < 0x5842) {
                iVar12 = -0x1841ea;
              }
              else {
                iVar12 = -0x5841e9;
              }
              uVar25 = uVar24 * 0x100 + iVar12;
            }
          }
          *puVar16 = uVar25;
          memcpy(param_2,param_3,(long)(int)uVar24);
          if ((int)uVar14 == (int)uVar29) {
            uVar25 = 0x40;
          }
          else {
            uVar25 = (int)uVar29 + 3;
            uVar6 = (uint)LZCOUNT(uVar25) ^ 0x1f;
            uVar11 = uVar6 - 1;
            uVar10 = uVar25 >> (ulong)(uVar11 & 0x1f);
            uVar25 = (uVar10 & 1 | uVar6 << 1 |
                     (uVar25 - ((uVar10 & 1 | 2) << (ulong)(uVar11 & 0x1f))) * 0x100) + 0x4c;
            uVar14 = uVar29 & 0xffffffff;
          }
          uVar27 = uVar21 + 4;
          puVar16[1] = uVar25;
          if (uVar27 < 0xc) {
            puVar16[2] = (int)uVar27 + 0x14;
            lVar19 = 3;
          }
          else if (uVar27 < 0x48) {
            iVar12 = (int)(uVar21 - 4);
            uVar25 = ((uint)LZCOUNT(iVar12) ^ 0x1f) - 1;
            uVar29 = uVar21 - 4 >> ((ulong)uVar25 & 0x3f);
            puVar16[2] = (int)uVar29 + uVar25 * 2 + 0x1c |
                         (iVar12 - (int)(uVar29 << ((ulong)uVar25 & 0x3f))) * 0x100;
            lVar19 = 3;
          }
          else {
            if (uVar27 < 0x88) {
              uVar25 = (int)(uVar21 - 4 >> 5) + 0x36U | ((uint)(uVar21 - 4) & 0x1f) << 8;
LAB_0337be40:
              puVar16[2] = uVar25;
            }
            else {
              if (uVar27 < 0x848) {
                iVar12 = (int)uVar21 + -0x44;
                uVar25 = (uint)LZCOUNT(iVar12) ^ 0x1f;
                uVar25 = (uVar25 | ((int)(-1L << uVar25) + iVar12) * 0x100) + 0x34;
                goto LAB_0337be40;
              }
              puVar16[2] = (int)uVar27 * 0x100 - 0x847c1;
            }
            puVar16[3] = 0x40;
            lVar19 = 4;
          }
          unaff_x23 = 0x3fff0;
          param_3 = (long *)((long)plVar13 + uVar27);
          param_2 = param_2 + (int)uVar24;
          puVar16 = puVar16 + lVar19;
          if (plVar4 <= param_3) break;
          uVar27 = *(ulong *)((long)param_3 - 3);
          iVar12 = (int)param_3 - iVar28;
          *(int *)(unaff_x21 + ((uVar27 & 0xffffffff00) * 0x1e35a7bd000000 >> 0x35 & 0x7fc)) =
               iVar12 + -2;
          *(int *)(unaff_x21 + (uVar27 * unaff_x28 >> 0x35 & 0x7fc)) = iVar12 + -1;
          uVar27 = (uVar27 & 0xffffffff000000) * 0x1e35a7bd00 >> 0x35 & 0x7fc;
          lVar19 = (long)*(int *)(unaff_x21 + uVar27);
          *(int *)(unaff_x21 + uVar27) = iVar12;
          uVar27 = (long)param_3 - (unaff_x25 + lVar19);
          if (((long)uVar27 < 0x3fff1) &&
             (puVar26 = puVar16, (int)*param_3 == *(int *)(unaff_x25 + lVar19))) {
            do {
              uVar14 = uVar27;
              uVar27 = (long)plVar3 + (-4 - (long)param_3);
              uVar29 = uVar27 >> 3;
              piVar2 = (int *)((long)param_3 + 4);
              if (uVar29 == 0) {
                uVar21 = 0;
                piVar15 = piVar2;
              }
              else {
                uVar21 = uVar27 & 0xfffffffffffffff8;
                lVar22 = 0;
                piVar15 = (int *)((long)piVar2 + uVar21);
                do {
                  uVar30 = *(ulong *)(in_stack_000000d8 + lVar19 + lVar22);
                  if (*(ulong *)((long)piVar2 + lVar22) != uVar30) {
                    uVar30 = uVar30 ^ *(ulong *)((long)piVar2 + lVar22);
                    uVar27 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1
                    ;
                    uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2
                    ;
                    uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                    uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar27 & 0xffff0000ffff) << 0x10;
                    uVar29 = lVar22 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
                    goto LAB_0337bf50;
                  }
                  uVar29 = uVar29 - 1;
                  lVar22 = lVar22 + 8;
                } while (uVar29 != 0);
              }
              uVar27 = uVar27 & 7;
              uVar29 = uVar21;
              if (uVar27 != 0) {
                uVar30 = uVar21 | uVar27;
                do {
                  uVar29 = uVar21;
                  if (*(char *)(in_stack_000000d8 + lVar19 + uVar21) != (char)*piVar15) break;
                  piVar15 = (int *)((long)piVar15 + 1);
                  uVar27 = uVar27 - 1;
                  uVar21 = uVar21 + 1;
                  uVar29 = uVar30;
                } while (uVar27 != 0);
              }
LAB_0337bf50:
              uVar27 = uVar29 + 4;
              if (uVar27 < 10) {
                uVar25 = (int)uVar27 + 0x26;
              }
              else if (uVar27 < 0x86) {
                iVar12 = (int)(uVar29 - 2);
                uVar25 = ((uint)LZCOUNT(iVar12) ^ 0x1f) - 1;
                uVar29 = uVar29 - 2 >> ((ulong)uVar25 & 0x3f);
                uVar25 = (int)uVar29 + uVar25 * 2 + 0x2c |
                         (iVar12 - (int)(uVar29 << ((ulong)uVar25 & 0x3f))) * 0x100;
              }
              else if (uVar27 < 0x846) {
                iVar12 = (int)uVar29 + -0x42;
                uVar25 = (uint)LZCOUNT(iVar12) ^ 0x1f;
                uVar25 = (uVar25 | ((int)(-1L << uVar25) + iVar12) * 0x100) + 0x34;
              }
              else {
                uVar25 = (int)uVar27 * 0x100 - 0x845c1;
              }
              param_3 = (long *)((long)param_3 + uVar27);
              uVar24 = (int)uVar14 + 3;
              uVar6 = (uint)LZCOUNT(uVar24) ^ 0x1f;
              uVar11 = uVar6 - 1;
              uVar10 = uVar24 >> (ulong)(uVar11 & 0x1f);
              puVar16 = puVar26 + 2;
              *puVar26 = uVar25;
              puVar26[1] = (uVar10 & 1 | uVar6 << 1 |
                           (uVar24 - ((uVar10 & 1 | 2) << (ulong)(uVar11 & 0x1f))) * 0x100) + 0x4c;
              if (plVar4 <= param_3) goto LAB_0337c124;
              uVar27 = *(ulong *)((long)param_3 - 3);
              iVar12 = (int)param_3 - iVar28;
              *(int *)(unaff_x21 + (uVar27 * unaff_x28 >> 0x35 & 0x7fc)) = iVar12 + -3;
              *(int *)(unaff_x21 + ((uVar27 & 0xffffffff00) * 0x1e35a7bd000000 >> 0x35 & 0x7fc)) =
                   iVar12 + -2;
              *(int *)(unaff_x21 + ((uVar27 & 0xffffffff0000) * 0x1e35a7bd0000 >> 0x35 & 0x7fc)) =
                   iVar12 + -1;
              uVar27 = (uVar27 & 0xffffffff000000) * 0x1e35a7bd00 >> 0x35 & 0x7fc;
              lVar19 = (long)*(int *)(unaff_x21 + uVar27);
              *(int *)(unaff_x21 + uVar27) = iVar12;
              uVar27 = (long)param_3 - (unaff_x25 + lVar19);
            } while (((long)uVar27 < 0x3fff1) &&
                    (puVar26 = puVar16, (int)*param_3 == *(int *)(unaff_x25 + lVar19)));
          }
        } while( true );
      }
LAB_0337c124:
      in_stack_000000b8 = in_stack_000000e8;
    } while (plVar3 <= param_3);
    unaff_x19 = (long)plVar3 - (long)param_3;
    uVar25 = (uint)unaff_x19;
    unaff_x24 = puVar16;
    in_stack_000000e8 = plVar3;
    if (uVar25 < 6) {
      param_1 = unaff_x19 & 0xffffffff;
    }
    else if (uVar25 < 0x82) {
      uVar25 = uVar25 - 2;
      uVar6 = ((uint)LZCOUNT(uVar25) ^ 0x1f) - 1;
      uVar24 = uVar25 >> (ulong)(uVar6 & 0x1f);
      param_1 = (ulong)(uVar24 + uVar6 * 2 + 2 |
                       (uVar25 - (uVar24 << (ulong)(uVar6 & 0x1f))) * 0x100);
    }
    else if (uVar25 < 0x842) {
      uVar24 = (uint)LZCOUNT(uVar25 - 0x42) ^ 0x1f;
      param_1 = (ulong)((uVar24 | ((-1 << (ulong)(uVar24 & 0x1f)) + (uVar25 - 0x42)) * 0x100) + 10);
    }
    else if (uVar25 >> 1 < 0xc21) {
      param_1 = (ulong)(uVar25 * 0x100 - 0x841eb);
    }
    else {
      if (uVar25 < 0x5842) {
        iVar28 = -0x1841ea;
      }
      else {
        iVar28 = -0x5841e9;
      }
      param_1 = (ulong)(uVar25 * 0x100 + iVar28);
    }
  } while( true );
}


