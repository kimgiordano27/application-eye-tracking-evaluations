/*
FUNCTION_NAME: TransformBakingSystem.__codegen__OnCreate_00000005$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 06744894
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0674562c) */
/* WARNING: Removing unreachable block (ram,0x06745744) */
/* WARNING: Removing unreachable block (ram,0x067457c0) */

void TransformBakingSystem___codegen__OnCreate_00000005_PostfixBurstDelegate___ctor
               (long param_1,undefined1 param_2 [16],ulong param_3,undefined1 param_4 [16])

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  double dVar14;
  long lVar15;
  long lVar16;
  ulong in_x10;
  undefined4 *puVar17;
  long in_x11;
  undefined8 in_x12;
  int *unaff_x19;
  long unaff_x20;
  ulong uVar18;
  long unaff_x23;
  ulong uVar19;
  undefined8 *unaff_x25;
  long *plVar20;
  undefined8 uVar21;
  int *piVar22;
  undefined8 *unaff_x28;
  long unaff_x29;
  float fVar23;
  double dVar24;
  undefined8 uVar25;
  ulong uVar26;
  byte bVar30;
  float fVar27;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  float fVar35;
  float fVar36;
  float unaff_s8;
  long in_stack_00000038;
  long lStack0000000000000040;
  long lStack0000000000000048;
  ulong uStack0000000000000050;
  long lStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined4 *puStack0000000000000078;
  ulong uStack0000000000000080;
  ulong uStack0000000000000088;
  uint uStack0000000000000094;
  undefined8 uStack0000000000000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000001d0;
  undefined4 uStack00000000000001d4;
  ulong in_stack_000002c8;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined4 in_stack_00000360;
  undefined4 in_stack_00000364;
  undefined4 in_stack_00000368;
  int in_stack_000003ec;
  undefined4 in_stack_00000434;
  undefined4 in_stack_00000438;
  undefined4 in_stack_0000043c;
  undefined4 in_stack_00000440;
  int in_stack_0000046c;
  int in_stack_000004d0;
  float in_stack_00000534;
  float in_stack_00000538;
  float in_stack_0000053c;
  float in_stack_00000540;
  long in_stack_00000768;
  
  uStack0000000000000088 = param_4._8_8_;
  uVar26 = param_4._0_8_;
  uVar19 = 0;
  uVar18 = 0;
  puStack0000000000000078 = (undefined4 *)(in_x11 + 0x3c);
  lStack0000000000000068 = in_x11 + 0x20;
  uStack0000000000000094 = 0;
  lStack0000000000000040 = param_1;
  lStack0000000000000048 = param_1;
  uStack0000000000000050 = in_x10;
  uStack0000000000000080 = uVar26;
  uStack0000000000000098 = in_x12;
  do {
    memmove(&stack0x000001d8,(void *)(unaff_x29 + unaff_x23 * 0x88),0x88);
    plVar8 = (long *)FUN_06923448(&stack0x000001d8,0);
    lVar9 = FUN_069234f0(&stack0x000001d8,0);
    if (lVar9 == 0) goto LAB_06745790;
    uVar4 = FUN_068fc544(lVar9,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06745790;
    uVar10 = FUN_05248ee0(*(long *)(unaff_x19 + 0x10),uVar4,&stack0x000004d0,*unaff_x25);
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
    }
    uVar11 = FUN_068fc830(plVar8,0);
    fVar27 = (float)param_3;
    if ((uVar11 & 1) != 0) {
      if ((uVar10 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_06745790;
        iVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        dVar14 = (double)((ulong)(iVar5 * 4 - 1) | 0x4330000000000000);
        dVar24 = dVar14 + -4503599627370496.0;
        FUN_06732974();
        iVar5 = (int)((long)dVar24 >> 0x34);
        if (0x403 < iVar5) {
          iVar5 = 0x404;
        }
        iVar5 = iVar5 + -0x3fd;
        thunk_FUN_03048534(uStack0000000000000098,plVar8);
        fVar36 = (float)in_x10;
        if (iVar5 < 1) {
          lVar9 = 0;
LAB_06744c28:
          puVar17 = (undefined4 *)(lStack0000000000000068 + lVar9 * 4);
          uVar10 = 0;
          do {
            bVar28 = (byte)(uVar10 >> 8);
            bVar29 = (byte)(uVar10 >> 0x10);
            bVar30 = (byte)(uVar10 >> 0x18);
            bVar31 = (byte)(uVar10 >> 0x20);
            bVar32 = (byte)(uVar10 >> 0x28);
            bVar33 = (byte)(uVar10 >> 0x30);
            bVar34 = (byte)(uVar10 >> 0x38);
            fVar27 = (float)-(uint)(CONCAT17(bVar34 | (byte)(uStack0000000000000080 >> 0x38),
                                             CONCAT16(bVar33 | (byte)(uStack0000000000000080 >> 0x30
                                                                     ),
                                                      CONCAT15(bVar32 | (byte)(
                                                  uStack0000000000000080 >> 0x28),
                                                  CONCAT14(bVar31 | (byte)(uStack0000000000000080 >>
                                                                          0x20),
                                                           CONCAT13(bVar30 | (byte)(
                                                  uStack0000000000000080 >> 0x18),
                                                  CONCAT12(bVar29 | (byte)(uStack0000000000000080 >>
                                                                          0x10),
                                                           CONCAT11(bVar28 | (byte)(
                                                  uStack0000000000000080 >> 8),
                                                  (byte)uVar10 | (byte)uStack0000000000000080)))))))
                                   <= 6U - lVar9);
            if (((uint)fVar27 & 1) != 0) {
              *puVar17 = 0xffffffff;
            }
            if (CONCAT17(bVar34 | (byte)(uStack0000000000000088 >> 0x38),
                         CONCAT16(bVar33 | (byte)(uStack0000000000000088 >> 0x30),
                                  CONCAT15(bVar32 | (byte)(uStack0000000000000088 >> 0x28),
                                           CONCAT14(bVar31 | (byte)(uStack0000000000000088 >> 0x20),
                                                    CONCAT13(bVar30 | (byte)(uStack0000000000000088
                                                                            >> 0x18),
                                                             CONCAT12(bVar29 | (byte)(
                                                  uStack0000000000000088 >> 0x10),
                                                  CONCAT11(bVar28 | (byte)(uStack0000000000000088 >>
                                                                          8),
                                                           (byte)uVar10 |
                                                           (byte)uStack0000000000000088))))))) <=
                6U - lVar9) {
              puVar17[1] = 0xffffffff;
            }
            uVar10 = uVar10 + 2;
            puVar17 = puVar17 + 2;
            uVar26 = uStack0000000000000080;
          } while ((8U - lVar9 & 0xfffffffffffffffe) != uVar10);
        }
        else {
          lVar9 = 0;
          puVar17 = puStack0000000000000078;
          do {
            fVar27 = SUB84(dVar14,0);
            fVar36 = (float)in_x10;
            FUN_06732974();
            uVar10 = FUN_06732b20();
            if ((uVar10 & 1) == 0) break;
            *puVar17 = uStack00000000000001d0;
            puVar17[-7] = uStack00000000000001d4;
            fVar35 = (float)FUN_06745af4();
            fVar35 = fVar35 * (float)*unaff_x19;
            fVar23 = (float)uVar26 * (float)*unaff_x19;
            uVar26 = (ulong)(uint)fVar23;
            fVar36 = fVar36 * (float)unaff_x19[1];
            in_x10 = (ulong)(uint)fVar36;
            uVar10 = 0x80000000;
            if (fVar23 != INFINITY) {
              uVar10 = (ulong)(uint)(int)fVar23;
            }
            uVar11 = 0x80000000;
            if (fVar35 != INFINITY) {
              uVar11 = (ulong)(uint)(int)fVar35;
            }
            fVar27 = fVar27 * (float)unaff_x19[1];
            dVar14 = (double)(ulong)(uint)fVar27;
            uVar1 = 0x8000000000000000;
            if (fVar36 != INFINITY) {
              uVar1 = (ulong)(uint)(int)fVar36 << 0x20;
            }
            lVar15 = -0x8000000000000000;
            if (fVar27 != INFINITY) {
              lVar15 = (ulong)(uint)(int)fVar27 << 0x20;
            }
            iVar13 = (int)uVar19;
            uVar1 = (uVar1 | uVar10) + lVar15;
            uVar19 = uVar19 & 0xffffffff;
            if (iVar13 <= (int)(uVar11 + uVar10)) {
              uVar19 = uVar11 + uVar10;
            }
            lVar9 = lVar9 + 1;
            if ((int)uVar18 <= (int)(uVar1 >> 0x20)) {
              uVar18 = uVar1 >> 0x20;
            }
            puVar17 = puVar17 + 1;
          } while (lVar9 < iVar5);
          unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
          iVar13 = (int)lVar9;
          if (iVar13 < iVar5) {
            if (*(long *)(unaff_x19 + 0x12) != 0) {
              uVar6 = FUN_05204ec8(*(long *)(unaff_x19 + 0x12),uVar4,*(undefined8 *)PTR_DAT_06f729a0
                                  );
              if (*(long *)(unaff_x19 + 0x12) != 0) {
                FUN_05204cc8(*(long *)(unaff_x19 + 0x12),uVar4,in_stack_000000b8,
                             *(undefined8 *)PTR_DAT_06f729f0);
                puVar17 = puStack0000000000000078;
                if (0 < iVar13) {
                  do {
                    in_stack_00000330 = 0;
                    FUN_06732620(&stack0x00000330,*puVar17,puVar17[-7],0);
                    FUN_06732d50();
                    lVar9 = lVar9 + -1;
                    puVar17 = puVar17 + 1;
                  } while (lVar9 != 0);
                }
                uStack0000000000000094 = uStack0000000000000094 | uVar6 ^ 1;
                lVar9 = -0x20;
                uVar10 = uStack0000000000000080;
                uVar11 = uStack0000000000000088;
                do {
                  if (uVar10 < uStack0000000000000050) {
                    *(undefined4 *)(&stack0x00000510 + lVar9) = 0xffffffff;
                  }
                  param_3 = CONCAT44(-(uint)(uVar11 < 7),-(uint)(uVar10 < 7));
                  if ((-(uint)(uVar11 < 7) & 1) != 0) {
                    *(undefined4 *)(&stack0x00000514 + lVar9) = 0xffffffff;
                  }
                  lVar9 = lVar9 + 8;
                  uVar10 = uVar10 + lStack0000000000000040;
                  uVar11 = uVar11 + lStack0000000000000048;
                  unaff_x25 = (undefined8 *)
                              Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
                  ;
                  unaff_x29 = in_stack_000000a0;
                  in_x10 = uStack0000000000000050;
                } while (lVar9 != 0);
                goto LAB_06744e00;
              }
            }
            goto LAB_06745790;
          }
          if (iVar13 < 7) goto LAB_06744c28;
        }
        fVar35 = (float)uVar26;
        bVar3 = true;
        unaff_x29 = in_stack_000000a0;
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_06745790;
        iVar5 = FUN_068dc838(plVar8,0);
        fVar36 = (float)in_x10;
        fVar35 = (float)uVar26;
        bVar3 = in_stack_000004d0 != iVar5;
      }
      fVar23 = (float)FUN_069235ac(&stack0x000001d8,0);
      unaff_x25 = (undefined8 *)
                  Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo;
      fVar36 = in_stack_00000540 - fVar36;
      in_x10 = (ulong)(uint)fVar36;
      fVar35 = (in_stack_0000053c - fVar35) * (in_stack_0000053c - fVar35);
      uVar26 = (ulong)(uint)fVar35;
      param_3 = (ulong)(uint)(fVar36 * fVar36);
      if (bVar3 || unaff_s8 <=
                   fVar36 * fVar36 +
                   fVar35 + (in_stack_00000534 - fVar23) * (in_stack_00000534 - fVar23) +
                            (in_stack_00000538 - fVar27) * (in_stack_00000538 - fVar27)) {
        if (plVar8 == (long *)0x0) goto LAB_06745790;
        in_stack_000004d0 = FUN_068dc838(plVar8,0);
        lVar9 = *(long *)(unaff_x19 + 0x14);
        if (lVar9 == 0) goto LAB_06745790;
        lVar15 = *(long *)(lVar9 + 0x10);
        lVar16 = *(long *)PTR_DAT_06f6e778;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_06745790;
        uVar6 = *(uint *)(lVar9 + 0x18);
        if (uVar6 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar6 + 1;
          *(undefined4 *)(lVar15 + (long)(int)uVar6 * 4 + 0x20) = uVar4;
        }
        else {
          FUN_043b542c(lVar9,uVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar9 = FUN_069234f0(&stack0x000001d8,0);
      if (lVar9 == 0) goto LAB_06745790;
      FUN_068bc484(lVar9,0);
      in_stack_00000534 = (float)FUN_069235ac(&stack0x000001d8,0);
      in_stack_00000538 = (float)param_3;
      in_stack_0000053c = (float)uVar26;
      in_stack_00000540 = (float)in_x10;
      lVar9 = *(long *)(unaff_x19 + 0x10);
      memcpy(&stack0x000002b8,&stack0x000004d0,0x78);
      if (lVar9 == 0) goto LAB_06745790;
      uVar21 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SaveSlots>_TypeInfo;
      memcpy(&stack0x00000330,&stack0x000002b8,0x78);
      FUN_05246f50(lVar9,uVar4,&stack0x00000330,uVar21);
    }
LAB_06744e00:
    unaff_x23 = unaff_x23 + 1;
  } while (unaff_x23 != in_stack_000000a8);
  iVar13 = (int)*(undefined8 *)unaff_x19;
  iVar5 = (int)((ulong)*(undefined8 *)unaff_x19 >> 0x20);
  if (CONCAT11(iVar5 < (int)uVar18,iVar13 < (int)uVar19) != 0) {
    uVar19 = (uVar19 & 0xffffffff) + 0xffffffff;
    uVar6 = (int)uVar18 - 1;
    uVar6 = uVar6 | (int)uVar6 >> 1;
    uVar19 = uVar19 & 0xffffffff | (ulong)(uint)((int)uVar19 >> 1);
    uVar19 = uVar19 | (ulong)uVar6 << 0x20 | (ulong)(uint)((int)uVar19 >> 2);
    uVar18 = uVar19 | (ulong)(uint)((int)uVar6 >> 2) << 0x20;
    uVar19 = uVar18 | (uint)((int)uVar19 >> 4);
    uVar18 = uVar19 | (ulong)(uint)((long)uVar18 >> 0x24) << 0x20;
    uVar19 = uVar18 | (uint)((int)uVar19 >> 8);
    uVar18 = uVar19 | (ulong)(uint)((long)uVar18 >> 0x28) << 0x20;
    uVar19 = uVar18 | (uint)((int)uVar19 >> 0x10);
    iVar7 = (int)uVar19;
    plVar8 = (long *)(unaff_x19 + 2);
    if (iVar13 <= iVar7 + 1) {
      iVar13 = iVar7 + 1;
    }
    iVar7 = (int)((uVar19 | (ulong)(uint)((long)uVar18 >> 0x30) << 0x20) + 0x100000000 >> 0x20);
    if (iVar5 <= iVar7) {
      iVar5 = iVar7;
    }
    if (*plVar8 == 0) goto LAB_06745790;
    FUN_068e2f70(&stack0x00000330,*plVar8,0);
    plVar20 = (long *)(unaff_x19 + 4);
    plVar12 = (long *)*plVar20;
    if (plVar12 == (long *)0x0) goto LAB_06745790;
    (**(code **)(*plVar12 + 0x198))(plVar12,iVar13,*(undefined8 *)(*plVar12 + 0x1a0));
    plVar12 = (long *)*plVar20;
    if (plVar12 == (long *)0x0) goto LAB_06745790;
    (**(code **)(*plVar12 + 0x1b8))(plVar12,iVar5,*(undefined8 *)(*plVar12 + 0x1c0));
    if (*plVar20 == 0) goto LAB_06745790;
    FUN_068e25a0(*plVar20,0);
    plVar12 = (long *)*plVar8;
    if (plVar12 == (long *)0x0) goto LAB_06745790;
    iVar7 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
    if (iVar7 != 1) {
      iVar7 = FUN_069007e0(0);
      lVar9 = *plVar8;
      if (iVar7 == 0) {
        uVar21 = *(undefined8 *)(unaff_x19 + 4);
        uVar19 = (ulong)(uint)((float)unaff_x19[1] / (float)iVar5);
        uVar25 = FUN_06629278((float)*unaff_x19 / (float)iVar13,uVar19,0);
        if (DAT_0738e667 == '\0') {
          FUN_02fe925c(PTR_DAT_06f6dde0);
          DAT_0738e667 = '\x01';
        }
        uVar26 = (ulong)**(uint **)(*(long *)PTR_DAT_06f6dde0 + 0xb8);
        in_x10 = (ulong)(*(uint **)(*(long *)PTR_DAT_06f6dde0 + 0xb8))[1];
        if (*(int *)(*(long *)PTR_DAT_06f6dd90 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_068c8788(uVar25,uVar19,uVar26,in_x10,lVar9,uVar21,0);
      }
      else {
        iVar7 = *unaff_x19;
        iVar2 = unaff_x19[1];
        uVar21 = *(undefined8 *)(unaff_x19 + 4);
        if (*(int *)(*(long *)PTR_DAT_06f6dd90 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_068c760c(lVar9,0,0,0,0,iVar7,iVar2,uVar21);
      }
    }
    if (*plVar8 == 0) goto LAB_06745790;
    FUN_068e25dc(*plVar8,0);
    uVar21 = *(undefined8 *)(unaff_x19 + 2);
    *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 4);
    thunk_FUN_03048534(plVar8);
    *(undefined8 *)(unaff_x19 + 4) = uVar21;
    thunk_FUN_03048534(plVar20,uVar21);
    *unaff_x19 = iVar13;
    unaff_x19[1] = iVar5;
    unaff_x25 = (undefined8 *)
                Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo;
  }
  if ((int)in_stack_00000070._4_4_ < 1) {
    iVar5 = 0;
  }
  else {
    iVar13 = 0;
    uVar19 = 0;
    iVar5 = 0;
    do {
      memmove(&stack0x00000148,(void *)(unaff_x29 + uVar19 * 0x88),0x88);
      lVar9 = FUN_069234f0(&stack0x00000148,0);
      if (lVar9 == 0) goto LAB_06745790;
      uVar4 = FUN_068fc544(lVar9,0);
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06745790;
      uVar18 = FUN_05248ee0(*(long *)(unaff_x19 + 0x10),uVar4,&stack0x00000450,*unaff_x25);
      if ((uVar18 & 1) == 0) {
LAB_06745368:
        iVar5 = iVar5 + 1;
      }
      else {
        uVar21 = FUN_06923448(&stack0x00000148,0);
        if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
        }
        uVar18 = FUN_068fc830(uVar21,0);
        if ((uVar18 & 1) == 0) goto LAB_06745368;
        lVar9 = *(long *)(unaff_x19 + 0x18);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        fVar35 = (float)((ulong)in_stack_00000338 >> 0x20);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        fVar27 = (float)((ulong)in_stack_00000330 >> 0x20);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        fVar36 = (float)((ulong)in_stack_00000340 >> 0x20);
        uVar4 = FUN_069235b8(&stack0x00000148,0);
        if (lVar9 == 0) goto LAB_06745790;
        uVar6 = (int)uVar19 - iVar5;
        if (*(uint *)(lVar9 + 0x18) <= uVar6) {
LAB_06745794:
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar15 = (long)(int)uVar6;
        lVar9 = lVar9 + lVar15 * 0x10;
        *(float *)(lVar9 + 0x20) = (float)in_stack_00000330 + fVar35;
        *(float *)(lVar9 + 0x24) = fVar27 + (float)in_stack_00000340;
        *(float *)(lVar9 + 0x28) = (float)in_stack_00000338 + fVar36;
        *(undefined4 *)(lVar9 + 0x2c) = uVar4;
        lVar9 = *(long *)(unaff_x19 + 0x1a);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
        iVar7 = FUN_069235c0(&stack0x00000148,0);
        if (lVar9 == 0) goto LAB_06745790;
        if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_06745794;
        fVar27 = fVar27 - (float)in_stack_00000340;
        uVar10 = (ulong)(uint)fVar27;
        fVar36 = (float)in_stack_00000338 - fVar36;
        uVar26 = (ulong)(uint)fVar36;
        in_x10 = (ulong)(uint)(float)iVar7;
        lVar9 = lVar9 + lVar15 * 0x10;
        *(float *)(lVar9 + 0x20) = (float)in_stack_00000330 - fVar35;
        *(float *)(lVar9 + 0x24) = fVar27;
        *(float *)(lVar9 + 0x28) = fVar36;
        *(float *)(lVar9 + 0x2c) = (float)iVar7;
        lVar9 = *(long *)(unaff_x19 + 0x1c);
        FUN_06923590(&stack0x00000330,&stack0x00000148,0);
        FUN_06923590(&stack0x00000330,&stack0x00000148,0);
        FUN_06923590(&stack0x00000330,&stack0x00000148,0);
        uVar18 = FUN_069235c8(&stack0x00000148,0);
        iVar7 = -in_stack_0000046c;
        if ((uVar18 & 1) != 0) {
          iVar7 = in_stack_0000046c;
        }
        if (lVar9 == 0) goto LAB_06745790;
        if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_06745794;
        lVar9 = lVar9 + lVar15 * 0x10;
        *(undefined4 *)(lVar9 + 0x20) = in_stack_00000360;
        *(undefined4 *)(lVar9 + 0x24) = in_stack_00000364;
        *(undefined4 *)(lVar9 + 0x28) = in_stack_00000368;
        *(float *)(lVar9 + 0x2c) = (float)iVar7;
        unaff_x25 = (undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
        ;
        unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
        if (0 < in_stack_0000046c) {
          lVar9 = 0;
          uVar18 = (ulong)(uint)(iVar13 + iVar5 * -7);
          lVar15 = uVar18 << 0x20;
          do {
            lVar16 = *(long *)(unaff_x19 + 0x1e);
            FUN_06745af4();
            uVar4 = FUN_0662c39c(0);
            if (lVar16 == 0) goto LAB_06745790;
            if ((ulong)*(uint *)(lVar16 + 0x18) <= uVar18 + lVar9) goto LAB_06745794;
            lVar16 = lVar16 + (lVar15 >> 0x20) * 0x10;
            *(undefined4 *)(lVar16 + 0x20) = uVar4;
            *(int *)(lVar16 + 0x24) = (int)uVar10;
            *(int *)(lVar16 + 0x28) = (int)uVar26;
            *(int *)(lVar16 + 0x2c) = (int)in_x10;
            lVar9 = lVar9 + 1;
            lVar15 = lVar15 + 0x100000000;
            unaff_x25 = (undefined8 *)
                        Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
            ;
            unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
            unaff_x29 = in_stack_000000a0;
          } while (lVar9 < in_stack_0000046c);
        }
      }
      uVar19 = uVar19 + 1;
      iVar13 = iVar13 + 7;
    } while (uVar19 != in_stack_00000070._4_4_);
  }
  if ((uStack0000000000000094 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_068bdec0(*(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SceneReference>_TypeInfo,
                 0);
  }
  FUN_03d32664(9,*(undefined8 *)System_Collections_Generic_List<Vector3>_TypeInfo);
  FUN_06668eb0(&stack0x00000140);
  FUN_069114d4(&stack0x000002b8,*(undefined8 *)(unaff_x19 + 2),0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar19 = in_stack_000002c8;
  FUN_06914078();
  if (*(long *)(unaff_x19 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_043b5e04(&stack0x000002b8,*(long *)(unaff_x19 + 0x14),*(undefined8 *)PTR_DAT_06f8a040);
  while (uVar18 = FUN_054f5df0(&stack0x00000290,*unaff_x28), (uVar18 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_05246e98(&stack0x00000330,*(long *)(unaff_x19 + 0x10),in_stack_000002c8 & 0xffffffff,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SaveSimpleData>_TypeInfo)
    ;
    memcpy(&stack0x000003d0,&stack0x00000330,0x78);
    if (0 < in_stack_000003ec) {
      lVar9 = 0;
      piVar22 = (int *)&stack0x0000040c;
      uVar18 = uVar19;
      do {
        iVar13 = *piVar22;
        FUN_06900600(0);
        uVar21 = FUN_06745af4();
        iVar7 = FUN_06732974();
        uVar26 = FUN_0662c39c(uVar21,uVar18,uVar26,in_x10,0);
        UnityEngine_InputSystem_Utilities_OneOrMore<object,_ReadOnlyArray<object>>__get_Item
                  (in_stack_00000434,in_stack_00000438,in_stack_0000043c,in_stack_00000440,
                   &stack0x00000330,
                   *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SceneLoader>_TypeInfo);
        if (*(int *)(*(long *)Pathfinding_Pooling_ListPool<NativeQueue<byte>>_TypeInfo + 0xe0) == 0)
        {
          thunk_FUN_02fdcff0();
        }
        uVar19 = (ulong)(uint)(float)((1 << (ulong)((iVar7 - iVar13) + 1U & 0x1f)) + -2);
        in_x10 = uVar18;
        FUN_0669cb80();
        lVar9 = lVar9 + 1;
        piVar22 = piVar22 + 1;
        uVar18 = uVar19;
      } while (lVar9 < in_stack_000003ec);
    }
  }
  FUN_054f5dec(&stack0x00000290,*(undefined8 *)PTR_DAT_06f8a028);
  if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<SceneObjectWatcher>_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_06913ac4();
  FUN_06913ac4();
  FUN_06913ac4();
  FUN_06913ac4();
  FUN_06913368((float)(int)(in_stack_00000070._4_4_ - iVar5));
  FUN_069114d4(&stack0x00000330,*(undefined8 *)(unaff_x19 + 2),0);
  FUN_069168e8();
  FUN_06668eb4(&stack0x00000140,0);
  lVar9 = *(long *)(unaff_x19 + 0x14);
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (*(long *)(in_stack_00000038 + 0x28) != in_stack_00000768) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_06745790:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


