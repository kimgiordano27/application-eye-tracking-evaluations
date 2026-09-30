/*
FUNCTION_NAME: TransformBakingSystem.__codegen__OnUpdate_00000006$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 06744b70
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x067457c0) */
/* WARNING: Removing unreachable block (ram,0x0674562c) */
/* WARNING: Removing unreachable block (ram,0x06745744) */

void TransformBakingSystem___codegen__OnUpdate_00000006_PostfixBurstDelegate___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  double dVar11;
  long lVar12;
  undefined4 *puVar13;
  int *unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long lVar14;
  undefined8 *puVar15;
  uint unaff_w26;
  long *plVar16;
  long lVar17;
  int *piVar18;
  undefined8 *unaff_x28;
  long unaff_x29;
  float fVar19;
  double dVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  byte bVar28;
  float fVar24;
  ulong uVar25;
  byte bVar26;
  byte bVar27;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  float fVar33;
  float fVar34;
  ulong uVar35;
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
  
  puVar13 = in_stack_00000078;
LAB_06744b74:
  do {
    FUN_06732620(&stack0x00000330,*puVar13,puVar13[-7],0);
    FUN_06732d50();
    unaff_x29 = unaff_x29 + -1;
                    /* try { // try from 06744ba0 to 06844bab has its CatchHandler @ 06744bec */
    puVar13 = puVar13 + 1;
  } while (unaff_x29 != 0);
LAB_06744ba8:
                    /* try { // try from 06744bac to 06844bb7 has its CatchHandler @ 06744be8 */
  in_stack_00000090._4_4_ = in_stack_00000090._4_4_ | unaff_w26 ^ 1;
                    /* try { // try from 06744bc4 to 06844bc7 has its CatchHandler @ 06744bf0 */
                    /* try { // try from 06744bc8 to 06844c07 has its CatchHandler @ 06744afc */
  lVar12 = -0x20;
  uVar21 = in_stack_00000080;
  uVar23 = in_stack_00000088;
  do {
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06744bac with catch @ 06744be8
                        */
    if (uVar21 < in_stack_00000050) {
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06744ba0 with catch @ 06744bec
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06744bc4 with catch @ 06744bf0
                        */
      *(undefined4 *)(&stack0x00000510 + lVar12) = 0xffffffff;
    }
    uVar25 = CONCAT44(-(uint)(uVar23 < 7),-(uint)(uVar21 < 7));
    if ((-(uint)(uVar23 < 7) & 1) != 0) {
                    /* try { // try from 06744c08 to 06844c0b has its CatchHandler @ 06744c2c */
                    /* try { // try from 06744c0c to 06844c2f has its CatchHandler @ 06744afc */
      *(undefined4 *)(&stack0x00000514 + lVar12) = 0xffffffff;
    }
    lVar12 = lVar12 + 8;
    uVar21 = uVar21 + in_stack_00000040;
    uVar23 = uVar23 + in_stack_00000048;
    puVar15 = (undefined8 *)
              Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo;
    uVar35 = in_stack_00000050;
  } while (lVar12 != 0);
LAB_06744e00:
  do {
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x23 == in_stack_000000a8) {
      iVar10 = (int)*(undefined8 *)unaff_x19;
      iVar4 = (int)((ulong)*(undefined8 *)unaff_x19 >> 0x20);
      if (CONCAT11(iVar4 < (int)unaff_x22,iVar10 < (int)unaff_x24) != 0) {
        uVar21 = (unaff_x24 & 0xffffffff) + 0xffffffff;
        uVar2 = (int)unaff_x22 - 1;
        uVar2 = uVar2 | (int)uVar2 >> 1;
        uVar21 = uVar21 & 0xffffffff | (ulong)(uint)((int)uVar21 >> 1);
        uVar21 = uVar21 | (ulong)uVar2 << 0x20 | (ulong)(uint)((int)uVar21 >> 2);
        uVar23 = uVar21 | (ulong)(uint)((int)uVar2 >> 2) << 0x20;
        uVar21 = uVar23 | (uint)((int)uVar21 >> 4);
        uVar23 = uVar21 | (ulong)(uint)((long)uVar23 >> 0x24) << 0x20;
        uVar21 = uVar23 | (uint)((int)uVar21 >> 8);
        uVar23 = uVar21 | (ulong)(uint)((long)uVar23 >> 0x28) << 0x20;
        uVar21 = uVar23 | (uint)((int)uVar21 >> 0x10);
        iVar5 = (int)uVar21;
        plVar7 = (long *)(unaff_x19 + 2);
        if (iVar10 <= iVar5 + 1) {
          iVar10 = iVar5 + 1;
        }
        iVar5 = (int)((uVar21 | (ulong)(uint)((long)uVar23 >> 0x30) << 0x20) + 0x100000000 >> 0x20);
        if (iVar4 <= iVar5) {
          iVar4 = iVar5;
        }
        if (*plVar7 == 0) goto LAB_06745790;
        FUN_068e2f70(&stack0x00000330,*plVar7,0);
        plVar16 = (long *)(unaff_x19 + 4);
        plVar8 = (long *)*plVar16;
        if (plVar8 == (long *)0x0) goto LAB_06745790;
        (**(code **)(*plVar8 + 0x198))(plVar8,iVar10,*(undefined8 *)(*plVar8 + 0x1a0));
        plVar8 = (long *)*plVar16;
        if (plVar8 == (long *)0x0) goto LAB_06745790;
        (**(code **)(*plVar8 + 0x1b8))(plVar8,iVar4,*(undefined8 *)(*plVar8 + 0x1c0));
        if (*plVar16 == 0) goto LAB_06745790;
        FUN_068e25a0(*plVar16,0);
        plVar8 = (long *)*plVar7;
        if (plVar8 == (long *)0x0) goto LAB_06745790;
        iVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        if (iVar5 != 1) {
          iVar5 = FUN_069007e0(0);
          lVar12 = *plVar7;
          if (iVar5 == 0) {
            uVar9 = *(undefined8 *)(unaff_x19 + 4);
            uVar21 = (ulong)(uint)((float)unaff_x19[1] / (float)iVar4);
            uVar22 = FUN_06629278((float)*unaff_x19 / (float)iVar10,uVar21,0);
            if (DAT_0738e667 == '\0') {
              FUN_02fe925c(PTR_DAT_06f6dde0);
              DAT_0738e667 = '\x01';
            }
            param_3 = (ulong)**(uint **)(*(long *)PTR_DAT_06f6dde0 + 0xb8);
            uVar35 = (ulong)(*(uint **)(*(long *)PTR_DAT_06f6dde0 + 0xb8))[1];
            if (*(int *)(*(long *)PTR_DAT_06f6dd90 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            FUN_068c8788(uVar22,uVar21,param_3,uVar35,lVar12,uVar9,0);
          }
          else {
            iVar5 = *unaff_x19;
            iVar1 = unaff_x19[1];
            uVar9 = *(undefined8 *)(unaff_x19 + 4);
            if (*(int *)(*(long *)PTR_DAT_06f6dd90 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            FUN_068c760c(lVar12,0,0,0,0,iVar5,iVar1,uVar9);
          }
        }
        if (*plVar7 == 0) goto LAB_06745790;
        FUN_068e25dc(*plVar7,0);
        uVar9 = *(undefined8 *)(unaff_x19 + 2);
        *(undefined8 *)(unaff_x19 + 2) = *(undefined8 *)(unaff_x19 + 4);
        thunk_FUN_03048534(plVar7);
        *(undefined8 *)(unaff_x19 + 4) = uVar9;
        thunk_FUN_03048534(plVar16,uVar9);
        *unaff_x19 = iVar10;
        unaff_x19[1] = iVar4;
        puVar15 = (undefined8 *)
                  Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo;
      }
      if (0 < (int)in_stack_00000070._4_4_) {
        iVar10 = 0;
        uVar21 = 0;
        iVar4 = 0;
        goto LAB_067450c4;
      }
      iVar4 = 0;
      goto LAB_067453a4;
    }
    memmove(&stack0x000001d8,(void *)(in_stack_000000a0 + unaff_x23 * 0x88),0x88);
    plVar7 = (long *)FUN_06923448(&stack0x000001d8,0);
    lVar12 = FUN_069234f0(&stack0x000001d8,0);
    if (lVar12 == 0) goto LAB_06745790;
    uVar6 = FUN_068fc544(lVar12,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06745790;
    uVar21 = FUN_05248ee0(*(long *)(unaff_x19 + 0x10),uVar6,&stack0x000004d0,*puVar15);
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
    }
    uVar23 = FUN_068fc830(plVar7,0);
    fVar33 = (float)uVar25;
  } while ((uVar23 & 1) == 0);
  if ((uVar21 & 1) == 0) {
    if (plVar7 == (long *)0x0) goto LAB_06745790;
    iVar4 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    dVar11 = (double)((ulong)(iVar4 * 4 - 1) | 0x4330000000000000);
    dVar20 = dVar11 + -4503599627370496.0;
    FUN_06732974();
    iVar4 = (int)((long)dVar20 >> 0x34);
    if (0x403 < iVar4) {
      iVar4 = 0x404;
    }
    iVar4 = iVar4 + -0x3fd;
    thunk_FUN_03048534(in_stack_00000098,plVar7);
    fVar34 = (float)uVar35;
    if (iVar4 < 1) {
      unaff_x29 = 0;
LAB_06744c28:
      puVar13 = (undefined4 *)(in_stack_00000068 + unaff_x29 * 4);
      uVar21 = 0;
      do {
        bVar26 = (byte)(uVar21 >> 8);
        bVar27 = (byte)(uVar21 >> 0x10);
        bVar28 = (byte)(uVar21 >> 0x18);
        bVar29 = (byte)(uVar21 >> 0x20);
        bVar30 = (byte)(uVar21 >> 0x28);
        bVar31 = (byte)(uVar21 >> 0x30);
        bVar32 = (byte)(uVar21 >> 0x38);
        fVar33 = (float)-(uint)(CONCAT17(bVar32 | (byte)(in_stack_00000080 >> 0x38),
                                         CONCAT16(bVar31 | (byte)(in_stack_00000080 >> 0x30),
                                                  CONCAT15(bVar30 | (byte)(in_stack_00000080 >> 0x28
                                                                          ),
                                                           CONCAT14(bVar29 | (byte)(
                                                  in_stack_00000080 >> 0x20),
                                                  CONCAT13(bVar28 | (byte)(in_stack_00000080 >> 0x18
                                                                          ),
                                                           CONCAT12(bVar27 | (byte)(
                                                  in_stack_00000080 >> 0x10),
                                                  CONCAT11(bVar26 | (byte)(in_stack_00000080 >> 8),
                                                           (byte)uVar21 | (byte)in_stack_00000080)))
                                                  )))) <= 6U - unaff_x29);
        if (((uint)fVar33 & 1) != 0) {
          *puVar13 = 0xffffffff;
        }
        if (CONCAT17(bVar32 | (byte)(in_stack_00000088 >> 0x38),
                     CONCAT16(bVar31 | (byte)(in_stack_00000088 >> 0x30),
                              CONCAT15(bVar30 | (byte)(in_stack_00000088 >> 0x28),
                                       CONCAT14(bVar29 | (byte)(in_stack_00000088 >> 0x20),
                                                CONCAT13(bVar28 | (byte)(in_stack_00000088 >> 0x18),
                                                         CONCAT12(bVar27 | (byte)(in_stack_00000088
                                                                                 >> 0x10),
                                                                  CONCAT11(bVar26 | (byte)(
                                                  in_stack_00000088 >> 8),
                                                  (byte)uVar21 | (byte)in_stack_00000088))))))) <=
            6U - unaff_x29) {
          puVar13[1] = 0xffffffff;
        }
        uVar21 = uVar21 + 2;
        puVar13 = puVar13 + 2;
        param_3 = in_stack_00000080;
      } while ((8U - unaff_x29 & 0xfffffffffffffffe) != uVar21);
    }
    else {
      unaff_x29 = 0;
      puVar13 = in_stack_00000078;
      do {
        fVar33 = SUB84(dVar11,0);
        fVar34 = (float)uVar35;
        FUN_06732974();
        uVar21 = FUN_06732b20();
        if ((uVar21 & 1) == 0) break;
        *puVar13 = uStack00000000000001d0;
        puVar13[-7] = uStack00000000000001d4;
        fVar24 = (float)FUN_06745af4();
        fVar24 = fVar24 * (float)*unaff_x19;
        fVar19 = (float)param_3 * (float)*unaff_x19;
        param_3 = (ulong)(uint)fVar19;
        fVar34 = fVar34 * (float)unaff_x19[1];
        uVar35 = (ulong)(uint)fVar34;
        uVar21 = 0x80000000;
        if (fVar19 != INFINITY) {
          uVar21 = (ulong)(uint)(int)fVar19;
        }
        uVar23 = 0x80000000;
        if (fVar24 != INFINITY) {
          uVar23 = (ulong)(uint)(int)fVar24;
        }
        fVar33 = fVar33 * (float)unaff_x19[1];
        dVar11 = (double)(ulong)(uint)fVar33;
        uVar25 = 0x8000000000000000;
        if (fVar34 != INFINITY) {
          uVar25 = (ulong)(uint)(int)fVar34 << 0x20;
        }
        lVar12 = -0x8000000000000000;
        if (fVar33 != INFINITY) {
          lVar12 = (ulong)(uint)(int)fVar33 << 0x20;
        }
        iVar10 = (int)unaff_x24;
        uVar25 = (uVar25 | uVar21) + lVar12;
        unaff_x24 = unaff_x24 & 0xffffffff;
        if (iVar10 <= (int)(uVar23 + uVar21)) {
          unaff_x24 = uVar23 + uVar21;
        }
        unaff_x29 = unaff_x29 + 1;
        iVar10 = (int)unaff_x22;
        unaff_x22 = unaff_x22 & 0xffffffff;
        if (iVar10 <= (int)(uVar25 >> 0x20)) {
          unaff_x22 = uVar25 >> 0x20;
        }
        puVar13 = puVar13 + 1;
      } while (unaff_x29 < iVar4);
      unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
      iVar10 = (int)unaff_x29;
      if (iVar10 < iVar4) goto code_r0x06744b24;
      if (iVar10 < 7) goto LAB_06744c28;
    }
    fVar24 = (float)param_3;
    bVar3 = true;
  }
  else {
    if (plVar7 == (long *)0x0) goto LAB_06745790;
    iVar4 = FUN_068dc838(plVar7,0);
    fVar34 = (float)uVar35;
    fVar24 = (float)param_3;
    bVar3 = in_stack_000004d0 != iVar4;
  }
  fVar19 = (float)FUN_069235ac(&stack0x000001d8,0);
  puVar15 = (undefined8 *)
            Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo;
  fVar34 = in_stack_00000540 - fVar34;
  uVar35 = (ulong)(uint)fVar34;
  fVar24 = (in_stack_0000053c - fVar24) * (in_stack_0000053c - fVar24);
  param_3 = (ulong)(uint)fVar24;
  uVar25 = (ulong)(uint)(fVar34 * fVar34);
  if (bVar3 || unaff_s8 <=
               fVar34 * fVar34 +
               fVar24 + (in_stack_00000534 - fVar19) * (in_stack_00000534 - fVar19) +
                        (in_stack_00000538 - fVar33) * (in_stack_00000538 - fVar33)) {
    if (plVar7 == (long *)0x0) goto LAB_06745790;
    in_stack_000004d0 = FUN_068dc838(plVar7,0);
    lVar12 = *(long *)(unaff_x19 + 0x14);
    if (lVar12 == 0) goto LAB_06745790;
    lVar17 = *(long *)(lVar12 + 0x10);
    lVar14 = *(long *)PTR_DAT_06f6e778;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar17 == 0) goto LAB_06745790;
    uVar2 = *(uint *)(lVar12 + 0x18);
    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar17 + (long)(int)uVar2 * 4 + 0x20) = uVar6;
    }
    else {
      FUN_043b542c(lVar12,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar12 = FUN_069234f0(&stack0x000001d8,0);
  if (lVar12 == 0) goto LAB_06745790;
  FUN_068bc484(lVar12,0);
  in_stack_00000534 = (float)FUN_069235ac(&stack0x000001d8,0);
  in_stack_00000538 = (float)uVar25;
  in_stack_0000053c = (float)param_3;
  in_stack_00000540 = (float)uVar35;
  lVar12 = *(long *)(unaff_x19 + 0x10);
  memcpy(&stack0x000002b8,&stack0x000004d0,0x78);
  if (lVar12 == 0) goto LAB_06745790;
  uVar9 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SaveSlots>_TypeInfo;
  memcpy(&stack0x00000330,&stack0x000002b8,0x78);
  FUN_05246f50(lVar12,uVar6,&stack0x00000330,uVar9);
  goto LAB_06744e00;
code_r0x06744b24:
  if (*(long *)(unaff_x19 + 0x12) == 0) goto LAB_06745790;
  unaff_w26 = FUN_05204ec8(*(long *)(unaff_x19 + 0x12),uVar6,*(undefined8 *)PTR_DAT_06f729a0);
  if (*(long *)(unaff_x19 + 0x12) == 0) goto LAB_06745790;
  FUN_05204cc8(*(long *)(unaff_x19 + 0x12),uVar6,in_stack_000000b8,*(undefined8 *)PTR_DAT_06f729f0);
  puVar13 = in_stack_00000078;
  if (0 < iVar10) goto LAB_06744b74;
  goto LAB_06744ba8;
LAB_067450c4:
  do {
    memmove(&stack0x00000148,(void *)(in_stack_000000a0 + uVar21 * 0x88),0x88);
    lVar12 = FUN_069234f0(&stack0x00000148,0);
    if (lVar12 == 0) goto LAB_06745790;
    uVar6 = FUN_068fc544(lVar12,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06745790;
    uVar23 = FUN_05248ee0(*(long *)(unaff_x19 + 0x10),uVar6,&stack0x00000450,*puVar15);
    if ((uVar23 & 1) == 0) {
LAB_06745368:
      iVar4 = iVar4 + 1;
    }
    else {
      uVar9 = FUN_06923448(&stack0x00000148,0);
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
      }
      uVar23 = FUN_068fc830(uVar9,0);
      if ((uVar23 & 1) == 0) goto LAB_06745368;
      lVar12 = *(long *)(unaff_x19 + 0x18);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      fVar34 = (float)((ulong)in_stack_00000338 >> 0x20);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      fVar33 = (float)((ulong)in_stack_00000340 >> 0x20);
      uVar6 = FUN_069235b8(&stack0x00000148,0);
      if (lVar12 == 0) goto LAB_06745790;
      uVar2 = (int)uVar21 - iVar4;
      if (*(uint *)(lVar12 + 0x18) <= uVar2) {
LAB_06745794:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar17 = (long)(int)uVar2;
      lVar12 = lVar12 + lVar17 * 0x10;
      *(float *)(lVar12 + 0x20) = fVar34 + 0.0;
      *(float *)(lVar12 + 0x24) = (float)in_stack_00000340 + 0.0;
      *(float *)(lVar12 + 0x28) = (float)in_stack_00000338 + fVar33;
      *(undefined4 *)(lVar12 + 0x2c) = uVar6;
      lVar12 = *(long *)(unaff_x19 + 0x1a);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      FUN_0692357c(&stack0x00000330,&stack0x00000148,0);
      iVar5 = FUN_069235c0(&stack0x00000148,0);
      if (lVar12 == 0) goto LAB_06745790;
      if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_06745794;
      fVar24 = 0.0 - (float)in_stack_00000340;
      uVar25 = (ulong)(uint)fVar24;
      fVar33 = (float)in_stack_00000338 - fVar33;
      param_3 = (ulong)(uint)fVar33;
      uVar35 = (ulong)(uint)(float)iVar5;
      lVar12 = lVar12 + lVar17 * 0x10;
      *(float *)(lVar12 + 0x20) = 0.0 - fVar34;
      *(float *)(lVar12 + 0x24) = fVar24;
      *(float *)(lVar12 + 0x28) = fVar33;
      *(float *)(lVar12 + 0x2c) = (float)iVar5;
      lVar12 = *(long *)(unaff_x19 + 0x1c);
      FUN_06923590(&stack0x00000330,&stack0x00000148,0);
      FUN_06923590(&stack0x00000330,&stack0x00000148,0);
      FUN_06923590(&stack0x00000330,&stack0x00000148,0);
      uVar23 = FUN_069235c8(&stack0x00000148,0);
      iVar5 = -in_stack_0000046c;
      if ((uVar23 & 1) != 0) {
        iVar5 = in_stack_0000046c;
      }
      if (lVar12 == 0) goto LAB_06745790;
      if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_06745794;
      lVar12 = lVar12 + lVar17 * 0x10;
      *(undefined4 *)(lVar12 + 0x20) = in_stack_00000360;
      *(undefined4 *)(lVar12 + 0x24) = in_stack_00000364;
      *(undefined4 *)(lVar12 + 0x28) = in_stack_00000368;
      *(float *)(lVar12 + 0x2c) = (float)iVar5;
      puVar15 = (undefined8 *)
                Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo;
      unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
      if (0 < in_stack_0000046c) {
        lVar12 = 0;
        uVar23 = (ulong)(uint)(iVar10 + iVar4 * -7);
        lVar17 = uVar23 << 0x20;
        do {
          lVar14 = *(long *)(unaff_x19 + 0x1e);
          FUN_06745af4();
          uVar6 = FUN_0662c39c(0);
          if (lVar14 == 0) goto LAB_06745790;
          if ((ulong)*(uint *)(lVar14 + 0x18) <= uVar23 + lVar12) goto LAB_06745794;
          lVar14 = lVar14 + (lVar17 >> 0x20) * 0x10;
          *(undefined4 *)(lVar14 + 0x20) = uVar6;
          *(int *)(lVar14 + 0x24) = (int)uVar25;
          *(int *)(lVar14 + 0x28) = (int)param_3;
          *(int *)(lVar14 + 0x2c) = (int)uVar35;
          lVar12 = lVar12 + 1;
          lVar17 = lVar17 + 0x100000000;
          puVar15 = (undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<SaveRuntimeGeneratedObjects>_TypeInfo
          ;
          unaff_x28 = (undefined8 *)PTR_DAT_06f8a030;
        } while (lVar12 < in_stack_0000046c);
      }
    }
    uVar21 = uVar21 + 1;
    iVar10 = iVar10 + 7;
  } while (uVar21 != in_stack_00000070._4_4_);
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
  uVar21 = in_stack_000002c8;
  FUN_06914078();
  if (*(long *)(unaff_x19 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_043b5e04(&stack0x000002b8,*(long *)(unaff_x19 + 0x14),*(undefined8 *)PTR_DAT_06f8a040);
  while (uVar23 = FUN_054f5df0(&stack0x00000290,*unaff_x28), (uVar23 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_05246e98(&stack0x00000330,*(long *)(unaff_x19 + 0x10),in_stack_000002c8 & 0xffffffff,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SaveSimpleData>_TypeInfo)
    ;
    memcpy(&stack0x000003d0,&stack0x00000330,0x78);
    if (0 < in_stack_000003ec) {
      lVar12 = 0;
      piVar18 = (int *)&stack0x0000040c;
      uVar23 = uVar21;
      do {
        iVar10 = *piVar18;
        FUN_06900600(0);
        uVar9 = FUN_06745af4();
        iVar5 = FUN_06732974();
        param_3 = FUN_0662c39c(uVar9,uVar23,param_3,uVar35,0);
        UnityEngine_InputSystem_Utilities_OneOrMore<object,_ReadOnlyArray<object>>__get_Item
                  (in_stack_00000434,in_stack_00000438,in_stack_0000043c,in_stack_00000440,
                   &stack0x00000330,
                   *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<SceneLoader>_TypeInfo);
        if (*(int *)(*(long *)Pathfinding_Pooling_ListPool<NativeQueue<byte>>_TypeInfo + 0xe0) == 0)
        {
          thunk_FUN_02fdcff0();
        }
        uVar21 = (ulong)(uint)(float)((1 << (ulong)((iVar5 - iVar10) + 1U & 0x1f)) + -2);
        uVar35 = uVar23;
        FUN_0669cb80();
        lVar12 = lVar12 + 1;
        piVar18 = piVar18 + 1;
        uVar23 = uVar21;
      } while (lVar12 < in_stack_000003ec);
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
  FUN_06913368((float)(int)(in_stack_00000070._4_4_ - iVar4));
  FUN_069114d4(&stack0x00000330,*(undefined8 *)(unaff_x19 + 2),0);
  FUN_069168e8();
  FUN_06668eb4(&stack0x00000140,0);
  lVar12 = *(long *)(unaff_x19 + 0x14);
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
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


