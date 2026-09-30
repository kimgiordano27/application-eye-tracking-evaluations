/*
FUNCTION_NAME: TransformBakingSystem.__codegen__OnUpdate_00000006$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 06744c10
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x067457c0) */
/* WARNING: Removing unreachable block (ram,0x0674562c) */
/* WARNING: Removing unreachable block (ram,0x06745744) */

void TransformBakingSystem___codegen__OnUpdate_00000006_PostfixBurstDelegate__Invoke
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,ulong param_5,
               undefined1 param_6 [16])

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  double dVar11;
  undefined1 *in_x10;
  undefined4 *puVar12;
  ulong uVar13;
  ulong in_x11;
  ulong uVar14;
  undefined4 in_w12;
  int *unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  long lVar15;
  long unaff_x23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  long lVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  undefined8 *unaff_x28;
  long unaff_x29;
  float fVar20;
  double dVar21;
  undefined8 uVar22;
  byte bVar27;
  float fVar23;
  byte bVar25;
  byte bVar26;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  float fVar32;
  float fVar33;
  float unaff_s8;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 *in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
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
  ulong uVar24;
  
  lVar18 = param_6._8_8_;
  lVar15 = param_6._0_8_;
  uVar14 = param_2._8_8_;
  uVar13 = param_2._0_8_;
code_r0x06744c10:
  param_1 = param_1 + 8;
  uVar13 = uVar13 + lVar15;
  uVar14 = uVar14 + lVar18;
  if (param_1 == 0) {
LAB_06744e00:
    do {
      unaff_x23 = unaff_x23 + 1;
      if (unaff_x23 == in_stack_000000a8) {
        iVar10 = (int)*(undefined8 *)unaff_x19;
        iVar3 = (int)((ulong)*(undefined8 *)unaff_x19 >> 0x20);
        if (CONCAT11(iVar3 < (int)unaff_x22,iVar10 < (int)unaff_x24) != 0) {
          uVar13 = (unaff_x24 & 0xffffffff) + 0xffffffff;
          uVar4 = (int)unaff_x22 - 1;
          uVar4 = uVar4 | (int)uVar4 >> 1;
          uVar13 = uVar13 & 0xffffffff | (ulong)(uint)((int)uVar13 >> 1);
          uVar13 = uVar13 | (ulong)uVar4 << 0x20 | (ulong)(uint)((int)uVar13 >> 2);
          uVar14 = uVar13 | (ulong)(uint)((int)uVar4 >> 2) << 0x20;
          uVar13 = uVar14 | (uint)((int)uVar13 >> 4);
          uVar14 = uVar13 | (ulong)(uint)((long)uVar14 >> 0x24) << 0x20;
          uVar13 = uVar14 | (uint)((int)uVar13 >> 8);
          uVar14 = uVar13 | (ulong)(uint)((long)uVar14 >> 0x28) << 0x20;
          uVar13 = uVar14 | (uint)((int)uVar13 >> 0x10);
          iVar5 = (int)uVar13;
          plVar7 = (long *)(unaff_x19 + 2);
          if (iVar10 <= iVar5 + 1) {
            iVar10 = iVar5 + 1;
          }
          iVar5 = (int)((uVar13 | (ulong)(uint)((long)uVar14 >> 0x30) << 0x20) + 0x100000000 >> 0x20
                       );
          if (iVar3 <= iVar5) {
            iVar3 = iVar5;
          }
          if (*plVar7 == 0) goto LAB_06745790;
          FUN_068e2f70(&stack0x00000330,*plVar7,0);
          plVar17 = (long *)(unaff_x19 + 4);
          plVar8 = (long *)*plVar17;
          if (plVar8 == (long *)0x0) goto LAB_06745790;
          (**(code **)(*plVar8 + 0x198))(plVar8,iVar10,*(undefined8 *)(*plVar8 + 0x1a0));
          plVar8 = (long *)*plVar17;
          if (plVar8 == (long *)0x0) goto LAB_06745790;
          (**(code **)(*plVar8 + 0x1b8))(plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x1c0));
          if (*plVar17 == 0) goto LAB_06745790;
          FUN_068e25a0(*plVar17,0);
          plVar8 = (long *)*plVar7;
          if (plVar8 == (long *)0x0) goto LAB_06745790;
          iVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
          if (iVar5 != 1) {
            iVar5 = FUN_069007e0(0);
            lVar15 = *plVar7;
            if (iVar5 == 0) {
              uVar9 = *(undefined8 *)(unaff_x19 + 4);
              uVar13 = (ulong)(uint)((float)unaff_x19[1] / (float)iVar3);
              uVar22 = FUN_06629278((float)*unaff_x19 / (float)iVar10,uVar13,0);
              if (DAT_0738e667 == '\0') {
                FUN_02fe925c(PTR_DAT_06f6dde0);
                DAT_0738e667 = '\x01';
              }
              param_4 = (ulong)**(uint **)(*(long *)PTR_DAT_06f6dde0 + 0xb8);
              param_5 = (ulong)(*(uint **)(*(long *)PTR_DAT_06f6dde0 + 0xb8))[1];
              if (*(int *)(*(long *)PTR_DAT_06f6dd90 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_068c8788(uVar22,uVar13,param_4,param_5,lVar15,uVar9,0);
            }
            else {
              iVar5 = *unaff_x19;
              iVar1 = unaff_x19[1];
              uVar9 = *(undefined8 *)(unaff_x19 + 4);
              if (*(int *)(*(long *)PTR_DAT_06f6dd90 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              FUN_068c760c(lVar15,0,0,0,0,iVar5,iVar1,uVar9);
            }
          }
          if (*plVar7 == 0) goto LAB_06745790;
          FUN_068e25dc(*plVar7,0);
          uVar9 = *(undefined8 *)(unaff_x19 + 2);
          *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 4);
          thunk_FUN_03048534(plVar7);
          *(undefined8 *)(unaff_x19 + 4) = uVar9;
          thunk_FUN_03048534(plVar17,uVar9);
          *unaff_x19 = iVar10;
          unaff_x19[1] = iVar3;
          unaff_x25 = (undefined8 *)
                      Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
          ;
        }
        if (0 < (int)in_stack_00000070._4_4_) {
          iVar10 = 0;
          uVar13 = 0;
          iVar3 = 0;
          goto LAB_067450c4;
        }
        iVar3 = 0;
        goto LAB_067453a4;
      }
      memmove(&stack0x000001d8,(void *)(unaff_x29 + unaff_x23 * 0x88),0x88);
      plVar7 = (long *)FUN_06923448(&stack0x000001d8,0);
      lVar15 = FUN_069234f0(&stack0x000001d8,0);
      if (lVar15 == 0) goto LAB_06745790;
      uVar6 = FUN_068fc544(lVar15,0);
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06745790;
      uVar13 = FUN_05248ee0(*(long *)(unaff_x19 + 0x10),uVar6,&stack0x000004d0,*unaff_x25);
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
      }
      uVar14 = FUN_068fc830(plVar7,0);
      fVar23 = (float)param_3;
    } while ((uVar14 & 1) == 0);
    if ((uVar13 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_06745790;
      iVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      dVar11 = (double)((ulong)(iVar3 * 4 - 1) | 0x4330000000000000);
      dVar21 = dVar11 + -4503599627370496.0;
      FUN_06732974();
      iVar3 = (int)((long)dVar21 >> 0x34);
      if (0x403 < iVar3) {
        iVar3 = 0x404;
      }
      iVar3 = iVar3 + -0x3fd;
      thunk_FUN_03048534(in_stack_00000098,plVar7);
      fVar33 = (float)param_5;
      if (iVar3 < 1) {
        lVar15 = 0;
LAB_06744c28:
        puVar12 = (undefined4 *)(in_stack_00000068 + lVar15 * 4);
        uVar13 = 0;
        do {
          bVar25 = (byte)(uVar13 >> 8);
          bVar26 = (byte)(uVar13 >> 0x10);
          bVar27 = (byte)(uVar13 >> 0x18);
          bVar28 = (byte)(uVar13 >> 0x20);
          bVar29 = (byte)(uVar13 >> 0x28);
          bVar30 = (byte)(uVar13 >> 0x30);
          bVar31 = (byte)(uVar13 >> 0x38);
          fVar23 = (float)-(uint)(CONCAT17(bVar31 | (byte)(in_stack_00000080 >> 0x38),
                                           CONCAT16(bVar30 | (byte)(in_stack_00000080 >> 0x30),
                                                    CONCAT15(bVar29 | (byte)(in_stack_00000080 >>
                                                                            0x28),
                                                             CONCAT14(bVar28 | (byte)(
                                                  in_stack_00000080 >> 0x20),
                                                  CONCAT13(bVar27 | (byte)(in_stack_00000080 >> 0x18
                                                                          ),
                                                           CONCAT12(bVar26 | (byte)(
                                                  in_stack_00000080 >> 0x10),
                                                  CONCAT11(bVar25 | (byte)(in_stack_00000080 >> 8),
                                                           (byte)uVar13 | (byte)in_stack_00000080)))
                                                  )))) <= 6U - lVar15);
          if (((uint)fVar23 & 1) != 0) {
            *puVar12 = 0xffffffff;
          }
          if (CONCAT17(bVar31 | (byte)(in_stack_00000088 >> 0x38),
                       CONCAT16(bVar30 | (byte)(in_stack_00000088 >> 0x30),
                                CONCAT15(bVar29 | (byte)(in_stack_00000088 >> 0x28),
                                         CONCAT14(bVar28 | (byte)(in_stack_00000088 >> 0x20),
                                                  CONCAT13(bVar27 | (byte)(in_stack_00000088 >> 0x18
                                                                          ),
                                                           CONCAT12(bVar26 | (byte)(
                                                  in_stack_00000088 >> 0x10),
                                                  CONCAT11(bVar25 | (byte)(in_stack_00000088 >> 8),
                                                           (byte)uVar13 | (byte)in_stack_00000088)))
                                                 )))) <= 6U - lVar15) {
            puVar12[1] = 0xffffffff;
          }
          uVar13 = uVar13 + 2;
          puVar12 = puVar12 + 2;
          param_4 = in_stack_00000080;
        } while ((8U - lVar15 & 0xfffffffffffffffe) != uVar13);
      }
      else {
        lVar15 = 0;
        puVar12 = in_stack_00000078;
        do {
          fVar23 = SUB84(dVar11,0);
          fVar33 = (float)param_5;
          FUN_06732974();
          uVar13 = FUN_06732b20();
          if ((uVar13 & 1) == 0) break;
          *puVar12 = uStack00000000000001d0;
          puVar12[-7] = uStack00000000000001d4;
          fVar32 = (float)FUN_06745af4();
          fVar32 = fVar32 * (float)*unaff_x19;
          fVar20 = (float)param_4 * (float)*unaff_x19;
          param_4 = (ulong)(uint)fVar20;
          fVar33 = fVar33 * (float)unaff_x19[1];
          param_5 = (ulong)(uint)fVar33;
          uVar13 = 0x80000000;
          if (fVar20 != INFINITY) {
            uVar13 = (ulong)(uint)(int)fVar20;
          }
          uVar14 = 0x80000000;
          if (fVar32 != INFINITY) {
            uVar14 = (ulong)(uint)(int)fVar32;
          }
          fVar23 = fVar23 * (float)unaff_x19[1];
          dVar11 = (double)(ulong)(uint)fVar23;
          uVar24 = 0x8000000000000000;
          if (fVar33 != INFINITY) {
            uVar24 = (ulong)(uint)(int)fVar33 << 0x20;
          }
          lVar18 = -0x8000000000000000;
          if (fVar23 != INFINITY) {
            lVar18 = (ulong)(uint)(int)fVar23 << 0x20;
          }
          iVar10 = (int)unaff_x24;
          uVar24 = (uVar24 | uVar13) + lVar18;
          unaff_x24 = unaff_x24 & 0xffffffff;
          if (iVar10 <= (int)(uVar14 + uVar13)) {
            unaff_x24 = uVar14 + uVar13;
          }
          lVar15 = lVar15 + 1;
          iVar10 = (int)unaff_x22;
          unaff_x22 = unaff_x22 & 0xffffffff;
          if (iVar10 <= (int)(uVar24 >> 0x20)) {
            unaff_x22 = uVar24 >> 0x20;
          }
          puVar12 = puVar12 + 1;
        } while (lVar15 < iVar3);
        unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
        iVar10 = (int)lVar15;
        if (iVar10 < iVar3) goto code_r0x06744b24;
        if (iVar10 < 7) goto LAB_06744c28;
      }
      fVar32 = (float)param_4;
      bVar2 = true;
      unaff_x29 = in_stack_000000a0;
    }
    else {
      if (plVar7 == (long *)0x0) goto LAB_06745790;
      iVar3 = FUN_068dc838(plVar7,0);
      fVar33 = (float)param_5;
      fVar32 = (float)param_4;
      bVar2 = in_stack_000004d0 != iVar3;
    }
    fVar20 = (float)FUN_069235ac(&stack0x000001d8,0);
    unaff_x25 = (undefined8 *)
                Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo;
    fVar33 = in_stack_00000540 - fVar33;
    param_5 = (ulong)(uint)fVar33;
    fVar32 = (in_stack_0000053c - fVar32) * (in_stack_0000053c - fVar32);
    param_4 = (ulong)(uint)fVar32;
    param_3 = (ulong)(uint)(fVar33 * fVar33);
    if (bVar2 || unaff_s8 <=
                 fVar33 * fVar33 +
                 fVar32 + (in_stack_00000534 - fVar20) * (in_stack_00000534 - fVar20) +
                          (in_stack_00000538 - fVar23) * (in_stack_00000538 - fVar23)) {
      if (plVar7 == (long *)0x0) goto LAB_06745790;
      in_stack_000004d0 = FUN_068dc838(plVar7,0);
      lVar15 = *(long *)(unaff_x19 + 0x14);
      if (lVar15 == 0) goto LAB_06745790;
      lVar18 = *(long *)(lVar15 + 0x10);
      lVar16 = *(long *)PTR_DAT_06f6e778;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_06745790;
      uVar4 = *(uint *)(lVar15 + 0x18);
      if (uVar4 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar4 + 1;
        *(undefined4 *)(lVar18 + (long)(int)uVar4 * 4 + 0x20) = uVar6;
      }
      else {
        FUN_043b542c(lVar15,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    lVar15 = FUN_069234f0(&stack0x000001d8,0);
    if (lVar15 == 0) goto LAB_06745790;
    FUN_068bc484(lVar15,0);
    in_stack_00000534 = (float)FUN_069235ac(&stack0x000001d8,0);
    in_stack_00000538 = (float)param_3;
    in_stack_0000053c = (float)param_4;
    in_stack_00000540 = (float)param_5;
    lVar15 = *(long *)(unaff_x19 + 0x10);
    memcpy(&stack0x000002b8,&stack0x000004d0,0x78);
    if (lVar15 == 0) goto LAB_06745790;
    uVar9 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SaveSlots>_TypeInfo;
    memcpy(&stack0x00000330,&stack0x000002b8,0x78);
    FUN_05246f50(lVar15,uVar6,&stack0x00000330,uVar9);
    goto LAB_06744e00;
  }
  goto LAB_06744bdc;
code_r0x06744b24:
  if (*(long *)(unaff_x19 + 0x12) == 0) goto LAB_06745790;
  uVar4 = FUN_05204ec8(*(long *)(unaff_x19 + 0x12),uVar6,*(undefined8 *)PTR_DAT_06f729a0);
  if (*(long *)(unaff_x19 + 0x12) == 0) goto LAB_06745790;
  FUN_05204cc8(*(long *)(unaff_x19 + 0x12),uVar6,in_stack_000000b8,*(undefined8 *)PTR_DAT_06f729f0);
  puVar12 = in_stack_00000078;
  if (0 < iVar10) {
    do {
      in_stack_00000330 = 0;
      FUN_06732620(&stack0x00000330,*puVar12,puVar12[-7],0);
      FUN_06732d50();
      lVar15 = lVar15 + -1;
      puVar12 = puVar12 + 1;
    } while (lVar15 != 0);
  }
  in_stack_00000090._4_4_ = in_stack_00000090._4_4_ | uVar4 ^ 1;
  param_1 = -0x20;
  in_x10 = &stack0x000004d0;
  in_x11 = 7;
  in_w12 = 0xffffffff;
  unaff_x25 = (undefined8 *)
              Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo;
  unaff_x29 = in_stack_000000a0;
  uVar13 = in_stack_00000080;
  uVar14 = in_stack_00000088;
  param_5 = in_stack_00000050;
  lVar15 = in_stack_00000040;
  lVar18 = in_stack_00000048;
LAB_06744bdc:
  if (uVar13 < param_5) {
    *(undefined4 *)(in_x10 + param_1 + 0x40) = in_w12;
  }
  param_3 = CONCAT44(-(uint)(uVar14 < in_x11),-(uint)(uVar13 < in_x11));
  if ((-(uint)(uVar14 < in_x11) & 1) != 0) {
    *(undefined4 *)(in_x10 + param_1 + 0x44) = in_w12;
  }
  goto code_r0x06744c10;
LAB_067450c4:
  do {
    memmove(&stack0x00000148,(void *)(unaff_x29 + uVar13 * 0x88),0x88);
    lVar15 = FUN_069234f0(&stack0x00000148,0);
    if (lVar15 == 0) goto LAB_06745790;
    uVar6 = FUN_068fc544(lVar15,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06745790;
    uVar14 = FUN_05248ee0(*(long *)(unaff_x19 + 0x10),uVar6,&stack0x00000450,*unaff_x25);
    if ((uVar14 & 1) == 0) {
LAB_06745368:
      iVar3 = iVar3 + 1;
    }
    else {
      uVar9 = FUN_06923448(&stack0x00000148,0);
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
      }
      uVar14 = FUN_068fc830(uVar9,0);
      if ((uVar14 & 1) == 0) goto LAB_06745368;
      lVar15 = *(long *)(unaff_x19 + 0x18);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      fVar32 = (float)((ulong)in_stack_00000338 >> 0x20);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      fVar23 = (float)((ulong)in_stack_00000330 >> 0x20);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      fVar33 = (float)((ulong)in_stack_00000340 >> 0x20);
      uVar6 = FUN_069235b8(&stack0x00000148,0);
      if (lVar15 == 0) goto LAB_06745790;
      uVar4 = (int)uVar13 - iVar3;
      if (*(uint *)(lVar15 + 0x18) <= uVar4) {
LAB_06745794:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar18 = (long)(int)uVar4;
      lVar15 = lVar15 + lVar18 * 0x10;
      *(float *)(lVar15 + 0x20) = (float)in_stack_00000330 + fVar32;
      *(float *)(lVar15 + 0x24) = fVar23 + (float)in_stack_00000340;
      *(float *)(lVar15 + 0x28) = (float)in_stack_00000338 + fVar33;
      *(undefined4 *)(lVar15 + 0x2c) = uVar6;
      lVar15 = *(long *)(unaff_x19 + 0x1a);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      iVar5 = FUN_069235c0(&stack0x00000148,0);
      if (lVar15 == 0) goto LAB_06745790;
      if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_06745794;
      fVar23 = fVar23 - (float)in_stack_00000340;
      uVar24 = (ulong)(uint)fVar23;
      fVar33 = (float)in_stack_00000338 - fVar33;
      param_4 = (ulong)(uint)fVar33;
      param_5 = (ulong)(uint)(float)iVar5;
      lVar15 = lVar15 + lVar18 * 0x10;
      *(float *)(lVar15 + 0x20) = (float)in_stack_00000330 - fVar32;
      *(float *)(lVar15 + 0x24) = fVar23;
      *(float *)(lVar15 + 0x28) = fVar33;
      *(float *)(lVar15 + 0x2c) = (float)iVar5;
      lVar15 = *(long *)(unaff_x19 + 0x1c);
      FUN_06923590(&stack0x00000330,&stack0x00000148,0);
      FUN_06923590(&stack0x00000330,&stack0x00000148,0);
      FUN_06923590(&stack0x00000330,&stack0x00000148,0);
      uVar14 = FUN_069235c8(&stack0x00000148,0);
      iVar5 = -in_stack_0000046c;
      if ((uVar14 & 1) != 0) {
        iVar5 = in_stack_0000046c;
      }
      if (lVar15 == 0) goto LAB_06745790;
      if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_06745794;
      lVar15 = lVar15 + lVar18 * 0x10;
      *(undefined4 *)(lVar15 + 0x20) = in_stack_00000360;
      *(undefined4 *)(lVar15 + 0x24) = in_stack_00000364;
      *(undefined4 *)(lVar15 + 0x28) = in_stack_00000368;
      *(float *)(lVar15 + 0x2c) = (float)iVar5;
      unaff_x25 = (undefined8 *)
                  Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo;
      unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
      if (0 < in_stack_0000046c) {
        lVar15 = 0;
        uVar14 = (ulong)(uint)(iVar10 + iVar3 * -7);
        lVar18 = uVar14 << 0x20;
        do {
          lVar16 = *(long *)(unaff_x19 + 0x1e);
          FUN_06745af4();
          uVar6 = FUN_0662c39c(0);
          if (lVar16 == 0) goto LAB_06745790;
          if ((ulong)*(uint *)(lVar16 + 0x18) <= uVar14 + lVar15) goto LAB_06745794;
          lVar16 = lVar16 + (lVar18 >> 0x20) * 0x10;
          *(undefined4 *)(lVar16 + 0x20) = uVar6;
          *(int *)(lVar16 + 0x24) = (int)uVar24;
          *(int *)(lVar16 + 0x28) = (int)param_4;
          *(int *)(lVar16 + 0x2c) = (int)param_5;
          lVar15 = lVar15 + 1;
          lVar18 = lVar18 + 0x100000000;
          unaff_x25 = (undefined8 *)
                      Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
          ;
          unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
          unaff_x29 = in_stack_000000a0;
        } while (lVar15 < in_stack_0000046c);
      }
    }
    uVar13 = uVar13 + 1;
    iVar10 = iVar10 + 7;
  } while (uVar13 != in_stack_00000070._4_4_);
LAB_067453a4:
  if ((in_stack_00000090._4_4_ & 1) != 0) {
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
  uVar13 = in_stack_000002c8;
  FUN_06914078();
  if (*(long *)(unaff_x19 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_043b5e04(&stack0x000002b8,*(long *)(unaff_x19 + 0x14),*(undefined8 *)PTR_DAT_06f8a040);
  while (uVar14 = FUN_054f5df0(&stack0x00000290,*unaff_x28), (uVar14 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_05246e98(&stack0x00000330,*(long *)(unaff_x19 + 0x10),in_stack_000002c8 & 0xffffffff,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SaveSimpleData>_TypeInfo)
    ;
    memcpy(&stack0x000003d0,&stack0x00000330,0x78);
    if (0 < in_stack_000003ec) {
      lVar15 = 0;
      piVar19 = (int *)&stack0x0000040c;
      uVar14 = uVar13;
      do {
        iVar10 = *piVar19;
        FUN_06900600(0);
        uVar9 = FUN_06745af4();
        iVar5 = FUN_06732974();
        param_4 = FUN_0662c39c(uVar9,uVar14,param_4,param_5,0);
        UnityEngine_InputSystem_Utilities_OneOrMore<object,_ReadOnlyArray<object>>__get_Item
                  (in_stack_00000434,in_stack_00000438,in_stack_0000043c,in_stack_00000440,
                   &stack0x00000330,
                   *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SceneLoader>_TypeInfo);
        if (*(int *)(*(long *)Pathfinding_Pooling_ListPool<NativeQueue<byte>>_TypeInfo + 0xe0) == 0)
        {
          thunk_FUN_02fdcff0();
        }
        uVar13 = (ulong)(uint)(float)((1 << (ulong)((iVar5 - iVar10) + 1U & 0x1f)) + -2);
        param_5 = uVar14;
        FUN_0669cb80();
        lVar15 = lVar15 + 1;
        piVar19 = piVar19 + 1;
        uVar14 = uVar13;
      } while (lVar15 < in_stack_000003ec);
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
  FUN_06913368((float)(int)(in_stack_00000070._4_4_ - iVar3));
  FUN_069114d4(&stack0x00000330,*(undefined8 *)(unaff_x19 + 2),0);
  FUN_069168e8();
  FUN_06668eb4(&stack0x00000140,0);
  lVar15 = *(long *)(unaff_x19 + 0x14);
  if (lVar15 != 0) {
    *(undefined4 *)(lVar15 + 0x18) = 0;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (*(long *)(in_stack_00000038 + 0x28) == in_stack_00000768) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_06745790:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


