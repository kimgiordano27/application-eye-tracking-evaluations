/*
FUNCTION_NAME: ES3Internal.ES3WebClass.<SendWebRequest>d__19$$System.IDisposable.Dispose
ENTRY_POINT: 0337ed5c
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void ES3Internal_ES3WebClass_<SendWebRequest>d__19__System_IDisposable_Dispose
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  byte *pbVar12;
  long *__src;
  int iVar13;
  long *plVar14;
  int *piVar15;
  uint *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  ulong *unaff_x19;
  uint *puVar27;
  ulong unaff_x20;
  long unaff_x21;
  ulong uVar28;
  long unaff_x23;
  int iVar29;
  long unaff_x25;
  long unaff_x26;
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
  
code_r0x0337ed5c:
  FUN_033839f8(unaff_x20,param_2,unaff_x19,param_4);
  uVar26 = (int)*unaff_x19 + 7;
  *unaff_x19 = (ulong)uVar26 & 0xfffffff8;
  memcpy((void *)(unaff_x26 + (ulong)(uVar26 >> 3)),in_stack_000000b8,unaff_x20);
  uVar18 = *unaff_x19 + unaff_x20 * 8;
  *unaff_x19 = uVar18;
  *(undefined1 *)(unaff_x26 + (uVar18 >> 3)) = 0;
LAB_0337f1ac:
  unaff_x29 = unaff_x29 - in_stack_000000d0;
  if (unaff_x29 == 0) {
    if (*(long *)(in_stack_00000008 + 0x28) != in_stack_000012c8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  unaff_x20 = unaff_x29;
  if (0x1ffff < unaff_x29) {
    unaff_x20 = 0x20000;
  }
  plVar3 = (long *)((long)in_stack_000000e8 + unaff_x20);
  pbVar12 = in_stack_000000c8;
  __src = in_stack_000000e8;
  puVar16 = in_stack_000000c0;
  if (0xf < unaff_x20) {
    uVar28 = 0xffffffff;
    uVar18 = unaff_x20 - 4;
    if (unaff_x29 - 0x10 <= unaff_x20 - 4) {
      uVar18 = unaff_x29 - 0x10;
    }
    plVar4 = (long *)((long)in_stack_000000e8 + uVar18);
    do {
      lVar19 = *(long *)((long)__src + 1);
      uVar18 = 0x20;
      plVar5 = (long *)((long)__src + 1);
LAB_0337e590:
      do {
        plVar14 = plVar5;
        plVar5 = (long *)((long)plVar14 + (uVar18 >> 5));
        unaff_x26 = in_stack_00000090;
        if (plVar4 < plVar5) goto LAB_0337eb18;
        uVar20 = lVar19 * unaff_x28;
        lVar19 = *plVar5;
        uVar20 = uVar20 >> 0x34;
        plVar21 = (long *)((long)plVar14 - (long)(int)uVar28);
        uVar18 = (ulong)((int)uVar18 + 1);
        iVar29 = (int)unaff_x25;
        iVar13 = (int)plVar14;
        if ((plVar21 < plVar14) && ((int)*plVar14 == (int)*plVar21)) {
          *(int *)(unaff_x21 + uVar20 * 4) = iVar13 - iVar29;
        }
        else {
          iVar9 = *(int *)(unaff_x21 + uVar20 * 4);
          *(int *)(unaff_x21 + uVar20 * 4) = iVar13 - iVar29;
          plVar21 = (long *)(unaff_x25 + iVar9);
          if ((int)*plVar14 != (int)*plVar21) goto LAB_0337e590;
        }
        uVar20 = (long)plVar14 - (long)plVar21;
      } while (unaff_x23 < (long)uVar20);
      uVar18 = (long)plVar3 + (-4 - (long)plVar14);
      uVar22 = uVar18 >> 3;
      piVar2 = (int *)((long)plVar14 + 4);
      if (uVar22 == 0) {
        uVar30 = 0;
        piVar15 = piVar2;
      }
      else {
        uVar30 = uVar18 & 0xfffffffffffffff8;
        lVar19 = 0;
        piVar15 = (int *)((long)piVar2 + uVar30);
        do {
          uVar24 = *(ulong *)((long)plVar21 + lVar19 + 4);
          if (*(ulong *)((long)piVar2 + lVar19) != uVar24) {
            uVar24 = uVar24 ^ *(ulong *)((long)piVar2 + lVar19);
            uVar18 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar22 = lVar19 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
            goto LAB_0337e660;
          }
          uVar22 = uVar22 - 1;
          lVar19 = lVar19 + 8;
        } while (uVar22 != 0);
      }
      uVar18 = uVar18 & 7;
      uVar22 = uVar30;
      if (uVar18 != 0) {
        uVar24 = uVar30 | uVar18;
        do {
          uVar22 = uVar30;
          if (*(char *)((long)plVar21 + uVar30 + 4) != (char)*piVar15) break;
          piVar15 = (int *)((long)piVar15 + 1);
          uVar18 = uVar18 - 1;
          uVar30 = uVar30 + 1;
          uVar22 = uVar24;
        } while (uVar18 != 0);
      }
LAB_0337e660:
      uVar25 = iVar13 - (int)__src;
      uVar26 = uVar25;
      if (5 < uVar25) {
        if (uVar25 < 0x82) {
          uVar6 = uVar25 - 2;
          uVar10 = ((uint)LZCOUNT(uVar6) ^ 0x1f) - 1;
          uVar26 = uVar6 >> (ulong)(uVar10 & 0x1f);
          uVar26 = uVar26 + uVar10 * 2 + 2 | (uVar6 - (uVar26 << (ulong)(uVar10 & 0x1f))) * 0x100;
        }
        else if (uVar25 < 0x842) {
          uVar26 = (uint)LZCOUNT(uVar25 - 0x42) ^ 0x1f;
          uVar26 = (uVar26 | ((-1 << (ulong)(uVar26 & 0x1f)) + (uVar25 - 0x42)) * 0x100) + 10;
        }
        else if (uVar25 >> 1 < 0xc21) {
          uVar26 = uVar25 * 0x100 - 0x841eb;
        }
        else {
          if (uVar25 < 0x5842) {
            iVar13 = -0x1841ea;
          }
          else {
            iVar13 = -0x5841e9;
          }
          uVar26 = uVar25 * 0x100 + iVar13;
        }
      }
      *puVar16 = uVar26;
      memcpy(pbVar12,__src,(long)(int)uVar25);
      if ((int)uVar28 == (int)uVar20) {
        uVar26 = 0x40;
      }
      else {
        uVar26 = (int)uVar20 + 3;
        uVar6 = (uint)LZCOUNT(uVar26) ^ 0x1f;
        uVar11 = uVar6 - 1;
        uVar10 = uVar26 >> (ulong)(uVar11 & 0x1f);
        uVar26 = (uVar10 & 1 | uVar6 << 1 |
                 (uVar26 - ((uVar10 & 1 | 2) << (ulong)(uVar11 & 0x1f))) * 0x100) + 0x4c;
        uVar28 = uVar20 & 0xffffffff;
      }
      uVar18 = uVar22 + 4;
      puVar16[1] = uVar26;
      if (uVar18 < 0xc) {
        puVar16[2] = (int)uVar18 + 0x14;
        lVar19 = 3;
      }
      else if (uVar18 < 0x48) {
        iVar13 = (int)(uVar22 - 4);
        uVar26 = ((uint)LZCOUNT(iVar13) ^ 0x1f) - 1;
        uVar20 = uVar22 - 4 >> ((ulong)uVar26 & 0x3f);
        puVar16[2] = (int)uVar20 + uVar26 * 2 + 0x1c |
                     (iVar13 - (int)(uVar20 << ((ulong)uVar26 & 0x3f))) * 0x100;
        lVar19 = 3;
      }
      else {
        if (uVar18 < 0x88) {
          uVar26 = (int)(uVar22 - 4 >> 5) + 0x36U | ((uint)(uVar22 - 4) & 0x1f) << 8;
LAB_0337e834:
          puVar16[2] = uVar26;
        }
        else {
          if (uVar18 < 0x848) {
            iVar13 = (int)uVar22 + -0x44;
            uVar26 = (uint)LZCOUNT(iVar13) ^ 0x1f;
            uVar26 = (uVar26 | ((int)(-1L << uVar26) + iVar13) * 0x100) + 0x34;
            goto LAB_0337e834;
          }
          puVar16[2] = (int)uVar18 * 0x100 - 0x847c1;
        }
        puVar16[3] = 0x40;
        lVar19 = 4;
      }
      unaff_x23 = 0x3fff0;
      __src = (long *)((long)plVar14 + uVar18);
      pbVar12 = pbVar12 + (int)uVar25;
      puVar16 = puVar16 + lVar19;
      if (plVar4 <= __src) break;
      uVar18 = *(ulong *)((long)__src - 3);
      iVar13 = (int)__src - iVar29;
      *(int *)(unaff_x21 + ((uVar18 & 0xffffffff00) * 0x1e35a7bd000000 >> 0x32 & 0x3ffc)) =
           iVar13 + -2;
      *(int *)(unaff_x21 + (uVar18 * unaff_x28 >> 0x32 & 0x3ffc)) = iVar13 + -1;
      uVar18 = (uVar18 & 0xffffffff000000) * 0x1e35a7bd00 >> 0x32 & 0x3ffc;
      lVar19 = (long)*(int *)(unaff_x21 + uVar18);
      *(int *)(unaff_x21 + uVar18) = iVar13;
      uVar18 = (long)__src - (unaff_x25 + lVar19);
      if (((long)uVar18 < 0x3fff1) &&
         (puVar27 = puVar16, (int)*__src == *(int *)(unaff_x25 + lVar19))) {
        do {
          uVar28 = uVar18;
          uVar18 = (long)plVar3 + (-4 - (long)__src);
          uVar20 = uVar18 >> 3;
          piVar2 = (int *)((long)__src + 4);
          if (uVar20 == 0) {
            uVar22 = 0;
            piVar15 = piVar2;
          }
          else {
            uVar22 = uVar18 & 0xfffffffffffffff8;
            lVar23 = 0;
            piVar15 = (int *)((long)piVar2 + uVar22);
            do {
              uVar30 = *(ulong *)(in_stack_000000d8 + lVar19 + lVar23);
              if (*(ulong *)((long)piVar2 + lVar23) != uVar30) {
                uVar30 = uVar30 ^ *(ulong *)((long)piVar2 + lVar23);
                uVar18 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar20 = lVar23 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
                goto LAB_0337e944;
              }
              uVar20 = uVar20 - 1;
              lVar23 = lVar23 + 8;
            } while (uVar20 != 0);
          }
          uVar18 = uVar18 & 7;
          uVar20 = uVar22;
          if (uVar18 != 0) {
            uVar30 = uVar22 | uVar18;
            do {
              uVar20 = uVar22;
              if (*(char *)(in_stack_000000d8 + lVar19 + uVar22) != (char)*piVar15) break;
              piVar15 = (int *)((long)piVar15 + 1);
              uVar18 = uVar18 - 1;
              uVar22 = uVar22 + 1;
              uVar20 = uVar30;
            } while (uVar18 != 0);
          }
LAB_0337e944:
          uVar18 = uVar20 + 4;
          if (uVar18 < 10) {
            uVar26 = (int)uVar18 + 0x26;
          }
          else if (uVar18 < 0x86) {
            iVar13 = (int)(uVar20 - 2);
            uVar26 = ((uint)LZCOUNT(iVar13) ^ 0x1f) - 1;
            uVar20 = uVar20 - 2 >> ((ulong)uVar26 & 0x3f);
            uVar26 = (int)uVar20 + uVar26 * 2 + 0x2c |
                     (iVar13 - (int)(uVar20 << ((ulong)uVar26 & 0x3f))) * 0x100;
          }
          else if (uVar18 < 0x846) {
            iVar13 = (int)uVar20 + -0x42;
            uVar26 = (uint)LZCOUNT(iVar13) ^ 0x1f;
            uVar26 = (uVar26 | ((int)(-1L << uVar26) + iVar13) * 0x100) + 0x34;
          }
          else {
            uVar26 = (int)uVar18 * 0x100 - 0x845c1;
          }
          __src = (long *)((long)__src + uVar18);
          uVar25 = (int)uVar28 + 3;
          uVar6 = (uint)LZCOUNT(uVar25) ^ 0x1f;
          uVar11 = uVar6 - 1;
          uVar10 = uVar25 >> (ulong)(uVar11 & 0x1f);
          puVar16 = puVar27 + 2;
          *puVar27 = uVar26;
          puVar27[1] = (uVar10 & 1 | uVar6 << 1 |
                       (uVar25 - ((uVar10 & 1 | 2) << (ulong)(uVar11 & 0x1f))) * 0x100) + 0x4c;
          if (plVar4 <= __src) goto LAB_0337eb18;
          uVar18 = *(ulong *)((long)__src - 3);
          iVar13 = (int)__src - iVar29;
          *(int *)(unaff_x21 + (uVar18 * unaff_x28 >> 0x32 & 0x3ffc)) = iVar13 + -3;
          *(int *)(unaff_x21 + ((uVar18 & 0xffffffff00) * 0x1e35a7bd000000 >> 0x32 & 0x3ffc)) =
               iVar13 + -2;
          *(int *)(unaff_x21 + ((uVar18 & 0xffffffff0000) * 0x1e35a7bd0000 >> 0x32 & 0x3ffc)) =
               iVar13 + -1;
          uVar18 = (uVar18 & 0xffffffff000000) * 0x1e35a7bd00 >> 0x32 & 0x3ffc;
          lVar19 = (long)*(int *)(unaff_x21 + uVar18);
          *(int *)(unaff_x21 + uVar18) = iVar13;
          uVar18 = (long)__src - (unaff_x25 + lVar19);
        } while (((long)uVar18 < 0x3fff1) &&
                (puVar27 = puVar16, (int)*__src == *(int *)(unaff_x25 + lVar19)));
      }
    } while( true );
  }
LAB_0337eb18:
  if (__src < plVar3) {
    uVar18 = (long)plVar3 - (long)__src;
    uVar26 = (uint)uVar18;
    if (5 < uVar26) {
      if (uVar26 < 0x82) {
        uVar26 = uVar26 - 2;
        uVar6 = ((uint)LZCOUNT(uVar26) ^ 0x1f) - 1;
        uVar25 = uVar26 >> (ulong)(uVar6 & 0x1f);
        uVar26 = uVar25 + uVar6 * 2 + 2 | (uVar26 - (uVar25 << (ulong)(uVar6 & 0x1f))) * 0x100;
      }
      else if (uVar26 < 0x842) {
        uVar25 = (uint)LZCOUNT(uVar26 - 0x42) ^ 0x1f;
        uVar26 = (uVar25 | ((-1 << (ulong)(uVar25 & 0x1f)) + (uVar26 - 0x42)) * 0x100) + 10;
      }
      else if (uVar26 >> 1 < 0xc21) {
        uVar26 = uVar26 * 0x100 - 0x841eb;
      }
      else {
        if (uVar26 < 0x5842) {
          iVar29 = -0x1841ea;
        }
        else {
          iVar29 = -0x5841e9;
        }
        uVar26 = uVar26 * 0x100 + iVar29;
      }
    }
    *puVar16 = uVar26;
    memcpy(pbVar12,__src,uVar18 & 0xffffffff);
    pbVar12 = pbVar12 + (uVar18 & 0xffffffff);
    puVar16 = puVar16 + 1;
  }
  uVar18 = (long)pbVar12 - (long)in_stack_000000c8;
  in_stack_000000d0 = unaff_x20;
  if ((double)unaff_x20 * unaff_d13 <= (double)uVar18) {
    memset(&stack0x000003f8,0,0x400);
    uVar28 = 0;
    do {
      pbVar12 = (byte *)((long)in_stack_000000e8 + uVar28);
      uVar28 = uVar28 + 0x2b;
      *(int *)(&stack0x000003f8 + (ulong)*pbVar12 * 4) =
           *(int *)(&stack0x000003f8 + (ulong)*pbVar12 * 4) + 1;
    } while (uVar28 < unaff_x20);
    uVar28 = 0;
    dVar38 = 0.0;
    puVar27 = (uint *)&stack0x000003f8;
    do {
      uVar26 = *puVar27;
      if (uVar26 < 0x100) {
        dVar37 = (double)(&DAT_01ab0ad8)[uVar26];
        dVar36 = (double)uVar26;
      }
      else {
        dVar36 = (double)uVar26;
        dVar37 = log2(dVar36);
      }
      uVar20 = (ulong)puVar27[1];
      if (puVar27[1] < 0x100) {
        dVar31 = (double)(&DAT_01ab0ad8)[uVar20];
      }
      else {
        dVar31 = log2((double)uVar20);
      }
      uVar28 = uVar28 + uVar26 + uVar20;
      puVar27 = puVar27 + 2;
      dVar38 = (dVar38 - dVar36 * dVar37) - dVar31 * (double)uVar20;
    } while (puVar27 < in_stack_000000e0);
    if (uVar28 == 0) {
      dVar37 = 0.0;
    }
    else {
      dVar37 = (double)uVar28;
      if (uVar28 < 0x100) {
        dVar36 = (double)(&DAT_01ab0ad8)[uVar28];
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
    if (((double)unaff_x20 * unaff_d12 * unaff_d13) / unaff_d14 <= dVar37) goto code_r0x0337ed4c;
  }
  uVar22 = (long)puVar16 - (long)in_stack_000000c0;
  FUN_033839f8(unaff_x20,0,in_stack_000000b0,unaff_x26);
  uVar28 = *in_stack_000000b0;
  uVar20 = uVar28 >> 3;
  *(ulong *)(unaff_x26 + uVar20) = (ulong)*(byte *)(unaff_x26 + uVar20);
  *in_stack_000000b0 = uVar28 + 0xd;
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
  pbVar12 = in_stack_000000c8;
  for (uVar28 = uVar18; uVar28 != 0; uVar28 = uVar28 - 1) {
    *(int *)(&stack0x000003f8 + (ulong)*pbVar12 * 4) =
         *(int *)(&stack0x000003f8 + (ulong)*pbVar12 * 4) + 1;
    pbVar12 = pbVar12 + 1;
  }
  FUN_03391500(in_stack_00000088,&stack0x000003f8,uVar18,8,&stack0x00000f00,&stack0x000007f8,
               in_stack_000000b0,unaff_x26);
  if (uVar22 == 0) {
    in_stack_000000f0._4_8_ = 0x100000001;
    in_stack_000001f0 = 1;
  }
  else {
    uVar18 = uVar22;
    if ((long)uVar22 < 0) {
      uVar18 = 0xffffffffffffffff;
    }
    if (0 < (long)uVar18) {
      uVar18 = 1;
    }
    uVar28 = (long)in_stack_000000c0 - (long)puVar16;
    if ((long)in_stack_000000c0 - (long)puVar16 <= (long)uVar22) {
      uVar28 = uVar22;
    }
    lVar19 = uVar18 * (uVar28 >> 2);
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
  in_stack_000000e8 = plVar3;
  if (uVar22 != 0) {
    uVar18 = *in_stack_000000b0;
    lVar19 = 0;
    pbVar12 = in_stack_000000c8;
    do {
      uVar20 = (ulong)in_stack_000000c0[lVar19] & 0xff;
      uVar26 = in_stack_000000c0[lVar19] >> 8;
      uVar28 = uVar18 + (byte)(&stack0x00000e80)[uVar20];
      *(ulong *)(unaff_x26 + (uVar18 >> 3)) =
           (ulong)*(ushort *)(&stack0x000002f0 + uVar20 * 2) << (uVar18 & 7) |
           (ulong)*(byte *)(unaff_x26 + (uVar18 >> 3));
      *in_stack_000000b0 = uVar28;
      uVar18 = uVar28 + *(uint *)(&DAT_01ae0378 + uVar20 * 4);
      *(ulong *)(unaff_x26 + (uVar28 >> 3)) =
           (ulong)uVar26 << (uVar28 & 7) | (ulong)*(byte *)(unaff_x26 + (uVar28 >> 3));
      *in_stack_000000b0 = uVar18;
      if ((uint)uVar20 < 0x18) {
        for (iVar29 = *(int *)(&DAT_01ae0578 + uVar20 * 4) + uVar26; iVar29 != 0;
            iVar29 = iVar29 + -1) {
          uVar28 = uVar18 >> 3;
          uVar20 = uVar18 & 7;
          uVar18 = uVar18 + (byte)(&stack0x00000f00)[*pbVar12];
          *(ulong *)(unaff_x26 + uVar28) =
               (ulong)*(ushort *)(&stack0x000007f8 + (ulong)*pbVar12 * 2) << uVar20 |
               (ulong)*(byte *)(unaff_x26 + uVar28);
          *in_stack_000000b0 = uVar18;
          pbVar12 = pbVar12 + 1;
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != (long)uVar22 >> 2);
  }
  goto LAB_0337f1ac;
code_r0x0337ed4c:
  param_2 = 1;
  param_4 = in_stack_00000090;
  unaff_x19 = in_stack_000000b0;
  in_stack_000000b8 = in_stack_000000e8;
  in_stack_000000e8 = plVar3;
  goto code_r0x0337ed5c;
}


